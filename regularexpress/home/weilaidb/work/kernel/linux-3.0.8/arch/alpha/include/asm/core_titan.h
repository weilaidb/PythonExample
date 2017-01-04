#define __ALPHA_TITAN__H__
#define TI_BIAS 0x80000000000UL
#define TI_BIAS 0x10000000000UL
typedef struct  titan_64;
typedef struct  titan_cchip;
typedef struct  titan_dchip;
typedef struct  titan_pachip_port;
typedef struct  titan_pachip;
#define TITAN_cchip	((titan_cchip  *)(IDENT_ADDR+TI_BIAS+0x1A0000000UL))
#define TITAN_dchip    	((titan_dchip  *)(IDENT_ADDR+TI_BIAS+0x1B0000800UL))
#define TITAN_pachip0 	((titan_pachip *)(IDENT_ADDR+TI_BIAS+0x180000000UL))
#define TITAN_pachip1 	((titan_pachip *)(IDENT_ADDR+TI_BIAS+0x380000000UL))
extern unsigned TITAN_agp;
extern int TITAN_bootcpu;
#define wsba_m_ena 0x1
#define wsba_m_sg 0x2
#define wsba_m_addr 0xFFF00000
#define wmask_k_sz1gb 0x3FF00000
union TPAchipWSBA ;
#define pctl_m_fbtb 			0x00000001
#define pctl_m_thdis 			0x00000002
#define pctl_m_chaindis 		0x00000004
#define pctl_m_tgtlat 			0x00000018
#define pctl_m_hole  	  		0x00000020
#define pctl_m_mwin 	  		0x00000040
#define pctl_m_arbena 	  		0x00000080
#define pctl_m_prigrp 	  		0x0000FF00
#define pctl_m_ppri 	  		0x00010000
#define pctl_m_pcispd66  		0x00020000
#define pctl_m_cngstlt	  		0x003C0000
#define pctl_m_ptpdesten 		0x3FC00000
#define pctl_m_dpcen			0x40000000
#define pctl_m_apcen		0x0000000080000000UL
#define pctl_m_dcrtv		0x0000000300000000UL
#define pctl_m_en_stepping	0x0000000400000000UL
#define apctl_m_rsvd1		0x000FFFF800000000UL
#define apctl_m_agp_rate	0x0030000000000000UL
#define apctl_m_agp_sba_en	0x0040000000000000UL
#define apctl_m_agp_en		0x0080000000000000UL
#define apctl_m_rsvd2		0x0100000000000000UL
#define apctl_m_agp_present	0x0200000000000000UL
#define apctl_agp_hp_rd		0x1C00000000000000UL
#define apctl_agp_lp_rd		0xE000000000000000UL
#define gpctl_m_rsvd		0xFFFFFFF800000000UL
union TPAchipPCTL ;
union TPAchipSERR ;
union TPAchipPERR ;
union TPAchipAGPERR ;
#define TITAN_HOSE_SHIFT       (33)
#define TITAN_HOSE(h)		(((unsigned long)(h)) << TITAN_HOSE_SHIFT)
#define TITAN_BASE		(IDENT_ADDR + TI_BIAS)
#define TITAN_MEM(h)	     	(TITAN_BASE+TITAN_HOSE(h)+0x000000000UL)
#define _TITAN_IACK_SC(h)    	(TITAN_BASE+TITAN_HOSE(h)+0x1F8000000UL)
#define TITAN_IO(h)	     	(TITAN_BASE+TITAN_HOSE(h)+0x1FC000000UL)
#define TITAN_CONF(h)	     	(TITAN_BASE+TITAN_HOSE(h)+0x1FE000000UL)
#define TITAN_HOSE_MASK		TITAN_HOSE(3)
#define TITAN_IACK_SC	     	_TITAN_IACK_SC(0)
#define TITAN_IO_BIAS		TITAN_IO(0)
#define TITAN_MEM_BIAS		TITAN_MEM(0)
#define TITAN_IO_SPACE		(TITAN_CONF(0) - TITAN_IO(0))
#define TITAN_TIG_SPACE		(TITAN_BASE + 0x100000000UL)
#define TITAN_DAC_OFFSET	(1UL << 40)
#define SCB_Q_SYSERR	0x620
#define SCB_Q_PROCERR	0x630
#define SCB_Q_SYSMCHK	0x660
#define SCB_Q_PROCMCHK	0x670
#define SCB_Q_SYSEVENT	0x680
struct el_TITAN_sysdata_mcheck ;
struct el_PRIVATEER_envdata_mcheck ;
#define __EXTERN_INLINE extern inline
#define __IO_EXTERN_INLINE
extern void __iomem *titan_ioportmap(unsigned long addr);
extern void __iomem *titan_ioremap(unsigned long addr, unsigned long size);
extern void titan_iounmap(volatile void __iomem *addr);
__EXTERN_INLINE int titan_is_ioaddr(unsigned long addr)
extern int titan_is_mmio(const volatile void __iomem *addr);
#undef __IO_PREFIX
#define __IO_PREFIX		titan
#define titan_trivial_rw_bw	1
#define titan_trivial_rw_lq	1
#define titan_trivial_io_bw	1
#define titan_trivial_io_lq	1
#define titan_trivial_iounmap	0
#undef __EXTERN_INLINE
#undef __IO_EXTERN_INLINE
