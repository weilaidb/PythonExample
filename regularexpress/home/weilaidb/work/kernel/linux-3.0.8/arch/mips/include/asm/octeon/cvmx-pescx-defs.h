#define __CVMX_PESCX_DEFS_H__
#define CVMX_PESCX_BIST_STATUS(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000018ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_BIST_STATUS2(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000418ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_CFG_RD(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000030ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_CFG_WR(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000028ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_CPL_LUT_VALID(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000098ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_CTL_STATUS(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000000ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_CTL_STATUS2(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000400ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_DBG_INFO(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000008ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_DBG_INFO_EN(block_id) (CVMX_ADD_IO_SEG(0x00011800C80000A0ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_DIAG_STATUS(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000020ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_P2N_BAR0_START(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000080ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_P2N_BAR1_START(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000088ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_P2N_BAR2_START(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000090ull) + ((block_id) & 1) * 0x8000000ull)
#define CVMX_PESCX_P2P_BARX_END(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800C8000048ull) + (((offset) & 3) + ((block_id) & 1) * 0x800000ull) * 16)
#define CVMX_PESCX_P2P_BARX_START(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800C8000040ull) + (((offset) & 3) + ((block_id) & 1) * 0x800000ull) * 16)
#define CVMX_PESCX_TLP_CREDITS(block_id) (CVMX_ADD_IO_SEG(0x00011800C8000038ull) + ((block_id) & 1) * 0x8000000ull)
union cvmx_pescx_bist_status ;
union cvmx_pescx_bist_status2 ;
union cvmx_pescx_cfg_rd ;
union cvmx_pescx_cfg_wr ;
union cvmx_pescx_cpl_lut_valid ;
union cvmx_pescx_ctl_status ;
union cvmx_pescx_ctl_status2 ;
union cvmx_pescx_dbg_info ;
union cvmx_pescx_dbg_info_en ;
union cvmx_pescx_diag_status ;
union cvmx_pescx_p2n_bar0_start ;
union cvmx_pescx_p2n_bar1_start ;
union cvmx_pescx_p2n_bar2_start ;
union cvmx_pescx_p2p_barx_end ;
union cvmx_pescx_p2p_barx_start ;
union cvmx_pescx_tlp_credits ;
