#define L2TP_DRV_VERSION	"V2.0"
#define L2TP_HDRFLAG_T	   0x8000
#define L2TP_HDRFLAG_L	   0x4000
#define L2TP_HDRFLAG_S	   0x0800
#define L2TP_HDRFLAG_O	   0x0200
#define L2TP_HDRFLAG_P	   0x0100
#define L2TP_HDR_VER_MASK  0x000F
#define L2TP_HDR_VER_2	   0x0002
#define L2TP_HDR_VER_3	   0x0003
#define L2TP_SLFLAG_S	   0x40000000
#define L2TP_SL_SEQ_MASK   0x00ffffff
#define L2TP_HDR_SIZE_SEQ		10
#define L2TP_HDR_SIZE_NOSEQ		6
#define L2TP_DEFAULT_DEBUG_FLAGS	0
#define PRINTK(_mask, _type, _lvl, _fmt, args...)			\
do  while (0)
struct l2tp_skb_cb ;
#define L2TP_SKB_CB(skb)	((struct l2tp_skb_cb *) &skb->cb[sizeof(struct inet_skb_parm)])
static atomic_t l2tp_tunnel_count;
static atomic_t l2tp_session_count;
static unsigned int l2tp_net_id;
struct l2tp_net ;
static void l2tp_session_set_header_len(struct l2tp_session *session, int version);
static void l2tp_tunnel_free(struct l2tp_tunnel *tunnel);
static void l2tp_tunnel_closeall(struct l2tp_tunnel *tunnel);
static inline struct l2tp_net *l2tp_pernet(struct net *net)
static inline void l2tp_tunnel_inc_refcount_1(struct l2tp_tunnel *tunnel)
static inline void l2tp_tunnel_dec_refcount_1(struct l2tp_tunnel *tunnel)
#define l2tp_tunnel_inc_refcount(_t) do  while (0)
#define l2tp_tunnel_dec_refcount(_t) do  while (0)
#define l2tp_tunnel_inc_refcount(t) l2tp_tunnel_inc_refcount_1(t)
#define l2tp_tunnel_dec_refcount(t) l2tp_tunnel_dec_refcount_1(t)
static inline struct hlist_head *
l2tp_session_id_hash_2(struct l2tp_net *pn, u32 session_id)
static struct l2tp_session *l2tp_session_find_2(struct net *net, u32 session_id)
static inline struct hlist_head *
l2tp_session_id_hash(struct l2tp_tunnel *tunnel, u32 session_id)
struct l2tp_session *l2tp_session_find(struct net *net, struct l2tp_tunnel *tunnel, u32 session_id)
EXPORT_SYMBOL_GPL(l2tp_session_find);
struct l2tp_session *l2tp_session_find_nth(struct l2tp_tunnel *tunnel, int nth)
EXPORT_SYMBOL_GPL(l2tp_session_find_nth);
struct l2tp_session *l2tp_session_find_by_ifname(struct net *net, char *ifname)
EXPORT_SYMBOL_GPL(l2tp_session_find_by_ifname);
struct l2tp_tunnel *l2tp_tunnel_find(struct net *net, u32 tunnel_id)
EXPORT_SYMBOL_GPL(l2tp_tunnel_find);
struct l2tp_tunnel *l2tp_tunnel_find_nth(struct net *net, int nth)
EXPORT_SYMBOL_GPL(l2tp_tunnel_find_nth);
static void l2tp_recv_queue_skb(struct l2tp_session *session, struct sk_buff *skb)
static void l2tp_recv_dequeue_skb(struct l2tp_session *session, struct sk_buff *skb)
static void l2tp_recv_dequeue(struct l2tp_session *session)
static inline int l2tp_verify_udp_checksum(struct sock *sk,
struct sk_buff *skb)
void l2tp_recv_common(struct l2tp_session *session, struct sk_buff *skb,
unsigned char *ptr, unsigned char *optr, u16 hdrflags,
int length, int (*payload_hook)(struct sk_buff *skb))
EXPORT_SYMBOL(l2tp_recv_common);
static int l2tp_udp_recv_core(struct l2tp_tunnel *tunnel, struct sk_buff *skb,
int (*payload_hook)(struct sk_buff *skb))
int l2tp_udp_encap_recv(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(l2tp_udp_encap_recv);
static int l2tp_build_l2tpv2_header(struct l2tp_session *session, void *buf)
static int l2tp_build_l2tpv3_header(struct l2tp_session *session, void *buf)
static int l2tp_xmit_core(struct l2tp_session *session, struct sk_buff *skb,
struct flowi *fl, size_t data_len)
static void l2tp_sock_wfree(struct sk_buff *skb)
static inline void l2tp_skb_set_owner_w(struct sk_buff *skb, struct sock *sk)
int l2tp_xmit_skb(struct l2tp_session *session, struct sk_buff *skb, int hdr_len)
EXPORT_SYMBOL_GPL(l2tp_xmit_skb);
static void l2tp_tunnel_destruct(struct sock *sk)
static void l2tp_tunnel_closeall(struct l2tp_tunnel *tunnel)
static void l2tp_tunnel_free(struct l2tp_tunnel *tunnel)
static int l2tp_tunnel_sock_create(u32 tunnel_id, u32 peer_tunnel_id, struct l2tp_tunnel_cfg *cfg, struct socket **sockp)
int l2tp_tunnel_create(struct net *net, int fd, int version, u32 tunnel_id, u32 peer_tunnel_id, struct l2tp_tunnel_cfg *cfg, struct l2tp_tunnel **tunnelp)
EXPORT_SYMBOL_GPL(l2tp_tunnel_create);
int l2tp_tunnel_delete(struct l2tp_tunnel *tunnel)
EXPORT_SYMBOL_GPL(l2tp_tunnel_delete);
void l2tp_session_free(struct l2tp_session *session)
EXPORT_SYMBOL_GPL(l2tp_session_free);
int l2tp_session_delete(struct l2tp_session *session)
EXPORT_SYMBOL_GPL(l2tp_session_delete);
static void l2tp_session_set_header_len(struct l2tp_session *session, int version)
struct l2tp_session *l2tp_session_create(int priv_size, struct l2tp_tunnel *tunnel, u32 session_id, u32 peer_session_id, struct l2tp_session_cfg *cfg)
EXPORT_SYMBOL_GPL(l2tp_session_create);
static __net_init int l2tp_init_net(struct net *net)
static struct pernet_operations l2tp_net_ops = ;
static int __init l2tp_init(void)
static void __exit l2tp_exit(void)
module_init(l2tp_init);
module_exit(l2tp_exit);
MODULE_AUTHOR("James Chapman <jchapman@katalix.com>");
MODULE_DESCRIPTION("L2TP core");
MODULE_LICENSE("GPL");
MODULE_VERSION(L2TP_DRV_VERSION);
