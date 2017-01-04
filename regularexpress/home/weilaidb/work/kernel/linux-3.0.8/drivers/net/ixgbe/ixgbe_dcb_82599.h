#define _DCB_82599_CONFIG_H_
#define IXGBE_RTTDCS_TDPAC      0x00000001
#define IXGBE_RTTDCS_VMPAC      0x00000002
#define IXGBE_RTTDCS_TDRM       0x00000010
#define IXGBE_RTTDCS_ARBDIS     0x00000040
#define IXGBE_RTTDCS_BDPM       0x00400000
#define IXGBE_RTTDCS_BPBFSM     0x00800000
#define IXGBE_RTTDCS_SPEED_CHG  0x80000000
#define IXGBE_RTRUP2TC_UP_SHIFT 3
#define IXGBE_RTTUP2TC_UP_SHIFT 3
#define IXGBE_RTRPT4C_MCL_SHIFT 12
#define IXGBE_RTRPT4C_BWG_SHIFT 9
#define IXGBE_RTRPT4C_GSP       0x40000000
#define IXGBE_RTRPT4C_LSP       0x80000000
#define IXGBE_RDRXCTL_MPBEN     0x00000010
#define IXGBE_RDRXCTL_MCEN      0x00000040
#define IXGBE_RTRPCS_RRM        0x00000002
#define IXGBE_RTRPCS_RAC        0x00000004
#define IXGBE_RTRPCS_ARBDIS     0x00000040
#define IXGBE_RTTDT2C_MCL_SHIFT 12
#define IXGBE_RTTDT2C_BWG_SHIFT 9
#define IXGBE_RTTDT2C_GSP       0x40000000
#define IXGBE_RTTDT2C_LSP       0x80000000
#define IXGBE_RTTPT2C_MCL_SHIFT 12
#define IXGBE_RTTPT2C_BWG_SHIFT 9
#define IXGBE_RTTPT2C_GSP       0x40000000
#define IXGBE_RTTPT2C_LSP       0x80000000
#define IXGBE_RTTPCS_TPPAC      0x00000020
#define IXGBE_RTTPCS_ARBDIS     0x00000040
#define IXGBE_RTTPCS_TPRM       0x00000100
#define IXGBE_RTTPCS_ARBD_SHIFT 22
#define IXGBE_RTTPCS_ARBD_DCB   0x4
#define IXGBE_TXPBSIZE_20KB     0x00005000
#define IXGBE_TXPBSIZE_40KB     0x0000A000
#define IXGBE_RXPBSIZE_48KB     0x0000C000
#define IXGBE_RXPBSIZE_64KB     0x00010000
#define IXGBE_RXPBSIZE_80KB     0x00014000
#define IXGBE_RXPBSIZE_128KB    0x00020000
#define IXGBE_TXPBSIZE_MAX	0x00028000
#define IXGBE_TXPBTHRESH_DCB    0xA
#define IXGBE_TXPKT_SIZE_MAX    0xA
#define IXGBE_SECTX_DCB		0x00001F00
s32 ixgbe_dcb_config_pfc_82599(struct ixgbe_hw *hw, u8 pfc_en);
s32 ixgbe_dcb_config_rx_arbiter_82599(struct ixgbe_hw *hw,
u16 *refill,
u16 *max,
u8 *bwg_id,
u8 *prio_type,
u8 *prio_tc);
s32 ixgbe_dcb_config_tx_desc_arbiter_82599(struct ixgbe_hw *hw,
u16 *refill,
u16 *max,
u8 *bwg_id,
u8 *prio_type);
s32 ixgbe_dcb_config_tx_data_arbiter_82599(struct ixgbe_hw *hw,
u16 *refill,
u16 *max,
u8 *bwg_id,
u8 *prio_type,
u8 *prio_tc);
s32 ixgbe_dcb_hw_config_82599(struct ixgbe_hw *hw,
u8 rx_pba, u8 pfc_en, u16 *refill,
u16 *max, u8 *bwg_id, u8 *prio_type,
u8 *prio_tc);
