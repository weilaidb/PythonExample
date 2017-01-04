#define __NET_NETLINK_H
enum ;
#define NLA_TYPE_MAX (__NLA_TYPE_MAX - 1)
struct nla_policy ;
struct nl_info ;
extern int		netlink_rcv_skb(struct sk_buff *skb,
int (*cb)(struct sk_buff *,
struct nlmsghdr *));
extern int		nlmsg_notify(struct sock *sk, struct sk_buff *skb,
u32 pid, unsigned int group, int report,
gfp_t flags);
extern int		nla_validate(const struct nlattr *head,
int len, int maxtype,
const struct nla_policy *policy);
extern int		nla_parse(struct nlattr **tb, int maxtype,
const struct nlattr *head, int len,
const struct nla_policy *policy);
extern int		nla_policy_len(const struct nla_policy *, int);
extern struct nlattr *	nla_find(const struct nlattr *head,
int len, int attrtype);
extern size_t		nla_strlcpy(char *dst, const struct nlattr *nla,
size_t dstsize);
extern int		nla_memcpy(void *dest, const struct nlattr *src, int count);
extern int		nla_memcmp(const struct nlattr *nla, const void *data,
size_t size);
extern int		nla_strcmp(const struct nlattr *nla, const char *str);
extern struct nlattr *	__nla_reserve(struct sk_buff *skb, int attrtype,
int attrlen);
extern void *		__nla_reserve_nohdr(struct sk_buff *skb, int attrlen);
extern struct nlattr *	nla_reserve(struct sk_buff *skb, int attrtype,
int attrlen);
extern void *		nla_reserve_nohdr(struct sk_buff *skb, int attrlen);
extern void		__nla_put(struct sk_buff *skb, int attrtype,
int attrlen, const void *data);
extern void		__nla_put_nohdr(struct sk_buff *skb, int attrlen,
const void *data);
extern int		nla_put(struct sk_buff *skb, int attrtype,
int attrlen, const void *data);
extern int		nla_put_nohdr(struct sk_buff *skb, int attrlen,
const void *data);
extern int		nla_append(struct sk_buff *skb, int attrlen,
const void *data);
static inline int nlmsg_msg_size(int payload)
static inline int nlmsg_total_size(int payload)
static inline int nlmsg_padlen(int payload)
static inline void *nlmsg_data(const struct nlmsghdr *nlh)
static inline int nlmsg_len(const struct nlmsghdr *nlh)
static inline struct nlattr *nlmsg_attrdata(const struct nlmsghdr *nlh,
int hdrlen)
static inline int nlmsg_attrlen(const struct nlmsghdr *nlh, int hdrlen)
static inline int nlmsg_ok(const struct nlmsghdr *nlh, int remaining)
static inline struct nlmsghdr *
nlmsg_next(const struct nlmsghdr *nlh, int *remaining)
static inline int nlmsg_parse(const struct nlmsghdr *nlh, int hdrlen,
struct nlattr *tb[], int maxtype,
const struct nla_policy *policy)
static inline struct nlattr *nlmsg_find_attr(const struct nlmsghdr *nlh,
int hdrlen, int attrtype)
static inline int nlmsg_validate(const struct nlmsghdr *nlh,
int hdrlen, int maxtype,
const struct nla_policy *policy)
static inline int nlmsg_report(const struct nlmsghdr *nlh)
#define nlmsg_for_each_attr(pos, nlh, hdrlen, rem) \
nla_for_each_attr(pos, nlmsg_attrdata(nlh, hdrlen), \
nlmsg_attrlen(nlh, hdrlen), rem)
static inline struct nlmsghdr *nlmsg_put(struct sk_buff *skb, u32 pid, u32 seq,
int type, int payload, int flags)
static inline struct nlmsghdr *nlmsg_put_answer(struct sk_buff *skb,
struct netlink_callback *cb,
int type, int payload,
int flags)
static inline struct sk_buff *nlmsg_new(size_t payload, gfp_t flags)
static inline int nlmsg_end(struct sk_buff *skb, struct nlmsghdr *nlh)
static inline void *nlmsg_get_pos(struct sk_buff *skb)
static inline void nlmsg_trim(struct sk_buff *skb, const void *mark)
static inline void nlmsg_cancel(struct sk_buff *skb, struct nlmsghdr *nlh)
static inline void nlmsg_free(struct sk_buff *skb)
static inline int nlmsg_multicast(struct sock *sk, struct sk_buff *skb,
u32 pid, unsigned int group, gfp_t flags)
static inline int nlmsg_unicast(struct sock *sk, struct sk_buff *skb, u32 pid)
#define nlmsg_for_each_msg(pos, head, len, rem) \
for (pos = head, rem = len; \
nlmsg_ok(pos, rem); \
pos = nlmsg_next(pos, &(rem)))
static inline int nla_attr_size(int payload)
static inline int nla_total_size(int payload)
static inline int nla_padlen(int payload)
static inline int nla_type(const struct nlattr *nla)
static inline void *nla_data(const struct nlattr *nla)
static inline int nla_len(const struct nlattr *nla)
static inline int nla_ok(const struct nlattr *nla, int remaining)
static inline struct nlattr *nla_next(const struct nlattr *nla, int *remaining)
static inline struct nlattr *
nla_find_nested(const struct nlattr *nla, int attrtype)
static inline int nla_parse_nested(struct nlattr *tb[], int maxtype,
const struct nlattr *nla,
const struct nla_policy *policy)
static inline int nla_put_u8(struct sk_buff *skb, int attrtype, u8 value)
static inline int nla_put_u16(struct sk_buff *skb, int attrtype, u16 value)
static inline int nla_put_u32(struct sk_buff *skb, int attrtype, u32 value)
static inline int nla_put_u64(struct sk_buff *skb, int attrtype, u64 value)
static inline int nla_put_string(struct sk_buff *skb, int attrtype,
const char *str)
static inline int nla_put_flag(struct sk_buff *skb, int attrtype)
static inline int nla_put_msecs(struct sk_buff *skb, int attrtype,
unsigned long jiffies)
#define NLA_PUT(skb, attrtype, attrlen, data) \
do  while(0)
#define NLA_PUT_TYPE(skb, type, attrtype, value) \
do  while(0)
#define NLA_PUT_U8(skb, attrtype, value) \
NLA_PUT_TYPE(skb, u8, attrtype, value)
#define NLA_PUT_U16(skb, attrtype, value) \
NLA_PUT_TYPE(skb, u16, attrtype, value)
#define NLA_PUT_LE16(skb, attrtype, value) \
NLA_PUT_TYPE(skb, __le16, attrtype, value)
#define NLA_PUT_BE16(skb, attrtype, value) \
NLA_PUT_TYPE(skb, __be16, attrtype, value)
#define NLA_PUT_NET16(skb, attrtype, value) \
NLA_PUT_BE16(skb, attrtype | NLA_F_NET_BYTEORDER, value)
#define NLA_PUT_U32(skb, attrtype, value) \
NLA_PUT_TYPE(skb, u32, attrtype, value)
#define NLA_PUT_BE32(skb, attrtype, value) \
NLA_PUT_TYPE(skb, __be32, attrtype, value)
#define NLA_PUT_NET32(skb, attrtype, value) \
NLA_PUT_BE32(skb, attrtype | NLA_F_NET_BYTEORDER, value)
#define NLA_PUT_U64(skb, attrtype, value) \
NLA_PUT_TYPE(skb, u64, attrtype, value)
#define NLA_PUT_BE64(skb, attrtype, value) \
NLA_PUT_TYPE(skb, __be64, attrtype, value)
#define NLA_PUT_NET64(skb, attrtype, value) \
NLA_PUT_BE64(skb, attrtype | NLA_F_NET_BYTEORDER, value)
#define NLA_PUT_STRING(skb, attrtype, value) \
NLA_PUT(skb, attrtype, strlen(value) + 1, value)
#define NLA_PUT_FLAG(skb, attrtype) \
NLA_PUT(skb, attrtype, 0, NULL)
#define NLA_PUT_MSECS(skb, attrtype, jiffies) \
NLA_PUT_U64(skb, attrtype, jiffies_to_msecs(jiffies))
static inline u32 nla_get_u32(const struct nlattr *nla)
static inline __be32 nla_get_be32(const struct nlattr *nla)
static inline u16 nla_get_u16(const struct nlattr *nla)
static inline __be16 nla_get_be16(const struct nlattr *nla)
static inline __le16 nla_get_le16(const struct nlattr *nla)
static inline u8 nla_get_u8(const struct nlattr *nla)
static inline u64 nla_get_u64(const struct nlattr *nla)
static inline __be64 nla_get_be64(const struct nlattr *nla)
static inline int nla_get_flag(const struct nlattr *nla)
static inline unsigned long nla_get_msecs(const struct nlattr *nla)
static inline struct nlattr *nla_nest_start(struct sk_buff *skb, int attrtype)
static inline int nla_nest_end(struct sk_buff *skb, struct nlattr *start)
static inline void nla_nest_cancel(struct sk_buff *skb, struct nlattr *start)
static inline int nla_validate_nested(const struct nlattr *start, int maxtype,
const struct nla_policy *policy)
#define nla_for_each_attr(pos, head, len, rem) \
for (pos = head, rem = len; \
nla_ok(pos, rem); \
pos = nla_next(pos, &(rem)))
#define nla_for_each_nested(pos, nla, rem) \
nla_for_each_attr(pos, nla_data(nla), nla_len(nla), rem)
