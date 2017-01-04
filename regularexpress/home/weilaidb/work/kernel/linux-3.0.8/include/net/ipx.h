#define _NET_INET_IPX_H_
struct ipx_address ;
#define ipx_broadcast_node	"\377\377\377\377\377\377"
#define ipx_this_node           "\0\0\0\0\0\0"
#define IPX_MAX_PPROP_HOPS 8
struct ipxhdr ;
static __inline__ struct ipxhdr *ipx_hdr(struct sk_buff *skb)
struct ipx_interface ;
struct ipx_route ;
struct ipx_cb ;
struct ipx_sock ;
static inline struct ipx_sock *ipx_sk(struct sock *sk)
#define IPX_SKB_CB(__skb) ((struct ipx_cb *)&((__skb)->cb[0]))
#define IPX_MIN_EPHEMERAL_SOCKET	0x4000
#define IPX_MAX_EPHEMERAL_SOCKET	0x7fff
extern struct list_head ipx_routes;
extern rwlock_t ipx_routes_lock;
extern struct list_head ipx_interfaces;
extern struct ipx_interface *ipx_interfaces_head(void);
extern spinlock_t ipx_interfaces_lock;
extern struct ipx_interface *ipx_primary_net;
extern int ipx_proc_init(void);
extern void ipx_proc_exit(void);
extern const char *ipx_frame_name(__be16);
extern const char *ipx_device_name(struct ipx_interface *intrfc);
static __inline__ void ipxitf_hold(struct ipx_interface *intrfc)
extern void ipxitf_down(struct ipx_interface *intrfc);
static __inline__ void ipxitf_put(struct ipx_interface *intrfc)
static __inline__ void ipxrtr_hold(struct ipx_route *rt)
static __inline__ void ipxrtr_put(struct ipx_route *rt)
