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
#define MAX_LEVEL 12
#define RAND (double)(rand()/((double)RAND_MAX + 1))
#define RAND_I(min, max) (((double)(rand()/((double)RAND_MAX + 1))) * (max - min)) + (min)
#define CLEAR() printf("\033[H\033[J")
#define MAX_WIDTH 3
#define MAX_HEIGHT 4

static char * rsp[MAX_LEVEL] = {
  "",
  "entendido",
  "",// Movimientos -> Se genera solo
  "morse",
  "pistolero",
  "",
  "",
  "indeterminado",
  "la gioconda",
  "",// Alphabeto Fonetico Nato -> Se genera solo
  "",
  "gdb es la hostia"
};

static char * pistas[MAX_LEVEL] = {
  "",
  "Bienvenidos al TP3 y felicitaciones, ya resolvieron el primer acertijo.\n Esta es la copia del servidor por si no se dieron cuenta. Hicimos algunos desafios dinamicos, para que no se memorizen la respuesta ni la traten de romper.",
  "",// Movimientos -> Se genera solo
  "https://vocaroo.com/i/s1lD9m8lGzei",
  "EBADF... abrilo y verás o redirijilo ;)",
  "",
  "",
  "mixed fds",
  "Portrait",
  "",// Alphabeto Fonetico Nato -> Se genera solo
  "",
  "b gdbme y encontrá el valor mágico"
};

static const char desafio_header[] = "------------- DESAFIO -------------";

static int level = 0;

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

void portrait(){
  puts("                         _______");
  puts("                         _,,ad8888888888bba,_");
  puts("                      ,ad88888I888888888888888ba,");
  puts("                    ,88888888I88888888888888888888a,");
  puts("                  ,d888888888I8888888888888888888888b,");
  puts("                 d88888PP\"\"\"\" \"\"YY88888888888888888888b,");
  puts("               ,d88\"\'__,,--------,,,,.;ZZZY8888888888888,");
  puts("              ,8IIl\'\"                ;;l\"ZZZIII8888888888,");
  puts("             ,I88l;\'                  ;lZZZZZ888III8888888,");
  puts("           ,II88Zl;.                  ;llZZZZZ888888I888888,");
  puts("          ,II888Zl;.                .;;;;;lllZZZ888888I8888b");
  puts("         ,II8888Z;;                 `;;;;;\'\'llZZ8888888I8888,");
  puts("         II88888Z;\'                        .;lZZZ8888888I888b");
  puts("         II88888Z; _,aaa,      .,aaaaa,__.l;llZZZ88888888I888");
  puts("         II88888IZZZZZZZZZ,  .ZZZZZZZZZZZZZZ;llZZ88888888I888,");
  puts("         II88888IZZ<\'(@@>Z|  |ZZZ<\'(@@>ZZZZ;;llZZ888888888I88I");
  puts("        ,II88888;   `\"\"\" ;|  |ZZ; `\"\"\"     ;;llZ8888888888I888");
  puts("        II888888l            `;;          .;llZZ8888888888I888,");
  puts("       ,II888888Z;           ;;;        .;;llZZZ8888888888I888I");
  puts("       III888888Zl;    ..,   `;;       ,;;lllZZZ88888888888I888");
  puts("       II88888888Z;;...;(_    _)      ,;;;llZZZZ88888888888I888,");
  puts("       II88888888Zl;;;;;\' `--\'Z;.   .,;;;;llZZZZ88888888888I888b");
  puts("       ]I888888888Z;;;;\'   \";llllll;..;;;lllZZZZ88888888888I8888,");
  puts("       II888888888Zl.;;\"Y88bd888P\";;,..;lllZZZZZ88888888888I8888I");
  puts("       II8888888888Zl;.; `\"PPP\";;;,..;lllZZZZZZZ88888888888I88888");
  puts("       II888888888888Zl;;. `;;;l;;;;lllZZZZZZZZW88888888888I88888");
  puts("       `II8888888888888Zl;.    ,;;lllZZZZZZZZWMZ88888888888I88888");
  puts("        II8888888888888888ZbaalllZZZZZZZZZWWMZZZ8888888888I888888,");
  puts("        `II88888888888888888b\"WWZZZZZWWWMMZZZZZZI888888888I888888b");
  puts("         `II88888888888888888;ZZMMMMMMZZZZZZZZllI888888888I8888888");
  puts("          `II8888888888888888 `;lZZZZZZZZZZZlllll888888888I8888888,");
  puts("           II8888888888888888, `;lllZZZZllllll;;.Y88888888I8888888b,");
  puts("          ,II8888888888888888b   .;;lllllll;;;.;..88888888I88888888b,");
  puts("          II888888888888888PZI;.  .`;;;.;;;..; ...88888888I8888888888,");
  puts("          II888888888888PZ;;\';;.   ;. .;.  .;. .. Y8888888I88888888888b,");
  puts("         ,II888888888PZ;;\'                        `8888888I8888888888888b,");
  puts("         II888888888\'                              888888I8888888888888888b");
  puts("        ,II888888888                              ,888888I88888888888888888");
  puts("       ,d88888888888                              d888888I8888888888ZZZZZZZ");
  puts("    ,ad888888888888I                              8888888I8888ZZZZZZZZZZZZZ");
  puts("  ,d888888888888888\'                              888888IZZZZZZZZZZZZZZZZZZ");
  puts(",d888888888888P\'8P\'                               Y888ZZZZZZZZZZZZZZZZZZZZZ");
 puts(",8888888888888,  \"                                 ,ZZZZZZZZZZZZZZZZZZZZZZZZ");
puts("d888888888888888,                                ,ZZZZZZZZZZZZZZZZZZZZZZZZZZZ");
puts("888888888888888888a,      _                    ,ZZZZZZZZZZZZZZZZZZZZ888888888");
puts("888888888888888888888ba,_d\'                  ,ZZZZZZZZZZZZZZZZZ88888888888888");
puts("8888888888888888888888888888bbbaaa,,,______,ZZZZZZZZZZZZZZZ888888888888888888");
puts("88888888888888888888888888888888888888888ZZZZZZZZZZZZZZZ888888888888888888888");
puts("8888888888888888888888888888888888888888ZZZZZZZZZZZZZZ88888888888888888888888");
puts("888888888888888888888888888888888888888ZZZZZZZZZZZZZZ888888888888888888888888");
puts("8888888888888888888888888888888888888ZZZZZZZZZZZZZZ88888888888888888888888888");
puts("88888888888888888888888888888888888ZZZZZZZZZZZZZZ8888888888888888888888888888");
puts("8888888888888888888888888888888888ZZZZZZZZZZZZZZ88888888888888888888888888888");
puts("88888888888888888888888888888888ZZZZZZZZZZZZZZ8888888888888888888888888888888");
puts("8888888888888888888888888888888ZZZZZZZZZZZZZZ88888888888888888888888888888888");
}

