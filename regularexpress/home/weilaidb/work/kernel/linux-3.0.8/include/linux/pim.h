#define __LINUX_PIM_H
#define PIM_V1_VERSION		cpu_to_be32(0x10000000)
#define PIM_V1_REGISTER		1
#define PIM_VERSION		2
#define PIM_REGISTER		1
#define PIM_NULL_REGISTER	cpu_to_be32(0x40000000)
struct pimreghdr
;
struct sk_buff;
extern int pim_rcv_v1(struct sk_buff *);
