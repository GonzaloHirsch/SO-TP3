// Client side C/C++ program to demonstrate Socket programming
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#define PORT 23423
#define MAX_MESSAGE_LENGTH 1024

int main(int argc, char const *argv[])
{
    int sock = 0, valread;
    struct sockaddr_in serv_addr;

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\n Socket creation error \n");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 and IPv6 addresses from text to binary form
    if(inet_pton(AF_INET, "0.0.0.0", &serv_addr.sin_addr)<=0)
    {
        printf("\nInvalid address/ Address not supported \n");
        return -1;
    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        printf("\nConnection Failed \n");
        return -1;
    }

    char buff[MAX_MESSAGE_LENGTH] = {0};
    char c;
    int index;

    while(strcmp(buff, "quit") != 0){
        bzero(buff, MAX_MESSAGE_LENGTH);
        index = 0;
        printf( "\nEnter a message: ");

        while ((buff[index++] = getchar()) != '\n' && index < MAX_MESSAGE_LENGTH);

        //printf( "Message length %d", index);
        if (index >= MAX_MESSAGE_LENGTH){
          printf( "\nThe message is too long!");
        } else {
          buff[index] = 0;

          write(sock, buff, sizeof(buff));
        }

        //gets(buff);
        //send(sock , buff , strlen(buff) , 0 );
        //valread = read( sock , buffer, 1024);
        //printf("%s\n",buffer );

    }

    return 0;
}
