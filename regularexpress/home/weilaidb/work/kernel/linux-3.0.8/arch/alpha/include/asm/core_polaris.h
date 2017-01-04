#define __ALPHA_POLARIS__H__
#define POLARIS_SPARSE_MEM_BASE		(IDENT_ADDR + 0xf800000000UL)
#define POLARIS_DENSE_MEM_BASE		(IDENT_ADDR + 0xf900000000UL)
#define POLARIS_SPARSE_IO_BASE		(IDENT_ADDR + 0xf980000000UL)
#define POLARIS_SPARSE_CONFIG_BASE	(IDENT_ADDR + 0xf9c0000000UL)
#define POLARIS_IACK_BASE		(IDENT_ADDR + 0xf9f8000000UL)
#define POLARIS_DENSE_IO_BASE		(IDENT_ADDR + 0xf9fc000000UL)
#define POLARIS_DENSE_CONFIG_BASE	(IDENT_ADDR + 0xf9fe000000UL)
#define POLARIS_IACK_SC			POLARIS_IACK_BASE
#define POLARIS_W_VENID		(POLARIS_DENSE_CONFIG_BASE)
#define POLARIS_W_DEVID		(POLARIS_DENSE_CONFIG_BASE+2)
#define POLARIS_W_CMD		(POLARIS_DENSE_CONFIG_BASE+4)
#define POLARIS_W_STATUS	(POLARIS_DENSE_CONFIG_BASE+6)
struct el_POLARIS_sysdata_mcheck ;
#define __EXTERN_INLINE extern inline
#define __IO_EXTERN_INLINE
__EXTERN_INLINE void __iomem *polaris_ioportmap(unsigned long addr)
__EXTERN_INLINE void __iomem *polaris_ioremap(unsigned long addr,
unsigned long size)
__EXTERN_INLINE int polaris_is_ioaddr(unsigned long addr)
__EXTERN_INLINE int polaris_is_mmio(const volatile void __iomem *addr)
#undef __IO_PREFIX
#define __IO_PREFIX		polaris
#define polaris_trivial_rw_bw	1
#define polaris_trivial_rw_lq	1
#define polaris_trivial_io_bw	1
#define polaris_trivial_io_lq	1
#define polaris_trivial_iounmap	1
#undef __EXTERN_INLINE
#undef __IO_EXTERN_INLINE
