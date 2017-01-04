#define __INET_LRO_H_
struct net_lro_stats ;
struct net_lro_desc ;
struct net_lro_mgr ;
void lro_receive_skb(struct net_lro_mgr *lro_mgr,
struct sk_buff *skb,
void *priv);
void lro_vlan_hwaccel_receive_skb(struct net_lro_mgr *lro_mgr,
struct sk_buff *skb,
struct vlan_group *vgrp,
u16 vlan_tag,
void *priv);
void lro_receive_frags(struct net_lro_mgr *lro_mgr,
struct skb_frag_struct *frags,
int len, int true_size, void *priv, __wsum sum);
void lro_vlan_hwaccel_receive_frags(struct net_lro_mgr *lro_mgr,
struct skb_frag_struct *frags,
int len, int true_size,
struct vlan_group *vgrp,
u16 vlan_tag,
void *priv, __wsum sum);
void lro_flush_all(struct net_lro_mgr *lro_mgr);
void lro_flush_pkt(struct net_lro_mgr *lro_mgr,
struct iphdr *iph, struct tcphdr *tcph);
