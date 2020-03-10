

#include "c_version.h"

int     InitServer(int port, int listen_queue_length,
        struct sockaddr_in *server_address) 
{
    int     fd;
    struct sockaddr_in socket_address;

    *server_address = socket_address;
    fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0)
    {
        perror("socket");
        return (-1);
    }
    memset(&socket_address, '\0', sizeof(socket_address));
    socket_address.sin_family = AF_INET;
    socket_address.sin_addr.s_addr = INADDR_ANY;
    socket_address.sin_port = htons(port);

    if (bind(sockfd, (struct sockaddr *)&socket_address, sizeof(socket_address)))
    {
        perror("bind");
        return (-1);
    }
    if (listen(sockfd, listen_queue_length))
    {
        perror("listen");
        return (-2);
    }
    return (fd);
}
