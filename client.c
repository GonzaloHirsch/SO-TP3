// Client side C/C++ program to demonstrate Socket programming 
#include <stdio.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <unistd.h> 
#include <string.h> 
#define PORT 23423 
   
int main(int argc, char const *argv[]) 
{ 
    //printf("\n# \033[D \033[A \033[A \033[D \033[B \033[C \033[B \033[D *\n");
    int sock = 0, valread; 
    struct sockaddr_in serv_addr; 
    char *hello = "quine"; 
    char buffer[1024] = {0}; 
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

    //send(sock , hello , strlen(hello) , 0 );

    char buff[1024] = {0};
    char c;
    int index = 0;

    while(strcmp(buff, "quit") != 0){
        printf( "Enter a command :");
        while((c = getchar()) != '\n'){
            buff[index++] = c;
        }
        buff[index++] = '\n';
        buff[index] = 0;

        //gets(buff);
        send(sock , buff , strlen(buff) , 0 ); 
        //valread = read( sock , buffer, 1024); 
        //printf("%s\n",buffer ); 
        index = 0;
    }    

    return 0; 
} 