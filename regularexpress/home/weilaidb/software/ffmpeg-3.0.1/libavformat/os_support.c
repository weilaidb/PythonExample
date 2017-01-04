#define _DEFAULT_SOURCE
#define _SVID_SOURCE
#if CONFIG_NETWORK
#if !HAVE_POLL_H
#if HAVE_SYS_TIME_H
#if HAVE_WINSOCK2_H
#elif HAVE_SYS_SELECT_H
#if !HAVE_INET_ATON
int ff_inet_aton(const char *str, struct in_addr *add)
int ff_inet_aton(const char *str, struct in_addr *add)
#if !HAVE_GETADDRINFO
int ff_getaddrinfo(const char *node, const char *service,
const struct addrinfo *hints, struct addrinfo **res)
void ff_freeaddrinfo(struct addrinfo *res)
int ff_getnameinfo(const struct sockaddr *sa, int salen,
char *host, int hostlen,
char *serv, int servlen, int flags)
#if !HAVE_GETADDRINFO || HAVE_WINSOCK2_H
const char *ff_gai_strerror(int ecode)
int ff_socket_nonblock(int socket, int enable)
#if !HAVE_POLL_H
int ff_poll(struct pollfd *fds, nfds_t numfds, int timeout)
