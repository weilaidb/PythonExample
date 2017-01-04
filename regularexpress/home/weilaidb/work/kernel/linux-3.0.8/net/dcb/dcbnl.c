MODULE_AUTHOR("Lucy Liu, <lucy.liu@intel.com>");
MODULE_DESCRIPTION("Data Center Bridging netlink interface");
MODULE_LICENSE("GPL");
static const struct nla_policy dcbnl_rtnl_policy[DCB_ATTR_MAX + 1] = ;
static const struct nla_policy dcbnl_pfc_up_nest[DCB_PFC_UP_ATTR_MAX + 1] = ;
static const struct nla_policy dcbnl_pg_nest[DCB_PG_ATTR_MAX + 1] = ;
static const struct nla_policy dcbnl_tc_param_nest[DCB_TC_ATTR_PARAM_MAX + 1] = ;
static const struct nla_policy dcbnl_cap_nest[DCB_CAP_ATTR_MAX + 1] = ;
static const struct nla_policy dcbnl_numtcs_nest[DCB_NUMTCS_ATTR_MAX + 1] = ;
static const struct nla_policy dcbnl_bcn_nest[DCB_BCN_ATTR_MAX + 1] = ;
static const struct nla_policy dcbnl_app_nest[DCB_APP_ATTR_MAX + 1] = ;
static const struct nla_policy dcbnl_ieee_policy[DCB_ATTR_IEEE_MAX + 1] = ;
static const struct nla_policy dcbnl_ieee_app[DCB_ATTR_IEEE_APP_MAX + 1] = ;
static const struct nla_policy dcbnl_featcfg_nest[DCB_FEATCFG_ATTR_MAX + 1] = ;
static LIST_HEAD(dcb_app_list);
static DEFINE_SPINLOCK(dcb_lock);
static int dcbnl_reply(u8 value, u8 event, u8 cmd, u8 attr, u32 pid,
u32 seq, u16 flags)
static int dcbnl_getstate(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_getpfccfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_getperm_hwaddr(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_getcap(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_getnumtcs(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_setnumtcs(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_getpfcstate(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_setpfcstate(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_getapp(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_setapp(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int __dcbnl_pg_getcfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags, int dir)
static int dcbnl_pgtx_getcfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_pgrx_getcfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_setstate(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_setpfccfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_setall(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int __dcbnl_pg_setcfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags, int dir)
static int dcbnl_pgtx_setcfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_pgrx_setcfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_bcn_getcfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_bcn_setcfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_ieee_set(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_build_peer_app(struct net_device *netdev, struct sk_buff* skb,
int app_nested_type, int app_info_type,
int app_entry_type)
static int dcbnl_ieee_get(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_getdcbx(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_setdcbx(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_getfeatcfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_setfeatcfg(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcbnl_cee_get(struct net_device *netdev, struct nlattr **tb,
u32 pid, u32 seq, u16 flags)
static int dcb_doit(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
u8 dcb_getapp(struct net_device *dev, struct dcb_app *app)
EXPORT_SYMBOL(dcb_getapp);
u8 dcb_setapp(struct net_device *dev, struct dcb_app *new)
EXPORT_SYMBOL(dcb_setapp);
static void dcb_flushapp(void)
static int __init dcbnl_init(void)
module_init(dcbnl_init);
static void __exit dcbnl_exit(void)
module_exit(dcbnl_exit);
