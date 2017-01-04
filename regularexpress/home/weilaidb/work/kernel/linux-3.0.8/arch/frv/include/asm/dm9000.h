#define _ASM_DM9000_H
#define DM9000_ARCH_IOBASE	(__region_CS6 + 0x300)
#define DM9000_ARCH_IRQ		IRQ_CPU_EXTERNAL3
#undef DM9000_ARCH_IRQ_ACTLOW
#define DM9000_ARCH_BUS_INFO	"CS6#+0x300"
#undef __is_PCI_IO
#define __is_PCI_IO(addr)	0
#undef inl
#define inl(addr)										\
()
#undef insl
#define insl(a,b,l)	__insl(a,b,l,0)
