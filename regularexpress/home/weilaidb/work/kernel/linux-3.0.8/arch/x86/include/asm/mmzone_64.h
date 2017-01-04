#define _ASM_X86_MMZONE_64_H
extern struct pglist_data *node_data[];
#define NODE_DATA(nid)		(node_data[nid])
