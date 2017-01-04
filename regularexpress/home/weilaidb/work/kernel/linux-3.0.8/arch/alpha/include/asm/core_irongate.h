#define __ALPHA_IRONGATE__H__
typedef volatile __u32	igcsr32;
typedef struct  Irongate0;
typedef struct  Irongate1;
extern igcsr32 *IronECC;
#define IRONGATE_BIAS 0x80000000000UL
#define IRONGATE_BIAS 0x10000000000UL
#define IRONGATE_MEM		(IDENT_ADDR | IRONGATE_BIAS | 0x000000000UL)
#define IRONGATE_IACK_SC	(IDENT_ADDR | IRONGATE_BIAS | 0x1F8000000UL)
#define IRONGATE_IO		(IDENT_ADDR | IRONGATE_BIAS | 0x1FC000000UL)
#define IRONGATE_CONF		(IDENT_ADDR | IRONGATE_BIAS | 0x1FE000000UL)
#define IGCSR(dev,fun,reg)	( IRONGATE_CONF | \
((dev)<<11) | \
((fun)<<8) | \
(reg) )
#define IRONGATE0		((Irongate0 *) IGCSR(0, 0, 0))
#define IRONGATE1		((Irongate1 *) IGCSR(1, 0, 0))
#define SCB_Q_SYSERR	0x620
#define SCB_Q_PROCERR	0x630
#define SCB_Q_SYSMCHK	0x660
#define SCB_Q_PROCMCHK	0x670
struct el_IRONGATE_sysdata_mcheck ;
#define __EXTERN_INLINE extern inline
#define __IO_EXTERN_INLINE
__EXTERN_INLINE void __iomem *irongate_ioportmap(unsigned long addr)
extern void __iomem *irongate_ioremap(unsigned long addr, unsigned long size);
extern void irongate_iounmap(volatile void __iomem *addr);
__EXTERN_INLINE int irongate_is_ioaddr(unsigned long addr)
__EXTERN_INLINE int irongate_is_mmio(const volatile void __iomem *xaddr)
#undef __IO_PREFIX
#define __IO_PREFIX			irongate
#define irongate_trivial_rw_bw		1
#define irongate_trivial_rw_lq		1
#define irongate_trivial_io_bw		1
#define irongate_trivial_io_lq		1
#define irongate_trivial_iounmap	0
#undef __EXTERN_INLINE
#undef __IO_EXTERN_INLINE
