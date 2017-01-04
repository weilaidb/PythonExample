struct netlbl_domhsh_tbl ;
static DEFINE_SPINLOCK(netlbl_domhsh_lock);
#define netlbl_domhsh_rcu_deref(p) \
rcu_dereference_check(p, rcu_read_lock_held() || \
lockdep_is_held(&netlbl_domhsh_lock))
static struct netlbl_domhsh_tbl *netlbl_domhsh = NULL;
static struct netlbl_dom_map *netlbl_domhsh_def = NULL;
static void netlbl_domhsh_free_entry(struct rcu_head *entry)
static u32 netlbl_domhsh_hash(const char *key)
static struct netlbl_dom_map *netlbl_domhsh_search(const char *domain)
static struct netlbl_dom_map *netlbl_domhsh_search_def(const char *domain)
static void netlbl_domhsh_audit_add(struct netlbl_dom_map *entry,
struct netlbl_af4list *addr4,
struct netlbl_af6list *addr6,
int result,
struct netlbl_audit *audit_info)
int __init netlbl_domhsh_init(u32 size)
int netlbl_domhsh_add(struct netlbl_dom_map *entry,
struct netlbl_audit *audit_info)
int netlbl_domhsh_add_default(struct netlbl_dom_map *entry,
struct netlbl_audit *audit_info)
int netlbl_domhsh_remove_entry(struct netlbl_dom_map *entry,
struct netlbl_audit *audit_info)
int netlbl_domhsh_remove_af4(const char *domain,
const struct in_addr *addr,
const struct in_addr *mask,
struct netlbl_audit *audit_info)
int netlbl_domhsh_remove(const char *domain, struct netlbl_audit *audit_info)
int netlbl_domhsh_remove_default(struct netlbl_audit *audit_info)
struct netlbl_dom_map *netlbl_domhsh_getentry(const char *domain)
struct netlbl_domaddr4_map *netlbl_domhsh_getentry_af4(const char *domain,
__be32 addr)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
struct netlbl_domaddr6_map *netlbl_domhsh_getentry_af6(const char *domain,
const struct in6_addr *addr)
int netlbl_domhsh_walk(u32 *skip_bkt,
u32 *skip_chain,
int (*callback) (struct netlbl_dom_map *entry, void *arg),
void *cb_arg)
