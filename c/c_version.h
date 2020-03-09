
#ifndef C_VERSION_H
#define C_VERSION_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>

typedef struct s_goldilox {
    unsigned char *content;
    size_t      size;
}   t_goldilox;

t_goldilox   *SuperRecv(int sockfd);
void    SuperSend(int sockfd, unsigned char *buffer, size_t size);
bool    assert_buffer_is_file(unsigned char *buffer, size_t size);
void    file_recv(unsigned char *buffer, size_t size);
void    file_sender(int sockfd, char *filename);

int     GoldiloxAPIClientConnection(char *host, int port);

#endif
