#define _ASM_SN_IO_H
extern void * sn_io_addr(unsigned long port) __attribute_const__;
extern void __sn_mmiowb(void);
extern int num_cnodes;
#define __sn_mf_a()   ia64_mfa()
extern void sn_dma_flush(unsigned long);
#define __sn_inb ___sn_inb
#define __sn_inw ___sn_inw
#define __sn_inl ___sn_inl
#define __sn_outb ___sn_outb
#define __sn_outw ___sn_outw
#define __sn_outl ___sn_outl
#define __sn_readb ___sn_readb
#define __sn_readw ___sn_readw
#define __sn_readl ___sn_readl
#define __sn_readq ___sn_readq
#define __sn_readb_relaxed ___sn_readb_relaxed
#define __sn_readw_relaxed ___sn_readw_relaxed
#define __sn_readl_relaxed ___sn_readl_relaxed
#define __sn_readq_relaxed ___sn_readq_relaxed
#define __sn_setq_relaxed(addr, val) \
writeq((__sn_readq_relaxed(addr) | (val)), (addr))
#define __sn_clrq_relaxed(addr, val) \
writeq((__sn_readq_relaxed(addr) & ~(val)), (addr))
static inline unsigned int
___sn_inb (unsigned long port)
static inline unsigned int
___sn_inw (unsigned long port)
static inline unsigned int
___sn_inl (unsigned long port)
static inline void
___sn_outb (unsigned char val, unsigned long port)
static inline void
___sn_outw (unsigned short val, unsigned long port)
static inline void
___sn_outl (unsigned int val, unsigned long port)
static inline unsigned char
___sn_readb (const volatile void __iomem *addr)
static inline unsigned short
___sn_readw (const volatile void __iomem *addr)
static inline unsigned int
___sn_readl (const volatile void __iomem *addr)
static inline unsigned long
___sn_readq (const volatile void __iomem *addr)
static inline unsigned int
sn_inb_fast (unsigned long port)
static inline unsigned int
sn_inw_fast (unsigned long port)
static inline unsigned int
sn_inl_fast (unsigned long port)
static inline unsigned char
___sn_readb_relaxed (const volatile void __iomem *addr)
static inline unsigned short
___sn_readw_relaxed (const volatile void __iomem *addr)
static inline unsigned int
___sn_readl_relaxed (const volatile void __iomem *addr)
static inline unsigned long
___sn_readq_relaxed (const volatile void __iomem *addr)
struct pci_dev;
static inline int
sn_pci_set_vchan(struct pci_dev *pci_dev, unsigned long *addr, int vchan)
