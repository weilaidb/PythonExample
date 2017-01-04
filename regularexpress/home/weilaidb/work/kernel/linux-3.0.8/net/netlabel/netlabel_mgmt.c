atomic_t netlabel_mgmt_protocount = ATOMIC_INIT(0);
struct netlbl_domhsh_walk_arg ;
static struct genl_family netlbl_mgmt_gnl_family = ;
static const struct nla_policy netlbl_mgmt_genl_policy[NLBL_MGMT_A_MAX + 1] = ;
static int netlbl_mgmt_add_common(struct genl_info *info,
struct netlbl_audit *audit_info)
static int netlbl_mgmt_listentry(struct sk_buff *skb,
struct netlbl_dom_map *entry)
static int netlbl_mgmt_add(struct sk_buff *skb, struct genl_info *info)
static int netlbl_mgmt_remove(struct sk_buff *skb, struct genl_info *info)
static int netlbl_mgmt_listall_cb(struct netlbl_dom_map *entry, void *arg)
static int netlbl_mgmt_listall(struct sk_buff *skb,
struct netlink_callback *cb)
static int netlbl_mgmt_adddef(struct sk_buff *skb, struct genl_info *info)
static int netlbl_mgmt_removedef(struct sk_buff *skb, struct genl_info *info)
static int netlbl_mgmt_listdef(struct sk_buff *skb, struct genl_info *info)
static int netlbl_mgmt_protocols_cb(struct sk_buff *skb,
struct netlink_callback *cb,
u32 protocol)
static int netlbl_mgmt_protocols(struct sk_buff *skb,
struct netlink_callback *cb)
static int netlbl_mgmt_version(struct sk_buff *skb, struct genl_info *info)
static struct genl_ops netlbl_mgmt_genl_ops[] = ;
int __init netlbl_mgmt_genl_init(void)
