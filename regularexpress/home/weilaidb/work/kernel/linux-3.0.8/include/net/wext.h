#define __NET_WEXT_H
struct net;
extern int wext_handle_ioctl(struct net *net, struct ifreq *ifr, unsigned int cmd,
void __user *arg);
extern int compat_wext_handle_ioctl(struct net *net, unsigned int cmd,
unsigned long arg);
extern struct iw_statistics *get_wireless_stats(struct net_device *dev);
extern int call_commit_handler(struct net_device *dev);
static inline int wext_handle_ioctl(struct net *net, struct ifreq *ifr, unsigned int cmd,
void __user *arg)
static inline int compat_wext_handle_ioctl(struct net *net, unsigned int cmd,
unsigned long arg)
extern int wext_proc_init(struct net *net);
extern void wext_proc_exit(struct net *net);
static inline int wext_proc_init(struct net *net)
static inline void wext_proc_exit(struct net *net)
int ioctl_private_call(struct net_device *dev, struct iwreq *iwr,
unsigned int cmd, struct iw_request_info *info,
iw_handler handler);
int compat_private_call(struct net_device *dev, struct iwreq *iwr,
unsigned int cmd, struct iw_request_info *info,
iw_handler handler);
int iw_handler_get_private(struct net_device *		dev,
struct iw_request_info *	info,
union iwreq_data *		wrqu,
char *			extra);
#define ioctl_private_call NULL
#define compat_private_call NULL
