MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jan-Bernd Themann <themann@de.ibm.com>");
MODULE_DESCRIPTION("Large Receive Offload (ipv4 / tcp)");
#define TCP_HDR_LEN(tcph) (tcph->doff << 2)
#define IP_HDR_LEN(iph) (iph->ihl << 2)
#define TCP_PAYLOAD_LENGTH(iph, tcph) \
(ntohs(iph->tot_len) - IP_HDR_LEN(iph) - TCP_HDR_LEN(tcph))
#define IPH_LEN_WO_OPTIONS 5
#define TCPH_LEN_WO_OPTIONS 5
#define TCPH_LEN_W_TIMESTAMP 8
#define LRO_MAX_PG_HLEN 64
#define LRO_INC_STATS(lro_mgr, attr)
static int lro_tcp_ip_check(const struct iphdr *iph, const struct tcphdr *tcph,
int len, const struct net_lro_desc *lro_desc)
static void lro_update_tcp_ip_header(struct net_lro_desc *lro_desc)
static __wsum lro_tcp_data_csum(struct iphdr *iph, struct tcphdr *tcph, int len)
static void lro_init_desc(struct net_lro_desc *lro_desc, struct sk_buff *skb,
struct iphdr *iph, struct tcphdr *tcph,
u16 vlan_tag, struct vlan_group *vgrp)
static inline void lro_clear_desc(struct net_lro_desc *lro_desc)
static void lro_add_common(struct net_lro_desc *lro_desc, struct iphdr *iph,
struct tcphdr *tcph, int tcp_data_len)
static void lro_add_packet(struct net_lro_desc *lro_desc, struct sk_buff *skb,
struct iphdr *iph, struct tcphdr *tcph)
static void lro_add_frags(struct net_lro_desc *lro_desc,
int len, int hlen, int truesize,
struct skb_frag_struct *skb_frags,
struct iphdr *iph, struct tcphdr *tcph)
static int lro_check_tcp_conn(struct net_lro_desc *lro_desc,
struct iphdr *iph,
struct tcphdr *tcph)
static struct net_lro_desc *lro_get_desc(struct net_lro_mgr *lro_mgr,
struct net_lro_desc *lro_arr,
struct iphdr *iph,
struct tcphdr *tcph)
static void lro_flush(struct net_lro_mgr *lro_mgr,
struct net_lro_desc *lro_desc)
static int __lro_proc_skb(struct net_lro_mgr *lro_mgr, struct sk_buff *skb,
struct vlan_group *vgrp, u16 vlan_tag, void *priv)
static struct sk_buff *lro_gen_skb(struct net_lro_mgr *lro_mgr,
struct skb_frag_struct *frags,
int len, int true_size,
void *mac_hdr,
int hlen, __wsum sum,
u32 ip_summed)
static struct sk_buff *__lro_proc_segment(struct net_lro_mgr *lro_mgr,
struct skb_frag_struct *frags,
int len, int true_size,
struct vlan_group *vgrp,
u16 vlan_tag, void *priv, __wsum sum)
void lro_receive_skb(struct net_lro_mgr *lro_mgr,
struct sk_buff *skb,
void *priv)
EXPORT_SYMBOL(lro_receive_skb);
void lro_vlan_hwaccel_receive_skb(struct net_lro_mgr *lro_mgr,
struct sk_buff *skb,
struct vlan_group *vgrp,
u16 vlan_tag,
void *priv)
EXPORT_SYMBOL(lro_vlan_hwaccel_receive_skb);
void lro_receive_frags(struct net_lro_mgr *lro_mgr,
struct skb_frag_struct *frags,
int len, int true_size, void *priv, __wsum sum)
EXPORT_SYMBOL(lro_receive_frags);
void lro_vlan_hwaccel_receive_frags(struct net_lro_mgr *lro_mgr,
struct skb_frag_struct *frags,
int len, int true_size,
struct vlan_group *vgrp,
u16 vlan_tag, void *priv, __wsum sum)
EXPORT_SYMBOL(lro_vlan_hwaccel_receive_frags);
void lro_flush_all(struct net_lro_mgr *lro_mgr)
EXPORT_SYMBOL(lro_flush_all);
void lro_flush_pkt(struct net_lro_mgr *lro_mgr,
struct iphdr *iph, struct tcphdr *tcph)
EXPORT_SYMBOL(lro_flush_pkt);
