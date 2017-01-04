#define _NFNETLINK_H
enum nfnetlink_groups ;
#define NFNLGRP_MAX	(__NFNLGRP_MAX - 1)
struct nfgenmsg ;
#define NFNETLINK_V0	0
#define NFNL_SUBSYS_ID(x)	((x & 0xff00) >> 8)
#define NFNL_MSG_TYPE(x)	(x & 0x00ff)
#define NFNL_SUBSYS_NONE 		0
#define NFNL_SUBSYS_CTNETLINK		1
#define NFNL_SUBSYS_CTNETLINK_EXP	2
#define NFNL_SUBSYS_QUEUE		3
#define NFNL_SUBSYS_ULOG		4
#define NFNL_SUBSYS_OSF			5
#define NFNL_SUBSYS_IPSET		6
#define NFNL_SUBSYS_COUNT		7
struct nfnl_callback ;
struct nfnetlink_subsystem ;
extern int nfnetlink_subsys_register(const struct nfnetlink_subsystem *n);
extern int nfnetlink_subsys_unregister(const struct nfnetlink_subsystem *n);
extern int nfnetlink_has_listeners(struct net *net, unsigned int group);
extern int nfnetlink_send(struct sk_buff *skb, struct net *net, u32 pid, unsigned group,
int echo, gfp_t flags);
extern int nfnetlink_set_err(struct net *net, u32 pid, u32 group, int error);
extern int nfnetlink_unicast(struct sk_buff *skb, struct net *net, u_int32_t pid, int flags);
extern void nfnl_lock(void);
extern void nfnl_unlock(void);
#define MODULE_ALIAS_NFNL_SUBSYS(subsys) \
MODULE_ALIAS("nfnetlink-subsys-" __stringify(subsys))
