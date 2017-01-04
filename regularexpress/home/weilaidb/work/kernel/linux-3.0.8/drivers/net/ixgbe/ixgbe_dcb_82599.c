static s32 ixgbe_dcb_config_packet_buffers_82599(struct ixgbe_hw *hw, u8 rx_pba)
s32 ixgbe_dcb_config_rx_arbiter_82599(struct ixgbe_hw *hw,
u16 *refill,
u16 *max,
u8 *bwg_id,
u8 *prio_type,
u8 *prio_tc)
s32 ixgbe_dcb_config_tx_desc_arbiter_82599(struct ixgbe_hw *hw,
u16 *refill,
u16 *max,
u8 *bwg_id,
u8 *prio_type)
s32 ixgbe_dcb_config_tx_data_arbiter_82599(struct ixgbe_hw *hw,
u16 *refill,
u16 *max,
u8 *bwg_id,
u8 *prio_type,
u8 *prio_tc)
s32 ixgbe_dcb_config_pfc_82599(struct ixgbe_hw *hw, u8 pfc_en)
static s32 ixgbe_dcb_config_tc_stats_82599(struct ixgbe_hw *hw)
static s32 ixgbe_dcb_config_82599(struct ixgbe_hw *hw)
s32 ixgbe_dcb_hw_config_82599(struct ixgbe_hw *hw,
u8 rx_pba, u8 pfc_en, u16 *refill,
u16 *max, u8 *bwg_id, u8 *prio_type, u8 *prio_tc)
