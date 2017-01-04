typedef int (*wext_ioctl_func)(struct net_device *, struct iwreq *,
unsigned int, struct iw_request_info *,
iw_handler);
static const struct iw_ioctl_description standard_ioctl[] = ;
static const unsigned standard_ioctl_num = ARRAY_SIZE(standard_ioctl);
static const struct iw_ioctl_description standard_event[] = ;
static const unsigned standard_event_num = ARRAY_SIZE(standard_event);
static const int event_type_size[] = ;
static const int compat_event_type_size[] = ;
static int __net_init wext_pernet_init(struct net *net)
static void __net_exit wext_pernet_exit(struct net *net)
static struct pernet_operations wext_pernet_ops = ;
static int __init wireless_nlevent_init(void)
subsys_initcall(wireless_nlevent_init);
static void wireless_nlevent_process(struct work_struct *work)
static DECLARE_WORK(wireless_nlevent_work, wireless_nlevent_process);
static struct nlmsghdr *rtnetlink_ifinfo_prep(struct net_device *dev,
struct sk_buff *skb)
void wireless_send_event(struct net_device *	dev,
unsigned int		cmd,
union iwreq_data *	wrqu,
const char *		extra)
EXPORT_SYMBOL(wireless_send_event);
struct iw_statistics *get_wireless_stats(struct net_device *dev)
static int iw_handler_get_iwstats(struct net_device *		dev,
struct iw_request_info *	info,
union iwreq_data *		wrqu,
char *			extra)
static iw_handler get_handler(struct net_device *dev, unsigned int cmd)
static int ioctl_standard_iw_point(struct iw_point *iwp, unsigned int cmd,
const struct iw_ioctl_description *descr,
iw_handler handler, struct net_device *dev,
struct iw_request_info *info)
int call_commit_handler(struct net_device *dev)
static int wireless_process_ioctl(struct net *net, struct ifreq *ifr,
unsigned int cmd,
struct iw_request_info *info,
wext_ioctl_func standard,
wext_ioctl_func private)
static int wext_permission_check(unsigned int cmd)
static int wext_ioctl_dispatch(struct net *net, struct ifreq *ifr,
unsigned int cmd, struct iw_request_info *info,
wext_ioctl_func standard,
wext_ioctl_func private)
static int ioctl_standard_call(struct net_device *	dev,
struct iwreq		*iwr,
unsigned int		cmd,
struct iw_request_info	*info,
iw_handler		handler)
int wext_handle_ioctl(struct net *net, struct ifreq *ifr, unsigned int cmd,
void __user *arg)
static int compat_standard_call(struct net_device	*dev,
struct iwreq		*iwr,
unsigned int		cmd,
struct iw_request_info	*info,
iw_handler		handler)
int compat_wext_handle_ioctl(struct net *net, unsigned int cmd,
unsigned long arg)
