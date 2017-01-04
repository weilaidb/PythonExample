#define __ALPHA_JENSEN_H
#define EISA_INTA		(IDENT_ADDR + 0x100000000UL)
#define EISA_FEPROM0		(IDENT_ADDR + 0x180000000UL)
#define EISA_FEPROM1		(IDENT_ADDR + 0x1A0000000UL)
#define EISA_VL82C106		(IDENT_ADDR + 0x1C0000000UL)
#define EISA_HAE		(IDENT_ADDR + 0x1D0000000UL)
#define EISA_SYSCTL		(IDENT_ADDR + 0x1E0000000UL)
#define EISA_SPARE		(IDENT_ADDR + 0x1F0000000UL)
#define EISA_MEM		(IDENT_ADDR + 0x200000000UL)
#define EISA_IO			(IDENT_ADDR + 0x300000000UL)
#define __EXTERN_INLINE extern inline
#define __IO_EXTERN_INLINE
#define JENSEN_HAE_ADDRESS	EISA_HAE
#define JENSEN_HAE_MASK		0x1ffffff
__EXTERN_INLINE void jensen_set_hae(unsigned long addr)
#define vuip	volatile unsigned int *
static inline unsigned int jensen_local_inb(unsigned long addr)
static inline void jensen_local_outb(u8 b, unsigned long addr)
static inline unsigned int jensen_bus_inb(unsigned long addr)
static inline void jensen_bus_outb(u8 b, unsigned long addr)
#define jensen_is_local(addr) ( \	(addr == 0x60 || addr == 0x64) || \	(addr == 0x170 || addr == 0x171) || \	(addr >= 0x2f8 && addr <= 0x2ff) || \	(addr >= 0x3bc && addr <= 0x3be) || \	(addr >= 0x3f8 && addr <= 0x3ff))
__EXTERN_INLINE u8 jensen_inb(unsigned long addr)
__EXTERN_INLINE void jensen_outb(u8 b, unsigned long addr)
__EXTERN_INLINE u16 jensen_inw(unsigned long addr)
__EXTERN_INLINE u32 jensen_inl(unsigned long addr)
__EXTERN_INLINE void jensen_outw(u16 b, unsigned long addr)
__EXTERN_INLINE void jensen_outl(u32 b, unsigned long addr)
__EXTERN_INLINE u8 jensen_readb(const volatile void __iomem *xaddr)
__EXTERN_INLINE u16 jensen_readw(const volatile void __iomem *xaddr)
__EXTERN_INLINE u32 jensen_readl(const volatile void __iomem *xaddr)
__EXTERN_INLINE u64 jensen_readq(const volatile void __iomem *xaddr)
__EXTERN_INLINE void jensen_writeb(u8 b, volatile void __iomem *xaddr)
__EXTERN_INLINE void jensen_writew(u16 b, volatile void __iomem *xaddr)
__EXTERN_INLINE void jensen_writel(u32 b, volatile void __iomem *xaddr)
__EXTERN_INLINE void jensen_writeq(u64 b, volatile void __iomem *xaddr)
__EXTERN_INLINE void __iomem *jensen_ioportmap(unsigned long addr)
__EXTERN_INLINE void __iomem *jensen_ioremap(unsigned long addr,
unsigned long size)
__EXTERN_INLINE int jensen_is_ioaddr(unsigned long addr)
__EXTERN_INLINE int jensen_is_mmio(const volatile void __iomem *addr)
#define IOPORT(OS, NS)							\
__EXTERN_INLINE unsigned int jensen_ioread##NS(void __iomem *xaddr)	\
\
__EXTERN_INLINE void jensen_iowrite##NS(u##NS b, void __iomem *xaddr)	\
IOPORT(b, 8)
IOPORT(w, 16)
IOPORT(l, 32)
#undef IOPORT
#undef vuip
#undef __IO_PREFIX
#define __IO_PREFIX		jensen
#define jensen_trivial_rw_bw	0
#define jensen_trivial_rw_lq	0
#define jensen_trivial_io_bw	0
#define jensen_trivial_io_lq	0
#define jensen_trivial_iounmap	1
#undef __EXTERN_INLINE
#undef __IO_EXTERN_INLINE
