#define RPCDBG_FACILITY	RPCDBG_SVCXPRT
static struct svc_sock *svc_setup_socket(struct svc_serv *, struct socket *,
int *errp, int flags);
static void		svc_udp_data_ready(struct sock *, int);
static int		svc_udp_recvfrom(struct svc_rqst *);
static int		svc_udp_sendto(struct svc_rqst *);
static void		svc_sock_detach(struct svc_xprt *);
static void		svc_tcp_sock_detach(struct svc_xprt *);
static void		svc_sock_free(struct svc_xprt *);
static struct svc_xprt *svc_create_socket(struct svc_serv *, int,
struct net *, struct sockaddr *,
int, int);
#if defined(CONFIG_NFS_V4_1)
static struct svc_xprt *svc_bc_create_socket(struct svc_serv *, int,
struct net *, struct sockaddr *,
int, int);
static void svc_bc_sock_free(struct svc_xprt *xprt);
static struct lock_class_key svc_key[2];
static struct lock_class_key svc_slock_key[2];
static void svc_reclassify_socket(struct socket *sock)
static void svc_reclassify_socket(struct socket *sock)
static void svc_release_skb(struct svc_rqst *rqstp)
union svc_pktinfo_u ;
#define SVC_PKTINFO_SPACE \
CMSG_SPACE(sizeof(union svc_pktinfo_u))
static void svc_set_cmsg_data(struct svc_rqst *rqstp, struct cmsghdr *cmh)
int svc_send_common(struct socket *sock, struct xdr_buf *xdr,
struct page *headpage, unsigned long headoffset,
struct page *tailpage, unsigned long tailoffset)
static int svc_sendto(struct svc_rqst *rqstp, struct xdr_buf *xdr)
static int svc_one_sock_name(struct svc_sock *svsk, char *buf, int remaining)
int svc_sock_names(struct svc_serv *serv, char *buf, const size_t buflen,
const char *toclose)
EXPORT_SYMBOL_GPL(svc_sock_names);
static int svc_recv_available(struct svc_sock *svsk)
static int svc_recvfrom(struct svc_rqst *rqstp, struct kvec *iov, int nr,
int buflen)
static int svc_partial_recvfrom(struct svc_rqst *rqstp,
struct kvec *iov, int nr,
int buflen, unsigned int base)
static void svc_sock_setbufsize(struct socket *sock, unsigned int snd,
unsigned int rcv)
static void svc_udp_data_ready(struct sock *sk, int count)
static void svc_write_space(struct sock *sk)
static void svc_tcp_write_space(struct sock *sk)
static int svc_udp_get_dest_address4(struct svc_rqst *rqstp,
struct cmsghdr *cmh)
static int svc_udp_get_dest_address6(struct svc_rqst *rqstp,
struct cmsghdr *cmh)
static int svc_udp_get_dest_address(struct svc_rqst *rqstp,
struct cmsghdr *cmh)
static int svc_udp_recvfrom(struct svc_rqst *rqstp)
static int
svc_udp_sendto(struct svc_rqst *rqstp)
static void svc_udp_prep_reply_hdr(struct svc_rqst *rqstp)
static int svc_udp_has_wspace(struct svc_xprt *xprt)
static struct svc_xprt *svc_udp_accept(struct svc_xprt *xprt)
static struct svc_xprt *svc_udp_create(struct svc_serv *serv,
struct net *net,
struct sockaddr *sa, int salen,
int flags)
static struct svc_xprt_ops svc_udp_ops = ;
static struct svc_xprt_class svc_udp_class = ;
static void svc_udp_init(struct svc_sock *svsk, struct svc_serv *serv)
static void svc_tcp_listen_data_ready(struct sock *sk, int count_unused)
static void svc_tcp_state_change(struct sock *sk)
static void svc_tcp_data_ready(struct sock *sk, int count)
static struct svc_xprt *svc_tcp_accept(struct svc_xprt *xprt)
static unsigned int svc_tcp_restore_pages(struct svc_sock *svsk, struct svc_rqst *rqstp)
static void svc_tcp_save_pages(struct svc_sock *svsk, struct svc_rqst *rqstp)
static void svc_tcp_clear_pages(struct svc_sock *svsk)
static int svc_tcp_recv_record(struct svc_sock *svsk, struct svc_rqst *rqstp)
static int receive_cb_reply(struct svc_sock *svsk, struct svc_rqst *rqstp)
static int copy_pages_to_kvecs(struct kvec *vec, struct page **pages, int len)
static int svc_tcp_recvfrom(struct svc_rqst *rqstp)
static int svc_tcp_sendto(struct svc_rqst *rqstp)
static void svc_tcp_prep_reply_hdr(struct svc_rqst *rqstp)
static int svc_tcp_has_wspace(struct svc_xprt *xprt)
static struct svc_xprt *svc_tcp_create(struct svc_serv *serv,
struct net *net,
struct sockaddr *sa, int salen,
int flags)
#if defined(CONFIG_NFS_V4_1)
static struct svc_xprt *svc_bc_create_socket(struct svc_serv *, int,
struct net *, struct sockaddr *,
int, int);
static void svc_bc_sock_free(struct svc_xprt *xprt);
static struct svc_xprt *svc_bc_tcp_create(struct svc_serv *serv,
struct net *net,
struct sockaddr *sa, int salen,
int flags)
static void svc_bc_tcp_sock_detach(struct svc_xprt *xprt)
static struct svc_xprt_ops svc_tcp_bc_ops = ;
static struct svc_xprt_class svc_tcp_bc_class = ;
static void svc_init_bc_xprt_sock(void)
static void svc_cleanup_bc_xprt_sock(void)
static void svc_init_bc_xprt_sock(void)
static void svc_cleanup_bc_xprt_sock(void)
static struct svc_xprt_ops svc_tcp_ops = ;
static struct svc_xprt_class svc_tcp_class = ;
void svc_init_xprt_sock(void)
void svc_cleanup_xprt_sock(void)
static void svc_tcp_init(struct svc_sock *svsk, struct svc_serv *serv)
void svc_sock_update_bufs(struct svc_serv *serv)
EXPORT_SYMBOL_GPL(svc_sock_update_bufs);
static struct svc_sock *svc_setup_socket(struct svc_serv *serv,
struct socket *sock,
int *errp, int flags)
int svc_addsock(struct svc_serv *serv, const int fd, char *name_return,
const size_t len)
EXPORT_SYMBOL_GPL(svc_addsock);
static struct svc_xprt *svc_create_socket(struct svc_serv *serv,
int protocol,
struct net *net,
struct sockaddr *sin, int len,
int flags)
static void svc_sock_detach(struct svc_xprt *xprt)
static void svc_tcp_sock_detach(struct svc_xprt *xprt)
static void svc_sock_free(struct svc_xprt *xprt)
#if defined(CONFIG_NFS_V4_1)
static struct svc_xprt *svc_bc_create_socket(struct svc_serv *serv,
int protocol,
struct net *net,
struct sockaddr *sin, int len,
int flags)
static void svc_bc_sock_free(struct svc_xprt *xprt)
