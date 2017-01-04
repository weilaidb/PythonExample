static const u16 nla_attr_minlen[NLA_TYPE_MAX+1] = ;
static int validate_nla(const struct nlattr *nla, int maxtype,
const struct nla_policy *policy)
int nla_validate(const struct nlattr *head, int len, int maxtype,
const struct nla_policy *policy)
int
nla_policy_len(const struct nla_policy *p, int n)
int nla_parse(struct nlattr **tb, int maxtype, const struct nlattr *head,
int len, const struct nla_policy *policy)
struct nlattr *nla_find(const struct nlattr *head, int len, int attrtype)
size_t nla_strlcpy(char *dst, const struct nlattr *nla, size_t dstsize)
int nla_memcpy(void *dest, const struct nlattr *src, int count)
int nla_memcmp(const struct nlattr *nla, const void *data,
size_t size)
int nla_strcmp(const struct nlattr *nla, const char *str)
struct nlattr *__nla_reserve(struct sk_buff *skb, int attrtype, int attrlen)
EXPORT_SYMBOL(__nla_reserve);
void *__nla_reserve_nohdr(struct sk_buff *skb, int attrlen)
EXPORT_SYMBOL(__nla_reserve_nohdr);
struct nlattr *nla_reserve(struct sk_buff *skb, int attrtype, int attrlen)
EXPORT_SYMBOL(nla_reserve);
void *nla_reserve_nohdr(struct sk_buff *skb, int attrlen)
EXPORT_SYMBOL(nla_reserve_nohdr);
void __nla_put(struct sk_buff *skb, int attrtype, int attrlen,
const void *data)
EXPORT_SYMBOL(__nla_put);
void __nla_put_nohdr(struct sk_buff *skb, int attrlen, const void *data)
EXPORT_SYMBOL(__nla_put_nohdr);
int nla_put(struct sk_buff *skb, int attrtype, int attrlen, const void *data)
EXPORT_SYMBOL(nla_put);
int nla_put_nohdr(struct sk_buff *skb, int attrlen, const void *data)
EXPORT_SYMBOL(nla_put_nohdr);
int nla_append(struct sk_buff *skb, int attrlen, const void *data)
EXPORT_SYMBOL(nla_append);
EXPORT_SYMBOL(nla_validate);
EXPORT_SYMBOL(nla_policy_len);
EXPORT_SYMBOL(nla_parse);
EXPORT_SYMBOL(nla_find);
EXPORT_SYMBOL(nla_strlcpy);
EXPORT_SYMBOL(nla_memcpy);
EXPORT_SYMBOL(nla_memcmp);
EXPORT_SYMBOL(nla_strcmp);
