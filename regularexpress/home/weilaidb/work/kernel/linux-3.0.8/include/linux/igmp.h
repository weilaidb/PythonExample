#define _LINUX_IGMP_H
struct igmphdr ;
#define IGMPV3_MODE_IS_INCLUDE		1
#define IGMPV3_MODE_IS_EXCLUDE		2
#define IGMPV3_CHANGE_TO_INCLUDE	3
#define IGMPV3_CHANGE_TO_EXCLUDE	4
#define IGMPV3_ALLOW_NEW_SOURCES	5
#define IGMPV3_BLOCK_OLD_SOURCES	6
struct igmpv3_grec ;
struct igmpv3_report ;
struct igmpv3_query ;
#define IGMP_HOST_MEMBERSHIP_QUERY	0x11
#define IGMP_HOST_MEMBERSHIP_REPORT	0x12
#define IGMP_DVMRP			0x13
#define IGMP_PIM			0x14
#define IGMP_TRACE			0x15
#define IGMPV2_HOST_MEMBERSHIP_REPORT	0x16
#define IGMP_HOST_LEAVE_MESSAGE 	0x17
#define IGMPV3_HOST_MEMBERSHIP_REPORT	0x22
#define IGMP_MTRACE_RESP		0x1e
#define IGMP_MTRACE			0x1f
#define IGMP_DELAYING_MEMBER		0x01
#define IGMP_IDLE_MEMBER		0x02
#define IGMP_LAZY_MEMBER		0x03
#define IGMP_SLEEPING_MEMBER		0x04
#define IGMP_AWAKENING_MEMBER		0x05
#define IGMP_MINLEN			8
#define IGMP_MAX_HOST_REPORT_DELAY	10
#define IGMP_TIMER_SCALE		10
#define IGMP_AGE_THRESHOLD		400
#define IGMP_ALL_HOSTS		htonl(0xE0000001L)
#define IGMP_ALL_ROUTER 	htonl(0xE0000002L)
#define IGMPV3_ALL_MCR	 	htonl(0xE0000016L)
#define IGMP_LOCAL_GROUP	htonl(0xE0000000L)
#define IGMP_LOCAL_GROUP_MASK	htonl(0xFFFFFF00L)
static inline struct igmphdr *igmp_hdr(const struct sk_buff *skb)
static inline struct igmpv3_report *
igmpv3_report_hdr(const struct sk_buff *skb)
static inline struct igmpv3_query *
igmpv3_query_hdr(const struct sk_buff *skb)
extern int sysctl_igmp_max_memberships;
extern int sysctl_igmp_max_msf;
struct ip_sf_socklist ;
#define IP_SFLSIZE(count)	(sizeof(struct ip_sf_socklist) + \
(count) * sizeof(__be32))
#define IP_SFBLOCK	10
struct ip_mc_socklist ;
struct ip_sf_list ;
struct ip_mc_list ;
#define IGMPV3_MASK(value, nb) ((nb)>=32 ? (value) : ((1<<(nb))-1) & (value))
#define IGMPV3_EXP(thresh, nbmant, nbexp, value) \
((value) < (thresh) ? (value) : \
((IGMPV3_MASK(value, nbmant) | (1<<(nbmant))) << \
(IGMPV3_MASK((value) >> (nbmant), nbexp) + (nbexp))))
#define IGMPV3_QQIC(value) IGMPV3_EXP(0x80, 4, 3, value)
#define IGMPV3_MRC(value) IGMPV3_EXP(0x80, 4, 3, value)
extern int ip_check_mc_rcu(struct in_device *dev, __be32 mc_addr, __be32 src_addr, u16 proto);
extern int igmp_rcv(struct sk_buff *);
extern int ip_mc_join_group(struct sock *sk, struct ip_mreqn *imr);
extern int ip_mc_leave_group(struct sock *sk, struct ip_mreqn *imr);
extern void ip_mc_drop_socket(struct sock *sk);
extern int ip_mc_source(int add, int omode, struct sock *sk,
struct ip_mreq_source *mreqs, int ifindex);
extern int ip_mc_msfilter(struct sock *sk, struct ip_msfilter *msf,int ifindex);
extern int ip_mc_msfget(struct sock *sk, struct ip_msfilter *msf,
struct ip_msfilter __user *optval, int __user *optlen);
extern int ip_mc_gsfget(struct sock *sk, struct group_filter *gsf,
struct group_filter __user *optval, int __user *optlen);
extern int ip_mc_sf_allow(struct sock *sk, __be32 local, __be32 rmt, int dif);
extern void ip_mc_init_dev(struct in_device *);
extern void ip_mc_destroy_dev(struct in_device *);
extern void ip_mc_up(struct in_device *);
extern void ip_mc_down(struct in_device *);
extern void ip_mc_unmap(struct in_device *);
extern void ip_mc_remap(struct in_device *);
extern void ip_mc_dec_group(struct in_device *in_dev, __be32 addr);
extern void ip_mc_inc_group(struct in_device *in_dev, __be32 addr);
extern void ip_mc_rejoin_groups(struct in_device *in_dev);
