s32 ixgbe_ieee_credits(__u8 *bw, __u16 *refill, __u16 *max, int max_frame)
s32 ixgbe_dcb_calculate_tc_credits(struct ixgbe_hw *hw,
struct ixgbe_dcb_config *dcb_config,
int max_frame, u8 direction)
void ixgbe_dcb_unpack_pfc(struct ixgbe_dcb_config *cfg, u8 *pfc_en)
void ixgbe_dcb_unpack_refill(struct ixgbe_dcb_config *cfg, int direction,
u16 *refill)
void ixgbe_dcb_unpack_max(struct ixgbe_dcb_config *cfg, u16 *max)
void ixgbe_dcb_unpack_bwgid(struct ixgbe_dcb_config *cfg, int direction,
u8 *bwgid)
void ixgbe_dcb_unpack_prio(struct ixgbe_dcb_config *cfg, int direction,
u8 *ptype)
s32 ixgbe_dcb_hw_config(struct ixgbe_hw *hw,
struct ixgbe_dcb_config *dcb_config)
s32 ixgbe_dcb_hw_pfc_config(struct ixgbe_hw *hw, u8 pfc_en)
s32 ixgbe_dcb_hw_ets_config(struct ixgbe_hw *hw,
u16 *refill, u16 *max, u8 *bwg_id,
u8 *prio_type, u8 *prio_tc)
