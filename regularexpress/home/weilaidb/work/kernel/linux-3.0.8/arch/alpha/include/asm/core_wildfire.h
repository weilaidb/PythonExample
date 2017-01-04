#define __ALPHA_WILDFIRE__H__
#define WILDFIRE_MAX_QBB	8
#define WILDFIRE_PCA_PER_QBB	4
#define WILDFIRE_IRQ_PER_PCA	64
#define WILDFIRE_NR_IRQS \
(WILDFIRE_MAX_QBB * WILDFIRE_PCA_PER_QBB * WILDFIRE_IRQ_PER_PCA)
extern unsigned char wildfire_hard_qbb_map[WILDFIRE_MAX_QBB];
extern unsigned char wildfire_soft_qbb_map[WILDFIRE_MAX_QBB];
#define QBB_MAP_EMPTY	0xff
extern unsigned long wildfire_hard_qbb_mask;
extern unsigned long wildfire_soft_qbb_mask;
extern unsigned long wildfire_gp_mask;
extern unsigned long wildfire_hs_mask;
extern unsigned long wildfire_iop_mask;
extern unsigned long wildfire_ior_mask;
extern unsigned long wildfire_pca_mask;
extern unsigned long wildfire_cpu_mask;
extern unsigned long wildfire_mem_mask;
#define WILDFIRE_QBB_EXISTS(qbbno) (wildfire_soft_qbb_mask & (1 << (qbbno)))
#define WILDFIRE_MEM_EXISTS(qbbno) (wildfire_mem_mask & (0xf << ((qbbno) << 2)))
#define WILDFIRE_PCA_EXISTS(qbbno, pcano) \
(wildfire_pca_mask & (1 << (((qbbno) << 2) + (pcano))))
typedef struct  wildfire_64;
typedef struct  wildfire_256;
typedef struct  wildfire_2k;
typedef struct  wildfire_qsd;
typedef struct  wildfire_fast_qsd;
typedef struct  wildfire_qsa;
typedef struct  wildfire_iop;
typedef struct  wildfire_gp;
typedef struct  wildfire_pca;
typedef struct  wildfire_ne;
typedef struct  wildfire_fe;
typedef struct  wildfire_pci;
#define WILDFIRE_ENTITY_SHIFT		18
#define WILDFIRE_GP_ENTITY		(0x10UL << WILDFIRE_ENTITY_SHIFT)
#define WILDFIRE_IOP_ENTITY		(0x08UL << WILDFIRE_ENTITY_SHIFT)
#define WILDFIRE_QSA_ENTITY		(0x04UL << WILDFIRE_ENTITY_SHIFT)
#define WILDFIRE_QSD_ENTITY_SLOW	(0x05UL << WILDFIRE_ENTITY_SHIFT)
#define WILDFIRE_QSD_ENTITY_FAST	(0x01UL << WILDFIRE_ENTITY_SHIFT)
#define WILDFIRE_PCA_ENTITY(pca)	((0xc|(pca))<<WILDFIRE_ENTITY_SHIFT)
#define WILDFIRE_BASE		(IDENT_ADDR | (1UL << 40))
#define WILDFIRE_QBB_MASK	0x0fUL
#define WILDFIRE_QBB(q)		((~((long)(q)) & WILDFIRE_QBB_MASK) << 36)
#define WILDFIRE_HOSE(h)	((long)(h) << 33)
#define WILDFIRE_QBB_IO(q)	(WILDFIRE_BASE | WILDFIRE_QBB(q))
#define WILDFIRE_QBB_HOSE(q,h)	(WILDFIRE_QBB_IO(q) | WILDFIRE_HOSE(h))
#define WILDFIRE_MEM(q,h)	(WILDFIRE_QBB_HOSE(q,h) | 0x000000000UL)
#define WILDFIRE_CONF(q,h)	(WILDFIRE_QBB_HOSE(q,h) | 0x1FE000000UL)
#define WILDFIRE_IO(q,h)	(WILDFIRE_QBB_HOSE(q,h) | 0x1FF000000UL)
#define WILDFIRE_qsd(q) \
((wildfire_qsd *)(WILDFIRE_QBB_IO(q)|WILDFIRE_QSD_ENTITY_SLOW|(((1UL<<13)-1)<<23)))
#define WILDFIRE_fast_qsd() \
((wildfire_fast_qsd *)(WILDFIRE_QBB_IO(0)|WILDFIRE_QSD_ENTITY_FAST|(((1UL<<13)-1)<<23)))
#define WILDFIRE_qsa(q) \
((wildfire_qsa *)(WILDFIRE_QBB_IO(q)|WILDFIRE_QSA_ENTITY|(((1UL<<13)-1)<<23)))
#define WILDFIRE_iop(q) \
((wildfire_iop *)(WILDFIRE_QBB_IO(q)|WILDFIRE_IOP_ENTITY|(((1UL<<13)-1)<<23)))
#define WILDFIRE_gp(q) \
((wildfire_gp *)(WILDFIRE_QBB_IO(q)|WILDFIRE_GP_ENTITY|(((1UL<<13)-1)<<23)))
#define WILDFIRE_pca(q,pca) \
((wildfire_pca *)(WILDFIRE_QBB_IO(q)|WILDFIRE_PCA_ENTITY(pca)|(((1UL<<13)-1)<<23)))
#define WILDFIRE_ne(q,pca) \
((wildfire_ne *)(WILDFIRE_QBB_IO(q)|WILDFIRE_PCA_ENTITY(pca)|(((1UL<<13)-1)<<23)|(1UL<<16)))
#define WILDFIRE_fe(q,pca) \
((wildfire_fe *)(WILDFIRE_QBB_IO(q)|WILDFIRE_PCA_ENTITY(pca)|(((1UL<<13)-1)<<23)|(3UL<<15)))
#define WILDFIRE_pci(q,h) \
((wildfire_pci *)(WILDFIRE_QBB_IO(q)|WILDFIRE_PCA_ENTITY(((h)&6)>>1)|((((h)&1)|2)<<16)|(((1UL<<13)-1)<<23)))
#define WILDFIRE_IO_BIAS        WILDFIRE_IO(0,0)
#define WILDFIRE_MEM_BIAS       WILDFIRE_MEM(0,0)
#define WILDFIRE_IO_SPACE	(8UL*1024*1024)
#define __EXTERN_INLINE extern inline
#define __IO_EXTERN_INLINE
__EXTERN_INLINE void __iomem *wildfire_ioportmap(unsigned long addr)
__EXTERN_INLINE void __iomem *wildfire_ioremap(unsigned long addr,
unsigned long size)
__EXTERN_INLINE int wildfire_is_ioaddr(unsigned long addr)
__EXTERN_INLINE int wildfire_is_mmio(const volatile void __iomem *xaddr)
#undef __IO_PREFIX
#define __IO_PREFIX			wildfire
#define wildfire_trivial_rw_bw		1
#define wildfire_trivial_rw_lq		1
#define wildfire_trivial_io_bw		1
#define wildfire_trivial_io_lq		1
#define wildfire_trivial_iounmap	1
#undef __EXTERN_INLINE
#undef __IO_EXTERN_INLINE
