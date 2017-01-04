#define _LINUX_INETDEVICE_H
enum
;
#define IPV4_DEVCONF_MAX (__IPV4_DEVCONF_MAX - 1)
struct ipv4_devconf ;
struct in_device ;
#define IPV4_DEVCONF(cnf, attr) ((cnf).data[IPV4_DEVCONF_ ## attr - 1])
#define IPV4_DEVCONF_ALL(net, attr) \
IPV4_DEVCONF((*(net)->ipv4.devconf_all), attr)
static inline int ipv4_devconf_get(struct in_device *in_dev, int index)
static inline void ipv4_devconf_set(struct in_device *in_dev, int index,
int val)
static inline void ipv4_devconf_setall(struct in_device *in_dev)
#define IN_DEV_CONF_GET(in_dev, attr) \
ipv4_devconf_get((in_dev), IPV4_DEVCONF_ ## attr)
#define IN_DEV_CONF_SET(in_dev, attr, val) \
ipv4_devconf_set((in_dev), IPV4_DEVCONF_ ## attr, (val))
#define IN_DEV_ANDCONF(in_dev, attr) \
(IPV4_DEVCONF_ALL(dev_net(in_dev->dev), attr) && \
IN_DEV_CONF_GET((in_dev), attr))
#define IN_DEV_ORCONF(in_dev, attr) \
(IPV4_DEVCONF_ALL(dev_net(in_dev->dev), attr) || \
IN_DEV_CONF_GET((in_dev), attr))
#define IN_DEV_MAXCONF(in_dev, attr) \
(max(IPV4_DEVCONF_ALL(dev_net(in_dev->dev), attr), \
IN_DEV_CONF_GET((in_dev), attr)))
#define IN_DEV_FORWARD(in_dev)		IN_DEV_CONF_GET((in_dev), FORWARDING)
#define IN_DEV_MFORWARD(in_dev)		IN_DEV_ANDCONF((in_dev), MC_FORWARDING)
#define IN_DEV_RPFILTER(in_dev)		IN_DEV_MAXCONF((in_dev), RP_FILTER)
#define IN_DEV_SRC_VMARK(in_dev)    	IN_DEV_ORCONF((in_dev), SRC_VMARK)
#define IN_DEV_SOURCE_ROUTE(in_dev)	IN_DEV_ANDCONF((in_dev), \
ACCEPT_SOURCE_ROUTE)
#define IN_DEV_ACCEPT_LOCAL(in_dev)	IN_DEV_ORCONF((in_dev), ACCEPT_LOCAL)
#define IN_DEV_BOOTP_RELAY(in_dev)	IN_DEV_ANDCONF((in_dev), BOOTP_RELAY)
#define IN_DEV_LOG_MARTIANS(in_dev)	IN_DEV_ORCONF((in_dev), LOG_MARTIANS)
#define IN_DEV_PROXY_ARP(in_dev)	IN_DEV_ORCONF((in_dev), PROXY_ARP)
#define IN_DEV_PROXY_ARP_PVLAN(in_dev)	IN_DEV_CONF_GET(in_dev, PROXY_ARP_PVLAN)
#define IN_DEV_SHARED_MEDIA(in_dev)	IN_DEV_ORCONF((in_dev), SHARED_MEDIA)
#define IN_DEV_TX_REDIRECTS(in_dev)	IN_DEV_ORCONF((in_dev), SEND_REDIRECTS)
#define IN_DEV_SEC_REDIRECTS(in_dev)	IN_DEV_ORCONF((in_dev), \
SECURE_REDIRECTS)
#define IN_DEV_IDTAG(in_dev)		IN_DEV_CONF_GET(in_dev, TAG)
#define IN_DEV_MEDIUM_ID(in_dev)	IN_DEV_CONF_GET(in_dev, MEDIUM_ID)
#define IN_DEV_PROMOTE_SECONDARIES(in_dev) \
IN_DEV_ORCONF((in_dev), \
PROMOTE_SECONDARIES)
#define IN_DEV_RX_REDIRECTS(in_dev) \
((IN_DEV_FORWARD(in_dev) && \
IN_DEV_ANDCONF((in_dev), ACCEPT_REDIRECTS)) \
|| (!IN_DEV_FORWARD(in_dev) && \
IN_DEV_ORCONF((in_dev), ACCEPT_REDIRECTS)))
#define IN_DEV_ARPFILTER(in_dev)	IN_DEV_ORCONF((in_dev), ARPFILTER)
#define IN_DEV_ARP_ANNOUNCE(in_dev)	IN_DEV_MAXCONF((in_dev), ARP_ANNOUNCE)
#define IN_DEV_ARP_IGNORE(in_dev)	IN_DEV_MAXCONF((in_dev), ARP_IGNORE)
#define IN_DEV_ARP_NOTIFY(in_dev)	IN_DEV_MAXCONF((in_dev), ARP_NOTIFY)
struct in_ifaddr ;
extern int register_inetaddr_notifier(struct notifier_block *nb);
extern int unregister_inetaddr_notifier(struct notifier_block *nb);
extern struct net_device *__ip_dev_find(struct net *net, __be32 addr, bool devref);
static inline struct net_device *ip_dev_find(struct net *net, __be32 addr)
extern int		inet_addr_onlink(struct in_device *in_dev, __be32 a, __be32 b);
extern int		devinet_ioctl(struct net *net, unsigned int cmd, void __user *);
extern void		devinet_init(void);
extern struct in_device	*inetdev_by_index(struct net *, int);
extern __be32		inet_select_addr(const struct net_device *dev, __be32 dst, int scope);
extern __be32		inet_confirm_addr(struct in_device *in_dev, __be32 dst, __be32 local, int scope);
extern struct in_ifaddr *inet_ifa_byprefix(struct in_device *in_dev, __be32 prefix, __be32 mask);
static __inline__ int inet_ifa_match(__be32 addr, struct in_ifaddr *ifa)
static __inline__ int bad_mask(__be32 mask, __be32 addr)
#define for_primary_ifa(in_dev)	{ struct in_ifaddr *ifa; \
for (ifa = (in_dev)->ifa_list; ifa && !(ifa->ifa_flags&IFA_F_SECONDARY); ifa = ifa->ifa_next)
#define for_ifa(in_dev)
static inline struct in_device *__in_dev_get_rcu(const struct net_device *dev)
static inline struct in_device *in_dev_get(const struct net_device *dev)
static inline struct in_device *__in_dev_get_rtnl(const struct net_device *dev)
extern void in_dev_finish_destroy(struct in_device *idev);
static inline void in_dev_put(struct in_device *idev)
#define __in_dev_put(idev)  atomic_dec(&(idev)->refcnt)
#define in_dev_hold(idev)   atomic_inc(&(idev)->refcnt)
static __inline__ __be32 inet_make_mask(int logmask)
static __inline__ int inet_mask_len(__be32 mask)
