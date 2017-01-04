#define _NETLABEL_ADDRLIST_H
struct netlbl_af4list ;
struct netlbl_af6list ;
#define __af4list_entry(ptr) container_of(ptr, struct netlbl_af4list, list)
static inline struct netlbl_af4list *__af4list_valid(struct list_head *s,
struct list_head *h)
static inline struct netlbl_af4list *__af4list_valid_rcu(struct list_head *s,
struct list_head *h)
#define netlbl_af4list_foreach(iter, head)				\
for (iter = __af4list_valid((head)->next, head);		\
&iter->list != (head);					\
iter = __af4list_valid(iter->list.next, head))
#define netlbl_af4list_foreach_rcu(iter, head)				\
for (iter = __af4list_valid_rcu((head)->next, head);		\
&iter->list != (head);					\
iter = __af4list_valid_rcu(iter->list.next, head))
#define netlbl_af4list_foreach_safe(iter, tmp, head)			\
for (iter = __af4list_valid((head)->next, head),		\
tmp = __af4list_valid(iter->list.next, head);	\
&iter->list != (head);					\
iter = tmp, tmp = __af4list_valid(iter->list.next, head))
int netlbl_af4list_add(struct netlbl_af4list *entry,
struct list_head *head);
struct netlbl_af4list *netlbl_af4list_remove(__be32 addr, __be32 mask,
struct list_head *head);
void netlbl_af4list_remove_entry(struct netlbl_af4list *entry);
struct netlbl_af4list *netlbl_af4list_search(__be32 addr,
struct list_head *head);
struct netlbl_af4list *netlbl_af4list_search_exact(__be32 addr,
__be32 mask,
struct list_head *head);
void netlbl_af4list_audit_addr(struct audit_buffer *audit_buf,
int src, const char *dev,
__be32 addr, __be32 mask);
static inline void netlbl_af4list_audit_addr(struct audit_buffer *audit_buf,
int src, const char *dev,
__be32 addr, __be32 mask)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
#define __af6list_entry(ptr) container_of(ptr, struct netlbl_af6list, list)
static inline struct netlbl_af6list *__af6list_valid(struct list_head *s,
struct list_head *h)
static inline struct netlbl_af6list *__af6list_valid_rcu(struct list_head *s,
struct list_head *h)
#define netlbl_af6list_foreach(iter, head)				\
for (iter = __af6list_valid((head)->next, head);		\
&iter->list != (head);					\
iter = __af6list_valid(iter->list.next, head))
#define netlbl_af6list_foreach_rcu(iter, head)				\
for (iter = __af6list_valid_rcu((head)->next, head);		\
&iter->list != (head);					\
iter = __af6list_valid_rcu(iter->list.next, head))
#define netlbl_af6list_foreach_safe(iter, tmp, head)			\
for (iter = __af6list_valid((head)->next, head),		\
tmp = __af6list_valid(iter->list.next, head);	\
&iter->list != (head);					\
iter = tmp, tmp = __af6list_valid(iter->list.next, head))
int netlbl_af6list_add(struct netlbl_af6list *entry,
struct list_head *head);
struct netlbl_af6list *netlbl_af6list_remove(const struct in6_addr *addr,
const struct in6_addr *mask,
struct list_head *head);
void netlbl_af6list_remove_entry(struct netlbl_af6list *entry);
struct netlbl_af6list *netlbl_af6list_search(const struct in6_addr *addr,
struct list_head *head);
struct netlbl_af6list *netlbl_af6list_search_exact(const struct in6_addr *addr,
const struct in6_addr *mask,
struct list_head *head);
void netlbl_af6list_audit_addr(struct audit_buffer *audit_buf,
int src,
const char *dev,
const struct in6_addr *addr,
const struct in6_addr *mask);
static inline void netlbl_af6list_audit_addr(struct audit_buffer *audit_buf,
int src,
const char *dev,
const struct in6_addr *addr,
const struct in6_addr *mask)
