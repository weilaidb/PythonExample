#define _LINUX_ICMPV6_H
struct icmp6hdr ;
static inline struct icmp6hdr *icmp6_hdr(const struct sk_buff *skb)
#define ICMPV6_ROUTER_PREF_LOW		0x3
#define ICMPV6_ROUTER_PREF_MEDIUM	0x0
#define ICMPV6_ROUTER_PREF_HIGH		0x1
#define ICMPV6_ROUTER_PREF_INVALID	0x2
#define ICMPV6_DEST_UNREACH		1
#define ICMPV6_PKT_TOOBIG		2
#define ICMPV6_TIME_EXCEED		3
#define ICMPV6_PARAMPROB		4
#define ICMPV6_INFOMSG_MASK		0x80
#define ICMPV6_ECHO_REQUEST		128
#define ICMPV6_ECHO_REPLY		129
#define ICMPV6_MGM_QUERY		130
#define ICMPV6_MGM_REPORT       	131
#define ICMPV6_MGM_REDUCTION    	132
#define ICMPV6_NI_QUERY			139
#define ICMPV6_NI_REPLY			140
#define ICMPV6_MLD2_REPORT		143
#define ICMPV6_DHAAD_REQUEST		144
#define ICMPV6_DHAAD_REPLY		145
#define ICMPV6_MOBILE_PREFIX_SOL	146
#define ICMPV6_MOBILE_PREFIX_ADV	147
#define ICMPV6_NOROUTE			0
#define ICMPV6_ADM_PROHIBITED		1
#define ICMPV6_NOT_NEIGHBOUR		2
#define ICMPV6_ADDR_UNREACH		3
#define ICMPV6_PORT_UNREACH		4
#define ICMPV6_EXC_HOPLIMIT		0
#define ICMPV6_EXC_FRAGTIME		1
#define ICMPV6_HDR_FIELD		0
#define ICMPV6_UNK_NEXTHDR		1
#define ICMPV6_UNK_OPTION		2
#define ICMPV6_FILTER			1
#define ICMPV6_FILTER_BLOCK		1
#define ICMPV6_FILTER_PASS		2
#define ICMPV6_FILTER_BLOCKOTHERS	3
#define ICMPV6_FILTER_PASSONLY		4
struct icmp6_filter ;
#define MLD2_MODE_IS_INCLUDE	1
#define MLD2_MODE_IS_EXCLUDE	2
#define MLD2_CHANGE_TO_INCLUDE	3
#define MLD2_CHANGE_TO_EXCLUDE	4
#define MLD2_ALLOW_NEW_SOURCES	5
#define MLD2_BLOCK_OLD_SOURCES	6
#define MLD2_ALL_MCR_INIT
extern void				icmpv6_send(struct sk_buff *skb,
u8 type, u8 code,
__u32 info);
extern int				icmpv6_init(void);
extern int				icmpv6_err_convert(u8 type, u8 code,
int *err);
extern void				icmpv6_cleanup(void);
extern void				icmpv6_param_prob(struct sk_buff *skb,
u8 code, int pos);
struct flowi6;
struct in6_addr;
extern void				icmpv6_flow_init(struct sock *sk,
struct flowi6 *fl6,
u8 type,
const struct in6_addr *saddr,
const struct in6_addr *daddr,
int oif);
