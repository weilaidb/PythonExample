#undef DEBUG
#define PTRTREESIZE	(256*1024)
#define IO_SIZE		PAGE_SIZE
static inline struct vm_struct *get_io_area(unsigned long size)
static inline void free_io_area(void *addr)
#define IO_SIZE		(256*1024)
static struct vm_struct *iolist;
static struct vm_struct *get_io_area(unsigned long size)
static inline void free_io_area(void *addr)
void __iomem *__ioremap(unsigned long physaddr, unsigned long size, int cacheflag)
EXPORT_SYMBOL(__ioremap);
void iounmap(void __iomem *addr)
EXPORT_SYMBOL(iounmap);
void __iounmap(void *addr, unsigned long size)
void kernel_set_cachemode(void *addr, unsigned long size, int cmode)
EXPORT_SYMBOL(kernel_set_cachemode);
