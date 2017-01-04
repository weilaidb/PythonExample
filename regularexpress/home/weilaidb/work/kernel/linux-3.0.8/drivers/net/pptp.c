#define PPTP_DRIVER_VERSION "0.8.5"
#define MAX_CALLID 65535
static DECLARE_BITMAP(callid_bitmap, MAX_CALLID + 1);
static struct pppox_sock **callid_sock;
static DEFINE_SPINLOCK(chan_lock);
static struct proto pptp_sk_proto __read_mostly;
static const struct ppp_channel_ops pptp_chan_ops;
static const struct proto_ops pptp_ops;
#define PPP_LCP_ECHOREQ 0x09
#define PPP_LCP_ECHOREP 0x0A
#define SC_RCV_BITS	(SC_RCV_B7_1|SC_RCV_B7_0|SC_RCV_ODDP|SC_RCV_EVNP)
#define MISSING_WINDOW 20
#define WRAPPED(curseq, lastseq)\
((((curseq) & 0xffffff00) == 0) &&\
(((lastseq) & 0xffffff00) == 0xffffff00))
#define PPTP_GRE_PROTO  0x880B
#define PPTP_GRE_VER    0x1
#define PPTP_GRE_FLAG_C	0x80
#define PPTP_GRE_FLAG_R	0x40
#define PPTP_GRE_FLAG_K	0x20
#define PPTP_GRE_FLAG_S	0x10
#define PPTP_GRE_FLAG_A	0x80
#define PPTP_GRE_IS_C(f) ((f)&PPTP_GRE_FLAG_C)
#define PPTP_GRE_IS_R(f) ((f)&PPTP_GRE_FLAG_R)
#define PPTP_GRE_IS_K(f) ((f)&PPTP_GRE_FLAG_K)
#define PPTP_GRE_IS_S(f) ((f)&PPTP_GRE_FLAG_S)
#define PPTP_GRE_IS_A(f) ((f)&PPTP_GRE_FLAG_A)
#define PPTP_HEADER_OVERHEAD (2+sizeof(struct pptp_gre_header))
struct pptp_gre_header  __packed;
static struct pppox_sock *lookup_chan(u16 call_id, __be32 s_addr)
static int lookup_chan_dst(u16 call_id, __be32 d_addr)
static int add_chan(struct pppox_sock *sock)
static void del_chan(struct pppox_sock *sock)
static int pptp_xmit(struct ppp_channel *chan, struct sk_buff *skb)
static int pptp_rcv_core(struct sock *sk, struct sk_buff *skb)
static int pptp_rcv(struct sk_buff *skb)
static int pptp_bind(struct socket *sock, struct sockaddr *uservaddr,
int sockaddr_len)
static int pptp_connect(struct socket *sock, struct sockaddr *uservaddr,
int sockaddr_len, int flags)
static int pptp_getname(struct socket *sock, struct sockaddr *uaddr,
int *usockaddr_len, int peer)
static int pptp_release(struct socket *sock)
static void pptp_sock_destruct(struct sock *sk)
static int pptp_create(struct net *net, struct socket *sock)
static int pptp_ppp_ioctl(struct ppp_channel *chan, unsigned int cmd,
unsigned long arg)
static const struct ppp_channel_ops pptp_chan_ops = ;
static struct proto pptp_sk_proto __read_mostly = ;
static const struct proto_ops pptp_ops = ;
static const struct pppox_proto pppox_pptp_proto = ;
static const struct gre_protocol gre_pptp_protocol = ;
static int __init pptp_init_module(void)
static void __exit pptp_exit_module(void)
module_init(pptp_init_module);
module_exit(pptp_exit_module);
MODULE_DESCRIPTION("Point-to-Point Tunneling Protocol");
MODULE_AUTHOR("D. Kozlov (xeb@mail.ru)");
MODULE_LICENSE("GPL");
