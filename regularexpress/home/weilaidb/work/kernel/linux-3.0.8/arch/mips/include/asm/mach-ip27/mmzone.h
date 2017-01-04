#define _ASM_MACH_MMZONE_H
#define pa_to_nid(addr)		NASID_TO_COMPACT_NODEID(NASID_GET(addr))
#define LEVELS_PER_SLICE        128
struct slice_data ;
struct hub_data ;
struct node_data ;
extern struct node_data *__node_data[];
#define NODE_DATA(n)		(&__node_data[(n)]->pglist)
#define hub_data(n)		(&__node_data[(n)]->hub)
