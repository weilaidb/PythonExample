static int irda_create(struct net *net, struct socket *sock, int protocol, int kern);
static const struct proto_ops irda_stream_ops;
static const struct proto_ops irda_seqpacket_ops;
static const struct proto_ops irda_dgram_ops;
static const struct proto_ops irda_ultra_ops;
#define ULTRA_MAX_DATA 382
#define IRDA_MAX_HEADER (TTP_MAX_HEADER)
static int irda_data_indication(void *instance, void *sap, struct sk_buff *skb)
static void irda_disconnect_indication(void *instance, void *sap,
LM_REASON reason, struct sk_buff *skb)
static void irda_connect_confirm(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size, __u8 max_header_size,
struct sk_buff *skb)
static void irda_connect_indication(void *instance, void *sap,
struct qos_info *qos, __u32 max_sdu_size,
__u8 max_header_size, struct sk_buff *skb)
static void irda_connect_response(struct irda_sock *self)
static void irda_flow_indication(void *instance, void *sap, LOCAL_FLOW flow)
static void irda_getvalue_confirm(int result, __u16 obj_id,
struct ias_value *value, void *priv)
static void irda_selective_discovery_indication(discinfo_t *discovery,
DISCOVERY_MODE mode,
void *priv)
static void irda_discovery_timeout(u_long priv)
static int irda_open_tsap(struct irda_sock *self, __u8 tsap_sel, char *name)
static int irda_open_lsap(struct irda_sock *self, int pid)
static int irda_find_lsap_sel(struct irda_sock *self, char *name)
static int irda_discover_daddr_and_lsap_sel(struct irda_sock *self, char *name)
static int irda_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
static int irda_listen(struct socket *sock, int backlog)
static int irda_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
static int irda_accept(struct socket *sock, struct socket *newsock, int flags)
static int irda_connect(struct socket *sock, struct sockaddr *uaddr,
int addr_len, int flags)
static struct proto irda_proto = ;
static int irda_create(struct net *net, struct socket *sock, int protocol,
int kern)
static void irda_destroy_socket(struct irda_sock *self)
static int irda_release(struct socket *sock)
static int irda_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int irda_recvmsg_dgram(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
static int irda_recvmsg_stream(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
static int irda_sendmsg_dgram(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int irda_sendmsg_ultra(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int irda_shutdown(struct socket *sock, int how)
static unsigned int irda_poll(struct file * file, struct socket *sock,
poll_table *wait)
static int irda_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int irda_compat_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int irda_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int irda_extract_ias_value(struct irda_ias_set *ias_opt,
struct ias_value *ias_value)
static int irda_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static const struct net_proto_family irda_family_ops = ;
static const struct proto_ops irda_stream_ops = ;
static const struct proto_ops irda_seqpacket_ops = ;
static const struct proto_ops irda_dgram_ops = ;
static const struct proto_ops irda_ultra_ops = ;
int __init irsock_init(void)
void irsock_cleanup(void)
