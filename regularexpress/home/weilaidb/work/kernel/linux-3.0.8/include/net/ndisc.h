#define _NDISC_H
#define NDISC_ROUTER_SOLICITATION	133
#define NDISC_ROUTER_ADVERTISEMENT	134
#define NDISC_NEIGHBOUR_SOLICITATION	135
#define NDISC_NEIGHBOUR_ADVERTISEMENT	136
#define NDISC_REDIRECT			137
#define NDISC_NODETYPE_UNSPEC		0
#define NDISC_NODETYPE_HOST		1
#define NDISC_NODETYPE_NODEFAULT	2
#define NDISC_NODETYPE_DEFAULT		3
enum ;
#define MAX_RTR_SOLICITATION_DELAY	HZ
#define ND_REACHABLE_TIME		(30*HZ)
#define ND_RETRANS_TIMER		HZ
struct ctl_table;
struct inet6_dev;
struct net_device;
struct net_proto_family;
struct sk_buff;
extern struct neigh_table nd_tbl;
struct nd_msg ;
struct rs_msg ;
struct ra_msg ;
struct nd_opt_hdr  __packed;
extern int			ndisc_init(void);
extern void			ndisc_cleanup(void);
extern int			ndisc_rcv(struct sk_buff *skb);
extern void			ndisc_send_ns(struct net_device *dev,
struct neighbour *neigh,
const struct in6_addr *solicit,
const struct in6_addr *daddr,
const struct in6_addr *saddr);
extern void			ndisc_send_rs(struct net_device *dev,
const struct in6_addr *saddr,
const struct in6_addr *daddr);
extern void			ndisc_send_redirect(struct sk_buff *skb,
struct neighbour *neigh,
const struct in6_addr *target);
extern int			ndisc_mc_map(const struct in6_addr *addr, char *buf,
struct net_device *dev, int dir);
extern struct sk_buff		*ndisc_build_skb(struct net_device *dev,
const struct in6_addr *daddr,
const struct in6_addr *saddr,
struct icmp6hdr *icmp6h,
const struct in6_addr *target,
int llinfo);
extern void			ndisc_send_skb(struct sk_buff *skb,
struct net_device *dev,
struct neighbour *neigh,
const struct in6_addr *daddr,
const struct in6_addr *saddr,
struct icmp6hdr *icmp6h);
extern int			igmp6_init(void);
extern void			igmp6_cleanup(void);
extern int			igmp6_event_query(struct sk_buff *skb);
extern int			igmp6_event_report(struct sk_buff *skb);
extern int 			ndisc_ifinfo_sysctl_change(struct ctl_table *ctl,
int write,
void __user *buffer,
size_t *lenp,
loff_t *ppos);
int ndisc_ifinfo_sysctl_strategy(ctl_table *ctl,
void __user *oldval, size_t __user *oldlenp,
void __user *newval, size_t newlen);
extern void 			inet6_ifinfo_notify(int event,
struct inet6_dev *idev);
static inline struct neighbour * ndisc_get_neigh(struct net_device *dev, const struct in6_addr *addr)
