#define _NET_DST_OPS_H
struct dst_entry;
struct kmem_cachep;
struct net_device;
struct sk_buff;
struct dst_ops ;
static inline int dst_entries_get_fast(struct dst_ops *dst)
static inline int dst_entries_get_slow(struct dst_ops *dst)
static inline void dst_entries_add(struct dst_ops *dst, int val)
static inline int dst_entries_init(struct dst_ops *dst)
static inline void dst_entries_destroy(struct dst_ops *dst)
