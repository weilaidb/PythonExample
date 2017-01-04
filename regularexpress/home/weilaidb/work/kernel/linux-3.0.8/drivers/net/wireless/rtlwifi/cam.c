void rtl_cam_reset_sec_info(struct ieee80211_hw *hw)
static void rtl_cam_program_entry(struct ieee80211_hw *hw, u32 entry_no,
u8 *mac_addr, u8 *key_cont_128, u16 us_config)
u8 rtl_cam_add_one_entry(struct ieee80211_hw *hw, u8 *mac_addr,
u32 ul_key_id, u32 ul_entry_idx, u32 ul_enc_alg,
u32 ul_default_key, u8 *key_content)
EXPORT_SYMBOL(rtl_cam_add_one_entry);
int rtl_cam_delete_one_entry(struct ieee80211_hw *hw,
u8 *mac_addr, u32 ul_key_id)
EXPORT_SYMBOL(rtl_cam_delete_one_entry);
void rtl_cam_reset_all_entry(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl_cam_reset_all_entry);
void rtl_cam_mark_invalid(struct ieee80211_hw *hw, u8 uc_index)
EXPORT_SYMBOL(rtl_cam_mark_invalid);
void rtl_cam_empty_entry(struct ieee80211_hw *hw, u8 uc_index)
EXPORT_SYMBOL(rtl_cam_empty_entry);
u8 rtl_cam_get_free_entry(struct ieee80211_hw *hw, u8 *sta_addr)
EXPORT_SYMBOL(rtl_cam_get_free_entry);
void rtl_cam_del_entry(struct ieee80211_hw *hw, u8 *sta_addr)
EXPORT_SYMBOL(rtl_cam_del_entry);
