#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <time.h>
#include <stdlib.h>
#define MAX_MESSAGE_LENGTH 1024
#define PORT 23423
#define SA struct sockaddr
#define MAX_LEVEL 10
#define RAND (double)(rand()/((double)RAND_MAX + 1))
#define CLEAR() printf("\033[H\033[J")
#define MAX_WIDTH 3
#define MAX_HEIGHT 4

static char * rsp[MAX_LEVEL] = {
  "",
  "entendido",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""
};

static char * pistas[MAX_LEVEL] = {
  "",
  "Bienvenidos al TP3 y felicitaciones, ya resolvieron el primer acertijo.\nEn este TP deberán finalizar el juego que ya comenzaron resolviendo los desafíos de cada nivel.\nAdemás tendrán que investigar otras preguntas para responder durante la defensa.\nEl desafío final consiste en crear un servidor que se comporte igual que yo, es decir, que provea los mismos desafíos y que sea necesario hacer lo mismo para resolverlos.\nNo basta con esperar la respuesta correcta.\nAdemás deberán implementar el cliente para comunicarse con este servidor.",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""
};

static const char desafio_header[] = "------------- DESAFIO -------------";

static int level = 0;

int path_finder(char * poss, char * rsp){
  int index = 0;

  char loc[MAX_HEIGHT][MAX_WIDTH] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
    {'*','0','#'}
  };
  int length = 0;

  double rnd;

  char u[] = "\\033[A  ";
  char d[] = "\\033[B  ";
  char l[] = "\\033[D  ";
  char r[] = "\\033[C  ";

  // Posiciones iniciales y finales
  int i_x = 2;
  int i_y = 3;
  int f_x = 0;
  int f_y = 3;
  int actual_x = i_x;
  int actual_y = i_y;

  // Poniendo la nueva seed para el random
  srand(time(NULL));

  poss[0] = '#';
  poss[1] = ' ';
  poss[2] = ' ';
  rsp[length++] = '#';

  while (actual_x != f_x || actual_y != f_y){
      if (index + 8 > 1024){
        break;
      }
      rnd = RAND;

      // UP
      if (rnd <= 0.15){
          if (actual_y - 1 >= 0){
              actual_y--;
              poss = strcat(poss, u);
              index += 8;
              rsp[length++] = loc[actual_y][actual_x];
          }
      }
      // DOWN
      else if (rnd <= 0.5){
          if (actual_y + 1 < MAX_HEIGHT){
              actual_y++;
              poss = strcat(poss, d);
              index += 8;
              rsp[length++] = loc[actual_y][actual_x];
          }
      }
      // LEFT
      else if (rnd <= 0.85){
          if (actual_x - 1 >= 0){
              actual_x--;
              poss = strcat(poss, l);
              index += 8;
              rsp[length++] = loc[actual_y][actual_x];
          }
      }
      // RIGHT
      else {
          if (actual_x + 1 < MAX_WIDTH){
              actual_x++;
              poss = strcat(poss, r);
              index += 8;
              rsp[length++] = loc[actual_y][actual_x];
          }
      }
  }

  index++;
  poss[index++] = ' ';
  poss[index++] = ' ';
  poss[index] = '*';

  // Solo agregamos el 0 porque el * se agrega en el ultimo caso
  rsp[length] = 0;

  if (length > 12){
    return -1;
  } else {
    return length;
  }
}

void generate_clues(){
  pistas[2] = malloc(1024 * sizeof(char));
  rsp[2] = malloc(12 * sizeof(char));

  int lvl_length = path_finder(pistas[2], rsp[2]);
  printf("Tiene longitud %d", lvl_length);
  while(lvl_length < 0){
    memset(pistas[2], 0, sizeof(pistas[2]));
    memset(rsp[2], 0, sizeof(rsp[2]));
    lvl_length = path_finder(pistas[2], rsp[2]);
    printf("Tiene longitud %d", lvl_length);
  }
}

int init_server(){
  int sockfd, connfd, len, res;
  struct sockaddr_in servaddr, cli;

  // Crea el socket y verifica que la creacion haya sido correcta
  sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if (sockfd == -1) {
      printf("socket creation failed...\n");
      perror("Error");
      exit(0);
  }
  else {
      printf("Socket successfully created..\n");
  }

  // Borra los contenidos de lo que hay en servaddr
  bzero(&servaddr, sizeof(servaddr));

  // Asinga el IP y el PUERTO
  servaddr.sin_family = AF_INET;
  servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
  servaddr.sin_port = htons(PORT);

  // Bindea el soket al IP y verifica que sea correcto eso
  if ((bind(sockfd, (SA*)&servaddr, sizeof(servaddr))) != 0) {
      printf("socket bind failed...\n");
      perror("Error");
      exit(0);
  }
  else
      printf("Socket successfully binded..\n");

  // Verifica que el server pueda escuchar
  if ((listen(sockfd, 5)) != 0) {
      printf("Listen failed...\n");
      perror("Error");
      exit(0);
  }
  else {
      printf("Server listening..\n");
  }

  len = sizeof(cli);

  // Espera a que el client se conecte y verifica
  connfd = accept(sockfd, (SA*)&cli, &len);
  if (connfd < 0) {
      printf("server acccept failed...\n");
      perror("Error");
      exit(0);
  }
  else {
      printf("server acccept the client...\n");
      level++;
  }

  return connfd;
}

void start_game(int socket_fd){
  char buff[MAX_MESSAGE_LENGTH];

  generate_clues();

  // Level 1
  char * poss = NULL;

  while(level < MAX_LEVEL && level > 0){
    sleep(1);
    CLEAR();
    // Pone en cero al buffer que recibe mensajes
    bzero(buff, MAX_MESSAGE_LENGTH);

    printf("%s\n", desafio_header);
    printf("%s\n", pistas[level]);
    fflush( stdout );

    read(socket_fd, buff, sizeof(buff));

    if (strcmp(rsp[level], buff) == 0){
      printf("\nRespuesta correcta");
      fflush( stdout );
      level++;
    } else {
      printf("\nRespuesta incorrecta: %s", buff);
      fflush( stdout );
    }
  }
}

int main()
{

    level = 0;

    // Inicializa el socket y la conexion
    int socket_fd = init_server();

    // Empieza el juego
    start_game(socket_fd);

    // Cierra el socket al terminar
    close(socket_fd);
}
