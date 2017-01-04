#define __NET_TC_NAT_H
struct tcf_nat ;
static inline struct tcf_nat *to_tcf_nat(struct tcf_common *pc)
