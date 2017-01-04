#define IP_SET_BITMAP_TIMEOUT
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jozsef Kadlecsik <kadlec@blackhole.kfki.hu>");
MODULE_DESCRIPTION("bitmap:port type of IP sets");
MODULE_ALIAS("ip_set_bitmap:port");
struct bitmap_port ;
static int
bitmap_port_test(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_port_add(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_port_del(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_port_list(const struct ip_set *set,
struct sk_buff *skb, struct netlink_callback *cb)
static int
bitmap_port_ttest(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_port_tadd(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_port_tdel(struct ip_set *set, void *value, u32 timeout)
static int
bitmap_port_tlist(const struct ip_set *set,
struct sk_buff *skb, struct netlink_callback *cb)
static int
bitmap_port_kadt(struct ip_set *set, const struct sk_buff *skb,
enum ipset_adt adt, u8 pf, u8 dim, u8 flags)
static int
bitmap_port_uadt(struct ip_set *set, struct nlattr *tb[],
enum ipset_adt adt, u32 *lineno, u32 flags)
static void
bitmap_port_destroy(struct ip_set *set)
static void
bitmap_port_flush(struct ip_set *set)
static int
bitmap_port_head(struct ip_set *set, struct sk_buff *skb)
static bool
bitmap_port_same_set(const struct ip_set *a, const struct ip_set *b)
static const struct ip_set_type_variant bitmap_port = ;
static const struct ip_set_type_variant bitmap_tport = ;
static void
bitmap_port_gc(unsigned long ul_set)
static void
bitmap_port_gc_init(struct ip_set *set)
static bool
init_map_port(struct ip_set *set, struct bitmap_port *map,
u16 first_port, u16 last_port)
static int
bitmap_port_create(struct ip_set *set, struct nlattr *tb[],
u32 flags)
static struct ip_set_type bitmap_port_type = ;
static int __init
bitmap_port_init(void)
static void __exit
bitmap_port_fini(void)
module_init(bitmap_port_init);
module_exit(bitmap_port_fini);
