#define __CVMX_PCSXX_DEFS_H__
#define CVMX_PCSXX_10GBX_STATUS_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000828ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_BIST_STATUS_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000870ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_BIT_LOCK_STATUS_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000850ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_CONTROL1_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000800ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_CONTROL2_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000818ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_INT_EN_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000860ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_INT_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000858ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_LOG_ANL_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000868ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_MISC_CTL_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000848ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_RX_SYNC_STATES_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000838ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_SPD_ABIL_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000810ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_STATUS1_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000808ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_STATUS2_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000820ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_TX_RX_POLARITY_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000840ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_PCSXX_TX_RX_STATES_REG(block_id) \
CVMX_ADD_IO_SEG(0x00011800B0000830ull + (((block_id) & 1) * 0x8000000ull))
union cvmx_pcsxx_10gbx_status_reg ;
union cvmx_pcsxx_bist_status_reg ;
union cvmx_pcsxx_bit_lock_status_reg ;
union cvmx_pcsxx_control1_reg ;
union cvmx_pcsxx_control2_reg ;
union cvmx_pcsxx_int_en_reg ;
union cvmx_pcsxx_int_reg ;
union cvmx_pcsxx_log_anl_reg ;
union cvmx_pcsxx_misc_ctl_reg ;
union cvmx_pcsxx_rx_sync_states_reg ;
union cvmx_pcsxx_spd_abil_reg ;
union cvmx_pcsxx_status1_reg ;
union cvmx_pcsxx_status2_reg ;
union cvmx_pcsxx_tx_rx_polarity_reg ;
union cvmx_pcsxx_tx_rx_states_reg ;
