s32 ixgbe_read_mbx(struct ixgbe_hw *hw, u32 *msg, u16 size, u16 mbx_id)
s32 ixgbe_write_mbx(struct ixgbe_hw *hw, u32 *msg, u16 size, u16 mbx_id)
s32 ixgbe_check_for_msg(struct ixgbe_hw *hw, u16 mbx_id)
s32 ixgbe_check_for_ack(struct ixgbe_hw *hw, u16 mbx_id)
s32 ixgbe_check_for_rst(struct ixgbe_hw *hw, u16 mbx_id)
static s32 ixgbe_poll_for_msg(struct ixgbe_hw *hw, u16 mbx_id)
static s32 ixgbe_poll_for_ack(struct ixgbe_hw *hw, u16 mbx_id)
static s32 ixgbe_read_posted_mbx(struct ixgbe_hw *hw, u32 *msg, u16 size,
u16 mbx_id)
static s32 ixgbe_write_posted_mbx(struct ixgbe_hw *hw, u32 *msg, u16 size,
u16 mbx_id)
static s32 ixgbe_check_for_bit_pf(struct ixgbe_hw *hw, u32 mask, s32 index)
static s32 ixgbe_check_for_msg_pf(struct ixgbe_hw *hw, u16 vf_number)
static s32 ixgbe_check_for_ack_pf(struct ixgbe_hw *hw, u16 vf_number)
static s32 ixgbe_check_for_rst_pf(struct ixgbe_hw *hw, u16 vf_number)
static s32 ixgbe_obtain_mbx_lock_pf(struct ixgbe_hw *hw, u16 vf_number)
static s32 ixgbe_write_mbx_pf(struct ixgbe_hw *hw, u32 *msg, u16 size,
u16 vf_number)
static s32 ixgbe_read_mbx_pf(struct ixgbe_hw *hw, u32 *msg, u16 size,
u16 vf_number)
void ixgbe_init_mbx_params_pf(struct ixgbe_hw *hw)
struct ixgbe_mbx_operations mbx_ops_generic = ;
