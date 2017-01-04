struct dn_zone
;
struct dn_hash
;
#define dz_key_0(key)		((key).datum = 0)
#define for_nexthops(fi)
#define DN_MAX_DIVISOR 1024
#define DN_S_ZOMBIE 1
#define DN_S_ACCESSED 2
#define DN_FIB_SCAN(f, fp) \
for( ; ((f) = *(fp)) != NULL; (fp) = &(f)->fn_next)
#define DN_FIB_SCAN_KEY(f, fp, key) \
for( ; ((f) = *(fp)) != NULL && dn_key_eq((f)->fn_key, (key)); (fp) = &(f)->fn_next)
#define RT_TABLE_MIN 1
#define DN_FIB_TABLE_HASHSZ 256
static struct hlist_head dn_fib_table_hash[DN_FIB_TABLE_HASHSZ];
static DEFINE_RWLOCK(dn_fib_tables_lock);
static struct kmem_cache *dn_hash_kmem __read_mostly;
static int dn_fib_hash_zombies;
static inline dn_fib_idx_t dn_hash(dn_fib_key_t key, struct dn_zone *dz)
static inline dn_fib_key_t dz_key(__le16 dst, struct dn_zone *dz)
static inline struct dn_fib_node **dn_chain_p(dn_fib_key_t key, struct dn_zone *dz)
static inline struct dn_fib_node *dz_chain(dn_fib_key_t key, struct dn_zone *dz)
static inline int dn_key_eq(dn_fib_key_t a, dn_fib_key_t b)
static inline int dn_key_leq(dn_fib_key_t a, dn_fib_key_t b)
static inline void dn_rebuild_zone(struct dn_zone *dz,
struct dn_fib_node **old_ht,
int old_divisor)
static void dn_rehash_zone(struct dn_zone *dz)
static void dn_free_node(struct dn_fib_node *f)
static struct dn_zone *dn_new_zone(struct dn_hash *table, int z)
static int dn_fib_nh_match(struct rtmsg *r, struct nlmsghdr *nlh, struct dn_kern_rta *rta, struct dn_fib_info *fi)
static inline size_t dn_fib_nlmsg_size(struct dn_fib_info *fi)
static int dn_fib_dump_info(struct sk_buff *skb, u32 pid, u32 seq, int event,
u32 tb_id, u8 type, u8 scope, void *dst, int dst_len,
struct dn_fib_info *fi, unsigned int flags)
static void dn_rtmsg_fib(int event, struct dn_fib_node *f, int z, u32 tb_id,
struct nlmsghdr *nlh, struct netlink_skb_parms *req)
static __inline__ int dn_hash_dump_bucket(struct sk_buff *skb,
struct netlink_callback *cb,
struct dn_fib_table *tb,
struct dn_zone *dz,
struct dn_fib_node *f)
static __inline__ int dn_hash_dump_zone(struct sk_buff *skb,
struct netlink_callback *cb,
struct dn_fib_table *tb,
struct dn_zone *dz)
static int dn_fib_table_dump(struct dn_fib_table *tb, struct sk_buff *skb,
struct netlink_callback *cb)
int dn_fib_dump(struct sk_buff *skb, struct netlink_callback *cb)
static int dn_fib_table_insert(struct dn_fib_table *tb, struct rtmsg *r, struct dn_kern_rta *rta, struct nlmsghdr *n, struct netlink_skb_parms *req)
static int dn_fib_table_delete(struct dn_fib_table *tb, struct rtmsg *r, struct dn_kern_rta *rta, struct nlmsghdr *n, struct netlink_skb_parms *req)
static inline int dn_flush_list(struct dn_fib_node **fp, int z, struct dn_hash *table)
static int dn_fib_table_flush(struct dn_fib_table *tb)
static int dn_fib_table_lookup(struct dn_fib_table *tb, const struct flowidn *flp, struct dn_fib_res *res)
struct dn_fib_table *dn_fib_get_table(u32 n, int create)
struct dn_fib_table *dn_fib_empty_table(void)
void dn_fib_flush(void)
void __init dn_fib_table_init(void)
void __exit dn_fib_table_cleanup(void)
