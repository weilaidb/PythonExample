#define IP_SET_BITMAP_TIMEOUT
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jozsef Kadlecsik <kadlec@blackhole.kfki.hu>");
MODULE_DESCRIPTION("bitmap:ip type of IP sets");
MODULE_ALIAS("ip_set_bitmap:ip");
struct bitmap_ip ;
static inline u32
ip_to_id(const struct bitmap_ip *m, u32 ip)
static int
bitmap_ip_test(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ip_add(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ip_del(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ip_list(const struct ip_set *set,
struct sk_buff *skb, struct netlink_callback *cb)
static int
bitmap_ip_ttest(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ip_tadd(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ip_tdel(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_ip_tlist(const struct ip_set *set,
struct sk_buff *skb, struct netlink_callback *cb)
static int
bitmap_ip_kadt(struct ip_set *set, const struct sk_buff *skb,
enum ipset_adt adt, u8 pf, u8 dim, u8 flags)
static int
bitmap_ip_uadt(struct ip_set *set, struct nlattr *tb[],
enum ipset_adt adt, u32 *lineno, u32 flags)
static void
bitmap_ip_destroy(struct ip_set *set)
static void
bitmap_ip_flush(struct ip_set *set)
static int
bitmap_ip_head(struct ip_set *set, struct sk_buff *skb)
static bool
bitmap_ip_same_set(const struct ip_set *a, const struct ip_set *b)
static const struct ip_set_type_variant bitmap_ip = ;
static const struct ip_set_type_variant bitmap_tip = ;
static void
bitmap_ip_gc(unsigned long ul_set)
static void
bitmap_ip_gc_init(struct ip_set *set)
static bool
init_map_ip(struct ip_set *set, struct bitmap_ip *map,
u32 first_ip, u32 last_ip,
u32 elements, u32 hosts, u8 netmask)
static int
bitmap_ip_create(struct ip_set *set, struct nlattr *tb[], u32 flags)
static struct ip_set_type bitmap_ip_type __read_mostly = ;
static int __init
bitmap_ip_init(void)
static void __exit
bitmap_ip_fini(void)
module_init(bitmap_ip_init);
module_exit(bitmap_ip_fini);
