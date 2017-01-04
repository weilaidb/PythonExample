#define __NET_TC_CSUM_H
struct tcf_csum ;
#define to_tcf_csum(pc) \
container_of(pc,struct tcf_csum,common)
