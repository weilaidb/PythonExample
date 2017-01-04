#undef __sn_inb
#undef __sn_inw
#undef __sn_inl
#undef __sn_outb
#undef __sn_outw
#undef __sn_outl
#undef __sn_readb
#undef __sn_readw
#undef __sn_readl
#undef __sn_readq
#undef __sn_readb_relaxed
#undef __sn_readw_relaxed
#undef __sn_readl_relaxed
#undef __sn_readq_relaxed
unsigned int __sn_inb(unsigned long port)
unsigned int __sn_inw(unsigned long port)
unsigned int __sn_inl(unsigned long port)
void __sn_outb(unsigned char val, unsigned long port)
void __sn_outw(unsigned short val, unsigned long port)
void __sn_outl(unsigned int val, unsigned long port)
unsigned char __sn_readb(void __iomem *addr)
unsigned short __sn_readw(void __iomem *addr)
unsigned int __sn_readl(void __iomem *addr)
unsigned long __sn_readq(void __iomem *addr)
unsigned char __sn_readb_relaxed(void __iomem *addr)
unsigned short __sn_readw_relaxed(void __iomem *addr)
unsigned int __sn_readl_relaxed(void __iomem *addr)
unsigned long __sn_readq_relaxed(void __iomem *addr)
