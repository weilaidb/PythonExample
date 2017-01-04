s32 igb_read_mbx(struct e1000_hw *hw, u32 *msg, u16 size, u16 mbx_id)
s32 igb_write_mbx(struct e1000_hw *hw, u32 *msg, u16 size, u16 mbx_id)
s32 igb_check_for_msg(struct e1000_hw *hw, u16 mbx_id)
s32 igb_check_for_ack(struct e1000_hw *hw, u16 mbx_id)
s32 igb_check_for_rst(struct e1000_hw *hw, u16 mbx_id)
static s32 igb_poll_for_msg(struct e1000_hw *hw, u16 mbx_id)
static s32 igb_poll_for_ack(struct e1000_hw *hw, u16 mbx_id)
static s32 igb_read_posted_mbx(struct e1000_hw *hw, u32 *msg, u16 size, u16 mbx_id)
static s32 igb_write_posted_mbx(struct e1000_hw *hw, u32 *msg, u16 size, u16 mbx_id)
static s32 igb_check_for_bit_pf(struct e1000_hw *hw, u32 mask)
static s32 igb_check_for_msg_pf(struct e1000_hw *hw, u16 vf_number)
static s32 igb_check_for_ack_pf(struct e1000_hw *hw, u16 vf_number)
static s32 igb_check_for_rst_pf(struct e1000_hw *hw, u16 vf_number)
static s32 igb_obtain_mbx_lock_pf(struct e1000_hw *hw, u16 vf_number)
static s32 igb_write_mbx_pf(struct e1000_hw *hw, u32 *msg, u16 size,
u16 vf_number)
static s32 igb_read_mbx_pf(struct e1000_hw *hw, u32 *msg, u16 size,
u16 vf_number)
s32 igb_init_mbx_params_pf(struct e1000_hw *hw)