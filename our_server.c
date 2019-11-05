#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#define MAX_MESSAGE_LENGTH 1024
#define PORT 23423
#define SA struct sockaddr
#define MAX_LEVEL 10

static int level = 0;

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
  int read_status;

  while(level < MAX_LEVEL && level > 0){
    // Pone en cero al buffer que recibe mensajes
    bzero(buff, MAX_MESSAGE_LENGTH);

    read_status = read(socket_fd, buff, sizeof(buff));
    if (read_status >= 0){
      printf("Message from client: %s", buff);

      // TODO: USAR LA RESPUESTA
      switch (level)
      {
          case 1:
              break;
          case 2:
              break;
      }
    }
    // read the message from client and copy it in buffer
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
