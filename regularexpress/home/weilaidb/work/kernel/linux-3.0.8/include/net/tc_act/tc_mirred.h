#define __NET_TC_MIR_H
struct tcf_mirred ;
#define to_mirred(pc) \
container_of(pc, struct tcf_mirred, common)
