#define __ALPHA_TSUNAMI__H__
#define TS_BIAS 0x80000000000UL
#define TS_BIAS 0x10000000000UL
typedef struct  tsunami_64;
typedef struct  tsunami_cchip;
typedef struct  tsunami_dchip;
typedef struct  tsunami_pchip;
#define TSUNAMI_cchip  ((tsunami_cchip *)(IDENT_ADDR+TS_BIAS+0x1A0000000UL))
#define TSUNAMI_dchip  ((tsunami_dchip *)(IDENT_ADDR+TS_BIAS+0x1B0000800UL))
#define TSUNAMI_pchip0 ((tsunami_pchip *)(IDENT_ADDR+TS_BIAS+0x180000000UL))
#define TSUNAMI_pchip1 ((tsunami_pchip *)(IDENT_ADDR+TS_BIAS+0x380000000UL))
extern int TSUNAMI_bootcpu;
#define perror_m_lost 0x1
#define perror_m_serr 0x2
#define perror_m_perr 0x4
#define perror_m_dcrto 0x8
#define perror_m_sge 0x10
#define perror_m_ape 0x20
#define perror_m_ta 0x40
#define perror_m_rdpe 0x80
#define perror_m_nds 0x100
#define perror_m_rto 0x200
#define perror_m_uecc 0x400
#define perror_m_cre 0x800
#define perror_m_addrl 0xFFFFFFFF0000UL
#define perror_m_addrh 0x7000000000000UL
#define perror_m_cmd 0xF0000000000000UL
#define perror_m_syn 0xFF00000000000000UL
union TPchipPERROR ;
#define wsba_m_ena 0x1
#define wsba_m_sg 0x2
#define wsba_m_ptp 0x4
#define wsba_m_addr 0xFFF00000
#define wmask_k_sz1gb 0x3FF00000
union TPchipWSBA ;
#define pctl_m_fdsc 0x1
#define pctl_m_fbtb 0x2
#define pctl_m_thdis 0x4
#define pctl_m_chaindis 0x8
#define pctl_m_tgtlat 0x10
#define pctl_m_hole 0x20
#define pctl_m_mwin 0x40
#define pctl_m_arbena 0x80
#define pctl_m_prigrp 0x7F00
#define pctl_m_ppri 0x8000
#define pctl_m_rsvd1 0x30000
#define pctl_m_eccen 0x40000
#define pctl_m_padm 0x80000
#define pctl_m_cdqmax 0xF00000
#define pctl_m_rev 0xFF000000
#define pctl_m_crqmax 0xF00000000UL
#define pctl_m_ptpmax 0xF000000000UL
#define pctl_m_pclkx 0x30000000000UL
#define pctl_m_fdsdis 0x40000000000UL
#define pctl_m_fdwdis 0x80000000000UL
#define pctl_m_ptevrfy 0x100000000000UL
#define pctl_m_rpp 0x200000000000UL
#define pctl_m_pid 0xC00000000000UL
#define pctl_m_rsvd2 0xFFFF000000000000UL
union TPchipPCTL ;
#define perrmask_m_lost 0x1
#define perrmask_m_serr 0x2
#define perrmask_m_perr 0x4
#define perrmask_m_dcrto 0x8
#define perrmask_m_sge 0x10
#define perrmask_m_ape 0x20
#define perrmask_m_ta 0x40
#define perrmask_m_rdpe 0x80
#define perrmask_m_nds 0x100
#define perrmask_m_rto 0x200
#define perrmask_m_uecc 0x400
#define perrmask_m_cre 0x800
#define perrmask_m_rsvd 0xFFFFFFFFFFFFF000UL
union TPchipPERRMASK ;
#define TSUNAMI_HOSE(h)		(((unsigned long)(h)) << 33)
#define TSUNAMI_BASE		(IDENT_ADDR + TS_BIAS)
#define TSUNAMI_MEM(h)		(TSUNAMI_BASE+TSUNAMI_HOSE(h) + 0x000000000UL)
#define _TSUNAMI_IACK_SC(h)	(TSUNAMI_BASE+TSUNAMI_HOSE(h) + 0x1F8000000UL)
#define TSUNAMI_IO(h)		(TSUNAMI_BASE+TSUNAMI_HOSE(h) + 0x1FC000000UL)
#define TSUNAMI_CONF(h)		(TSUNAMI_BASE+TSUNAMI_HOSE(h) + 0x1FE000000UL)
#define TSUNAMI_IACK_SC		_TSUNAMI_IACK_SC(0)
#define TSUNAMI_IO_BIAS          TSUNAMI_IO(0)
#define TSUNAMI_MEM_BIAS         TSUNAMI_MEM(0)
#define TSUNAMI_IO_SPACE	(TSUNAMI_CONF(0) - TSUNAMI_IO(0))
#define TSUNAMI_DAC_OFFSET	(1UL << 40)
struct el_TSUNAMI_sysdata_mcheck ;
#define __EXTERN_INLINE extern inline
#define __IO_EXTERN_INLINE
extern void __iomem *tsunami_ioportmap(unsigned long addr);
extern void __iomem *tsunami_ioremap(unsigned long addr, unsigned long size);
__EXTERN_INLINE int tsunami_is_ioaddr(unsigned long addr)
__EXTERN_INLINE int tsunami_is_mmio(const volatile void __iomem *xaddr)
#undef __IO_PREFIX
#define __IO_PREFIX		tsunami
#define tsunami_trivial_rw_bw	1
#define tsunami_trivial_rw_lq	1
#define tsunami_trivial_io_bw	1
#define tsunami_trivial_io_lq	1
#define tsunami_trivial_iounmap	1
#undef __EXTERN_INLINE
#undef __IO_EXTERN_INLINE
