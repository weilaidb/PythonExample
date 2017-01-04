#define _ASM_POWERPC_IO_H
#define ARCH_HAS_IOREMAP_WC
extern int check_legacy_ioport(unsigned long base_port);
#define I8042_DATA_REG	0x60
#define FDC_BASE	0x3f0
#define _PIDXR		0x279
#define _PNPWRP		0xa79
#define PNPBIOS_BASE	0xf000
#define SIO_CONFIG_RA	0x398
#define SIO_CONFIG_RD	0x399
#define SLOW_DOWN_IO
#define _IO_BASE	0
#define _ISA_MEM_BASE	0
#define PCI_DRAM_OFFSET 0
#elif defined(CONFIG_PPC32)
#define _IO_BASE	isa_io_base
#define _ISA_MEM_BASE	isa_mem_base
#define PCI_DRAM_OFFSET	pci_dram_offset
#define _IO_BASE	pci_io_base
#define _ISA_MEM_BASE	isa_mem_base
#define PCI_DRAM_OFFSET	0
extern unsigned long isa_io_base;
extern unsigned long pci_io_base;
extern unsigned long pci_dram_offset;
extern resource_size_t isa_mem_base;
#if defined(CONFIG_PPC32) && defined(CONFIG_PPC_INDIRECT_IO)
#error CONFIG_PPC_INDIRECT_IO is not yet supported on 32 bits
#define IO_SET_SYNC_FLAG()	do  while(0)
#define IO_SET_SYNC_FLAG()
#if __GNUC__ < 4 || (__GNUC__ == 4 && __GNUC_MINOR__ == 0)
#define DEF_MMIO_IN_LE(name, size, insn)				\
static inline u##size name(const volatile u##size __iomem *addr)	\
#define DEF_MMIO_OUT_LE(name, size, insn) 				\
static inline void name(volatile u##size __iomem *addr, u##size val)	\
#define DEF_MMIO_IN_LE(name, size, insn)				\
static inline u##size name(const volatile u##size __iomem *addr)	\
#define DEF_MMIO_OUT_LE(name, size, insn) 				\
static inline void name(volatile u##size __iomem *addr, u##size val)	\
#define DEF_MMIO_IN_BE(name, size, insn)				\
static inline u##size name(const volatile u##size __iomem *addr)	\
#define DEF_MMIO_OUT_BE(name, size, insn)				\
static inline void name(volatile u##size __iomem *addr, u##size val)	\
DEF_MMIO_IN_BE(in_8,     8, lbz);
DEF_MMIO_IN_BE(in_be16, 16, lhz);
DEF_MMIO_IN_BE(in_be32, 32, lwz);
DEF_MMIO_IN_LE(in_le16, 16, lhbrx);
DEF_MMIO_IN_LE(in_le32, 32, lwbrx);
DEF_MMIO_OUT_BE(out_8,     8, stb);
DEF_MMIO_OUT_BE(out_be16, 16, sth);
DEF_MMIO_OUT_BE(out_be32, 32, stw);
DEF_MMIO_OUT_LE(out_le16, 16, sthbrx);
DEF_MMIO_OUT_LE(out_le32, 32, stwbrx);
DEF_MMIO_OUT_BE(out_be64, 64, std);
DEF_MMIO_IN_BE(in_be64, 64, ld);
static inline u64 in_le64(const volatile u64 __iomem *addr)
static inline void out_le64(volatile u64 __iomem *addr, u64 val)
extern void _insb(const volatile u8 __iomem *addr, void *buf, long count);
extern void _outsb(volatile u8 __iomem *addr,const void *buf,long count);
extern void _insw_ns(const volatile u16 __iomem *addr, void *buf, long count);
extern void _outsw_ns(volatile u16 __iomem *addr, const void *buf, long count);
extern void _insl_ns(const volatile u32 __iomem *addr, void *buf, long count);
extern void _outsl_ns(volatile u32 __iomem *addr, const void *buf, long count);
#define _insw	_insw_ns
#define _insl	_insl_ns
#define _outsw	_outsw_ns
#define _outsl	_outsl_ns
extern void _memset_io(volatile void __iomem *addr, int c, unsigned long n);
extern void _memcpy_fromio(void *dest, const volatile void __iomem *src,
unsigned long n);
extern void _memcpy_toio(volatile void __iomem *dest, const void *src,
unsigned long n);
#define PCI_IO_ADDR	volatile void __iomem *
#define PCI_IO_IND_TOKEN_MASK	0x0fff000000000000ul
#define PCI_IO_IND_TOKEN_SHIFT	48
#define PCI_FIX_ADDR(addr)						\
((PCI_IO_ADDR)(((unsigned long)(addr)) & ~PCI_IO_IND_TOKEN_MASK))
#define PCI_GET_ADDR_TOKEN(addr)					\
(((unsigned long)(addr) & PCI_IO_IND_TOKEN_MASK) >> 		\
PCI_IO_IND_TOKEN_SHIFT)
#define PCI_SET_ADDR_TOKEN(addr, token) 				\
do  while(0)
#define PCI_FIX_ADDR(addr) (addr)
static inline unsigned char __raw_readb(const volatile void __iomem *addr)
static inline unsigned short __raw_readw(const volatile void __iomem *addr)
static inline unsigned int __raw_readl(const volatile void __iomem *addr)
static inline void __raw_writeb(unsigned char v, volatile void __iomem *addr)
static inline void __raw_writew(unsigned short v, volatile void __iomem *addr)
static inline void __raw_writel(unsigned int v, volatile void __iomem *addr)
static inline unsigned long __raw_readq(const volatile void __iomem *addr)
static inline void __raw_writeq(unsigned long v, volatile void __iomem *addr)
#define __do_in_asm(name, op)				\
static inline unsigned int name(unsigned int port)	\
#define __do_out_asm(name, op)				\
static inline void name(unsigned int val, unsigned int port) \
__do_in_asm(_rec_inb, "lbzx")
__do_in_asm(_rec_inw, "lhbrx")
__do_in_asm(_rec_inl, "lwbrx")
__do_out_asm(_rec_outb, "stbx")
__do_out_asm(_rec_outw, "sthbrx")
__do_out_asm(_rec_outl, "stwbrx")
#define __do_writeb(val, addr)	out_8(PCI_FIX_ADDR(addr), val)
#define __do_writew(val, addr)	out_le16(PCI_FIX_ADDR(addr), val)
#define __do_writel(val, addr)	out_le32(PCI_FIX_ADDR(addr), val)
#define __do_writeq(val, addr)	out_le64(PCI_FIX_ADDR(addr), val)
#define __do_writew_be(val, addr) out_be16(PCI_FIX_ADDR(addr), val)
#define __do_writel_be(val, addr) out_be32(PCI_FIX_ADDR(addr), val)
#define __do_writeq_be(val, addr) out_be64(PCI_FIX_ADDR(addr), val)
#define __do_readb(addr)	eeh_readb(PCI_FIX_ADDR(addr))
#define __do_readw(addr)	eeh_readw(PCI_FIX_ADDR(addr))
#define __do_readl(addr)	eeh_readl(PCI_FIX_ADDR(addr))
#define __do_readq(addr)	eeh_readq(PCI_FIX_ADDR(addr))
#define __do_readw_be(addr)	eeh_readw_be(PCI_FIX_ADDR(addr))
#define __do_readl_be(addr)	eeh_readl_be(PCI_FIX_ADDR(addr))
#define __do_readq_be(addr)	eeh_readq_be(PCI_FIX_ADDR(addr))
#define __do_readb(addr)	in_8(PCI_FIX_ADDR(addr))
#define __do_readw(addr)	in_le16(PCI_FIX_ADDR(addr))
#define __do_readl(addr)	in_le32(PCI_FIX_ADDR(addr))
#define __do_readq(addr)	in_le64(PCI_FIX_ADDR(addr))
#define __do_readw_be(addr)	in_be16(PCI_FIX_ADDR(addr))
#define __do_readl_be(addr)	in_be32(PCI_FIX_ADDR(addr))
#define __do_readq_be(addr)	in_be64(PCI_FIX_ADDR(addr))
#define __do_outb(val, port)	_rec_outb(val, port)
#define __do_outw(val, port)	_rec_outw(val, port)
#define __do_outl(val, port)	_rec_outl(val, port)
#define __do_inb(port)		_rec_inb(port)
#define __do_inw(port)		_rec_inw(port)
#define __do_inl(port)		_rec_inl(port)
#define __do_outb(val, port)	writeb(val,(PCI_IO_ADDR)_IO_BASE+port);
#define __do_outw(val, port)	writew(val,(PCI_IO_ADDR)_IO_BASE+port);
#define __do_outl(val, port)	writel(val,(PCI_IO_ADDR)_IO_BASE+port);
#define __do_inb(port)		readb((PCI_IO_ADDR)_IO_BASE + port);
#define __do_inw(port)		readw((PCI_IO_ADDR)_IO_BASE + port);
#define __do_inl(port)		readl((PCI_IO_ADDR)_IO_BASE + port);
#define __do_readsb(a, b, n)	eeh_readsb(PCI_FIX_ADDR(a), (b), (n))
#define __do_readsw(a, b, n)	eeh_readsw(PCI_FIX_ADDR(a), (b), (n))
#define __do_readsl(a, b, n)	eeh_readsl(PCI_FIX_ADDR(a), (b), (n))
#define __do_readsb(a, b, n)	_insb(PCI_FIX_ADDR(a), (b), (n))
#define __do_readsw(a, b, n)	_insw(PCI_FIX_ADDR(a), (b), (n))
#define __do_readsl(a, b, n)	_insl(PCI_FIX_ADDR(a), (b), (n))
#define __do_writesb(a, b, n)	_outsb(PCI_FIX_ADDR(a),(b),(n))
#define __do_writesw(a, b, n)	_outsw(PCI_FIX_ADDR(a),(b),(n))
#define __do_writesl(a, b, n)	_outsl(PCI_FIX_ADDR(a),(b),(n))
#define __do_insb(p, b, n)	readsb((PCI_IO_ADDR)_IO_BASE+(p), (b), (n))
#define __do_insw(p, b, n)	readsw((PCI_IO_ADDR)_IO_BASE+(p), (b), (n))
#define __do_insl(p, b, n)	readsl((PCI_IO_ADDR)_IO_BASE+(p), (b), (n))
#define __do_outsb(p, b, n)	writesb((PCI_IO_ADDR)_IO_BASE+(p),(b),(n))
#define __do_outsw(p, b, n)	writesw((PCI_IO_ADDR)_IO_BASE+(p),(b),(n))
#define __do_outsl(p, b, n)	writesl((PCI_IO_ADDR)_IO_BASE+(p),(b),(n))
#define __do_memset_io(addr, c, n)	\
_memset_io(PCI_FIX_ADDR(addr), c, n)
#define __do_memcpy_toio(dst, src, n)	\
_memcpy_toio(PCI_FIX_ADDR(dst), src, n)
#define __do_memcpy_fromio(dst, src, n)	\
eeh_memcpy_fromio(dst, PCI_FIX_ADDR(src), n)
#define __do_memcpy_fromio(dst, src, n)	\
_memcpy_fromio(dst,PCI_FIX_ADDR(src),n)
#define DEF_PCI_HOOK_pio(x)	x
#define DEF_PCI_HOOK_pio(x)	NULL
#define DEF_PCI_HOOK_mem(x)	x
#define DEF_PCI_HOOK_mem(x)	NULL
extern struct ppc_pci_io  ppc_pci_io;
#define DEF_PCI_AC_RET(name, ret, at, al, space, aa)		\
static inline ret name at					\
#define DEF_PCI_AC_NORET(name, at, al, space, aa)		\
static inline void name at					\
#undef DEF_PCI_AC_RET
#undef DEF_PCI_AC_NORET
#define readq	readq
#define writeq	writeq
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
#define readb_relaxed(addr) readb(addr)
#define readw_relaxed(addr) readw(addr)
#define readl_relaxed(addr) readl(addr)
#define readq_relaxed(addr) readq(addr)
#define mmiowb()
static inline void mmiowb(void)
static inline void iosync(void)
#define iobarrier_rw() eieio()
#define iobarrier_r()  eieio()
#define iobarrier_w()  eieio()
#define inb_p(port)             inb(port)
#define outb_p(val, port)       (udelay(1), outb((val), (port)))
#define inw_p(port)             inw(port)
#define outw_p(val, port)       (udelay(1), outw((val), (port)))
#define inl_p(port)             inl(port)
#define outl_p(val, port)       (udelay(1), outl((val), (port)))
#define IO_SPACE_LIMIT ~(0UL)
extern void __iomem *ioremap(phys_addr_t address, unsigned long size);
extern void __iomem *ioremap_prot(phys_addr_t address, unsigned long size,
unsigned long flags);
extern void __iomem *ioremap_wc(phys_addr_t address, unsigned long size);
#define ioremap_nocache(addr, size)	ioremap((addr), (size))
extern void iounmap(volatile void __iomem *addr);
extern void __iomem *__ioremap(phys_addr_t, unsigned long size,
unsigned long flags);
extern void __iomem *__ioremap_caller(phys_addr_t, unsigned long size,
unsigned long flags, void *caller);
extern void __iounmap(volatile void __iomem *addr);
extern void __iomem * __ioremap_at(phys_addr_t pa, void *ea,
unsigned long size, unsigned long flags);
extern void __iounmap_at(void *ea, unsigned long size);
#define HAVE_ARCH_PIO_SIZE		1
#define PIO_OFFSET			0x00000000UL
#define PIO_MASK			(FULL_IO_SIZE - 1)
#define PIO_RESERVED			(FULL_IO_SIZE)
#define mmio_read16be(addr)		readw_be(addr)
#define mmio_read32be(addr)		readl_be(addr)
#define mmio_write16be(val, addr)	writew_be(val, addr)
#define mmio_write32be(val, addr)	writel_be(val, addr)
#define mmio_insb(addr, dst, count)	readsb(addr, dst, count)
#define mmio_insw(addr, dst, count)	readsw(addr, dst, count)
#define mmio_insl(addr, dst, count)	readsl(addr, dst, count)
#define mmio_outsb(addr, src, count)	writesb(addr, src, count)
#define mmio_outsw(addr, src, count)	writesw(addr, src, count)
#define mmio_outsl(addr, src, count)	writesl(addr, src, count)
static inline unsigned long virt_to_phys(volatile void * address)
static inline void * phys_to_virt(unsigned long address)
#define page_to_phys(page)	((phys_addr_t)page_to_pfn(page) << PAGE_SHIFT)
static inline unsigned long virt_to_bus(volatile void * address)
static inline void * bus_to_virt(unsigned long address)
#define page_to_bus(page)	(page_to_phys(page) + PCI_DRAM_OFFSET)
#define setbits32(_addr, _v) out_be32((_addr), in_be32(_addr) |  (_v))
#define clrbits32(_addr, _v) out_be32((_addr), in_be32(_addr) & ~(_v))
#define setbits16(_addr, _v) out_be16((_addr), in_be16(_addr) |  (_v))
#define clrbits16(_addr, _v) out_be16((_addr), in_be16(_addr) & ~(_v))
#define setbits8(_addr, _v) out_8((_addr), in_8(_addr) |  (_v))
#define clrbits8(_addr, _v) out_8((_addr), in_8(_addr) & ~(_v))
#define clrsetbits(type, addr, clear, set) \
out_##type((addr), (in_##type(addr) & ~(clear)) | (set))
#define clrsetbits_be64(addr, clear, set) clrsetbits(be64, addr, clear, set)
#define clrsetbits_le64(addr, clear, set) clrsetbits(le64, addr, clear, set)
#define clrsetbits_be32(addr, clear, set) clrsetbits(be32, addr, clear, set)
#define clrsetbits_le32(addr, clear, set) clrsetbits(le32, addr, clear, set)
#define clrsetbits_be16(addr, clear, set) clrsetbits(be16, addr, clear, set)
#define clrsetbits_le16(addr, clear, set) clrsetbits(le16, addr, clear, set)
#define clrsetbits_8(addr, clear, set) clrsetbits(8, addr, clear, set)
void __iomem *devm_ioremap_prot(struct device *dev, resource_size_t offset,
size_t size, unsigned long flags);
