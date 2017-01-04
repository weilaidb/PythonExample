#define __ALPHA_GCT_H
typedef u64 gct_id;
typedef u64 gct6_handle;
typedef struct __gct6_node  gct6_node;
typedef struct  gct6_search_struct;
#define GCT_NODE_MAGIC	  0x59584c47
#define GCT_TYPE_HOSE			0x0E
#define GCT_SUBTYPE_IO_PORT_MODULE	0x2C
#define GCT_NODE_PTR(off) ((gct6_node *)((char *)hwrpb + 		\
hwrpb->frut_offset + 		\
(gct6_handle)(off)))		\
int gct6_find_nodes(gct6_node *, gct6_search_struct *);
