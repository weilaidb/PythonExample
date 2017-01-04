#define __ASMARM_SETUP_H
#define COMMAND_LINE_SIZE 1024
#define ATAG_NONE	0x00000000
struct tag_header ;
#define ATAG_CORE	0x54410001
struct tag_core ;
#define ATAG_MEM	0x54410002
struct tag_mem32 ;
#define ATAG_VIDEOTEXT	0x54410003
struct tag_videotext ;
#define ATAG_RAMDISK	0x54410004
struct tag_ramdisk ;
#define ATAG_INITRD	0x54410005
#define ATAG_INITRD2	0x54420005
struct tag_initrd ;
#define ATAG_SERIAL	0x54410006
struct tag_serialnr ;
#define ATAG_REVISION	0x54410007
struct tag_revision ;
#define ATAG_VIDEOLFB	0x54410008
struct tag_videolfb ;
#define ATAG_CMDLINE	0x54410009
struct tag_cmdline ;
#define ATAG_ACORN	0x41000101
struct tag_acorn ;
#define ATAG_MEMCLK	0x41000402
struct tag_memclk ;
struct tag ;
struct tagtable ;
#define tag_member_present(tag,member)				\
((unsigned long)(&((struct tag *)0L)->member + 1)	\
<= (tag)->hdr.size * 4)
#define tag_next(t)	((struct tag *)((__u32 *)(t) + (t)->hdr.size))
#define tag_size(type)	((sizeof(struct tag_header) + sizeof(struct type)) >> 2)
#define for_each_tag(t,base)		\
for (t = base; t->hdr.size; t = tag_next(t))
#define __tag __used __attribute__((__section__(".taglist.init")))
#define __tagtable(tag, fn) \
static struct tagtable __tagtable_##fn __tag =
#define NR_BANKS 8
struct membank ;
struct meminfo ;
extern struct meminfo meminfo;
#define for_each_bank(iter,mi)				\
for (iter = 0; iter < (mi)->nr_banks; iter++)
#define bank_pfn_start(bank)	__phys_to_pfn((bank)->start)
#define bank_pfn_end(bank)	__phys_to_pfn((bank)->start + (bank)->size)
#define bank_pfn_size(bank)	((bank)->size >> PAGE_SHIFT)
#define bank_phys_start(bank)	(bank)->start
#define bank_phys_end(bank)	((bank)->start + (bank)->size)
#define bank_phys_size(bank)	(bank)->size
extern int arm_add_memory(phys_addr_t start, unsigned long size);
extern void early_print(const char *str, ...);
extern void dump_machine_table(void);
