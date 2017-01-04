#define D_SUBMODULE op_reset
int wimax_reset(struct wimax_dev *wimax_dev)
EXPORT_SYMBOL(wimax_reset);
static const struct nla_policy wimax_gnl_reset_policy[WIMAX_GNL_ATTR_MAX + 1] = ;
static
int wimax_gnl_doit_reset(struct sk_buff *skb, struct genl_info *info)
struct genl_ops wimax_gnl_reset = ;
