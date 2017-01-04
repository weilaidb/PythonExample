#define _L2TP_CORE_H_
#define L2TP_TUNNEL_MAGIC	0x42114DDA
#define L2TP_SESSION_MAGIC	0x0C04EB7D
#define L2TP_HASH_BITS	4
#define L2TP_HASH_SIZE	(1 << L2TP_HASH_BITS)
#define L2TP_HASH_BITS_2	8
#define L2TP_HASH_SIZE_2	(1 << L2TP_HASH_BITS_2)
enum ;
struct sk_buff;
struct l2tp_stats ;
struct l2tp_tunnel;
struct l2tp_session_cfg ;
struct l2tp_session ;
struct l2tp_tunnel_cfg ;
struct l2tp_tunnel ;
struct l2tp_nl_cmd_ops ;
static inline void *l2tp_tunnel_priv(struct l2tp_tunnel *tunnel)
static inline void *l2tp_session_priv(struct l2tp_session *session)
static inline struct l2tp_tunnel *l2tp_sock_to_tunnel(struct sock *sk)
extern struct l2tp_session *l2tp_session_find(struct net *net, struct l2tp_tunnel *tunnel, u32 session_id);
extern struct l2tp_session *l2tp_session_find_nth(struct l2tp_tunnel *tunnel, int nth);
extern struct l2tp_session *l2tp_session_find_by_ifname(struct net *net, char *ifname);
extern struct l2tp_tunnel *l2tp_tunnel_find(struct net *net, u32 tunnel_id);
extern struct l2tp_tunnel *l2tp_tunnel_find_nth(struct net *net, int nth);
extern int l2tp_tunnel_create(struct net *net, int fd, int version, u32 tunnel_id, u32 peer_tunnel_id, struct l2tp_tunnel_cfg *cfg, struct l2tp_tunnel **tunnelp);
extern int l2tp_tunnel_delete(struct l2tp_tunnel *tunnel);
extern struct l2tp_session *l2tp_session_create(int priv_size, struct l2tp_tunnel *tunnel, u32 session_id, u32 peer_session_id, struct l2tp_session_cfg *cfg);
extern int l2tp_session_delete(struct l2tp_session *session);
extern void l2tp_session_free(struct l2tp_session *session);
extern void l2tp_recv_common(struct l2tp_session *session, struct sk_buff *skb, unsigned char *ptr, unsigned char *optr, u16 hdrflags, int length, int (*payload_hook)(struct sk_buff *skb));
extern int l2tp_udp_encap_recv(struct sock *sk, struct sk_buff *skb);
extern int l2tp_xmit_skb(struct l2tp_session *session, struct sk_buff *skb, int hdr_len);
extern int l2tp_nl_register_ops(enum l2tp_pwtype pw_type, const struct l2tp_nl_cmd_ops *ops);
extern void l2tp_nl_unregister_ops(enum l2tp_pwtype pw_type);
static inline void l2tp_session_inc_refcount_1(struct l2tp_session *session)
static inline void l2tp_session_dec_refcount_1(struct l2tp_session *session)
#define l2tp_session_inc_refcount(_s) do  while (0)
#define l2tp_session_dec_refcount(_s) do  while (0)
#define l2tp_session_inc_refcount(s) l2tp_session_inc_refcount_1(s)
#define l2tp_session_dec_refcount(s) l2tp_session_dec_refcount_1(s)
