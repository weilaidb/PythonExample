#define _NET_DST_H
#define DST_GC_MIN	(HZ/10)
#define DST_GC_INC	(HZ/2)
#define DST_GC_MAX	(120*HZ)
struct sk_buff;
struct dst_entry ;
extern u32 *dst_cow_metrics_generic(struct dst_entry *dst, unsigned long old);
extern const u32 dst_default_metrics[RTAX_MAX];
#define DST_METRICS_READ_ONLY	0x1UL
#define __DST_METRICS_PTR(Y)	\
((u32 *)((Y) & ~DST_METRICS_READ_ONLY))
#define DST_METRICS_PTR(X)	__DST_METRICS_PTR((X)->_metrics)
static inline bool dst_metrics_read_only(const struct dst_entry *dst)
extern void __dst_destroy_metrics_generic(struct dst_entry *dst, unsigned long old);
static inline void dst_destroy_metrics_generic(struct dst_entry *dst)
static inline u32 *dst_metrics_write_ptr(struct dst_entry *dst)
static inline void dst_init_metrics(struct dst_entry *dst,
const u32 *src_metrics,
bool read_only)
static inline void dst_copy_metrics(struct dst_entry *dest, const struct dst_entry *src)
static inline u32 *dst_metrics_ptr(struct dst_entry *dst)
static inline u32
dst_metric_raw(const struct dst_entry *dst, const int metric)
static inline u32
dst_metric(const struct dst_entry *dst, const int metric)
static inline u32
dst_metric_advmss(const struct dst_entry *dst)
static inline void dst_metric_set(struct dst_entry *dst, int metric, u32 val)
static inline u32
dst_feature(const struct dst_entry *dst, u32 feature)
static inline u32 dst_mtu(const struct dst_entry *dst)
static inline unsigned long dst_metric_rtt(const struct dst_entry *dst, int metric)
static inline void set_dst_metric_rtt(struct dst_entry *dst, int metric,
unsigned long rtt)
static inline u32
dst_allfrag(const struct dst_entry *dst)
static inline int
dst_metric_locked(const struct dst_entry *dst, int metric)
static inline void dst_hold(struct dst_entry * dst)
static inline void dst_use(struct dst_entry *dst, unsigned long time)
static inline void dst_use_noref(struct dst_entry *dst, unsigned long time)
static inline
struct dst_entry * dst_clone(struct dst_entry * dst)
extern void dst_release(struct dst_entry *dst);
static inline void refdst_drop(unsigned long refdst)
static inline void skb_dst_drop(struct sk_buff *skb)
static inline void skb_dst_copy(struct sk_buff *nskb, const struct sk_buff *oskb)
static inline void skb_dst_force(struct sk_buff *skb)
static inline void __skb_tunnel_rx(struct sk_buff *skb, struct net_device *dev)
static inline void skb_tunnel_rx(struct sk_buff *skb, struct net_device *dev)
static inline struct dst_entry *skb_dst_pop(struct sk_buff *skb)
extern int dst_discard(struct sk_buff *skb);
extern void *dst_alloc(struct dst_ops * ops, struct net_device *dev,
int initial_ref, int initial_obsolete, int flags);
extern void __dst_free(struct dst_entry * dst);
extern struct dst_entry *dst_destroy(struct dst_entry * dst);
static inline void dst_free(struct dst_entry * dst)
static inline void dst_rcu_free(struct rcu_head *head)
static inline void dst_confirm(struct dst_entry *dst)
static inline void dst_link_failure(struct sk_buff *skb)
static inline void dst_set_expires(struct dst_entry *dst, int timeout)
static inline int dst_output(struct sk_buff *skb)
static inline int dst_input(struct sk_buff *skb)
static inline struct dst_entry *dst_check(struct dst_entry *dst, u32 cookie)
extern void		dst_init(void);
enum ;
struct flowi;
static inline struct dst_entry *xfrm_lookup(struct net *net,
struct dst_entry *dst_orig,
const struct flowi *fl, struct sock *sk,
int flags)
extern struct dst_entry *xfrm_lookup(struct net *net, struct dst_entry *dst_orig,
const struct flowi *fl, struct sock *sk,
int flags);
