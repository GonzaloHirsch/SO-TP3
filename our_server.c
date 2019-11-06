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
#define RAND_I(min, max) (((double)(rand()/((double)RAND_MAX + 1))) * (max - min)) + (min)
#define CLEAR() printf("\033[H\033[J")
#define MAX_WIDTH 3
#define MAX_HEIGHT 4

static char * rsp[MAX_LEVEL] = {
  "",
  "entendido",
  "",
  "morse",
  "pistolero",
  "",
  "",
  "indeterminado",
  "",
  ""
};

static char * pistas[MAX_LEVEL] = {
  "",
  "Bienvenidos al TP3 y felicitaciones, ya resolvieron el primer acertijo.\n Esta es la copia del servidor por si no se dieron cuenta. Hicimos algunos desafios dinamicos, para que no se memorizen la respuesta ni la traten de romper.",
  "",
  "https://vocaroo.com/i/s1lD9m8lGzei",
  "EBADF... abrilo y verás o redirijilo ;)",
  "",
  "",
  "mixed fds",
  "",
  ""
};

static const char desafio_header[] = "------------- DESAFIO -------------";

static int level = 0;

int path_finder(char * poss, char * rsp);

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

// Hace algunas cosas raras en el medio, para que un disass de GDB no lo haga muy obvio
void ebadf(){
  char decoy[30] = {0};
  int random_n = RAND;

  random_n = random_n * 10 + 654;

  if (random < 0){
    decoy[14] = '5';
    ebadf();
    return;
  }

  time(NULL);

  random_n = RAND;

  char str[] = "La respuesta a este acertijo es pistolero\n";

  if (decoy[23] == '\t'){
    random_n = RAND;
    ebadf();
    return;
  }

  return;
}

void m_fds(){
  int rnd, i, j;

  for (i = 0; i < 13; i++){
    rnd = RAND * 6;

    for (j = 0; j < rnd; j++){
      printf("323\n");
      write(stdout, (char)RAND_I(32, 126), 1);
    }

    switch(i){
      case 0:
          write(stdin, "i", 1);
      break;
      case 1:
          write(stdin, "n", 1);
      break;
      case 2:
          write(stdin, "d", 1);
      break;
      case 3:
          write(stdin, "e", 1);
      break;
      case 4:
          write(stdin, "t", 1);
      break;
      case 5:
          write(stdin, "e", 1);
      break;
      case 6:
          write(stdin, "r", 1);
      break;
      case 7:
          write(stdin, "m", 1);
      break;
      case 8:
          write(stdin, "i", 1);
      break;
      case 9:
          write(stdin, "n", 1);
      break;
      case 10:
          write(stdin, "a", 1);
      break;
      case 11:
          write(stdin, "d", 1);
      break;
      case 12:
          write(stdin, "o", 1);
      break;
    }
  }
}

void generate_clues(){
  pistas[2] = malloc(1024 * sizeof(char));
  rsp[2] = malloc(12 * sizeof(char));

  int lvl_length = path_finder(pistas[2], rsp[2]);
  while(lvl_length < 0){
    memset(pistas[2], 0, sizeof(pistas[2]));
    memset(rsp[2], 0, sizeof(rsp[2]));
    lvl_length = path_finder(pistas[2], rsp[2]);
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

    switch(level){
      case 4:
        ebadf();
      break;
      case 7:
        m_fds();
      break;
    }

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
