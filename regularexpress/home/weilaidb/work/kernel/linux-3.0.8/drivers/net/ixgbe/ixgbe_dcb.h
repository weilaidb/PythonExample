#define _DCB_CONFIG_H_
#define IXGBE_MAX_PACKET_BUFFERS 8
#define MAX_USER_PRIORITY        8
#define MAX_TRAFFIC_CLASS        8
#define MAX_BW_GROUP             8
#define BW_PERCENT               100
#define DCB_TX_CONFIG            0
#define DCB_RX_CONFIG            1
#define DCB_SUCCESS              0
#define DCB_ERR_CONFIG           -1
#define DCB_ERR_PARAM            -2
#define DCB_ERR_BW_GROUP        -3
#define DCB_ERR_TC_BW           -4
#define DCB_ERR_LS_GS           -5
#define DCB_ERR_LS_BW_NONZERO   -6
#define DCB_ERR_LS_BWG_NONZERO  -7
#define DCB_ERR_TC_BW_ZERO      -8
#define DCB_NOT_IMPLEMENTED      0x7FFFFFFF
struct dcb_pfc_tc_debug ;
enum strict_prio_type ;
#define IXGBE_DCB_PG_SUPPORT        0x00000001
#define IXGBE_DCB_PFC_SUPPORT       0x00000002
#define IXGBE_DCB_BCN_SUPPORT       0x00000004
#define IXGBE_DCB_UP2TC_SUPPORT     0x00000008
#define IXGBE_DCB_GSP_SUPPORT       0x00000010
#define IXGBE_DCB_8_TC_SUPPORT      0x80
struct dcb_support ;
struct tc_bw_alloc ;
enum dcb_pfc_type ;
struct tc_configuration ;
enum dcb_rx_pba_cfg ;
struct dcb_num_tcs ;
struct ixgbe_dcb_config ;
void ixgbe_dcb_unpack_pfc(struct ixgbe_dcb_config *cfg, u8 *pfc_en);
void ixgbe_dcb_unpack_refill(struct ixgbe_dcb_config *, int, u16 *);
void ixgbe_dcb_unpack_max(struct ixgbe_dcb_config *, u16 *);
void ixgbe_dcb_unpack_bwgid(struct ixgbe_dcb_config *, int, u8 *);
void ixgbe_dcb_unpack_prio(struct ixgbe_dcb_config *, int, u8 *);
s32 ixgbe_ieee_credits(__u8 *bw, __u16 *refill, __u16 *max, int max_frame);
s32 ixgbe_dcb_calculate_tc_credits(struct ixgbe_hw *,
struct ixgbe_dcb_config *, int, u8);
s32 ixgbe_dcb_hw_ets_config(struct ixgbe_hw *hw, u16 *refill, u16 *max,
u8 *bwg_id, u8 *prio_type, u8 *tc_prio);
s32 ixgbe_dcb_hw_pfc_config(struct ixgbe_hw *hw, u8 pfc_en);
s32 ixgbe_dcb_hw_config(struct ixgbe_hw *, struct ixgbe_dcb_config *);
#define DCB_CREDIT_QUANTUM	64
#define MAX_CREDIT_REFILL       511
#define DCB_MAX_TSO_SIZE        (32*1024)
#define MINIMUM_CREDIT_FOR_TSO  (DCB_MAX_TSO_SIZE/64 + 1)
#define MAX_CREDIT              4095
