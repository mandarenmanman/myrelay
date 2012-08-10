#ifndef _SOCK_H_
#define _SOCK_H_

#include <stdint.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

inline int make_listen_nonblock(const char *host, const char *serv);
inline int connect_nonblock(const char *host, const char *serv, int *flag);
inline int setnonblock(int fd);

inline int accept_client(int sockfd, struct sockaddr_in *cliaddr, socklen_t *len);

#endif
