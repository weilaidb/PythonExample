#define _E1000_NVM_H_
s32  igb_acquire_nvm(struct e1000_hw *hw);
void igb_release_nvm(struct e1000_hw *hw);
s32  igb_read_mac_addr(struct e1000_hw *hw);
s32  igb_read_part_num(struct e1000_hw *hw, u32 *part_num);
s32  igb_read_part_string(struct e1000_hw *hw, u8 *part_num,
u32 part_num_size);
s32  igb_read_nvm_eerd(struct e1000_hw *hw, u16 offset, u16 words, u16 *data);
s32  igb_read_nvm_spi(struct e1000_hw *hw, u16 offset, u16 words, u16 *data);
s32  igb_write_nvm_spi(struct e1000_hw *hw, u16 offset, u16 words, u16 *data);
s32  igb_validate_nvm_checksum(struct e1000_hw *hw);
s32  igb_update_nvm_checksum(struct e1000_hw *hw);
