#define __ALPHA_MARVEL__H__
#define MARVEL_MAX_PIDS		 32
#define MARVEL_IRQ_VEC_PE_SHIFT	(10)
#define MARVEL_IRQ_VEC_IRQ_MASK	((1 << MARVEL_IRQ_VEC_PE_SHIFT) - 1)
#define MARVEL_NR_IRQS		\
(16 + (MARVEL_MAX_PIDS * (1 << MARVEL_IRQ_VEC_PE_SHIFT)))
typedef struct  ev7_csr;
typedef struct  ev7_csrs;
#define EV7_MASK40(addr)        ((addr) & ((1UL << 41) - 1))
#define EV7_KERN_ADDR(addr)	((void *)(IDENT_ADDR | EV7_MASK40(addr)))
#define EV7_PE_MASK		0x1ffUL
#define EV7_IPE(pe)		((~((long)(pe)) & EV7_PE_MASK) << 35)
#define EV7_CSR_PHYS(pe, off)	(EV7_IPE(pe) | (0x7FFCUL << 20) | (off))
#define EV7_CSRS_PHYS(pe)	(EV7_CSR_PHYS(pe, 0UL))
#define EV7_CSR_KERN(pe, off)	(EV7_KERN_ADDR(EV7_CSR_PHYS(pe, off)))
#define EV7_CSRS_KERN(pe)	(EV7_KERN_ADDR(EV7_CSRS_PHYS(pe)))
#define EV7_CSR_OFFSET(name)	((unsigned long)&((ev7_csrs *)NULL)->name.csr)
typedef struct  io7_csr;
typedef struct  io7_ioport_csrs;
typedef struct  io7_port7_csrs;
#define wbase_m_ena  0x1
#define wbase_m_sg   0x2
#define wbase_m_dac  0x4
#define wbase_m_addr 0xFFF00000
union IO7_POx_WBASE ;
union IO7_IID ;
#define IO7_KERN_ADDR(addr)	(EV7_KERN_ADDR(addr))
#define IO7_PORT_MASK	   	0x07UL
#define IO7_IPE(pe)		(EV7_IPE(pe))
#define IO7_IPORT(port)		((~((long)(port)) & IO7_PORT_MASK) << 32)
#define IO7_HOSE(pe, port)	(IO7_IPE(pe) | IO7_IPORT(port))
#define IO7_MEM_PHYS(pe, port)	(IO7_HOSE(pe, port) | 0x00000000UL)
#define IO7_CONF_PHYS(pe, port)	(IO7_HOSE(pe, port) | 0xFE000000UL)
#define IO7_IO_PHYS(pe, port)	(IO7_HOSE(pe, port) | 0xFF000000UL)
#define IO7_CSR_PHYS(pe, port, off) \
(IO7_HOSE(pe, port) | 0xFF800000UL | (off))
#define IO7_CSRS_PHYS(pe, port)	(IO7_CSR_PHYS(pe, port, 0UL))
#define IO7_PORT7_CSRS_PHYS(pe) (IO7_CSR_PHYS(pe, 7, 0x300000UL))
#define IO7_MEM_KERN(pe, port)      (IO7_KERN_ADDR(IO7_MEM_PHYS(pe, port)))
#define IO7_CONF_KERN(pe, port)     (IO7_KERN_ADDR(IO7_CONF_PHYS(pe, port)))
#define IO7_IO_KERN(pe, port)       (IO7_KERN_ADDR(IO7_IO_PHYS(pe, port)))
#define IO7_CSR_KERN(pe, port, off) (IO7_KERN_ADDR(IO7_CSR_PHYS(pe,port,off)))
#define IO7_CSRS_KERN(pe, port)     (IO7_KERN_ADDR(IO7_CSRS_PHYS(pe, port)))
#define IO7_PORT7_CSRS_KERN(pe)	    (IO7_KERN_ADDR(IO7_PORT7_CSRS_PHYS(pe)))
#define IO7_PLL_RNGA(pll)	(((pll) >> 3) & 0x7)
#define IO7_PLL_RNGB(pll)	(((pll) >> 6) & 0x7)
#define IO7_MEM_SPACE		(2UL * 1024 * 1024 * 1024)
#define IO7_IO_SPACE		(8UL * 1024 * 1024)
#define IO7_DAC_OFFSET		(1UL << 49)
#define MARVEL_IACK_SC 							\
((unsigned long)						\
(&(((io7_ioport_csrs *)IO7_CSRS_KERN(0, 0))->POx_IACK_SPECIAL)))
#define IO7_NUM_PORTS 4
#define IO7_AGP_PORT  3
struct io7_port ;
struct io7 ;
# define __EXTERN_INLINE extern inline
# define __IO_EXTERN_INLINE
#define vucp	volatile unsigned char __force *
#define vusp	volatile unsigned short __force *
extern unsigned int marvel_ioread8(void __iomem *);
extern void marvel_iowrite8(u8 b, void __iomem *);
__EXTERN_INLINE unsigned int marvel_ioread16(void __iomem *addr)
__EXTERN_INLINE void marvel_iowrite16(u16 b, void __iomem *addr)
extern void __iomem *marvel_ioremap(unsigned long addr, unsigned long size);
extern void marvel_iounmap(volatile void __iomem *addr);
extern void __iomem *marvel_ioportmap (unsigned long addr);
__EXTERN_INLINE int marvel_is_ioaddr(unsigned long addr)
extern int marvel_is_mmio(const volatile void __iomem *);
#undef vucp
#undef vusp
#undef __IO_PREFIX
#define __IO_PREFIX		marvel
#define marvel_trivial_rw_bw	1
#define marvel_trivial_rw_lq	1
#define marvel_trivial_io_bw	0
#define marvel_trivial_io_lq	1
#define marvel_trivial_iounmap	0
# undef __EXTERN_INLINE
# undef __IO_EXTERN_INLINE
