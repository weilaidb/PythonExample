#define _NETLABEL_DOMAINHASH_H
#define NETLBL_DOMHSH_BITSIZE       7
#define netlbl_domhsh_addr4_entry(iter) \
container_of(iter, struct netlbl_domaddr4_map, list)
struct netlbl_domaddr4_map ;
#define netlbl_domhsh_addr6_entry(iter) \
container_of(iter, struct netlbl_domaddr6_map, list)
struct netlbl_domaddr6_map ;
struct netlbl_domaddr_map ;
struct netlbl_dom_map ;
int netlbl_domhsh_init(u32 size);
int netlbl_domhsh_add(struct netlbl_dom_map *entry,
struct netlbl_audit *audit_info);
int netlbl_domhsh_add_default(struct netlbl_dom_map *entry,
struct netlbl_audit *audit_info);
int netlbl_domhsh_remove_entry(struct netlbl_dom_map *entry,
struct netlbl_audit *audit_info);
int netlbl_domhsh_remove_af4(const char *domain,
const struct in_addr *addr,
const struct in_addr *mask,
struct netlbl_audit *audit_info);
int netlbl_domhsh_remove(const char *domain, struct netlbl_audit *audit_info);
int netlbl_domhsh_remove_default(struct netlbl_audit *audit_info);
struct netlbl_dom_map *netlbl_domhsh_getentry(const char *domain);
struct netlbl_domaddr4_map *netlbl_domhsh_getentry_af4(const char *domain,
__be32 addr);
int netlbl_domhsh_walk(u32 *skip_bkt,
u32 *skip_chain,
int (*callback) (struct netlbl_dom_map *entry, void *arg),
void *cb_arg);
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
struct netlbl_domaddr6_map *netlbl_domhsh_getentry_af6(const char *domain,
const struct in6_addr *addr);
