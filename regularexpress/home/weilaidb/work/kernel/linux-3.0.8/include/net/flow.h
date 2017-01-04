#define _NET_FLOW_H
struct flowi_common ;
union flowi_uli ;
struct flowi4 ;
static inline void flowi4_init_output(struct flowi4 *fl4, int oif,
__u32 mark, __u8 tos, __u8 scope,
__u8 proto, __u8 flags,
__be32 daddr, __be32 saddr,
__be16 dport, __be32 sport)
struct flowi6 ;
struct flowidn ;
struct flowi  __attribute__((__aligned__(BITS_PER_LONG/8)));
static inline struct flowi *flowi4_to_flowi(struct flowi4 *fl4)
static inline struct flowi *flowi6_to_flowi(struct flowi6 *fl6)
static inline struct flowi *flowidn_to_flowi(struct flowidn *fldn)
#define FLOW_DIR_IN	0
#define FLOW_DIR_OUT	1
#define FLOW_DIR_FWD	2
struct net;
struct sock;
struct flow_cache_ops;
struct flow_cache_object ;
struct flow_cache_ops ;
typedef struct flow_cache_object *(*flow_resolve_t)(
struct net *net, const struct flowi *key, u16 family,
u8 dir, struct flow_cache_object *oldobj, void *ctx);
extern struct flow_cache_object *flow_cache_lookup(
struct net *net, const struct flowi *key, u16 family,
u8 dir, flow_resolve_t resolver, void *ctx);
extern void flow_cache_flush(void);
extern atomic_t flow_cache_genid;
