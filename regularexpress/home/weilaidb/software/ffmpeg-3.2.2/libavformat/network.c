int ff_tls_init(void)
void ff_tls_deinit(void)
int ff_network_inited_globally;
int ff_network_init(void)
int ff_network_wait_fd(int fd, int write)
int ff_network_wait_fd_timeout(int fd, int write, int64_t timeout, AVIOInterruptCB *int_cb)
void ff_network_close(void)
#if HAVE_WINSOCK2_H
int ff_neterrno(void)
int ff_is_multicast_address(struct sockaddr *addr)
static int ff_poll_interrupt(struct pollfd *p, nfds_t nfds, int timeout,
AVIOInterruptCB *cb)
int ff_socket(int af, int type, int proto)
int ff_listen(int fd, const struct sockaddr *addr,
socklen_t addrlen)
int ff_accept(int fd, int timeout, URLContext *h)
int ff_listen_bind(int fd, const struct sockaddr *addr,
socklen_t addrlen, int timeout, URLContext *h)
int ff_listen_connect(int fd, const struct sockaddr *addr,
socklen_t addrlen, int timeout, URLContext *h,
int will_try_next)
static int match_host_pattern(const char *pattern, const char *hostname)
int ff_http_match_no_proxy(const char *no_proxy, const char *hostname)
