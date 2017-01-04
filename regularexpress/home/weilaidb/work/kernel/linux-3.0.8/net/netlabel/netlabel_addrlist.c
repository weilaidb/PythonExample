struct netlbl_af4list *netlbl_af4list_search(__be32 addr,
struct list_head *head)
struct netlbl_af4list *netlbl_af4list_search_exact(__be32 addr,
__be32 mask,
struct list_head *head)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
struct netlbl_af6list *netlbl_af6list_search(const struct in6_addr *addr,
struct list_head *head)
struct netlbl_af6list *netlbl_af6list_search_exact(const struct in6_addr *addr,
const struct in6_addr *mask,
struct list_head *head)
int netlbl_af4list_add(struct netlbl_af4list *entry, struct list_head *head)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
int netlbl_af6list_add(struct netlbl_af6list *entry, struct list_head *head)
void netlbl_af4list_remove_entry(struct netlbl_af4list *entry)
struct netlbl_af4list *netlbl_af4list_remove(__be32 addr, __be32 mask,
struct list_head *head)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
void netlbl_af6list_remove_entry(struct netlbl_af6list *entry)
struct netlbl_af6list *netlbl_af6list_remove(const struct in6_addr *addr,
const struct in6_addr *mask,
struct list_head *head)
void netlbl_af4list_audit_addr(struct audit_buffer *audit_buf,
int src, const char *dev,
__be32 addr, __be32 mask)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
void netlbl_af6list_audit_addr(struct audit_buffer *audit_buf,
int src,
const char *dev,
const struct in6_addr *addr,
const struct in6_addr *mask)
