MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jozsef Kadlecsik <kadlec@blackhole.kfki.hu>");
MODULE_DESCRIPTION("hash:ip,port type of IP sets");
MODULE_ALIAS("ip_set_hash:ip,port");
#define TYPE		hash_ipport
static bool
hash_ipport_same_set(const struct ip_set *a, const struct ip_set *b);
#define hash_ipport4_same_set	hash_ipport_same_set
#define hash_ipport6_same_set	hash_ipport_same_set
struct hash_ipport4_elem ;
struct hash_ipport4_telem ;
static inline bool
hash_ipport4_data_equal(const struct hash_ipport4_elem *ip1,
const struct hash_ipport4_elem *ip2)
static inline bool
hash_ipport4_data_isnull(const struct hash_ipport4_elem *elem)
static inline void
hash_ipport4_data_copy(struct hash_ipport4_elem *dst,
const struct hash_ipport4_elem *src)
static inline void
hash_ipport4_data_zero_out(struct hash_ipport4_elem *elem)
static bool
hash_ipport4_data_list(struct sk_buff *skb,
const struct hash_ipport4_elem *data)
static bool
hash_ipport4_data_tlist(struct sk_buff *skb,
const struct hash_ipport4_elem *data)
#define PF		4
#define HOST_MASK	32
static int
hash_ipport4_kadt(struct ip_set *set, const struct sk_buff *skb,
enum ipset_adt adt, u8 pf, u8 dim, u8 flags)
static int
hash_ipport4_uadt(struct ip_set *set, struct nlattr *tb[],
enum ipset_adt adt, u32 *lineno, u32 flags)
static bool
hash_ipport_same_set(const struct ip_set *a, const struct ip_set *b)
struct hash_ipport6_elem ;
struct hash_ipport6_telem ;
static inline bool
hash_ipport6_data_equal(const struct hash_ipport6_elem *ip1,
const struct hash_ipport6_elem *ip2)
static inline bool
hash_ipport6_data_isnull(const struct hash_ipport6_elem *elem)
static inline void
hash_ipport6_data_copy(struct hash_ipport6_elem *dst,
const struct hash_ipport6_elem *src)
static inline void
hash_ipport6_data_zero_out(struct hash_ipport6_elem *elem)
static bool
hash_ipport6_data_list(struct sk_buff *skb,
const struct hash_ipport6_elem *data)
static bool
hash_ipport6_data_tlist(struct sk_buff *skb,
const struct hash_ipport6_elem *data)
#undef PF
#undef HOST_MASK
#define PF		6
#define HOST_MASK	128
static int
hash_ipport6_kadt(struct ip_set *set, const struct sk_buff *skb,
enum ipset_adt adt, u8 pf, u8 dim, u8 flags)
static int
hash_ipport6_uadt(struct ip_set *set, struct nlattr *tb[],
enum ipset_adt adt, u32 *lineno, u32 flags)
static int
hash_ipport_create(struct ip_set *set, struct nlattr *tb[], u32 flags)
static struct ip_set_type hash_ipport_type __read_mostly = ;
static int __init
hash_ipport_init(void)
static void __exit
hash_ipport_fini(void)
module_init(hash_ipport_init);
module_exit(hash_ipport_fini);
