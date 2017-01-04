#define IS_LOW512(addr) (!((unsigned long)(addr) & ~0x1fffffffUL))
void __iomem *
__ioremap(unsigned long phys_addr, unsigned long size, unsigned long flags)
#define IS_KSEG1(addr) (((unsigned long)(addr) & ~0x1fffffffUL) == KSEG1)
void iounmap(volatile void __iomem *addr)
