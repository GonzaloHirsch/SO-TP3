/*
  El código para armar el server(la parte de la conexion con el socket) fue sacado de:
    https://www.geeksforgeeks.org/socket-programming-cc/

  Se entendio y se adapto a nuestras necesidades
*/

//Necesario para que no de warnings de declaracion implicita de funciones POSIX
#define _XOPEN_SOURCE 700

#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <time.h>
#include <stdlib.h>
#include <fcntl.h>
#include <strings.h>
#include <unistd.h>
#include <string.h>

#define MAX_MESSAGE_LENGTH 1024
#define PORT 23423
#define SA struct sockaddr
#define MAX_LEVEL 12
#define RAND (double)(rand()/((double)RAND_MAX + 1))
#define RAND_I(min, max) (((double)(rand()/((double)RAND_MAX + 1))) * (max - min)) + (min)
#define CLEAR() printf("\033[H\033[J")
#define MAX_WIDTH 3
#define MAX_HEIGHT 4
#define BUFF_SIZE 4096
#define RSP_MAX_SIZE 20
#define PISTA_MAX_SIZE 2048

static char * hello[10] = {
"\x1B[35m  _______  _______            _________ _______  ______  \n",
"\x1B[35m (  ____ \\(  ___  )           \\__   __/(  ____ )/ ___  \\ \n",
"\x1B[35m | (    \\/| (   ) |              ) (   | (    )|\\/   \\  \\\n",
"\x1B[35m | (_____ | |   | |   _____      | |   | (____)|   ___) /\n",
"\x1B[35m (_____  )| |   | |  (_____)     | |   |  _____)  (___ ( \n",
"\x1B[35m       ) || |   | |              | |   | (            ) \\\n",
"\x1B[35m /\\____) || (___) |              | |   | )      /\\___/  /\n",
"\x1B[35m \\_______)(_______)              )_(   |/       \\______/ \n",
"\x1B[31mGonzalo Hirsch\x1B[0m - \x1B[32mIgnacio Ribas\x1B[0m -\x1B[33m Augusto Henestrosa\x1B[0m\n",
"\x1B[0m\n\n"
};

char msg[] = "easter_egg";

// Alphabeto fonetico de la NATO
static char * alpha[26] = {
  "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel", "India", "Juliett", "Kilo",
  "Lima", "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor",
  "Whiskey", "X-Ray", "Yankee", "Zulu"
};

static char * rsp[MAX_LEVEL] = {
  "",
  "entendido",
  "",// Movimientos -> Se genera solo
  "morse",
  "pistolero",
  "easter_egg",
  ".whatAmI",
  "indeterminado",
  "la gioconda",
  "",// Alphabeto Fonetico Nato -> Se genera solo
  "abalastro",
  "gdb es la hostia"
};

static char * pistas[MAX_LEVEL] = {
  "",
  "Bienvenidos al TP3 y felicitaciones, ya resolvieron el primer acertijo.\nEsta es la copia del servidor por si no se dieron cuenta.\nHicimos algunos desafios dinamicos, para que no se memoricen la respuesta ni la traten de romper.\nEscribir \"entendido\" para continuar",
  "",// Movimientos -> Se genera solo
  "https://vocaroo.com/i/s1lD9m8lGzei",
  "EBADF... abrilo y verás o redirijilo ;)",
  "respuesta=strings[156]",
  ".data .bss .comment ? .shstrtab .symtab .strtab",
  "mixed fds",
  "Portrait",
  "",// Alphabeto Fonetico Nato -> Se genera solo
  "quine",
  "b gdbme y encontrá el valor mágico"
};

static const char desafio_header[] = "------------- DESAFIO -------------";

// Variable que indica en que nivel del juego se encuentra
static int level;

int path_finder(char * poss, char * rsp);
void nato_pa(char * str, char * rsp);
void portrait();
void gdbme();
void in();
void ebadf();
void m_fds();
void gen_c();
int init_server();
void start_game(int socket_fd);
void say_hi();
void quine();
void free_all_memory();

