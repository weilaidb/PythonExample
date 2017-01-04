#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(AF_CAIF);
enum caif_states ;
#define TX_FLOW_ON_BIT	1
#define RX_FLOW_ON_BIT	2
static struct dentry *debugfsdir;
struct debug_fs_counter ;
static struct debug_fs_counter cnt;
#define	dbfs_atomic_inc(v) atomic_inc_return(v)
#define	dbfs_atomic_dec(v) atomic_dec_return(v)
#define	dbfs_atomic_inc(v) 0
#define	dbfs_atomic_dec(v) 0
struct caifsock ;
static int rx_flow_is_on(struct caifsock *cf_sk)
static int tx_flow_is_on(struct caifsock *cf_sk)
static void set_rx_flow_off(struct caifsock *cf_sk)
static void set_rx_flow_on(struct caifsock *cf_sk)
static void set_tx_flow_off(struct caifsock *cf_sk)
static void set_tx_flow_on(struct caifsock *cf_sk)
static void caif_read_lock(struct sock *sk)
static void caif_read_unlock(struct sock *sk)
static int sk_rcvbuf_lowwater(struct caifsock *cf_sk)
static void caif_flow_ctrl(struct sock *sk, int mode)
static int caif_queue_rcv_skb(struct sock *sk, struct sk_buff *skb)
static int caif_sktrecv_cb(struct cflayer *layr, struct cfpkt *pkt)
static void cfsk_hold(struct cflayer *layr)
static void cfsk_put(struct cflayer *layr)
static void caif_ctrl_cb(struct cflayer *layr,
enum caif_ctrlcmd flow,
int phyid)
static void caif_check_flow_release(struct sock *sk)
static int caif_seqpkt_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t len, int flags)
static long caif_stream_data_wait(struct sock *sk, long timeo)
static int caif_stream_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size,
int flags)
static long caif_wait_for_flow_on(struct caifsock *cf_sk,
int wait_writeable, long timeo, int *err)
static int transmit_skb(struct sk_buff *skb, struct caifsock *cf_sk,
int noblock, long timeo)
static int caif_seqpkt_sendmsg(struct kiocb *kiocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int caif_stream_sendmsg(struct kiocb *kiocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int setsockopt(struct socket *sock,
int lvl, int opt, char __user *ov, unsigned int ol)
static int caif_connect(struct socket *sock, struct sockaddr *uaddr,
int addr_len, int flags)
static int caif_release(struct socket *sock)
static unsigned int caif_poll(struct file *file,
struct socket *sock, poll_table *wait)
static const struct proto_ops caif_seqpacket_ops = ;
static const struct proto_ops caif_stream_ops = ;
static void caif_sock_destructor(struct sock *sk)
static int caif_create(struct net *net, struct socket *sock, int protocol,
int kern)
static struct net_proto_family caif_family_ops = ;
static int af_caif_init(void)
static int __init caif_sktinit_module(void)
static void __exit caif_sktexit_module(void)
module_init(caif_sktinit_module);
module_exit(caif_sktexit_module);