void nato_pa(char * str, char * rsp){
  char * alpha[26] = {
    "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel", "India", "Juliett", "Kilo",
    "Lima", "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor",
    "Whiskey", "X-Ray", "Yankee", "Zulu"
  };

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

void in(){
  char str[] = "La respuesta a este acertijo es gdb es la hostia\n";
}

void gdbme(){
  int j = 140;
  char decoy[30] = {0};
  int random_n = RAND;

  if (random < 0){
    decoy[14] = '5';
    ebadf();
    return;
  }

  random_n = random_n * 10 + 654;

  time(NULL);

  random_n = RAND;

  if (j == 0){
    in();
  } else {
    printf("Try Again\n");
  }

  if (decoy[23] == '\t'){
    random_n = RAND;
    ebadf();
    return;
  }

  return;
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
  pistas[2] = malloc(1024 * sizeof(char));
  rsp[2] = malloc(12 * sizeof(char));

  int lvl_length = path_finder(pistas[2], rsp[2]);
  while(lvl_length < 0){
    memset(pistas[2], 0, sizeof(pistas[2]));
    memset(rsp[2], 0, sizeof(rsp[2]));
    lvl_length = path_finder(pistas[2], rsp[2]);
  }

  pistas[9] = malloc(1024 * sizeof(char));
  rsp[9] = malloc(16 * sizeof(char));
  memset(pistas[9], 0, sizeof(pistas[9]));
  memset(rsp[9], 0, sizeof(rsp[9]));

  nato_pa(pistas[9], rsp[9]);
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

  gen_c();

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
      case 8:
        portrait();
      break;
      case 10:
        gdbme();
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
