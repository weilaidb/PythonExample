int
__os_getaddrinfo(env, nodename, port, servname, hints, res)
ENV *env;
const char *nodename, *servname;
u_int port;
const ADDRINFO *hints;
ADDRINFO **res;
void
__os_freeaddrinfo(env, ai)
ENV *env;
ADDRINFO *ai;