// Funcion para imprimir el portait
void portrait(){
  puts("                                  _______                                                                 _,,ad8888888888bba,_                                                        ,ad88888I888888888888888ba,                                                  ,88888888I88888888888888888888a,                                             ,d888888888I8888888888888888888888b,                                          d88888PP\"\"\"\" \"\"YY88888888888888888888b,                                      ,d88\"\'__,,--------,,,,.;ZZZY8888888888888,                                    ,8IIl\'\"                ;;l\"ZZZIII8888888888,                                  ,I88l;\'                  ;lZZZZZ888III8888888,                               ,II88Zl;.                  ;llZZZZZ888888I888888,                             ,II888Zl;.                .;;;;;lllZZZ888888I8888b                            ,II8888Z;;                 `;;;;;\'\'llZZ8888888I8888,                           II88888Z;\'                        .;lZZZ8888888I888b                           II88888Z; _,aaa,      .,aaaaa,__.l;llZZZ88888888I888                           II88888IZZZZZZZZZ,  .ZZZZZZZZZZZZZZ;llZZ88888888I888,                          II88888IZZ<\'(@@>Z|  |ZZZ<\'(@@>ZZZZ;;llZZ888888888I88I                         ,II88888;   `\"\"\" ;|  |ZZ; `\"\"\"     ;;llZ8888888888I888                         II888888l            `;;          .;llZZ8888888888I888,                       ,II888888Z;           ;;;        .;;llZZZ8888888888I888I                       III888888Zl;    ..,   `;;       ,;;lllZZZ88888888888I888                       II88888888Z;;...;(_    _)      ,;;;llZZZZ88888888888I888,                      II88888888Zl;;;;;\' `--\'Z;.   .,;;;;llZZZZ88888888888I888b                      ]I888888888Z;;;;\'   \";llllll;..;;;lllZZZZ88888888888I8888,                     II888888888Zl.;;\"Y88bd888P\";;,..;lllZZZZZ88888888888I8888I                     II8888888888Zl;.; `\"PPP\";;;,..;lllZZZZZZZ88888888888I88888                     II888888888888Zl;;. `;;;l;;;;lllZZZZZZZZW88888888888I88888                     `II8888888888888Zl;.    ,;;lllZZZZZZZZWMZ88888888888I88888                      II8888888888888888ZbaalllZZZZZZZZZWWMZZZ8888888888I888888,                     `II88888888888888888b\"WWZZZZZWWWMMZZZZZZI888888888I888888b                      `II88888888888888888;ZZMMMMMMZZZZZZZZllI888888888I8888888                       `II8888888888888888 `;lZZZZZZZZZZZlllll888888888I8888888,                       II8888888888888888, `;lllZZZZllllll;;.Y88888888I8888888b,                     ,II8888888888888888b   .;;lllllll;;;.;..88888888I88888888b,                    II888888888888888PZI;.  .`;;;.;;;..; ...88888888I8888888888,                   II888888888888PZ;;\';;.   ;. .;.  .;. .. Y8888888I88888888888b,                ,II888888888PZ;;\'                        `8888888I8888888888888b,              II888888888\'                              888888I8888888888888888b            ,II888888888                              ,888888I88888888888888888           ,d88888888888                              d888888I8888888888ZZZZZZZ        ,ad888888888888I                              8888888I8888ZZZZZZZZZZZZZ      ,d888888888888888\'                              888888IZZZZZZZZZZZZZZZZZZ    ,d888888888888P\'8P\'                               Y888ZZZZZZZZZZZZZZZZZZZZZ   ,8888888888888,  \"                                 ,ZZZZZZZZZZZZZZZZZZZZZZZZ  d888888888888888,                                ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZ  888888888888888888a,      _                    ,ZZZZZZZZZZZZZZZZZZZZ888888888  888888888888888888888ba,_d\'                  ,ZZZZZZZZZZZZZZZZZ88888888888888  8888888888888888888888888888bbbaaa,,,______,ZZZZZZZZZZZZZZZ888888888888888888  88888888888888888888888888888888888888888ZZZZZZZZZZZZZZZ888888888888888888888  8888888888888888888888888888888888888888ZZZZZZZZZZZZZZ88888888888888888888888  888888888888888888888888888888888888888ZZZZZZZZZZZZZZ888888888888888888888888  8888888888888888888888888888888888888ZZZZZZZZZZZZZZ88888888888888888888888888  88888888888888888888888888888888888ZZZZZZZZZZZZZZ8888888888888888888888888888  8888888888888888888888888888888888ZZZZZZZZZZZZZZ88888888888888888888888888888  88888888888888888888888888888888ZZZZZZZZZZZZZZ8888888888888888888888888888888  8888888888888888888888888888888ZZZZZZZZZZZZZZ88888888888888888888888888888888");
}

// Funcion para generar la respuesta con el alfabeto
void nato_pa(char * str, char * rsp){
  int num = RAND_I(8, 15);
  int rnd;
  int i;

  for (i = 0; i < num; i++){
    rnd = RAND_I(0, 26);
    str = strcat(str, alpha[rnd]);
    str = strcat(str, "  ");
    rsp[i] = 'a' + rnd;
  }
}

void say_hi(){
  int i;
  for (i = 0; i < 9; i++){
    printf("%s", hello[i]);
  }
}

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
  rsp[length++] = 0;

  if (length > 12){
    return -1;
  } else {
    return length;
  }
}

void in(){
  char str[] = "La respuesta a este acertijo es gdb es la hostia\n";
}

void gdbme(){
  int j = 140;

  if (j == 0){
    in();
  } else {
    printf("Try Again\n");
  }

  return;
}

void ebadf(){
  char rsp[] = "La respuesta a este acertijo es pistolero\n";

  int fd = open("ebadf.txt", O_CREAT);
  write(fd, rsp, strlen(rsp));
  close(fd);

  return;
}

