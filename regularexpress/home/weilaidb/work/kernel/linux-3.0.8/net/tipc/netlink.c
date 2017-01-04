static int handle_cmd(struct sk_buff *skb, struct genl_info *info)
static struct genl_family tipc_genl_family = ;
static struct genl_ops tipc_genl_ops = ;
static int tipc_genl_family_registered;
int tipc_netlink_start(void)
void tipc_netlink_stop(void)
