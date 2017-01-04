#define __CVMX_PCSX_DEFS_H__
#define CVMX_PCSX_ANX_ADV_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001010ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_ANX_EXT_ST_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001028ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_ANX_LP_ABIL_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001018ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_ANX_RESULTS_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001020ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_INTX_EN_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001088ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_INTX_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001080ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_LINKX_TIMER_COUNT_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001040ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_LOG_ANLX_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001090ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_MISCX_CTL_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001078ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_MRX_CONTROL_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001000ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_MRX_STATUS_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001008ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_RXX_STATES_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001058ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_RXX_SYNC_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001050ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_SGMX_AN_ADV_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001068ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_SGMX_LP_ADV_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001070ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_TXX_STATES_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001060ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSX_TX_RXX_POLARITY_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800B0001048ull + (((offset) & 3) * 1024) + (((block_id) & 1) * 0x8000000ull))
union cvmx_pcsx_anx_adv_reg ;
union cvmx_pcsx_anx_ext_st_reg ;
union cvmx_pcsx_anx_lp_abil_reg ;
union cvmx_pcsx_anx_results_reg ;
union cvmx_pcsx_intx_en_reg ;
union cvmx_pcsx_intx_reg ;
union cvmx_pcsx_linkx_timer_count_reg ;
union cvmx_pcsx_log_anlx_reg ;
union cvmx_pcsx_miscx_ctl_reg ;
union cvmx_pcsx_mrx_control_reg ;
union cvmx_pcsx_mrx_status_reg ;
union cvmx_pcsx_rxx_states_reg ;
union cvmx_pcsx_rxx_sync_reg ;
union cvmx_pcsx_sgmx_an_adv_reg ;
union cvmx_pcsx_sgmx_lp_adv_reg ;
union cvmx_pcsx_txx_states_reg ;
union cvmx_pcsx_tx_rxx_polarity_reg ;
