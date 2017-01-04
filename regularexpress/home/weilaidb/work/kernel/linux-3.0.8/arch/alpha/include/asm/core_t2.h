#define __ALPHA_T2__H__
#define T2_ONE_HAE_WINDOW 1
#define T2_MEM_R1_MASK 0x07ffffff
#define _GAMMA_BIAS		0x8000000000UL
#if defined(CONFIG_ALPHA_GENERIC)
#define GAMMA_BIAS		alpha_mv.sys.t2.gamma_bias
#elif defined(CONFIG_ALPHA_GAMMA)
#define GAMMA_BIAS		_GAMMA_BIAS
#define GAMMA_BIAS		0
#define T2_CONF		        (IDENT_ADDR + GAMMA_BIAS + 0x390000000UL)
#define T2_IO			(IDENT_ADDR + GAMMA_BIAS + 0x3a0000000UL)
#define T2_SPARSE_MEM		(IDENT_ADDR + GAMMA_BIAS + 0x200000000UL)
#define T2_DENSE_MEM	        (IDENT_ADDR + GAMMA_BIAS + 0x3c0000000UL)
#define T2_IOCSR		(IDENT_ADDR + GAMMA_BIAS + 0x38e000000UL)
#define T2_CERR1		(IDENT_ADDR + GAMMA_BIAS + 0x38e000020UL)
#define T2_CERR2		(IDENT_ADDR + GAMMA_BIAS + 0x38e000040UL)
#define T2_CERR3		(IDENT_ADDR + GAMMA_BIAS + 0x38e000060UL)
#define T2_PERR1		(IDENT_ADDR + GAMMA_BIAS + 0x38e000080UL)
#define T2_PERR2		(IDENT_ADDR + GAMMA_BIAS + 0x38e0000a0UL)
#define T2_PSCR			(IDENT_ADDR + GAMMA_BIAS + 0x38e0000c0UL)
#define T2_HAE_1		(IDENT_ADDR + GAMMA_BIAS + 0x38e0000e0UL)
#define T2_HAE_2		(IDENT_ADDR + GAMMA_BIAS + 0x38e000100UL)
#define T2_HBASE		(IDENT_ADDR + GAMMA_BIAS + 0x38e000120UL)
#define T2_WBASE1		(IDENT_ADDR + GAMMA_BIAS + 0x38e000140UL)
#define T2_WMASK1		(IDENT_ADDR + GAMMA_BIAS + 0x38e000160UL)
#define T2_TBASE1		(IDENT_ADDR + GAMMA_BIAS + 0x38e000180UL)
#define T2_WBASE2		(IDENT_ADDR + GAMMA_BIAS + 0x38e0001a0UL)
#define T2_WMASK2		(IDENT_ADDR + GAMMA_BIAS + 0x38e0001c0UL)
#define T2_TBASE2		(IDENT_ADDR + GAMMA_BIAS + 0x38e0001e0UL)
#define T2_TLBBR		(IDENT_ADDR + GAMMA_BIAS + 0x38e000200UL)
#define T2_IVR			(IDENT_ADDR + GAMMA_BIAS + 0x38e000220UL)
#define T2_HAE_3		(IDENT_ADDR + GAMMA_BIAS + 0x38e000240UL)
#define T2_HAE_4		(IDENT_ADDR + GAMMA_BIAS + 0x38e000260UL)
#define T2_WBASE3		(IDENT_ADDR + GAMMA_BIAS + 0x38e000280UL)
#define T2_WMASK3		(IDENT_ADDR + GAMMA_BIAS + 0x38e0002a0UL)
#define T2_TBASE3		(IDENT_ADDR + GAMMA_BIAS + 0x38e0002c0UL)
#define T2_TDR0			(IDENT_ADDR + GAMMA_BIAS + 0x38e000300UL)
#define T2_TDR1			(IDENT_ADDR + GAMMA_BIAS + 0x38e000320UL)
#define T2_TDR2			(IDENT_ADDR + GAMMA_BIAS + 0x38e000340UL)
#define T2_TDR3			(IDENT_ADDR + GAMMA_BIAS + 0x38e000360UL)
#define T2_TDR4			(IDENT_ADDR + GAMMA_BIAS + 0x38e000380UL)
#define T2_TDR5			(IDENT_ADDR + GAMMA_BIAS + 0x38e0003a0UL)
#define T2_TDR6			(IDENT_ADDR + GAMMA_BIAS + 0x38e0003c0UL)
#define T2_TDR7			(IDENT_ADDR + GAMMA_BIAS + 0x38e0003e0UL)
#define T2_WBASE4		(IDENT_ADDR + GAMMA_BIAS + 0x38e000400UL)
#define T2_WMASK4		(IDENT_ADDR + GAMMA_BIAS + 0x38e000420UL)
#define T2_TBASE4		(IDENT_ADDR + GAMMA_BIAS + 0x38e000440UL)
#define T2_AIR			(IDENT_ADDR + GAMMA_BIAS + 0x38e000460UL)
#define T2_VAR			(IDENT_ADDR + GAMMA_BIAS + 0x38e000480UL)
#define T2_DIR			(IDENT_ADDR + GAMMA_BIAS + 0x38e0004a0UL)
#define T2_ICE			(IDENT_ADDR + GAMMA_BIAS + 0x38e0004c0UL)
#define T2_HAE_ADDRESS		T2_HAE_1
#define T2_CPU0_BASE            (IDENT_ADDR + GAMMA_BIAS + 0x380000000L)
#define T2_CPU1_BASE            (IDENT_ADDR + GAMMA_BIAS + 0x381000000L)
#define T2_CPU2_BASE            (IDENT_ADDR + GAMMA_BIAS + 0x382000000L)
#define T2_CPU3_BASE            (IDENT_ADDR + GAMMA_BIAS + 0x383000000L)
#define T2_CPUn_BASE(n)		(T2_CPU0_BASE + (((n)&3) * 0x001000000L))
#define T2_MEM0_BASE            (IDENT_ADDR + GAMMA_BIAS + 0x388000000L)
#define T2_MEM1_BASE            (IDENT_ADDR + GAMMA_BIAS + 0x389000000L)
#define T2_MEM2_BASE            (IDENT_ADDR + GAMMA_BIAS + 0x38a000000L)
#define T2_MEM3_BASE            (IDENT_ADDR + GAMMA_BIAS + 0x38b000000L)
struct sable_cpu_csr ;
struct el_t2_frame_header ;
struct el_t2_procdata_mcheck ;
struct el_t2_logout_header ;
struct el_t2_sysdata_mcheck ;
struct el_t2_data_memory ;
struct el_t2_data_other_cpu ;
struct el_t2_data_t2;
struct el_t2_data_corrected ;
struct el_t2_frame_mcheck ;
struct el_t2_frame_corrected ;
#define __EXTERN_INLINE extern inline
#define __IO_EXTERN_INLINE
#define vip	volatile int *
#define vuip	volatile unsigned int *
extern inline u8 t2_inb(unsigned long addr)
extern inline void t2_outb(u8 b, unsigned long addr)
extern inline u16 t2_inw(unsigned long addr)
extern inline void t2_outw(u16 b, unsigned long addr)
extern inline u32 t2_inl(unsigned long addr)
extern inline void t2_outl(u32 b, unsigned long addr)
#define t2_set_hae
#define t2_set_hae
__EXTERN_INLINE u8 t2_readb(const volatile void __iomem *xaddr)
__EXTERN_INLINE u16 t2_readw(const volatile void __iomem *xaddr)
__EXTERN_INLINE u32 t2_readl(const volatile void __iomem *xaddr)
__EXTERN_INLINE u64 t2_readq(const volatile void __iomem *xaddr)
__EXTERN_INLINE void t2_writeb(u8 b, volatile void __iomem *xaddr)
__EXTERN_INLINE void t2_writew(u16 b, volatile void __iomem *xaddr)
__EXTERN_INLINE void t2_writel(u32 b, volatile void __iomem *xaddr)
__EXTERN_INLINE void t2_writeq(u64 b, volatile void __iomem *xaddr)
__EXTERN_INLINE void __iomem *t2_ioportmap(unsigned long addr)
__EXTERN_INLINE void __iomem *t2_ioremap(unsigned long addr,
unsigned long size)
__EXTERN_INLINE int t2_is_ioaddr(unsigned long addr)
__EXTERN_INLINE int t2_is_mmio(const volatile void __iomem *addr)
#define IOPORT(OS, NS)							\
__EXTERN_INLINE unsigned int t2_ioread##NS(void __iomem *xaddr)		\
\
__EXTERN_INLINE void t2_iowrite##NS(u##NS b, void __iomem *xaddr)	\
IOPORT(b, 8)
IOPORT(w, 16)
IOPORT(l, 32)
#undef IOPORT
#undef vip
#undef vuip
#undef __IO_PREFIX
#define __IO_PREFIX		t2
#define t2_trivial_rw_bw	0
#define t2_trivial_rw_lq	0
#define t2_trivial_io_bw	0
#define t2_trivial_io_lq	0
#define t2_trivial_iounmap	1
#undef __EXTERN_INLINE
#undef __IO_EXTERN_INLINE
