static struct genl_family l2tp_nl_family = ;
static const struct l2tp_nl_cmd_ops *l2tp_nl_cmd_ops[__L2TP_PWTYPE_MAX];
static struct l2tp_session *l2tp_nl_session_find(struct genl_info *info)
static int l2tp_nl_cmd_noop(struct sk_buff *skb, struct genl_info *info)
static int l2tp_nl_cmd_tunnel_create(struct sk_buff *skb, struct genl_info *info)
static int l2tp_nl_cmd_tunnel_delete(struct sk_buff *skb, struct genl_info *info)
static int l2tp_nl_cmd_tunnel_modify(struct sk_buff *skb, struct genl_info *info)
static int l2tp_nl_tunnel_send(struct sk_buff *skb, u32 pid, u32 seq, int flags,
struct l2tp_tunnel *tunnel)
static int l2tp_nl_cmd_tunnel_get(struct sk_buff *skb, struct genl_info *info)
static int l2tp_nl_cmd_tunnel_dump(struct sk_buff *skb, struct netlink_callback *cb)
static int l2tp_nl_cmd_session_create(struct sk_buff *skb, struct genl_info *info)
static int l2tp_nl_cmd_session_delete(struct sk_buff *skb, struct genl_info *info)
static int l2tp_nl_cmd_session_modify(struct sk_buff *skb, struct genl_info *info)
static int l2tp_nl_session_send(struct sk_buff *skb, u32 pid, u32 seq, int flags,
struct l2tp_session *session)
static int l2tp_nl_cmd_session_get(struct sk_buff *skb, struct genl_info *info)
static int l2tp_nl_cmd_session_dump(struct sk_buff *skb, struct netlink_callback *cb)
static struct nla_policy l2tp_nl_policy[L2TP_ATTR_MAX + 1] = ;
static struct genl_ops l2tp_nl_ops[] = ;
int l2tp_nl_register_ops(enum l2tp_pwtype pw_type, const struct l2tp_nl_cmd_ops *ops)
EXPORT_SYMBOL_GPL(l2tp_nl_register_ops);
void l2tp_nl_unregister_ops(enum l2tp_pwtype pw_type)
EXPORT_SYMBOL_GPL(l2tp_nl_unregister_ops);
static int l2tp_nl_init(void)
static void l2tp_nl_cleanup(void)
module_init(l2tp_nl_init);
module_exit(l2tp_nl_cleanup);
MODULE_AUTHOR("James Chapman <jchapman@katalix.com>");
MODULE_DESCRIPTION("L2TP netlink");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.0");
MODULE_ALIAS("net-pf-" __stringify(PF_NETLINK) "-proto-" \
__stringify(NETLINK_GENERIC) "-type-" "l2tp");
