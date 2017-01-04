#define __ASM_ARM_ARCH_IO_H
#define IO_SPACE_LIMIT		0xffffffff
#define __mem_pci(a)		(a)
#define ___io(p)		((void __iomem *)((p)+IXP2000_PCI_IO_VIRT_BASE))
#define alignb(addr)		(void __iomem *)((unsigned long)(addr) ^ 3)
#define alignw(addr)		(void __iomem *)((unsigned long)(addr) ^ 2)
#define outb(v,p)		__raw_writeb((v),alignb(___io(p)))
#define outw(v,p)		__raw_writew((v),alignw(___io(p)))
#define outl(v,p)		__raw_writel((v),___io(p))
#define inb(p)		()
#define inw(p)		\
()
#define inl(p)		\
()
#define outsb(p,d,l)		__raw_writesb(alignb(___io(p)),d,l)
#define outsw(p,d,l)		__raw_writesw(alignw(___io(p)),d,l)
#define outsl(p,d,l)		__raw_writesl(___io(p),d,l)
#define insb(p,d,l)		__raw_readsb(alignb(___io(p)),d,l)
#define insw(p,d,l)		__raw_readsw(alignw(___io(p)),d,l)
#define insl(p,d,l)		__raw_readsl(___io(p),d,l)
#define __is_io_address(p)	((((unsigned long)(p)) & ~(IXP2000_PCI_IO_SIZE - 1)) == IXP2000_PCI_IO_VIRT_BASE)
#define ioread8(p)						\
()							\
#define ioread16(p)						\
()
#define ioread32(p)						\
()
#define iowrite8(v,p)						\
()
#define iowrite16(v,p)						\
()
#define iowrite32(v,p)						\
()
#define ioport_map(port, nr)	___io(port)
#define ioport_unmap(addr)
#define __io(p)			((void __iomem *)((p)+IXP2000_PCI_IO_VIRT_BASE))
