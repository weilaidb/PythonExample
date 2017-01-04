#define __CVMX_CIU_DEFS_H__
#define CVMX_CIU_BIST (CVMX_ADD_IO_SEG(0x0001070000000730ull))
#define CVMX_CIU_BLOCK_INT (CVMX_ADD_IO_SEG(0x00010700000007C0ull))
#define CVMX_CIU_DINT (CVMX_ADD_IO_SEG(0x0001070000000720ull))
#define CVMX_CIU_FUSE (CVMX_ADD_IO_SEG(0x0001070000000728ull))
#define CVMX_CIU_GSTOP (CVMX_ADD_IO_SEG(0x0001070000000710ull))
#define CVMX_CIU_INT33_SUM0 (CVMX_ADD_IO_SEG(0x0001070000000110ull))
#define CVMX_CIU_INTX_EN0(offset) (CVMX_ADD_IO_SEG(0x0001070000000200ull) + ((offset) & 63) * 16)
#define CVMX_CIU_INTX_EN0_W1C(offset) (CVMX_ADD_IO_SEG(0x0001070000002200ull) + ((offset) & 63) * 16)
#define CVMX_CIU_INTX_EN0_W1S(offset) (CVMX_ADD_IO_SEG(0x0001070000006200ull) + ((offset) & 63) * 16)
#define CVMX_CIU_INTX_EN1(offset) (CVMX_ADD_IO_SEG(0x0001070000000208ull) + ((offset) & 63) * 16)
#define CVMX_CIU_INTX_EN1_W1C(offset) (CVMX_ADD_IO_SEG(0x0001070000002208ull) + ((offset) & 63) * 16)
#define CVMX_CIU_INTX_EN1_W1S(offset) (CVMX_ADD_IO_SEG(0x0001070000006208ull) + ((offset) & 63) * 16)
#define CVMX_CIU_INTX_EN4_0(offset) (CVMX_ADD_IO_SEG(0x0001070000000C80ull) + ((offset) & 15) * 16)
#define CVMX_CIU_INTX_EN4_0_W1C(offset) (CVMX_ADD_IO_SEG(0x0001070000002C80ull) + ((offset) & 15) * 16)
#define CVMX_CIU_INTX_EN4_0_W1S(offset) (CVMX_ADD_IO_SEG(0x0001070000006C80ull) + ((offset) & 15) * 16)
#define CVMX_CIU_INTX_EN4_1(offset) (CVMX_ADD_IO_SEG(0x0001070000000C88ull) + ((offset) & 15) * 16)
#define CVMX_CIU_INTX_EN4_1_W1C(offset) (CVMX_ADD_IO_SEG(0x0001070000002C88ull) + ((offset) & 15) * 16)
#define CVMX_CIU_INTX_EN4_1_W1S(offset) (CVMX_ADD_IO_SEG(0x0001070000006C88ull) + ((offset) & 15) * 16)
#define CVMX_CIU_INTX_SUM0(offset) (CVMX_ADD_IO_SEG(0x0001070000000000ull) + ((offset) & 63) * 8)
#define CVMX_CIU_INTX_SUM4(offset) (CVMX_ADD_IO_SEG(0x0001070000000C00ull) + ((offset) & 15) * 8)
#define CVMX_CIU_INT_DBG_SEL (CVMX_ADD_IO_SEG(0x00010700000007D0ull))
#define CVMX_CIU_INT_SUM1 (CVMX_ADD_IO_SEG(0x0001070000000108ull))
#define CVMX_CIU_MBOX_CLRX(offset) (CVMX_ADD_IO_SEG(0x0001070000000680ull) + ((offset) & 15) * 8)
#define CVMX_CIU_MBOX_SETX(offset) (CVMX_ADD_IO_SEG(0x0001070000000600ull) + ((offset) & 15) * 8)
#define CVMX_CIU_NMI (CVMX_ADD_IO_SEG(0x0001070000000718ull))
#define CVMX_CIU_PCI_INTA (CVMX_ADD_IO_SEG(0x0001070000000750ull))
#define CVMX_CIU_PP_DBG (CVMX_ADD_IO_SEG(0x0001070000000708ull))
#define CVMX_CIU_PP_POKEX(offset) (CVMX_ADD_IO_SEG(0x0001070000000580ull) + ((offset) & 15) * 8)
#define CVMX_CIU_PP_RST (CVMX_ADD_IO_SEG(0x0001070000000700ull))
#define CVMX_CIU_QLM0 (CVMX_ADD_IO_SEG(0x0001070000000780ull))
#define CVMX_CIU_QLM1 (CVMX_ADD_IO_SEG(0x0001070000000788ull))
#define CVMX_CIU_QLM2 (CVMX_ADD_IO_SEG(0x0001070000000790ull))
#define CVMX_CIU_QLM_DCOK (CVMX_ADD_IO_SEG(0x0001070000000760ull))
#define CVMX_CIU_QLM_JTGC (CVMX_ADD_IO_SEG(0x0001070000000768ull))
#define CVMX_CIU_QLM_JTGD (CVMX_ADD_IO_SEG(0x0001070000000770ull))
#define CVMX_CIU_SOFT_BIST (CVMX_ADD_IO_SEG(0x0001070000000738ull))
#define CVMX_CIU_SOFT_PRST (CVMX_ADD_IO_SEG(0x0001070000000748ull))
#define CVMX_CIU_SOFT_PRST1 (CVMX_ADD_IO_SEG(0x0001070000000758ull))
#define CVMX_CIU_SOFT_RST (CVMX_ADD_IO_SEG(0x0001070000000740ull))
#define CVMX_CIU_TIMX(offset) (CVMX_ADD_IO_SEG(0x0001070000000480ull) + ((offset) & 3) * 8)
#define CVMX_CIU_WDOGX(offset) (CVMX_ADD_IO_SEG(0x0001070000000500ull) + ((offset) & 15) * 8)
union cvmx_ciu_bist ;
union cvmx_ciu_block_int ;
union cvmx_ciu_dint ;
union cvmx_ciu_fuse ;
union cvmx_ciu_gstop ;
union cvmx_ciu_intx_en0 ;
union cvmx_ciu_intx_en0_w1c ;
union cvmx_ciu_intx_en0_w1s ;
union cvmx_ciu_intx_en1 ;
union cvmx_ciu_intx_en1_w1c ;
union cvmx_ciu_intx_en1_w1s ;
union cvmx_ciu_intx_en4_0 ;
union cvmx_ciu_intx_en4_0_w1c ;
union cvmx_ciu_intx_en4_0_w1s ;
union cvmx_ciu_intx_en4_1 ;
union cvmx_ciu_intx_en4_1_w1c ;
union cvmx_ciu_intx_en4_1_w1s ;
union cvmx_ciu_intx_sum0 ;
union cvmx_ciu_intx_sum4 ;
union cvmx_ciu_int33_sum0 ;
union cvmx_ciu_int_dbg_sel ;
union cvmx_ciu_int_sum1 ;
union cvmx_ciu_mbox_clrx ;
union cvmx_ciu_mbox_setx ;
union cvmx_ciu_nmi ;
union cvmx_ciu_pci_inta ;
union cvmx_ciu_pp_dbg ;
union cvmx_ciu_pp_pokex ;
union cvmx_ciu_pp_rst ;
union cvmx_ciu_qlm0 ;
union cvmx_ciu_qlm1 ;
union cvmx_ciu_qlm2 ;
union cvmx_ciu_qlm_dcok ;
union cvmx_ciu_qlm_jtgc ;
union cvmx_ciu_qlm_jtgd ;
union cvmx_ciu_soft_bist ;
union cvmx_ciu_soft_prst ;
union cvmx_ciu_soft_prst1 ;
union cvmx_ciu_soft_rst ;
union cvmx_ciu_timx ;
union cvmx_ciu_wdogx ;
