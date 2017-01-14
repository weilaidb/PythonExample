#define __TIPCC_H_
typedef uint32_t tipc_domain_t;
struct tipc_addr ;
tipc_domain_t tipc_own_node(void);
tipc_domain_t tipc_own_cluster(void);
tipc_domain_t tipc_own_zone(void);
static unsigned int tipc_zone(tipc_domain_t domain);
static unsigned int tipc_cluster(tipc_domain_t domain);
static unsigned int tipc_node(tipc_domain_t domain);
tipc_domain_t tipc_domain(unsigned int zone, unsigned int cluster,
unsigned int node);
char* tipc_ntoa(const struct tipc_addr *addr, char *buf, size_t len);
char* tipc_dtoa(tipc_domain_t domain, char *buf, size_t len);
char* tipc_rtoa(uint32_t type, uint32_t lower, uint32_t upper,
tipc_domain_t domain, char *buf, size_t len);
int tipc_socket(int sk_type);
int tipc_sock_non_block(int sd);
int tipc_sock_rejectable(int sd);
int tipc_close(int sd);
int tipc_sockid(int sd, struct tipc_addr *id);
int tipc_bind(int sd, uint32_t type, uint32_t lower, uint32_t upper,
tipc_domain_t scope);
int tipc_unbind(int sd, uint32_t type, uint32_t lower, uint32_t upper);
int tipc_connect(int sd, const struct tipc_addr *dst);
int tipc_listen(int sd, int backlog);
int tipc_accept(int sd, struct tipc_addr *src);
int tipc_join(int sd, struct tipc_addr *member);
int tipc_leave(int sd);
int tipc_recvfrom(int sd, char *buf, size_t len, struct tipc_addr *src,
struct tipc_addr *dst, int *err);
int tipc_recv(int sd, char* buf, size_t len, bool waitall);
int tipc_sendmsg(int sd, const struct msghdr *msg);
int tipc_sendto(int sd, const char *msg, size_t len,
const struct tipc_addr *dst);
int tipc_send(int sd, const char *msg, size_t len);
int tipc_mcast(int sd, const char *msg, size_t len,
const struct tipc_addr *dst);
int tipc_topsrv_conn(tipc_domain_t topsrv_node);
int tipc_srv_subscr(int sd, uint32_t type, uint32_t lower, uint32_t upper,
bool all, int expire);
int tipc_srv_evt(int sd, struct tipc_addr *srv, struct tipc_addr *id,
bool *up, bool *expired);
bool tipc_srv_wait(const struct tipc_addr *srv, int expire);
int tipc_neigh_subscr(tipc_domain_t topsrv_node);
int tipc_neigh_evt(int sd, tipc_domain_t *neigh_node, bool *up);
int tipc_link_subscr(tipc_domain_t topsrv_node);
int tipc_link_evt(int sd, tipc_domain_t *neigh_node, bool *up,
int *local_bearerid, int *remote_bearerid);
char* tipc_linkname(char *buf, size_t len, tipc_domain_t peer, int bearerid);
