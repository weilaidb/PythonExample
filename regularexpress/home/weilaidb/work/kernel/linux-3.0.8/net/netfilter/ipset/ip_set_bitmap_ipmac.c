MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jozsef Kadlecsik <kadlec@blackhole.kfki.hu>");
MODULE_DESCRIPTION("bitmap:ip,mac type of IP sets");
MODULE_ALIAS("ip_set_bitmap:ip,mac");
enum ;
struct bitmap_ipmac ;
struct ipmac ;
struct ipmac_elem  __attribute__ ((aligned));
struct ipmac_telem  __attribute__ ((aligned));
static inline void *
bitmap_ipmac_elem(const struct bitmap_ipmac *map, u32 id)
static inline bool
bitmap_timeout(const struct bitmap_ipmac *map, u32 id)
static inline bool
bitmap_expired(const struct bitmap_ipmac *map, u32 id)
static inline int
bitmap_ipmac_exist(const struct ipmac_telem *elem)
static int
bitmap_ipmac_test(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ipmac_add(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ipmac_del(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ipmac_list(const struct ip_set *set,
struct sk_buff *skb, struct netlink_callback *cb)
static int
bitmap_ipmac_ttest(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ipmac_tadd(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ipmac_tdel(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ipmac_tlist(const struct ip_set *set,
struct sk_buff *skb, struct netlink_callback *cb)
static int
bitmap_ipmac_kadt(struct ip_set *set, const struct sk_buff *skb,
enum ipset_adt adt, u8 pf, u8 dim, u8 flags)
static int
bitmap_ipmac_uadt(struct ip_set *set, struct nlattr *tb[],
enum ipset_adt adt, u32 *lineno, u32 flags)
static void
bitmap_ipmac_destroy(struct ip_set *set)
static void
bitmap_ipmac_flush(struct ip_set *set)
static int
bitmap_ipmac_head(struct ip_set *set, struct sk_buff *skb)
static bool
bitmap_ipmac_same_set(const struct ip_set *a, const struct ip_set *b)
static const struct ip_set_type_variant bitmap_ipmac = ;
static const struct ip_set_type_variant bitmap_tipmac = ;
static void
bitmap_ipmac_gc(unsigned long ul_set)
static void
bitmap_ipmac_gc_init(struct ip_set *set)
static bool
init_map_ipmac(struct ip_set *set, struct bitmap_ipmac *map,
u32 first_ip, u32 last_ip)
static int
bitmap_ipmac_create(struct ip_set *set, struct nlattr *tb[],
u32 flags)
static struct ip_set_type bitmap_ipmac_type = ;
static int __init
bitmap_ipmac_init(void)
static void __exit
bitmap_ipmac_fini(void)
module_init(bitmap_ipmac_init);
module_exit(bitmap_ipmac_fini);
