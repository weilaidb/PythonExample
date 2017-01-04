#define _NF_NAT_RULE_H
extern int nf_nat_rule_init(void) __init;
extern void nf_nat_rule_cleanup(void);
extern int nf_nat_rule_find(struct sk_buff *skb,
unsigned int hooknum,
const struct net_device *in,
const struct net_device *out,
struct nf_conn *ct);
