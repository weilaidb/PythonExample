#define __CVMX_SPXX_DEFS_H__
#define CVMX_SPXX_BCKPRS_CNT(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000340ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_BIST_STAT(block_id) \
CVMX_ADD_IO_SEG(0x00011800900007F8ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_CLK_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000348ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_CLK_STAT(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000350ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_DBG_DESKEW_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000368ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_DBG_DESKEW_STATE(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000370ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_DRV_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000358ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_ERR_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000320ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_INT_DAT(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000318ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_INT_MSK(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000308ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_INT_REG(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000300ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_INT_SYNC(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000310ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_TPA_ACC(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000338ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_TPA_MAX(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000330ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_TPA_SEL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000328ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SPXX_TRN4_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000360ull + (((block_id) & 1) * 0x8000000ull))
union cvmx_spxx_bckprs_cnt ;
union cvmx_spxx_bist_stat ;
union cvmx_spxx_clk_ctl ;
union cvmx_spxx_clk_stat ;
union cvmx_spxx_dbg_deskew_ctl ;
union cvmx_spxx_dbg_deskew_state ;
union cvmx_spxx_drv_ctl ;
union cvmx_spxx_err_ctl ;
union cvmx_spxx_int_dat ;
union cvmx_spxx_int_msk ;
union cvmx_spxx_int_reg ;
union cvmx_spxx_int_sync ;
union cvmx_spxx_tpa_acc ;
union cvmx_spxx_tpa_max ;
union cvmx_spxx_tpa_sel ;
union cvmx_spxx_trn4_ctl ;
