static DEFINE_MUTEX(genl_mutex);
void genl_lock(void)
EXPORT_SYMBOL(genl_lock);
void genl_unlock(void)
EXPORT_SYMBOL(genl_unlock);
#define GENL_FAM_TAB_SIZE	16
#define GENL_FAM_TAB_MASK	(GENL_FAM_TAB_SIZE - 1)
static struct list_head family_ht[GENL_FAM_TAB_SIZE];
static unsigned long mc_group_start = 0x1;
static unsigned long *mc_groups = &mc_group_start;
static unsigned long mc_groups_longs = 1;
static int genl_ctrl_event(int event, void *data);
static inline unsigned int genl_family_hash(unsigned int id)
static inline struct list_head *genl_family_chain(unsigned int id)
static struct genl_family *genl_family_find_byid(unsigned int id)
static struct genl_family *genl_family_find_byname(char *name)
static struct genl_ops *genl_get_cmd(u8 cmd, struct genl_family *family)
static inline u16 genl_generate_id(void)
static struct genl_multicast_group notify_grp;
int genl_register_mc_group(struct genl_family *family,
struct genl_multicast_group *grp)
EXPORT_SYMBOL(genl_register_mc_group);
static void __genl_unregister_mc_group(struct genl_family *family,
struct genl_multicast_group *grp)
void genl_unregister_mc_group(struct genl_family *family,
struct genl_multicast_group *grp)
EXPORT_SYMBOL(genl_unregister_mc_group);
static void genl_unregister_mc_groups(struct genl_family *family)
int genl_register_ops(struct genl_family *family, struct genl_ops *ops)
EXPORT_SYMBOL(genl_register_ops);
int genl_unregister_ops(struct genl_family *family, struct genl_ops *ops)
EXPORT_SYMBOL(genl_unregister_ops);
int genl_register_family(struct genl_family *family)
EXPORT_SYMBOL(genl_register_family);
int genl_register_family_with_ops(struct genl_family *family,
struct genl_ops *ops, size_t n_ops)
EXPORT_SYMBOL(genl_register_family_with_ops);
int genl_unregister_family(struct genl_family *family)
EXPORT_SYMBOL(genl_unregister_family);
static int genl_rcv_msg(struct sk_buff *skb, struct nlmsghdr *nlh)
static void genl_rcv(struct sk_buff *skb)
static struct genl_family genl_ctrl = ;
static int ctrl_fill_info(struct genl_family *family, u32 pid, u32 seq,
u32 flags, struct sk_buff *skb, u8 cmd)
static int ctrl_fill_mcgrp_info(struct genl_multicast_group *grp, u32 pid,
u32 seq, u32 flags, struct sk_buff *skb,
u8 cmd)
static int ctrl_dumpfamily(struct sk_buff *skb, struct netlink_callback *cb)
static struct sk_buff *ctrl_build_family_msg(struct genl_family *family,
u32 pid, int seq, u8 cmd)
static struct sk_buff *ctrl_build_mcgrp_msg(struct genl_multicast_group *grp,
u32 pid, int seq, u8 cmd)
static const struct nla_policy ctrl_policy[CTRL_ATTR_MAX+1] = ;
static int ctrl_getfamily(struct sk_buff *skb, struct genl_info *info)
static int genl_ctrl_event(int event, void *data)
static struct genl_ops genl_ctrl_ops = ;
static struct genl_multicast_group notify_grp = ;
static int __net_init genl_pernet_init(struct net *net)
static void __net_exit genl_pernet_exit(struct net *net)
static struct pernet_operations genl_pernet_ops = ;
static int __init genl_init(void)
subsys_initcall(genl_init);
static int genlmsg_mcast(struct sk_buff *skb, u32 pid, unsigned long group,
gfp_t flags)
int genlmsg_multicast_allns(struct sk_buff *skb, u32 pid, unsigned int group,
gfp_t flags)
EXPORT_SYMBOL(genlmsg_multicast_allns);
