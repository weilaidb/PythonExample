#define __LINUX_RTNETLINK_H
#define RTNL_FAMILY_IPMR		128
#define RTNL_FAMILY_IP6MR		129
#define RTNL_FAMILY_MAX			129
enum ;
#define RTM_NR_MSGTYPES	(RTM_MAX + 1 - RTM_BASE)
#define RTM_NR_FAMILIES	(RTM_NR_MSGTYPES >> 2)
#define RTM_FAM(cmd)	(((cmd) - RTM_BASE) >> 2)
struct rtattr ;
#define RTA_ALIGNTO	4
#define RTA_ALIGN(len) ( ((len)+RTA_ALIGNTO-1) & ~(RTA_ALIGNTO-1) )
#define RTA_OK(rta,len) ((len) >= (int)sizeof(struct rtattr) && \
(rta)->rta_len >= sizeof(struct rtattr) && \
(rta)->rta_len <= (len))
#define RTA_NEXT(rta,attrlen)	((attrlen) -= RTA_ALIGN((rta)->rta_len), \
(struct rtattr*)(((char*)(rta)) + RTA_ALIGN((rta)->rta_len)))
#define RTA_LENGTH(len)	(RTA_ALIGN(sizeof(struct rtattr)) + (len))
#define RTA_SPACE(len)	RTA_ALIGN(RTA_LENGTH(len))
#define RTA_DATA(rta)   ((void*)(((char*)(rta)) + RTA_LENGTH(0)))
#define RTA_PAYLOAD(rta) ((int)((rta)->rta_len) - RTA_LENGTH(0))
struct rtmsg ;
enum ;
#define RTN_MAX (__RTN_MAX - 1)
#define RTPROT_UNSPEC	0
#define RTPROT_REDIRECT	1
#define RTPROT_KERNEL	2
#define RTPROT_BOOT	3
#define RTPROT_STATIC	4
#define RTPROT_GATED	8
#define RTPROT_RA	9
#define RTPROT_MRT	10
#define RTPROT_ZEBRA	11
#define RTPROT_BIRD	12
#define RTPROT_DNROUTED	13
#define RTPROT_XORP	14
#define RTPROT_NTK	15
#define RTPROT_DHCP	16
enum rt_scope_t ;
#define RTM_F_NOTIFY		0x100
#define RTM_F_CLONED		0x200
#define RTM_F_EQUALIZE		0x400
#define RTM_F_PREFIX		0x800
enum rt_class_t ;
enum rtattr_type_t ;
#define RTA_MAX (__RTA_MAX - 1)
#define RTM_RTA(r)  ((struct rtattr*)(((char*)(r)) + NLMSG_ALIGN(sizeof(struct rtmsg))))
#define RTM_PAYLOAD(n) NLMSG_PAYLOAD(n,sizeof(struct rtmsg))
struct rtnexthop ;
#define RTNH_F_DEAD		1
#define RTNH_F_PERVASIVE	2
#define RTNH_F_ONLINK		4
#define RTNH_ALIGNTO	4
#define RTNH_ALIGN(len) ( ((len)+RTNH_ALIGNTO-1) & ~(RTNH_ALIGNTO-1) )
#define RTNH_OK(rtnh,len) ((rtnh)->rtnh_len >= sizeof(struct rtnexthop) && \
((int)(rtnh)->rtnh_len) <= (len))
#define RTNH_NEXT(rtnh)	((struct rtnexthop*)(((char*)(rtnh)) + RTNH_ALIGN((rtnh)->rtnh_len)))
#define RTNH_LENGTH(len) (RTNH_ALIGN(sizeof(struct rtnexthop)) + (len))
#define RTNH_SPACE(len)	RTNH_ALIGN(RTNH_LENGTH(len))
#define RTNH_DATA(rtnh)   ((struct rtattr*)(((char*)(rtnh)) + RTNH_LENGTH(0)))
struct rta_cacheinfo ;
enum ;
#define RTAX_MAX (__RTAX_MAX - 1)
#define RTAX_FEATURE_ECN	0x00000001
#define RTAX_FEATURE_SACK	0x00000002
#define RTAX_FEATURE_TIMESTAMP	0x00000004
#define RTAX_FEATURE_ALLFRAG	0x00000008
struct rta_session ;
struct rtgenmsg ;
struct ifinfomsg ;
struct prefixmsg ;
enum
;
#define PREFIX_MAX	(__PREFIX_MAX - 1)
struct prefix_cacheinfo ;
struct tcmsg ;
enum ;
#define TCA_MAX (__TCA_MAX - 1)
#define TCA_RTA(r)  ((struct rtattr*)(((char*)(r)) + NLMSG_ALIGN(sizeof(struct tcmsg))))
#define TCA_PAYLOAD(n) NLMSG_PAYLOAD(n,sizeof(struct tcmsg))
struct nduseroptmsg ;
enum ;
#define NDUSEROPT_MAX	(__NDUSEROPT_MAX - 1)
#define RTMGRP_LINK		1
#define RTMGRP_NOTIFY		2
#define RTMGRP_NEIGH		4
#define RTMGRP_TC		8
#define RTMGRP_IPV4_IFADDR	0x10
#define RTMGRP_IPV4_MROUTE	0x20
#define RTMGRP_IPV4_ROUTE	0x40
#define RTMGRP_IPV4_RULE	0x80
#define RTMGRP_IPV6_IFADDR	0x100
#define RTMGRP_IPV6_MROUTE	0x200
#define RTMGRP_IPV6_ROUTE	0x400
#define RTMGRP_IPV6_IFINFO	0x800
#define RTMGRP_DECnet_IFADDR    0x1000
#define RTMGRP_DECnet_ROUTE     0x4000
#define RTMGRP_IPV6_PREFIX	0x20000
enum rtnetlink_groups ;
#define RTNLGRP_MAX	(__RTNLGRP_MAX - 1)
struct tcamsg ;
#define TA_RTA(r)  ((struct rtattr*)(((char*)(r)) + NLMSG_ALIGN(sizeof(struct tcamsg))))
#define TA_PAYLOAD(n) NLMSG_PAYLOAD(n,sizeof(struct tcamsg))
#define TCA_ACT_TAB 1
#define TCAA_MAX 1
static __inline__ int rtattr_strcmp(const struct rtattr *rta, const char *str)
extern int rtnetlink_send(struct sk_buff *skb, struct net *net, u32 pid, u32 group, int echo);
extern int rtnl_unicast(struct sk_buff *skb, struct net *net, u32 pid);
extern void rtnl_notify(struct sk_buff *skb, struct net *net, u32 pid,
u32 group, struct nlmsghdr *nlh, gfp_t flags);
extern void rtnl_set_sk_err(struct net *net, u32 group, int error);
extern int rtnetlink_put_metrics(struct sk_buff *skb, u32 *metrics);
extern int rtnl_put_cacheinfo(struct sk_buff *skb, struct dst_entry *dst,
u32 id, u32 ts, u32 tsage, long expires,
u32 error);
extern void __rta_fill(struct sk_buff *skb, int attrtype, int attrlen, const void *data);
#define RTA_PUT(skb, attrtype, attrlen, data) \
()
#define RTA_APPEND(skb, attrlen, data) \
()
#define RTA_PUT_NOHDR(skb, attrlen, data) \
()
#define RTA_PUT_U8(skb, attrtype, value) \
()
#define RTA_PUT_U16(skb, attrtype, value) \
()
#define RTA_PUT_U32(skb, attrtype, value) \
()
#define RTA_PUT_U64(skb, attrtype, value) \
()
#define RTA_PUT_SECS(skb, attrtype, value) \
RTA_PUT_U64(skb, attrtype, (value) / HZ)
#define RTA_PUT_MSECS(skb, attrtype, value) \
RTA_PUT_U64(skb, attrtype, jiffies_to_msecs(value))
#define RTA_PUT_STRING(skb, attrtype, value) \
RTA_PUT(skb, attrtype, strlen(value) + 1, value)
#define RTA_PUT_FLAG(skb, attrtype) \
RTA_PUT(skb, attrtype, 0, NULL);
#define RTA_NEST(skb, type) \
()
#define RTA_NEST_END(skb, start) \
()
#define RTA_NEST_COMPAT(skb, type, attrlen, data) \
()
#define RTA_NEST_COMPAT_END(skb, start) \
()
#define RTA_NEST_CANCEL(skb, start) \
()
#define RTA_GET_U8(rta) \
()
#define RTA_GET_U16(rta) \
()
#define RTA_GET_U32(rta) \
()
#define RTA_GET_U64(rta) \
()
#define RTA_GET_FLAG(rta) (!!(rta))
#define RTA_GET_SECS(rta) ((unsigned long) RTA_GET_U64(rta) * HZ)
#define RTA_GET_MSECS(rta) (msecs_to_jiffies((unsigned long) RTA_GET_U64(rta)))
static inline struct rtattr *
__rta_reserve(struct sk_buff *skb, int attrtype, int attrlen)
#define __RTA_PUT(skb, attrtype, attrlen) \
()
extern void rtmsg_ifinfo(int type, struct net_device *dev, unsigned change);
extern void rtnl_lock(void);
extern void rtnl_unlock(void);
extern int rtnl_trylock(void);
extern int rtnl_is_locked(void);
extern int lockdep_rtnl_is_held(void);
#define rcu_dereference_rtnl(p)					\
rcu_dereference_check(p, rcu_read_lock_held() ||	\
lockdep_rtnl_is_held())
#define rtnl_dereference(p)					\
rcu_dereference_protected(p, lockdep_rtnl_is_held())
static inline struct netdev_queue *dev_ingress_queue(struct net_device *dev)
extern struct netdev_queue *dev_ingress_queue_create(struct net_device *dev);
extern void rtnetlink_init(void);
extern void __rtnl_unlock(void);
#define ASSERT_RTNL() do  while(0)
static inline u32 rtm_get_table(struct rtattr **rta, u8 table)
