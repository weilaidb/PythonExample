#define _IO_H
#define q40_isa_io_base  0xff400000
#define q40_isa_mem_base 0xff800000
#define Q40_ISA_IO_B(ioaddr) (q40_isa_io_base+1+4*((unsigned long)(ioaddr)))
#define Q40_ISA_IO_W(ioaddr) (q40_isa_io_base+  4*((unsigned long)(ioaddr)))
#define Q40_ISA_MEM_B(madr)  (q40_isa_mem_base+1+4*((unsigned long)(madr)))
#define Q40_ISA_MEM_W(madr)  (q40_isa_mem_base+  4*((unsigned long)(madr)))
#define MULTI_ISA 0
#define AG_ISA_IO_B(ioaddr) ( GAYLE_IO+(ioaddr)+(((ioaddr)&1)*GAYLE_ODD) )
#define AG_ISA_IO_W(ioaddr) ( GAYLE_IO+(ioaddr) )
#define MULTI_ISA 0
#undef MULTI_ISA
#define MULTI_ISA 1
#if MULTI_ISA == 0
#undef MULTI_ISA
#define ISA_TYPE_Q40 (1)
#define ISA_TYPE_AG  (2)
#if defined(CONFIG_Q40) && !defined(MULTI_ISA)
#define ISA_TYPE ISA_TYPE_Q40
#define ISA_SEX  0
#if defined(CONFIG_AMIGA_PCMCIA) && !defined(MULTI_ISA)
#define ISA_TYPE ISA_TYPE_AG
#define ISA_SEX  1
extern int isa_type;
extern int isa_sex;
#define ISA_TYPE isa_type
#define ISA_SEX  isa_sex
static inline u8 __iomem *isa_itb(unsigned long addr)
static inline u16 __iomem *isa_itw(unsigned long addr)
static inline u32 __iomem *isa_itl(unsigned long addr)
static inline u8 __iomem *isa_mtb(unsigned long addr)
static inline u16 __iomem *isa_mtw(unsigned long addr)
#define isa_inb(port)      in_8(isa_itb(port))
#define isa_inw(port)      (ISA_SEX ? in_be16(isa_itw(port)) : in_le16(isa_itw(port)))
#define isa_inl(port)      (ISA_SEX ? in_be32(isa_itl(port)) : in_le32(isa_itl(port)))
#define isa_outb(val,port) out_8(isa_itb(port),(val))
#define isa_outw(val,port) (ISA_SEX ? out_be16(isa_itw(port),(val)) : out_le16(isa_itw(port),(val)))
#define isa_outl(val,port) (ISA_SEX ? out_be32(isa_itl(port),(val)) : out_le32(isa_itl(port),(val)))
#define isa_readb(p)       in_8(isa_mtb((unsigned long)(p)))
#define isa_readw(p)       \
(ISA_SEX ? in_be16(isa_mtw((unsigned long)(p)))	\
: in_le16(isa_mtw((unsigned long)(p))))
#define isa_writeb(val,p)  out_8(isa_mtb((unsigned long)(p)),(val))
#define isa_writew(val,p)  \
(ISA_SEX ? out_be16(isa_mtw((unsigned long)(p)),(val))	\
: out_le16(isa_mtw((unsigned long)(p)),(val)))
static inline void isa_delay(void)
#define isa_inb_p(p)      ()
#define isa_outb_p(v,p)   ()
#define isa_inw_p(p)      ()
#define isa_outw_p(v,p)   ()
#define isa_inl_p(p)      ()
#define isa_outl_p(v,p)   ()
#define isa_insb(port, buf, nr) raw_insb(isa_itb(port), (u8 *)(buf), (nr))
#define isa_outsb(port, buf, nr) raw_outsb(isa_itb(port), (u8 *)(buf), (nr))
#define isa_insw(port, buf, nr)     \
(ISA_SEX ? raw_insw(isa_itw(port), (u16 *)(buf), (nr)) :    \
raw_insw_swapw(isa_itw(port), (u16 *)(buf), (nr)))
#define isa_outsw(port, buf, nr)    \
(ISA_SEX ? raw_outsw(isa_itw(port), (u16 *)(buf), (nr)) :  \
raw_outsw_swapw(isa_itw(port), (u16 *)(buf), (nr)))
#define isa_insl(port, buf, nr)     \
(ISA_SEX ? raw_insl(isa_itl(port), (u32 *)(buf), (nr)) :    \
raw_insw_swapw(isa_itw(port), (u16 *)(buf), (nr)<<1))
#define isa_outsl(port, buf, nr)    \
(ISA_SEX ? raw_outsl(isa_itl(port), (u32 *)(buf), (nr)) :  \
raw_outsw_swapw(isa_itw(port), (u16 *)(buf), (nr)<<1))
#define inb     isa_inb
#define inb_p   isa_inb_p
#define outb    isa_outb
#define outb_p  isa_outb_p
#define inw     isa_inw
#define inw_p   isa_inw_p
#define outw    isa_outw
#define outw_p  isa_outw_p
#define inl     isa_inl
#define inl_p   isa_inl_p
#define outl    isa_outl
#define outl_p  isa_outl_p
#define insb    isa_insb
#define insw    isa_insw
#define insl    isa_insl
#define outsb   isa_outsb
#define outsw   isa_outsw
#define outsl   isa_outsl
#define readb   isa_readb
#define readw   isa_readw
#define writeb  isa_writeb
#define writew  isa_writew
#define inb(port)          0xff
#define inb_p(port)        0xff
#define outb(val,port)     ((void)0)
#define outb_p(val,port)   ((void)0)
#define inw(port)          0xffff
#define inw_p(port)        0xffff
#define outw(val,port)     ((void)0)
#define outw_p(val,port)   ((void)0)
#define inl(port)          0xffffffffUL
#define inl_p(port)        0xffffffffUL
#define outl(val,port)     ((void)0)
#define outl_p(val,port)   ((void)0)
#define insb(port,buf,nr)  ((void)0)
#define outsb(port,buf,nr) ((void)0)
#define insw(port,buf,nr)  ((void)0)
#define outsw(port,buf,nr) ((void)0)
#define insl(port,buf,nr)  ((void)0)
#define outsl(port,buf,nr) ((void)0)
#define readb(addr)      in_8(addr)
#define writeb(val,addr) out_8((addr),(val))
#define readw(addr)      in_le16(addr)
#define writew(val,addr) out_le16((addr),(val))
#define readl(addr)      in_le32(addr)
#define writel(val,addr) out_le32((addr),(val))
#define mmiowb()
static inline void __iomem *ioremap(unsigned long physaddr, unsigned long size)
static inline void __iomem *ioremap_nocache(unsigned long physaddr, unsigned long size)
static inline void __iomem *ioremap_writethrough(unsigned long physaddr,
unsigned long size)
static inline void __iomem *ioremap_fullcache(unsigned long physaddr,
unsigned long size)
static inline void memset_io(volatile void __iomem *addr, unsigned char val, int count)
static inline void memcpy_fromio(void *dst, const volatile void __iomem *src, int count)
static inline void memcpy_toio(volatile void __iomem *dst, const void *src, int count)
#define IO_SPACE_LIMIT 0xffff
#define IO_SPACE_LIMIT 0x0fffffff
#define __ARCH_HAS_NO_PAGE_ZERO_MAPPED		1
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
