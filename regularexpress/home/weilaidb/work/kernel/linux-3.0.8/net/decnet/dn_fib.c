#define RT_MIN_TABLE 1
#define for_fib_info()
#define for_nexthops(fi) { int nhsel; const struct dn_fib_nh *nh;\
for(nhsel = 0, nh = (fi)->fib_nh; nhsel < (fi)->fib_nhs; nh++, nhsel++)
#define change_nexthops(fi)
static DEFINE_SPINLOCK(dn_fib_multipath_lock);
static struct dn_fib_info *dn_fib_info_list;
static DEFINE_SPINLOCK(dn_fib_info_lock);
static struct
dn_fib_props[RTN_MAX+1] = ;
static int dn_fib_sync_down(__le16 local, struct net_device *dev, int force);
static int dn_fib_sync_up(struct net_device *dev);
void dn_fib_free_info(struct dn_fib_info *fi)
void dn_fib_release_info(struct dn_fib_info *fi)
static inline int dn_fib_nh_comp(const struct dn_fib_info *fi, const struct dn_fib_info *ofi)
static inline struct dn_fib_info *dn_fib_find_info(const struct dn_fib_info *nfi)
__le16 dn_fib_get_attr16(struct rtattr *attr, int attrlen, int type)
static int dn_fib_count_nhs(struct rtattr *rta)
static int dn_fib_get_nhs(struct dn_fib_info *fi, const struct rtattr *rta, const struct rtmsg *r)
static int dn_fib_check_nh(const struct rtmsg *r, struct dn_fib_info *fi, struct dn_fib_nh *nh)
struct dn_fib_info *dn_fib_create_info(const struct rtmsg *r, struct dn_kern_rta *rta, const struct nlmsghdr *nlh, int *errp)
int dn_fib_semantic_match(int type, struct dn_fib_info *fi, const struct flowidn *fld, struct dn_fib_res *res)
void dn_fib_select_multipath(const struct flowidn *fld, struct dn_fib_res *res)
static int dn_fib_check_attr(struct rtmsg *r, struct rtattr **rta)
static int dn_fib_rtm_delroute(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static int dn_fib_rtm_newroute(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static void fib_magic(int cmd, int type, __le16 dst, int dst_len, struct dn_ifaddr *ifa)
static void dn_fib_add_ifaddr(struct dn_ifaddr *ifa)
static void dn_fib_del_ifaddr(struct dn_ifaddr *ifa)
static void dn_fib_disable_addr(struct net_device *dev, int force)
static int dn_fib_dnaddr_event(struct notifier_block *this, unsigned long event, void *ptr)
static int dn_fib_sync_down(__le16 local, struct net_device *dev, int force)
static int dn_fib_sync_up(struct net_device *dev)
static struct notifier_block dn_fib_dnaddr_notifier = ;
void __exit dn_fib_cleanup(void)
void __init dn_fib_init(void)
