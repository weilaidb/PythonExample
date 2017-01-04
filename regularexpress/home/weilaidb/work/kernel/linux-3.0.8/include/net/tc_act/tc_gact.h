#define __NET_TC_GACT_H
struct tcf_gact ;
#define to_gact(pc) \
container_of(pc, struct tcf_gact, common)
