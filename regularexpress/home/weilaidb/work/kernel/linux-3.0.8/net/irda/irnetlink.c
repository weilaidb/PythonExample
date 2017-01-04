static struct genl_family irda_nl_family = ;
static struct net_device * ifname_to_netdev(struct net *net, struct genl_info *info)
static int irda_nl_set_mode(struct sk_buff *skb, struct genl_info *info)
static int irda_nl_get_mode(struct sk_buff *skb, struct genl_info *info)
static const struct nla_policy irda_nl_policy[IRDA_NL_ATTR_MAX + 1] = ;
static struct genl_ops irda_nl_ops[] = ;
int irda_nl_register(void)
void irda_nl_unregister(void)
