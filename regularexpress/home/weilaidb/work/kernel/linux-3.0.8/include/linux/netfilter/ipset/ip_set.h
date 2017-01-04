#define _IP_SET_H
#define IPSET_PROTOCOL		6
#define IPSET_MAXNAMELEN	32
enum ipset_cmd ;
enum ;
#define IPSET_ATTR_CMD_MAX	(__IPSET_ATTR_CMD_MAX - 1)
enum ;
#define IPSET_ATTR_CREATE_MAX	(__IPSET_ATTR_CREATE_MAX - 1)
enum ;
#define IPSET_ATTR_ADT_MAX	(__IPSET_ATTR_ADT_MAX - 1)
enum ;
#define IPSET_ATTR_IPADDR_MAX	(__IPSET_ATTR_IPADDR_MAX - 1)
enum ipset_errno ;
enum ipset_cmd_flags ;
enum ipset_cadt_flags ;
enum ipset_adt ;
typedef u16 ip_set_id_t;
#define IPSET_INVALID_ID		65535
enum ip_set_dim ;
enum ip_set_kopt ;
enum ip_set_feature ;
struct ip_set;
typedef int (*ipset_adtfn)(struct ip_set *set, void *value, u32 timeout);
struct ip_set_type_variant ;
struct ip_set_type ;
extern int ip_set_type_register(struct ip_set_type *set_type);
extern void ip_set_type_unregister(struct ip_set_type *set_type);
struct ip_set ;
extern ip_set_id_t ip_set_get_byname(const char *name, struct ip_set **set);
extern void ip_set_put_byindex(ip_set_id_t index);
extern const char * ip_set_name_byindex(ip_set_id_t index);
extern ip_set_id_t ip_set_nfnl_get(const char *name);
extern ip_set_id_t ip_set_nfnl_get_byindex(ip_set_id_t index);
extern void ip_set_nfnl_put(ip_set_id_t index);
extern int ip_set_add(ip_set_id_t id, const struct sk_buff *skb,
u8 family, u8 dim, u8 flags);
extern int ip_set_del(ip_set_id_t id, const struct sk_buff *skb,
u8 family, u8 dim, u8 flags);
extern int ip_set_test(ip_set_id_t id, const struct sk_buff *skb,
u8 family, u8 dim, u8 flags);
extern void * ip_set_alloc(size_t size);
extern void ip_set_free(void *members);
extern int ip_set_get_ipaddr4(struct nlattr *nla,  __be32 *ipaddr);
extern int ip_set_get_ipaddr6(struct nlattr *nla, union nf_inet_addr *ipaddr);
static inline int
ip_set_get_hostipaddr4(struct nlattr *nla, u32 *ipaddr)
static inline bool
ip_set_eexist(int ret, u32 flags)
static inline bool
ip_set_attr_netorder(struct nlattr *tb[], int type)
static inline bool
ip_set_optattr_netorder(struct nlattr *tb[], int type)
static inline u32
ip_set_get_h32(const struct nlattr *attr)
static inline u16
ip_set_get_h16(const struct nlattr *attr)
#define ipset_nest_start(skb, attr) nla_nest_start(skb, attr | NLA_F_NESTED)
#define ipset_nest_end(skb, start)  nla_nest_end(skb, start)
#define NLA_PUT_IPADDR4(skb, type, ipaddr)			\
do  while (0)
#define NLA_PUT_IPADDR6(skb, type, ipaddrptr)			\
do  while (0)
static inline __be32
ip4addr(const struct sk_buff *skb, bool src)
static inline void
ip4addrptr(const struct sk_buff *skb, bool src, __be32 *addr)
static inline void
ip6addrptr(const struct sk_buff *skb, bool src, struct in6_addr *addr)
static inline int
bitmap_bytes(u32 a, u32 b)
#define SO_IP_SET		83
union ip_set_name_index ;
#define IP_SET_OP_GET_BYNAME	0x00000006
struct ip_set_req_get_set ;
#define IP_SET_OP_GET_BYINDEX	0x00000007
#define IP_SET_OP_VERSION	0x00000100
struct ip_set_req_version ;
