#define __LINUX_BRIDGE_NETFILTER_H
#define NF_BR_PRE_ROUTING	0
#define NF_BR_LOCAL_IN		1
#define NF_BR_FORWARD		2
#define NF_BR_LOCAL_OUT		3
#define NF_BR_POST_ROUTING	4
#define NF_BR_BROUTING		5
#define NF_BR_NUMHOOKS		6
enum nf_br_hook_priorities ;
#define BRNF_PKT_TYPE			0x01
#define BRNF_BRIDGED_DNAT		0x02
#define BRNF_BRIDGED			0x04
#define BRNF_NF_BRIDGE_PREROUTING	0x08
#define BRNF_8021Q			0x10
#define BRNF_PPPoE			0x20
extern int nf_bridge_copy_header(struct sk_buff *skb);
static inline int nf_bridge_maybe_copy_header(struct sk_buff *skb)
static inline unsigned int nf_bridge_encap_header_len(const struct sk_buff *skb)
static inline unsigned int nf_bridge_mtu_reduction(const struct sk_buff *skb)
extern int br_handle_frame_finish(struct sk_buff *skb);
static inline int br_nf_pre_routing_finish_bridge_slow(struct sk_buff *skb)
static inline unsigned int nf_bridge_pad(const struct sk_buff *skb)
struct bridge_skb_cb ;
#define nf_bridge_maybe_copy_header(skb)	(0)
#define nf_bridge_pad(skb)			(0)
