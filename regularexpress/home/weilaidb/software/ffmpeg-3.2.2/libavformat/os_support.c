#define _DEFAULT_SOURCE
#define _SVID_SOURCE
#if CONFIG_NETWORK
#if !HAVE_POLL_H
#if HAVE_SYS_TIME_H
#if HAVE_WINSOCK2_H
#elif HAVE_SYS_SELECT_H
#if !HAVE_INET_ATON
ff_inet_aton
ff_inet_aton
#if !HAVE_GETADDRINFO
ff_getaddrinfo
ff_freeaddrinfo
ff_getnameinfo
#if !HAVE_GETADDRINFO || HAVE_WINSOCK2_H
*ff_gai_strerror
ff_socket_nonblock
#if !HAVE_POLL_H
ff_poll
