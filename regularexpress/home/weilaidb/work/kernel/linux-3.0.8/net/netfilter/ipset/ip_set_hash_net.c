MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jozsef Kadlecsik <kadlec@blackhole.kfki.hu>");
MODULE_DESCRIPTION("hash:net type of IP sets");
MODULE_ALIAS("ip_set_hash:net");
#define TYPE		hash_net
static bool
hash_net_same_set(const struct ip_set *a, const struct ip_set *b);
#define hash_net4_same_set	hash_net_same_set
#define hash_net6_same_set	hash_net_same_set
struct hash_net4_elem ;
struct hash_net4_telem ;
static inline bool
hash_net4_data_equal(const struct hash_net4_elem *ip1,
const struct hash_net4_elem *ip2)
static inline bool
hash_net4_data_isnull(const struct hash_net4_elem *elem)
static inline void
hash_net4_data_copy(struct hash_net4_elem *dst,
const struct hash_net4_elem *src)
static inline void
hash_net4_data_netmask(struct hash_net4_elem *elem, u8 cidr)
static inline void
hash_net4_data_zero_out(struct hash_net4_elem *elem)
static bool
hash_net4_data_list(struct sk_buff *skb, const struct hash_net4_elem *data)
static bool
hash_net4_data_tlist(struct sk_buff *skb, const struct hash_net4_elem *data)
#define IP_SET_HASH_WITH_NETS
#define PF		4
#define HOST_MASK	32
static int
hash_net4_kadt(struct ip_set *set, const struct sk_buff *skb,
enum ipset_adt adt, u8 pf, u8 dim, u8 flags)
static int
hash_net4_uadt(struct ip_set *set, struct nlattr *tb[],
enum ipset_adt adt, u32 *lineno, u32 flags)
static bool
hash_net_same_set(const struct ip_set *a, const struct ip_set *b)
struct hash_net6_elem ;
struct hash_net6_telem ;
static inline bool
hash_net6_data_equal(const struct hash_net6_elem *ip1,
const struct hash_net6_elem *ip2)
static inline bool
hash_net6_data_isnull(const struct hash_net6_elem *elem)
static inline void
hash_net6_data_copy(struct hash_net6_elem *dst,
const struct hash_net6_elem *src)
static inline void
hash_net6_data_zero_out(struct hash_net6_elem *elem)
static inline void
ip6_netmask(union nf_inet_addr *ip, u8 prefix)
static inline void
hash_net6_data_netmask(struct hash_net6_elem *elem, u8 cidr)
static bool
hash_net6_data_list(struct sk_buff *skb, const struct hash_net6_elem *data)
static bool
hash_net6_data_tlist(struct sk_buff *skb, const struct hash_net6_elem *data)
#undef PF
#undef HOST_MASK
#define PF		6
#define HOST_MASK	128
static int
hash_net6_kadt(struct ip_set *set, const struct sk_buff *skb,
enum ipset_adt adt, u8 pf, u8 dim, u8 flags)
static int
hash_net6_uadt(struct ip_set *set, struct nlattr *tb[],
enum ipset_adt adt, u32 *lineno, u32 flags)
static int
hash_net_create(struct ip_set *set, struct nlattr *tb[], u32 flags)
static struct ip_set_type hash_net_type __read_mostly = ;
static int __init
hash_net_init(void)
static void __exit
hash_net_fini(void)
module_init(hash_net_init);
module_exit(hash_net_fini);
