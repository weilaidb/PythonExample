#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
void __init reserve_kdump_trampoline(void)
static void __init create_trampoline(unsigned long addr)
void __init setup_kdump_trampoline(void)
static int __init parse_savemaxmem(char *p)
__setup("savemaxmem=", parse_savemaxmem);
static size_t copy_oldmem_vaddr(void *vaddr, char *buf, size_t csize,
unsigned long offset, int userbuf)
ssize_t copy_oldmem_page(unsigned long pfn, char *buf,
size_t csize, unsigned long offset, int userbuf)
void crash_free_reserved_phys_range(unsigned long begin, unsigned long end)
