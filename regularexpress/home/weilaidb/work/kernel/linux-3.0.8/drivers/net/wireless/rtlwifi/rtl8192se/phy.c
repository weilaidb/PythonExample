static u32 _rtl92s_phy_calculate_bit_shift(u32 bitmask)
u32 rtl92s_phy_query_bb_reg(struct ieee80211_hw *hw, u32 regaddr, u32 bitmask)
void rtl92s_phy_set_bb_reg(struct ieee80211_hw *hw, u32 regaddr, u32 bitmask,
u32 data)
static u32 _rtl92s_phy_rf_serial_read(struct ieee80211_hw *hw,
enum radio_path rfpath, u32 offset)
static void _rtl92s_phy_rf_serial_write(struct ieee80211_hw *hw,
enum radio_path rfpath, u32 offset,
u32 data)
u32 rtl92s_phy_query_rf_reg(struct ieee80211_hw *hw, enum radio_path rfpath,
u32 regaddr, u32 bitmask)
void rtl92s_phy_set_rf_reg(struct ieee80211_hw *hw, enum radio_path rfpath,
u32 regaddr, u32 bitmask, u32 data)
void rtl92s_phy_scan_operation_backup(struct ieee80211_hw *hw,
u8 operation)
void rtl92s_phy_set_bw_mode(struct ieee80211_hw *hw,
enum nl80211_channel_type ch_type)
static bool _rtl92s_phy_set_sw_chnl_cmdarray(struct swchnlcmd *cmdtable,
u32 cmdtableidx, u32 cmdtablesz, enum swchnlcmd_id cmdid,
u32 para1, u32 para2, u32 msdelay)
static bool _rtl92s_phy_sw_chnl_step_by_step(struct ieee80211_hw *hw,
u8 channel, u8 *stage, u8 *step, u32 *delay)
u8 rtl92s_phy_sw_chnl(struct ieee80211_hw *hw)
static void _rtl92se_phy_set_rf_sleep(struct ieee80211_hw *hw)
bool rtl92s_phy_set_rf_power_state(struct ieee80211_hw *hw,
enum rf_pwrstate rfpwr_state)
static bool _rtl92s_phy_config_rfpa_bias_current(struct ieee80211_hw *hw,
enum radio_path rfpath)
static void _rtl92s_store_pwrindex_diffrate_offset(struct ieee80211_hw *hw,
u32 reg_addr, u32 bitmask, u32 data)
static void _rtl92s_phy_init_register_definition(struct ieee80211_hw *hw)
static bool _rtl92s_phy_config_bb(struct ieee80211_hw *hw, u8 configtype)
static bool _rtl92s_phy_set_bb_to_diff_rf(struct ieee80211_hw *hw,
u8 configtype)
static bool _rtl92s_phy_config_bb_with_pg(struct ieee80211_hw *hw,
u8 configtype)
static bool _rtl92s_phy_bb_config_parafile(struct ieee80211_hw *hw)
u8 rtl92s_phy_config_rf(struct ieee80211_hw *hw, enum radio_path rfpath)
bool rtl92s_phy_mac_config(struct ieee80211_hw *hw)
bool rtl92s_phy_bb_config(struct ieee80211_hw *hw)
bool rtl92s_phy_rf_config(struct ieee80211_hw *hw)
void rtl92s_phy_get_hw_reg_originalvalue(struct ieee80211_hw *hw)
static void _rtl92s_phy_get_txpower_index(struct ieee80211_hw *hw, u8 channel,
u8 *cckpowerlevel, u8 *ofdmpowerLevel)
static void _rtl92s_phy_ccxpower_indexcheck(struct ieee80211_hw *hw,
u8 channel, u8 *cckpowerlevel, u8 *ofdmpowerlevel)
void rtl92s_phy_set_txpower(struct ieee80211_hw *hw, u8	channel)
void rtl92s_phy_chk_fwcmd_iodone(struct ieee80211_hw *hw)
static void _rtl92s_phy_set_fwcmd_io(struct ieee80211_hw *hw)
bool rtl92s_phy_set_fw_cmd(struct ieee80211_hw *hw, enum fwcmd_iotype fw_cmdio)
static	void _rtl92s_phy_check_ephy_switchready(struct ieee80211_hw *hw)
void rtl92s_phy_switch_ephy_parameter(struct ieee80211_hw *hw)
void rtl92s_phy_set_beacon_hwreg(struct ieee80211_hw *hw, u16 BeaconInterval)
