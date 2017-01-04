#define __ASM_SH_IO_TRAPPED_H
#define IO_TRAPPED_MAGIC 0xfeedbeef
struct trapped_io  __aligned(PAGE_SIZE);
int register_trapped_io(struct trapped_io *tiop);
int handle_trapped_io(struct pt_regs *regs, unsigned long address);
void __iomem *match_trapped_io_handler(struct list_head *list,
unsigned long offset,
unsigned long size);
extern struct list_head trapped_mem;
static inline void __iomem *
__ioremap_trapped(unsigned long offset, unsigned long size)
#define __ioremap_trapped(offset, size) NULL
extern struct list_head trapped_io;
static inline void __iomem *
__ioport_map_trapped(unsigned long offset, unsigned long size)
#define __ioport_map_trapped(offset, size) NULL
#define register_trapped_io(tiop) (-1)
#define handle_trapped_io(tiop, address) 0
#define __ioremap_trapped(offset, size) NULL
#define __ioport_map_trapped(offset, size) NULL
