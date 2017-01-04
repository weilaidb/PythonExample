#define _ADDRCONF_H
#define MAX_RTR_SOLICITATIONS		3
#define RTR_SOLICITATION_INTERVAL	(4*HZ)
#define MIN_VALID_LIFETIME		(2*3600)
#define TEMP_VALID_LIFETIME		(7*86400)
#define TEMP_PREFERRED_LIFETIME		(86400)
#define REGEN_MAX_RETRY			(5)
#define MAX_DESYNC_FACTOR		(600)
#define ADDR_CHECK_FREQUENCY		(120*HZ)
#define IPV6_MAX_ADDRESSES		16
struct prefix_info ;
#define IN6_ADDR_HSIZE		16
extern int			addrconf_init(void);
extern void			addrconf_cleanup(void);
extern int			addrconf_add_ifaddr(struct net *net,
void __user *arg);
extern int			addrconf_del_ifaddr(struct net *net,
void __user *arg);
extern int			addrconf_set_dstaddr(struct net *net,
void __user *arg);
extern int			ipv6_chk_addr(struct net *net,
const struct in6_addr *addr,
struct net_device *dev,
int strict);
#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
extern int			ipv6_chk_home_addr(struct net *net,
const struct in6_addr *addr);
extern int			ipv6_chk_prefix(const struct in6_addr *addr,
struct net_device *dev);
extern struct inet6_ifaddr      *ipv6_get_ifaddr(struct net *net,
const struct in6_addr *addr,
struct net_device *dev,
int strict);
extern int			ipv6_dev_get_saddr(struct net *net,
struct net_device *dev,
const struct in6_addr *daddr,
unsigned int srcprefs,
struct in6_addr *saddr);
extern int			ipv6_get_lladdr(struct net_device *dev,
struct in6_addr *addr,
unsigned char banned_flags);
extern int 			ipv6_rcv_saddr_equal(const struct sock *sk,
const struct sock *sk2);
extern void			addrconf_join_solict(struct net_device *dev,
const struct in6_addr *addr);
extern void			addrconf_leave_solict(struct inet6_dev *idev,
const struct in6_addr *addr);
static inline unsigned long addrconf_timeout_fixup(u32 timeout,
unsigned unit)
static inline int addrconf_finite_timeout(unsigned long timeout)
extern int			ipv6_addr_label_init(void);
extern void			ipv6_addr_label_cleanup(void);
extern void			ipv6_addr_label_rtnl_register(void);
extern u32			ipv6_addr_label(struct net *net,
const struct in6_addr *addr,
int type, int ifindex);
extern int ipv6_sock_mc_join(struct sock *sk, int ifindex,
const struct in6_addr *addr);
extern int ipv6_sock_mc_drop(struct sock *sk, int ifindex,
const struct in6_addr *addr);
extern void ipv6_sock_mc_close(struct sock *sk);
extern int inet6_mc_check(struct sock *sk,
const struct in6_addr *mc_addr,
const struct in6_addr *src_addr);
extern int ipv6_dev_mc_inc(struct net_device *dev, const struct in6_addr *addr);
extern int __ipv6_dev_mc_dec(struct inet6_dev *idev, const struct in6_addr *addr);
extern int ipv6_dev_mc_dec(struct net_device *dev, const struct in6_addr *addr);
extern void ipv6_mc_up(struct inet6_dev *idev);
extern void ipv6_mc_down(struct inet6_dev *idev);
extern void ipv6_mc_unmap(struct inet6_dev *idev);
extern void ipv6_mc_remap(struct inet6_dev *idev);
extern void ipv6_mc_init_dev(struct inet6_dev *idev);
extern void ipv6_mc_destroy_dev(struct inet6_dev *idev);
extern void addrconf_dad_failure(struct inet6_ifaddr *ifp);
extern int ipv6_chk_mcast_addr(struct net_device *dev,
const struct in6_addr *group,
const struct in6_addr *src_addr);
extern int ipv6_is_mld(struct sk_buff *skb, int nexthdr);
extern void addrconf_prefix_rcv(struct net_device *dev, u8 *opt, int len);
extern int ipv6_sock_ac_join(struct sock *sk,int ifindex, const struct in6_addr *addr);
extern int ipv6_sock_ac_drop(struct sock *sk,int ifindex, const struct in6_addr *addr);
extern void ipv6_sock_ac_close(struct sock *sk);
extern int inet6_ac_check(struct sock *sk, const struct in6_addr *addr, int ifindex);
extern int ipv6_dev_ac_inc(struct net_device *dev, const struct in6_addr *addr);
extern int __ipv6_dev_ac_dec(struct inet6_dev *idev, const struct in6_addr *addr);
extern int ipv6_chk_acast_addr(struct net *net, struct net_device *dev,
const struct in6_addr *addr);
extern int register_inet6addr_notifier(struct notifier_block *nb);
extern int unregister_inet6addr_notifier(struct notifier_block *nb);
static inline struct inet6_dev *__in6_dev_get(const struct net_device *dev)
static inline struct inet6_dev *in6_dev_get(const struct net_device *dev)
extern void in6_dev_finish_destroy(struct inet6_dev *idev);
static inline void in6_dev_put(struct inet6_dev *idev)
static inline void __in6_dev_put(struct inet6_dev *idev)
static inline void in6_dev_hold(struct inet6_dev *idev)
extern void inet6_ifa_finish_destroy(struct inet6_ifaddr *ifp);
static inline void in6_ifa_put(struct inet6_ifaddr *ifp)
static inline void __in6_ifa_put(struct inet6_ifaddr *ifp)
static inline void in6_ifa_hold(struct inet6_ifaddr *ifp)
static inline void addrconf_addr_solict_mult(const struct in6_addr *addr,
struct in6_addr *solicited)
static inline int ipv6_addr_is_multicast(const struct in6_addr *addr)
static inline int ipv6_addr_is_ll_all_nodes(const struct in6_addr *addr)
static inline int ipv6_addr_is_ll_all_routers(const struct in6_addr *addr)
static inline int ipv6_addr_is_isatap(const struct in6_addr *addr)
extern int if6_proc_init(void);
extern void if6_proc_exit(void);
