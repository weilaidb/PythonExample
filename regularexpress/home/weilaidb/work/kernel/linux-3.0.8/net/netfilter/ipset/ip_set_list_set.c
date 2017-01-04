MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jozsef Kadlecsik <kadlec@blackhole.kfki.hu>");
MODULE_DESCRIPTION("list:set type of IP sets");
MODULE_ALIAS("ip_set_list:set");
struct set_elem ;
struct set_telem ;
struct list_set ;
static inline struct set_elem *
list_set_elem(const struct list_set *map, u32 id)
static inline struct set_telem *
list_set_telem(const struct list_set *map, u32 id)
static inline bool
list_set_timeout(const struct list_set *map, u32 id)
static inline bool
list_set_expired(const struct list_set *map, u32 id)
static int
list_set_kadt(struct ip_set *set, const struct sk_buff *skb,
enum ipset_adt adt, u8 pf, u8 dim, u8 flags)
static bool
next_id_eq(const struct list_set *map, u32 i, ip_set_id_t id)
static void
list_elem_add(struct list_set *map, u32 i, ip_set_id_t id)
static void
list_elem_tadd(struct list_set *map, u32 i, ip_set_id_t id,
unsigned long timeout)
static int
list_set_add(struct list_set *map, u32 i, ip_set_id_t id,
unsigned long timeout)
static int
list_set_del(struct list_set *map, u32 i)
static int
list_set_uadt(struct ip_set *set, struct nlattr *tb[],
enum ipset_adt adt, u32 *lineno, u32 flags)
static void
list_set_flush(struct ip_set *set)
static void
list_set_destroy(struct ip_set *set)
static int
list_set_head(struct ip_set *set, struct sk_buff *skb)
static int
list_set_list(const struct ip_set *set,
struct sk_buff *skb, struct netlink_callback *cb)
static bool
list_set_same_set(const struct ip_set *a, const struct ip_set *b)
static const struct ip_set_type_variant list_set = ;
static void
list_set_gc(unsigned long ul_set)
static void
list_set_gc_init(struct ip_set *set)
static bool
init_list_set(struct ip_set *set, u32 size, size_t dsize,
unsigned long timeout)
static int
list_set_create(struct ip_set *set, struct nlattr *tb[], u32 flags)
static struct ip_set_type list_set_type __read_mostly = ;
static int __init
list_set_init(void)
static void __exit
list_set_fini(void)
module_init(list_set_init);
module_exit(list_set_fini);
