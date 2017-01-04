#define __NET_RTNETLINK_H
typedef int (*rtnl_doit_func)(struct sk_buff *, struct nlmsghdr *, void *);
typedef int (*rtnl_dumpit_func)(struct sk_buff *, struct netlink_callback *);
extern int	__rtnl_register(int protocol, int msgtype,
rtnl_doit_func, rtnl_dumpit_func);
extern void	rtnl_register(int protocol, int msgtype,
rtnl_doit_func, rtnl_dumpit_func);
extern int	rtnl_unregister(int protocol, int msgtype);
extern void	rtnl_unregister_all(int protocol);
static inline int rtnl_msg_family(const struct nlmsghdr *nlh)
struct rtnl_link_ops ;
extern int	__rtnl_link_register(struct rtnl_link_ops *ops);
extern void	__rtnl_link_unregister(struct rtnl_link_ops *ops);
extern int	rtnl_link_register(struct rtnl_link_ops *ops);
extern void	rtnl_link_unregister(struct rtnl_link_ops *ops);
struct rtnl_af_ops ;
extern int	__rtnl_af_register(struct rtnl_af_ops *ops);
extern void	__rtnl_af_unregister(struct rtnl_af_ops *ops);
extern int	rtnl_af_register(struct rtnl_af_ops *ops);
extern void	rtnl_af_unregister(struct rtnl_af_ops *ops);
extern struct net *rtnl_link_get_net(struct net *src_net, struct nlattr *tb[]);
extern struct net_device *rtnl_create_link(struct net *src_net, struct net *net,
char *ifname, const struct rtnl_link_ops *ops, struct nlattr *tb[]);
extern int rtnl_configure_link(struct net_device *dev,
const struct ifinfomsg *ifm);
extern const struct nla_policy ifla_policy[IFLA_MAX+1];
#define MODULE_ALIAS_RTNL_LINK(kind) MODULE_ALIAS("rtnl-link-" kind)
