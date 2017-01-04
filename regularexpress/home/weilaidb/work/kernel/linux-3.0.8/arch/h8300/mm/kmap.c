#undef DEBUG
#define VIRT_OFFSET (0x01000000)
void *__ioremap(unsigned long physaddr, unsigned long size, int cacheflag)
void iounmap(void *addr)
void __iounmap(void *addr, unsigned long size)
void kernel_set_cachemode(void *addr, unsigned long size, int cmode)
