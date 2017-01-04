#define __LINUX_IP6_NETFILTER_H
#define NFC_IP6_SRC              0x0001
#define NFC_IP6_DST              0x0002
#define NFC_IP6_IF_IN            0x0004
#define NFC_IP6_IF_OUT           0x0008
#define NFC_IP6_TOS              0x0010
#define NFC_IP6_PROTO            0x0020
#define NFC_IP6_OPTIONS          0x0040
#define NFC_IP6_FRAG             0x0080
#define NFC_IP6_TCPFLAGS         0x0100
#define NFC_IP6_SRC_PT           0x0200
#define NFC_IP6_DST_PT           0x0400
#define NFC_IP6_PROTO_UNKNOWN    0x2000
#define NF_IP6_PRE_ROUTING	0
#define NF_IP6_LOCAL_IN		1
#define NF_IP6_FORWARD		2
#define NF_IP6_LOCAL_OUT		3
#define NF_IP6_POST_ROUTING	4
#define NF_IP6_NUMHOOKS		5
enum nf_ip6_hook_priorities ;
extern int ip6_route_me_harder(struct sk_buff *skb);
extern __sum16 nf_ip6_checksum(struct sk_buff *skb, unsigned int hook,
unsigned int dataoff, u_int8_t protocol);
extern int ipv6_netfilter_init(void);
extern void ipv6_netfilter_fini(void);
static inline int ipv6_netfilter_init(void)
static inline void ipv6_netfilter_fini(void)
