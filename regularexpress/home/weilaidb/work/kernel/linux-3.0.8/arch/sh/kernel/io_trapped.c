#define TRAPPED_PAGES_MAX 16
LIST_HEAD(trapped_io);
EXPORT_SYMBOL_GPL(trapped_io);
LIST_HEAD(trapped_mem);
EXPORT_SYMBOL_GPL(trapped_mem);
static DEFINE_SPINLOCK(trapped_lock);
static int trapped_io_disable __read_mostly;
static int __init trapped_io_setup(char *__unused)
__setup("noiotrap", trapped_io_setup);
int register_trapped_io(struct trapped_io *tiop)
EXPORT_SYMBOL_GPL(register_trapped_io);
void __iomem *match_trapped_io_handler(struct list_head *list,
unsigned long offset,
unsigned long size)
EXPORT_SYMBOL_GPL(match_trapped_io_handler);
static struct trapped_io *lookup_tiop(unsigned long address)
static unsigned long lookup_address(struct trapped_io *tiop,
unsigned long address)
static unsigned long long copy_word(unsigned long src_addr, int src_len,
unsigned long dst_addr, int dst_len)
static unsigned long from_device(void *dst, const void *src, unsigned long cnt)
static unsigned long to_device(void *dst, const void *src, unsigned long cnt)
static struct mem_access trapped_io_access = ;
int handle_trapped_io(struct pt_regs *regs, unsigned long address)
