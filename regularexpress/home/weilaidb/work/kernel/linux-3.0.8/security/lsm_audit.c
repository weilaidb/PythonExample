int ipv4_skb_to_auditdata(struct sk_buff *skb,
struct common_audit_data *ad, u8 *proto)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
int ipv6_skb_to_auditdata(struct sk_buff *skb,
struct common_audit_data *ad, u8 *proto)
static inline void print_ipv6_addr(struct audit_buffer *ab,
struct in6_addr *addr, __be16 port,
char *name1, char *name2)
static inline void print_ipv4_addr(struct audit_buffer *ab, __be32 addr,
__be16 port, char *name1, char *name2)
static void dump_common_audit_data(struct audit_buffer *ab,
struct common_audit_data *a)
void common_lsm_audit(struct common_audit_data *a)
