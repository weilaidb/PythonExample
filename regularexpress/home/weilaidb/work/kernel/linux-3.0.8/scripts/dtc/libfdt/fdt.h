#define _FDT_H
struct fdt_header ;
struct fdt_reserve_entry ;
struct fdt_node_header ;
struct fdt_property ;
#define FDT_MAGIC	0xd00dfeed
#define FDT_TAGSIZE	sizeof(uint32_t)
#define FDT_BEGIN_NODE	0x1
#define FDT_END_NODE	0x2
#define FDT_PROP	0x3
#define FDT_NOP		0x4
#define FDT_END		0x9
#define FDT_V1_SIZE	(7*sizeof(uint32_t))
#define FDT_V2_SIZE	(FDT_V1_SIZE + sizeof(uint32_t))
#define FDT_V3_SIZE	(FDT_V2_SIZE + sizeof(uint32_t))
#define FDT_V16_SIZE	FDT_V3_SIZE
#define FDT_V17_SIZE	(FDT_V16_SIZE + sizeof(uint32_t))
