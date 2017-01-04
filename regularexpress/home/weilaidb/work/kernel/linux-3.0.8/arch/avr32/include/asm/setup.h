#define __ASM_AVR32_SETUP_H__
#define COMMAND_LINE_SIZE 256
#define ATAG_MAGIC	0xa2a25441
struct tag_mem_range ;
#define ATAG_NONE	0x00000000
struct tag_header ;
#define ATAG_CORE	0x54410001
struct tag_core ;
#define ATAG_MEM	0x54410002
#define ATAG_CMDLINE	0x54410003
struct tag_cmdline ;
#define ATAG_RDIMG	0x54410004
#define ATAG_CLOCK	0x54410005
struct tag_clock ;
#define CLOCK_BOOTCPU	0
#define ATAG_RSVD_MEM	0x54410006
#define ATAG_ETHERNET	0x54410007
struct tag_ethernet ;
#define ETH_INVALID_PHY	0xff
#define ATAG_BOARDINFO	0x54410008
struct tag_boardinfo ;
struct tag ;
struct tagtable ;
#define __tag __used __attribute__((__section__(".taglist.init")))
#define __tagtable(tag, fn)						\
static struct tagtable __tagtable_##fn __tag =
#define tag_member_present(tag,member)					\
((unsigned long)(&((struct tag *)0L)->member + 1)		\
<= (tag)->hdr.size * 4)
#define tag_next(t)	((struct tag *)((u32 *)(t) + (t)->hdr.size))
#define tag_size(type)	((sizeof(struct tag_header) + sizeof(struct type)) >> 2)
#define for_each_tag(t,base)						\
for (t = base; t->hdr.size; t = tag_next(t))
extern struct tag *bootloader_tags;
extern resource_size_t fbmem_start;
extern resource_size_t fbmem_size;
extern u32 board_number;
void setup_processor(void);
