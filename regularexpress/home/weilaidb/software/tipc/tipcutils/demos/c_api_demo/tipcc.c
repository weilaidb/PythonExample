static tipc_domain_t own_node = 0;
static inline bool my_scope(tipc_domain_t domain)
tipc_domain_t tipc_own_node(void)
tipc_domain_t tipc_own_cluster(void)
tipc_domain_t tipc_own_zone(void)
int tipc_socket(int sk_type)
int tipc_sock_non_block(int sd)
int tipc_sock_rejectable(int sd)
int tipc_close(int sd)
int tipc_sockid(int sd, struct tipc_addr *id)
int tipc_bind(int sd, uint32_t type, uint32_t lower, uint32_t upper,
tipc_domain_t scope)
int tipc_unbind(int sd, uint32_t type, uint32_t lower, uint32_t upper)
int tipc_connect(int sd, const struct tipc_addr *dst)
int tipc_listen(int sd, int backlog)
int tipc_accept(int sd, struct tipc_addr *src)
int tipc_send(int sd, const char *msg, size_t msg_len)
int tipc_sendmsg(int sd, const struct msghdr *msg)
int tipc_sendto(int sd, const char *msg, size_t msg_len,
const struct tipc_addr *dst)
int tipc_mcast(int sd, const char *msg, size_t msg_len,
const struct tipc_addr *dst)
int tipc_recv(int sd, char* buf, size_t buf_len, bool waitall)
int tipc_recvfrom(int sd, char *buf, size_t len, struct tipc_addr *src,
struct tipc_addr *dst, int *err)
int tipc_topsrv_conn(tipc_domain_t node)
int tipc_srv_subscr(int sd, uint32_t type, uint32_t lower, uint32_t upper,
bool all, int expire)
int tipc_srv_evt(int sd, struct tipc_addr *srv, bool *available, bool *expired)
bool tipc_srv_wait(const struct tipc_addr *srv, int wait)
int tipc_neigh_subscr(tipc_domain_t node)
int tipc_neigh_evt(int sd, tipc_domain_t *neigh_node, bool *available)
int tipc_link_subscr(tipc_domain_t node)
int tipc_link_evt(int sd, tipc_domain_t *neigh_node, bool *available,
int *local_bearerid, int *remote_bearerid)
char* tipc_linkname(char *buf, size_t len, tipc_domain_t peer, int bearerid)
char* tipc_dtoa(tipc_domain_t domain, char *buf, size_t len)
char* tipc_ntoa(const struct tipc_addr *addr, char *buf, size_t len)
char* tipc_rtoa(uint32_t type, uint32_t lower, uint32_t upper,
tipc_domain_t domain, char *buf, size_t len)
