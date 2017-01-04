#define __LINUX_IP_NETFILTER_H
#define NFC_IP_SRC		0x0001
#define NFC_IP_DST		0x0002
#define NFC_IP_IF_IN		0x0004
#define NFC_IP_IF_OUT		0x0008
#define NFC_IP_TOS		0x0010
#define NFC_IP_PROTO		0x0020
#define NFC_IP_OPTIONS		0x0040
#define NFC_IP_FRAG		0x0080
#define NFC_IP_TCPFLAGS		0x0100
#define NFC_IP_SRC_PT		0x0200
#define NFC_IP_DST_PT		0x0400
#define NFC_IP_PROTO_UNKNOWN	0x2000
#define NF_IP_PRE_ROUTING	0
#define NF_IP_LOCAL_IN		1
#define NF_IP_FORWARD		2
#define NF_IP_LOCAL_OUT		3
#define NF_IP_POST_ROUTING	4
#define NF_IP_NUMHOOKS		5
enum nf_ip_hook_priorities ;
#define SO_ORIGINAL_DST 80
extern int ip_route_me_harder(struct sk_buff *skb, unsigned addr_type);
extern int ip_xfrm_me_harder(struct sk_buff *skb);
extern __sum16 nf_ip_checksum(struct sk_buff *skb, unsigned int hook,
unsigned int dataoff, u_int8_t protocol);
