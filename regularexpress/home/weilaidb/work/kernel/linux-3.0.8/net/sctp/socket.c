#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int sctp_writeable(struct sock *sk);
static void sctp_wfree(struct sk_buff *skb);
static int sctp_wait_for_sndbuf(struct sctp_association *, long *timeo_p,
size_t msg_len);
static int sctp_wait_for_packet(struct sock * sk, int *err, long *timeo_p);
static int sctp_wait_for_connect(struct sctp_association *, long *timeo_p);
static int sctp_wait_for_accept(struct sock *sk, long timeo);
static void sctp_wait_for_close(struct sock *sk, long timeo);
static struct sctp_af *sctp_sockaddr_af(struct sctp_sock *opt,
union sctp_addr *addr, int len);
static int sctp_bindx_add(struct sock *, struct sockaddr *, int);
static int sctp_bindx_rem(struct sock *, struct sockaddr *, int);
static int sctp_send_asconf_add_ip(struct sock *, struct sockaddr *, int);
static int sctp_send_asconf_del_ip(struct sock *, struct sockaddr *, int);
static int sctp_send_asconf(struct sctp_association *asoc,
struct sctp_chunk *chunk);
static int sctp_do_bind(struct sock *, union sctp_addr *, int);
static int sctp_autobind(struct sock *sk);
static void sctp_sock_migrate(struct sock *, struct sock *,
struct sctp_association *, sctp_socket_type_t);
static char *sctp_hmac_alg = SCTP_COOKIE_HMAC_ALG;
extern struct kmem_cache *sctp_bucket_cachep;
extern long sysctl_sctp_mem[3];
extern int sysctl_sctp_rmem[3];
extern int sysctl_sctp_wmem[3];
static int sctp_memory_pressure;
static atomic_long_t sctp_memory_allocated;
struct percpu_counter sctp_sockets_allocated;
static void sctp_enter_memory_pressure(struct sock *sk)
static inline int sctp_wspace(struct sctp_association *asoc)
static inline void sctp_set_owner_w(struct sctp_chunk *chunk)
static inline int sctp_verify_addr(struct sock *sk, union sctp_addr *addr,
int len)
struct sctp_association *sctp_id2assoc(struct sock *sk, sctp_assoc_t id)
static struct sctp_transport *sctp_addr_id2transport(struct sock *sk,
struct sockaddr_storage *addr,
sctp_assoc_t id)
SCTP_STATIC int sctp_bind(struct sock *sk, struct sockaddr *addr, int addr_len)
static long sctp_get_port_local(struct sock *, union sctp_addr *);
static struct sctp_af *sctp_sockaddr_af(struct sctp_sock *opt,
union sctp_addr *addr, int len)
SCTP_STATIC int sctp_do_bind(struct sock *sk, union sctp_addr *addr, int len)
static int sctp_send_asconf(struct sctp_association *asoc,
struct sctp_chunk *chunk)
static int sctp_bindx_add(struct sock *sk, struct sockaddr *addrs, int addrcnt)
static int sctp_send_asconf_add_ip(struct sock		*sk,
struct sockaddr	*addrs,
int 			addrcnt)
static int sctp_bindx_rem(struct sock *sk, struct sockaddr *addrs, int addrcnt)
static int sctp_send_asconf_del_ip(struct sock		*sk,
struct sockaddr	*addrs,
int			addrcnt)
SCTP_STATIC int sctp_setsockopt_bindx(struct sock* sk,
struct sockaddr __user *addrs,
int addrs_size, int op)
static int __sctp_connect(struct sock* sk,
struct sockaddr *kaddrs,
int addrs_size,
sctp_assoc_t *assoc_id)
SCTP_STATIC int __sctp_setsockopt_connectx(struct sock* sk,
struct sockaddr __user *addrs,
int addrs_size,
sctp_assoc_t *assoc_id)
SCTP_STATIC int sctp_setsockopt_connectx_old(struct sock* sk,
struct sockaddr __user *addrs,
int addrs_size)
SCTP_STATIC int sctp_setsockopt_connectx(struct sock* sk,
struct sockaddr __user *addrs,
int addrs_size)
SCTP_STATIC int sctp_getsockopt_connectx3(struct sock* sk, int len,
char __user *optval,
int __user *optlen)
SCTP_STATIC void sctp_close(struct sock *sk, long timeout)
static int sctp_error(struct sock *sk, int flags, int err)
SCTP_STATIC int sctp_msghdr_parse(const struct msghdr *, sctp_cmsgs_t *);
SCTP_STATIC int sctp_sendmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t msg_len)
static int sctp_skb_pull(struct sk_buff *skb, int len)
static struct sk_buff *sctp_skb_recv_datagram(struct sock *, int, int, int *);
SCTP_STATIC int sctp_recvmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len, int noblock,
int flags, int *addr_len)
static int sctp_setsockopt_disable_fragments(struct sock *sk,
char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_events(struct sock *sk, char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_autoclose(struct sock *sk, char __user *optval,
unsigned int optlen)
static int sctp_apply_peer_addr_params(struct sctp_paddrparams *params,
struct sctp_transport   *trans,
struct sctp_association *asoc,
struct sctp_sock        *sp,
int                      hb_change,
int                      pmtud_change,
int                      sackdelay_change)
static int sctp_setsockopt_peer_addr_params(struct sock *sk,
char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_delayed_ack(struct sock *sk,
char __user *optval, unsigned int optlen)
static int sctp_setsockopt_initmsg(struct sock *sk, char __user *optval, unsigned int optlen)
static int sctp_setsockopt_default_send_param(struct sock *sk,
char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_primary_addr(struct sock *sk, char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_nodelay(struct sock *sk, char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_rtoinfo(struct sock *sk, char __user *optval, unsigned int optlen)
static int sctp_setsockopt_associnfo(struct sock *sk, char __user *optval, unsigned int optlen)
static int sctp_setsockopt_mappedv4(struct sock *sk, char __user *optval, unsigned int optlen)
static int sctp_setsockopt_maxseg(struct sock *sk, char __user *optval, unsigned int optlen)
static int sctp_setsockopt_peer_primary_addr(struct sock *sk, char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_adaptation_layer(struct sock *sk, char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_context(struct sock *sk, char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_fragment_interleave(struct sock *sk,
char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_partial_delivery_point(struct sock *sk,
char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_maxburst(struct sock *sk,
char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_auth_chunk(struct sock *sk,
char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_hmac_ident(struct sock *sk,
char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_auth_key(struct sock *sk,
char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_active_key(struct sock *sk,
char __user *optval,
unsigned int optlen)
static int sctp_setsockopt_del_key(struct sock *sk,
char __user *optval,
unsigned int optlen)
SCTP_STATIC int sctp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
SCTP_STATIC int sctp_connect(struct sock *sk, struct sockaddr *addr,
int addr_len)
SCTP_STATIC int sctp_disconnect(struct sock *sk, int flags)
SCTP_STATIC struct sock *sctp_accept(struct sock *sk, int flags, int *err)
SCTP_STATIC int sctp_ioctl(struct sock *sk, int cmd, unsigned long arg)
SCTP_STATIC int sctp_init_sock(struct sock *sk)
SCTP_STATIC void sctp_destroy_sock(struct sock *sk)
SCTP_STATIC void sctp_shutdown(struct sock *sk, int how)
static int sctp_getsockopt_sctp_status(struct sock *sk, int len,
char __user *optval,
int __user *optlen)
static int sctp_getsockopt_peer_addr_info(struct sock *sk, int len,
char __user *optval,
int __user *optlen)
static int sctp_getsockopt_disable_fragments(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_events(struct sock *sk, int len, char __user *optval,
int __user *optlen)
static int sctp_getsockopt_autoclose(struct sock *sk, int len, char __user *optval, int __user *optlen)
SCTP_STATIC int sctp_do_peeloff(struct sctp_association *asoc,
struct socket **sockp)
static int sctp_getsockopt_peeloff(struct sock *sk, int len, char __user *optval, int __user *optlen)
static int sctp_getsockopt_peer_addr_params(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_delayed_ack(struct sock *sk, int len,
char __user *optval,
int __user *optlen)
static int sctp_getsockopt_initmsg(struct sock *sk, int len, char __user *optval, int __user *optlen)
static int sctp_getsockopt_peer_addrs(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_copy_laddrs(struct sock *sk, __u16 port, void *to,
size_t space_left, int *bytes_copied)
static int sctp_getsockopt_local_addrs(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_primary_addr(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_adaptation_layer(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_default_send_param(struct sock *sk,
int len, char __user *optval,
int __user *optlen)
static int sctp_getsockopt_nodelay(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_rtoinfo(struct sock *sk, int len,
char __user *optval,
int __user *optlen)
static int sctp_getsockopt_associnfo(struct sock *sk, int len,
char __user *optval,
int __user *optlen)
static int sctp_getsockopt_mappedv4(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_context(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_maxseg(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_fragment_interleave(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_partial_delivery_point(struct sock *sk, int len,
char __user *optval,
int __user *optlen)
static int sctp_getsockopt_maxburst(struct sock *sk, int len,
char __user *optval,
int __user *optlen)
static int sctp_getsockopt_hmac_ident(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_active_key(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_peer_auth_chunks(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_local_auth_chunks(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_assoc_number(struct sock *sk, int len,
char __user *optval, int __user *optlen)
static int sctp_getsockopt_assoc_ids(struct sock *sk, int len,
char __user *optval, int __user *optlen)
SCTP_STATIC int sctp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static void sctp_hash(struct sock *sk)
static void sctp_unhash(struct sock *sk)
static struct sctp_bind_bucket *sctp_bucket_create(
struct sctp_bind_hashbucket *head, unsigned short snum);
static long sctp_get_port_local(struct sock *sk, union sctp_addr *addr)
static int sctp_get_port(struct sock *sk, unsigned short snum)
SCTP_STATIC int sctp_listen_start(struct sock *sk, int backlog)
int sctp_inet_listen(struct socket *sock, int backlog)
unsigned int sctp_poll(struct file *file, struct socket *sock, poll_table *wait)
static struct sctp_bind_bucket *sctp_bucket_create(
struct sctp_bind_hashbucket *head, unsigned short snum)
static void sctp_bucket_destroy(struct sctp_bind_bucket *pp)
static inline void __sctp_put_port(struct sock *sk)
void sctp_put_port(struct sock *sk)
static int sctp_autobind(struct sock *sk)
SCTP_STATIC int sctp_msghdr_parse(const struct msghdr *msg,
sctp_cmsgs_t *cmsgs)
static int sctp_wait_for_packet(struct sock * sk, int *err, long *timeo_p)
static struct sk_buff *sctp_skb_recv_datagram(struct sock *sk, int flags,
int noblock, int *err)
static void __sctp_write_space(struct sctp_association *asoc)
static void sctp_wfree(struct sk_buff *skb)
void sctp_sock_rfree(struct sk_buff *skb)
static int sctp_wait_for_sndbuf(struct sctp_association *asoc, long *timeo_p,
size_t msg_len)
void sctp_data_ready(struct sock *sk, int len)
void sctp_write_space(struct sock *sk)
static int sctp_writeable(struct sock *sk)
static int sctp_wait_for_connect(struct sctp_association *asoc, long *timeo_p)
static int sctp_wait_for_accept(struct sock *sk, long timeo)
static void sctp_wait_for_close(struct sock *sk, long timeout)
static void sctp_skb_set_owner_r_frag(struct sk_buff *skb, struct sock *sk)
void sctp_copy_sock(struct sock *newsk, struct sock *sk,
struct sctp_association *asoc)
static void sctp_sock_migrate(struct sock *oldsk, struct sock *newsk,
struct sctp_association *assoc,
sctp_socket_type_t type)
struct proto sctp_prot = ;
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
struct proto sctpv6_prot = ;
