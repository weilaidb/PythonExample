#define __CVMX_ASXX_DEFS_H__
#define CVMX_ASXX_GMII_RX_CLK_SET(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000180ull + (((block_id) & 0) * 0x8000000ull))
#define CVMX_ASXX_GMII_RX_DAT_SET(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000188ull + (((block_id) & 0) * 0x8000000ull))
#define CVMX_ASXX_INT_EN(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000018ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_INT_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000010ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_MII_RX_DAT_SET(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000190ull + (((block_id) & 0) * 0x8000000ull))
#define CVMX_ASXX_PRT_LOOP(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000040ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RLD_BYPASS(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000248ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RLD_BYPASS_SETTING(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000250ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RLD_COMP(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000220ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RLD_DATA_DRV(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000218ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RLD_FCRAM_MODE(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000210ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RLD_NCTL_STRONG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000230ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RLD_NCTL_WEAK(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000240ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RLD_PCTL_STRONG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000228ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RLD_PCTL_WEAK(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000238ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RLD_SETTING(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000258ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RX_CLK_SETX(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000020ull + (((offset) & 3) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RX_PRT_EN(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000000ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RX_WOL(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000100ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RX_WOL_MSK(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000108ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RX_WOL_POWOK(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000118ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_RX_WOL_SIG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000110ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_TX_CLK_SETX(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000048ull + (((offset) & 3) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_TX_COMP_BYP(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000068ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_TX_HI_WATERX(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000080ull + (((offset) & 3) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_ASXX_TX_PRT_EN(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000008ull + (((block_id) & 1) * 0x8000000ull))
union cvmx_asxx_gmii_rx_clk_set ;
union cvmx_asxx_gmii_rx_dat_set ;
union cvmx_asxx_int_en ;
union cvmx_asxx_int_reg ;
union cvmx_asxx_mii_rx_dat_set ;
union cvmx_asxx_prt_loop ;
union cvmx_asxx_rld_bypass ;
union cvmx_asxx_rld_bypass_setting ;
union cvmx_asxx_rld_comp ;
union cvmx_asxx_rld_data_drv ;
union cvmx_asxx_rld_fcram_mode ;
union cvmx_asxx_rld_nctl_strong ;
union cvmx_asxx_rld_nctl_weak ;
union cvmx_asxx_rld_pctl_strong ;
union cvmx_asxx_rld_pctl_weak ;
union cvmx_asxx_rld_setting ;
union cvmx_asxx_rx_clk_setx ;
union cvmx_asxx_rx_prt_en ;
union cvmx_asxx_rx_wol ;
union cvmx_asxx_rx_wol_msk ;
union cvmx_asxx_rx_wol_powok ;
union cvmx_asxx_rx_wol_sig ;
union cvmx_asxx_tx_clk_setx ;
union cvmx_asxx_tx_comp_byp ;
union cvmx_asxx_tx_hi_waterx ;
union cvmx_asxx_tx_prt_en ;
