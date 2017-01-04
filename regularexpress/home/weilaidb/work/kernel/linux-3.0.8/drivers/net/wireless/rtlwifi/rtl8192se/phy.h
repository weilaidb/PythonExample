#define __RTL92S_PHY_H__
#define MAX_TXPWR_IDX_NMODE_92S		63
#define MAX_DOZE_WAITING_TIMES_9x	64
#define MAX_PRECMD_CNT			16
#define MAX_RFDEPENDCMD_CNT		16
#define MAX_POSTCMD_CNT			16
#define RF90_PATH_MAX			4
enum version_8192s ;
enum swchnlcmd_id ;
struct swchnlcmd ;
enum baseband_config_type ;
#define hal_get_firmwareversion(rtlpriv) \
(((struct rt_firmware *)(rtlpriv->rtlhal.pfirmware))->firmwareversion)
u32 rtl92s_phy_query_bb_reg(struct ieee80211_hw *hw, u32 regaddr, u32 bitmask);
void rtl92s_phy_set_bb_reg(struct ieee80211_hw *hw, u32 regaddr, u32 bitmask,
u32 data);
void rtl92s_phy_scan_operation_backup(struct ieee80211_hw *hw, u8 operation);
u32 rtl92s_phy_query_rf_reg(struct ieee80211_hw *hw, enum radio_path rfpath,
u32 regaddr, u32 bitmask);
void rtl92s_phy_set_rf_reg(struct ieee80211_hw *hw,	enum radio_path rfpath,
u32 regaddr, u32 bitmask, u32 data);
void rtl92s_phy_set_bw_mode(struct ieee80211_hw *hw,
enum nl80211_channel_type ch_type);
u8 rtl92s_phy_sw_chnl(struct ieee80211_hw *hw);
bool rtl92s_phy_set_rf_power_state(struct ieee80211_hw *hw,
enum rf_pwrstate rfpower_state);
bool rtl92s_phy_mac_config(struct ieee80211_hw *hw);
void rtl92s_phy_switch_ephy_parameter(struct ieee80211_hw *hw);
bool rtl92s_phy_bb_config(struct ieee80211_hw *hw);
bool rtl92s_phy_rf_config(struct ieee80211_hw *hw);
void rtl92s_phy_get_hw_reg_originalvalue(struct ieee80211_hw *hw);
void rtl92s_phy_set_txpower(struct ieee80211_hw *hw, u8	channel);
bool rtl92s_phy_set_fw_cmd(struct ieee80211_hw *hw, enum fwcmd_iotype fwcmd_io);
void rtl92s_phy_chk_fwcmd_iodone(struct ieee80211_hw *hw);
void rtl92s_phy_set_beacon_hwreg(struct ieee80211_hw *hw, u16 beaconinterval);
u8 rtl92s_phy_config_rf(struct ieee80211_hw *hw, enum radio_path rfpath) ;