void m_fds(){
  int rnd, i, j;
  char buff[2] = {0};
  dup2(1, 2);
  for (i = 0; i < 13; i++){
    rnd = RAND_I(0, 10);
    for (j = 0; j < rnd; j++){
      buff[0] = (char)RAND_I(97, 122);
      write(2, buff, 1);
      if (j % 5 == 0){
        write(2, " ", 1);
      }
    }

    switch(i){
      case 0:
          write(1, "i", 1);
      break;
      case 1:
          write(1, "n", 1);
      break;
      case 2:
          write(1, "d", 1);
      break;
      case 3:
          write(1, "e", 1);
      break;
      case 4:
          write(1, "t", 1);
      break;
      case 5:
          write(1, "e", 1);
      break;
      case 6:
          write(1, "r", 1);
      break;
      case 7:
          write(1, "m", 1);
      break;
      case 8:
          write(1, "i", 1);
      break;
      case 9:
          write(1, "n", 1);
      break;
      case 10:
          write(1, "a", 1);
      break;
      case 11:
          write(1, "d", 1);
      break;
      case 12:
          write(1, "o", 1);
      break;
    }
  }
}

void gen_c(){
  int size_pista = PISTA_MAX_SIZE * sizeof(char);
  int size_rsp = RSP_MAX_SIZE * sizeof(char);

  pistas[2] = malloc(size_pista);
  rsp[2] = malloc(size_rsp);
  if (pistas[2] == NULL || rsp[2] == NULL){
    printf("Error: Out of Memory");
    exit(1);
  }
  memset(pistas[2], 0, size_pista);
  memset(rsp[2], 0, size_rsp);

  int lvl_length = path_finder(pistas[2], rsp[2]);
  while(lvl_length < 0){
    memset(pistas[2], 0, size_pista);
    memset(rsp[2], 0, size_rsp);
    lvl_length = path_finder(pistas[2], rsp[2]);
  }

  pistas[9] = malloc(size_pista);
  rsp[9] = malloc(size_rsp);
  if (pistas[9] == NULL || rsp[9] == NULL){
    printf("Error: Out of Memory");
    exit(1);
  }
  memset(pistas[9], 0, size_pista);
  memset(rsp[9], 0, size_rsp);

  nato_pa(pistas[9], rsp[9]);
}

void quine(){
  char * command = "gcc quine.c -o quine | grep -c \"error\"";
  char buff[BUFF_SIZE] = {0};

  FILE *fp;

  if ((fp = (uint64_t)popen(command, "r")) == NULL) {
      printf("Error opening pipe!\n");
      return;
  }
  while (fgets(buff, BUFF_SIZE, fp) != NULL);
  if(pclose(fp) < 0)  {
      printf("Command not found or exited with error status\n");
      return;
  }

  if (strcmp(buff, "0\n") == 0){
    printf("Muy bien, ya metieron un archivo! Veamos si hace lo que deberia!\n");
    command = "./quine | diff - quine.c";
    memset(buff, 0, sizeof(buff));
    if ((fp = (uint64_t)popen(command, "r")) == NULL) {
        printf("Error opening pipe!\n");
        return;
    }
    while (fgets(buff, BUFF_SIZE, fp) != NULL);
    if (strcmp(buff, "") == 0){
        printf("Genial! La respuesta a este ejercicio es abalastro");
    } else {
        printf("Diff Returned: %s", buff);
    }
    if(pclose(fp) < 0){
        printf("Command not found or exited with error status\n");
        return;
    }
  } else {
    printf("El archivo no está o no es correcto.");
  }
}

int init_server(){
  int sockfd, connfd;
  unsigned int len;
  struct sockaddr_in servaddr, cli;
  level = 0;

  // Crea el socket y verifica que la creacion haya sido correcta
  sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if (sockfd == -1) {
      printf("socket creation failed...\n");
      perror("Error");
      exit(0);
  }

  // Borra los contenidos de lo que hay en servaddr
  memset(&servaddr, 0, sizeof(servaddr));

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

  // Verifica que el server pueda escuchar
  if ((listen(sockfd, 5)) != 0) {
      printf("Listen failed...\n");
      perror("Error");
      exit(0);
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
      level++;
  }

  return connfd;
}

void start_game(int socket_fd){
  char buff[MAX_MESSAGE_LENGTH];

  gen_c();

  while(level < MAX_LEVEL && level > 0){
    sleep(1);
    CLEAR();
    // Pone en cero al buffer que recibe mensajes
    memset(buff, 0, MAX_MESSAGE_LENGTH);

    say_hi();
    printf("%s\n", desafio_header);
    printf("%s\n", pistas[level]);

    switch(level){
      case 4:
        ebadf();
      break;
      case 7:
        m_fds();
      break;
      case 8:
        portrait();
      break;
      case 10:
        quine();
      break;
      case 11:
        gdbme();
      break;
    }
    fflush( stdout );

    read(socket_fd, buff, sizeof(buff));
    if (strcmp(rsp[level], buff) == 0){
      printf("\n\x1B[32mRespuesta correcta\x1B[0m");
      fflush( stdout );
      level++;
    } else {
      printf("\n\x1B[31mRespuesta incorrecta: %s\x1B[0m", buff);
      fflush( stdout );
    }
  }
}

// Liberamos toda la memoria que pedimos
void free_all_memory(){
  free(pistas[9]);
  free(pistas[2]);
  free(rsp[9]);
  free(rsp[2]);
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

    free_all_memory();

    return 0;
}
