#define MCS_TXPWR	mcs_txpwrlevel_origoffset
u32 rtl92c_phy_query_bb_reg(struct ieee80211_hw *hw, u32 regaddr, u32 bitmask)
EXPORT_SYMBOL(rtl92c_phy_query_bb_reg);
void rtl92c_phy_set_bb_reg(struct ieee80211_hw *hw,
u32 regaddr, u32 bitmask, u32 data)
EXPORT_SYMBOL(rtl92c_phy_set_bb_reg);
u32 _rtl92c_phy_fw_rf_serial_read(struct ieee80211_hw *hw,
enum radio_path rfpath, u32 offset)
EXPORT_SYMBOL(_rtl92c_phy_fw_rf_serial_read);
void _rtl92c_phy_fw_rf_serial_write(struct ieee80211_hw *hw,
enum radio_path rfpath, u32 offset,
u32 data)
EXPORT_SYMBOL(_rtl92c_phy_fw_rf_serial_write);
u32 _rtl92c_phy_rf_serial_read(struct ieee80211_hw *hw,
enum radio_path rfpath, u32 offset)
EXPORT_SYMBOL(_rtl92c_phy_rf_serial_read);
void _rtl92c_phy_rf_serial_write(struct ieee80211_hw *hw,
enum radio_path rfpath, u32 offset,
u32 data)
EXPORT_SYMBOL(_rtl92c_phy_rf_serial_write);
u32 _rtl92c_phy_calculate_bit_shift(u32 bitmask)
EXPORT_SYMBOL(_rtl92c_phy_calculate_bit_shift);
static void _rtl92c_phy_bb_config_1t(struct ieee80211_hw *hw)
bool rtl92c_phy_rf_config(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_phy_rf_config);
bool _rtl92c_phy_bb8192c_config_parafile(struct ieee80211_hw *hw)
EXPORT_SYMBOL(_rtl92c_phy_bb8192c_config_parafile);
void _rtl92c_store_pwrIndex_diffrate_offset(struct ieee80211_hw *hw,
u32 regaddr, u32 bitmask,
u32 data)
EXPORT_SYMBOL(_rtl92c_store_pwrIndex_diffrate_offset);
void rtl92c_phy_get_hw_reg_originalvalue(struct ieee80211_hw *hw)
void _rtl92c_phy_init_bb_rf_register_definition(struct ieee80211_hw *hw)
EXPORT_SYMBOL(_rtl92c_phy_init_bb_rf_register_definition);
void rtl92c_phy_get_txpower_level(struct ieee80211_hw *hw, long *powerlevel)
static void _rtl92c_get_txpower_index(struct ieee80211_hw *hw, u8 channel,
u8 *cckpowerlevel, u8 *ofdmpowerlevel)
static void _rtl92c_ccxpower_index_check(struct ieee80211_hw *hw,
u8 channel, u8 *cckpowerlevel,
u8 *ofdmpowerlevel)
void rtl92c_phy_set_txpower_level(struct ieee80211_hw *hw, u8 channel)
EXPORT_SYMBOL(rtl92c_phy_set_txpower_level);
bool rtl92c_phy_update_txpower_dbm(struct ieee80211_hw *hw, long power_indbm)
EXPORT_SYMBOL(rtl92c_phy_update_txpower_dbm);
u8 _rtl92c_phy_dbm_to_txpwr_Idx(struct ieee80211_hw *hw,
enum wireless_mode wirelessmode,
long power_indbm)
EXPORT_SYMBOL(_rtl92c_phy_dbm_to_txpwr_Idx);
long _rtl92c_phy_txpwr_idx_to_dbm(struct ieee80211_hw *hw,
enum wireless_mode wirelessmode,
u8 txpwridx)
EXPORT_SYMBOL(_rtl92c_phy_txpwr_idx_to_dbm);
void rtl92c_phy_scan_operation_backup(struct ieee80211_hw *hw, u8 operation)
EXPORT_SYMBOL(rtl92c_phy_scan_operation_backup);
void rtl92c_phy_set_bw_mode(struct ieee80211_hw *hw,
enum nl80211_channel_type ch_type)
EXPORT_SYMBOL(rtl92c_phy_set_bw_mode);
void rtl92c_phy_sw_chnl_callback(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_phy_sw_chnl_callback);
u8 rtl92c_phy_sw_chnl(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_phy_sw_chnl);
static bool _rtl92c_phy_set_sw_chnl_cmdarray(struct swchnlcmd *cmdtable,
u32 cmdtableidx, u32 cmdtablesz,
enum swchnlcmd_id cmdid,
u32 para1, u32 para2, u32 msdelay)
bool _rtl92c_phy_sw_chnl_step_by_step(struct ieee80211_hw *hw,
u8 channel, u8 *stage, u8 *step,
u32 *delay)
bool rtl8192_phy_check_is_legal_rfpath(struct ieee80211_hw *hw, u32 rfpath)
EXPORT_SYMBOL(rtl8192_phy_check_is_legal_rfpath);
static u8 _rtl92c_phy_path_a_iqk(struct ieee80211_hw *hw, bool config_pathb)
static u8 _rtl92c_phy_path_b_iqk(struct ieee80211_hw *hw)
static void _rtl92c_phy_path_a_fill_iqk_matrix(struct ieee80211_hw *hw,
bool iqk_ok, long result[][8],
u8 final_candidate, bool btxonly)
static void _rtl92c_phy_path_b_fill_iqk_matrix(struct ieee80211_hw *hw,
bool iqk_ok, long result[][8],
u8 final_candidate, bool btxonly)
static void _rtl92c_phy_save_adda_registers(struct ieee80211_hw *hw,
u32 *addareg, u32 *addabackup,
u32 registernum)
static void _rtl92c_phy_save_mac_registers(struct ieee80211_hw *hw,
u32 *macreg, u32 *macbackup)
static void _rtl92c_phy_reload_adda_registers(struct ieee80211_hw *hw,
u32 *addareg, u32 *addabackup,
u32 regiesternum)
static void _rtl92c_phy_reload_mac_registers(struct ieee80211_hw *hw,
u32 *macreg, u32 *macbackup)
static void _rtl92c_phy_path_adda_on(struct ieee80211_hw *hw,
u32 *addareg, bool is_patha_on, bool is2t)
static void _rtl92c_phy_mac_setting_calibration(struct ieee80211_hw *hw,
u32 *macreg, u32 *macbackup)
static void _rtl92c_phy_path_a_standby(struct ieee80211_hw *hw)
static void _rtl92c_phy_pi_mode_switch(struct ieee80211_hw *hw, bool pi_mode)
static bool _rtl92c_phy_simularity_compare(struct ieee80211_hw *hw,
long result[][8], u8 c1, u8 c2)
static void _rtl92c_phy_iq_calibrate(struct ieee80211_hw *hw,
long result[][8], u8 t, bool is2t)
static void _rtl92c_phy_ap_calibrate(struct ieee80211_hw *hw,
char delta, bool is2t)
static void _rtl92c_phy_set_rfpath_switch(struct ieee80211_hw *hw,
bool bmain, bool is2t)
#undef IQK_ADDA_REG_NUM
#undef IQK_DELAY_TIME
void rtl92c_phy_iq_calibrate(struct ieee80211_hw *hw, bool recovery)
EXPORT_SYMBOL(rtl92c_phy_iq_calibrate);
void rtl92c_phy_lc_calibrate(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_phy_lc_calibrate);
void rtl92c_phy_ap_calibrate(struct ieee80211_hw *hw, char delta)
EXPORT_SYMBOL(rtl92c_phy_ap_calibrate);
void rtl92c_phy_set_rfpath_switch(struct ieee80211_hw *hw, bool bmain)
EXPORT_SYMBOL(rtl92c_phy_set_rfpath_switch);
bool rtl92c_phy_set_io_cmd(struct ieee80211_hw *hw, enum io_type iotype)
EXPORT_SYMBOL(rtl92c_phy_set_io_cmd);
void rtl92c_phy_set_io(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_phy_set_io);
void rtl92ce_phy_set_rf_on(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92ce_phy_set_rf_on);
void _rtl92c_phy_set_rf_sleep(struct ieee80211_hw *hw)
EXPORT_SYMBOL(_rtl92c_phy_set_rf_sleep);
