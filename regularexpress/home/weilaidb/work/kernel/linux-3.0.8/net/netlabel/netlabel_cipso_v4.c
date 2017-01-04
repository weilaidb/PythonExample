struct netlbl_cipsov4_doiwalk_arg ;
struct netlbl_domhsh_walk_arg ;
static struct genl_family netlbl_cipsov4_gnl_family = ;
static const struct nla_policy netlbl_cipsov4_genl_policy[NLBL_CIPSOV4_A_MAX + 1] = ;
static int netlbl_cipsov4_add_common(struct genl_info *info,
struct cipso_v4_doi *doi_def)
static int netlbl_cipsov4_add_std(struct genl_info *info,
struct netlbl_audit *audit_info)
static int netlbl_cipsov4_add_pass(struct genl_info *info,
struct netlbl_audit *audit_info)
static int netlbl_cipsov4_add_local(struct genl_info *info,
struct netlbl_audit *audit_info)
static int netlbl_cipsov4_add(struct sk_buff *skb, struct genl_info *info)
static int netlbl_cipsov4_list(struct sk_buff *skb, struct genl_info *info)
static int netlbl_cipsov4_listall_cb(struct cipso_v4_doi *doi_def, void *arg)
static int netlbl_cipsov4_listall(struct sk_buff *skb,
struct netlink_callback *cb)
static int netlbl_cipsov4_remove_cb(struct netlbl_dom_map *entry, void *arg)
static int netlbl_cipsov4_remove(struct sk_buff *skb, struct genl_info *info)
static struct genl_ops netlbl_cipsov4_ops[] = ;
int __init netlbl_cipsov4_genl_init(void)
