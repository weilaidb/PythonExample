#define __NET_TC_DEF_H
struct tcf_defact ;
#define to_defact(pc) \
container_of(pc, struct tcf_defact, common)
