#define __RTL92COMMON_DM_H__
#define HAL_DM_DIG_DISABLE			BIT(0)
#define HAL_DM_HIPWR_DISABLE			BIT(1)
#define OFDM_TABLE_LENGTH			37
#define CCK_TABLE_LENGTH			33
#define OFDM_TABLE_SIZE				37
#define CCK_TABLE_SIZE				33
#define BW_AUTO_SWITCH_HIGH_LOW			25
#define BW_AUTO_SWITCH_LOW_HIGH			30
#define DM_DIG_THRESH_HIGH			40
#define DM_DIG_THRESH_LOW			35
#define DM_FALSEALARM_THRESH_LOW		400
#define DM_FALSEALARM_THRESH_HIGH		1000
#define DM_DIG_MAX				0x3e
#define DM_DIG_MIN				0x1e
#define DM_DIG_FA_UPPER				0x32
#define DM_DIG_FA_LOWER				0x20
#define DM_DIG_FA_TH0				0x20
#define DM_DIG_FA_TH1				0x100
#define DM_DIG_FA_TH2				0x200
#define DM_DIG_BACKOFF_MAX			12
#define DM_DIG_BACKOFF_MIN			-4
#define DM_DIG_BACKOFF_DEFAULT			10
#define RXPATHSELECTION_SS_TH_lOW		30
#define RXPATHSELECTION_DIFF_TH			18
#define DM_RATR_STA_INIT			0
#define DM_RATR_STA_HIGH			1
#define DM_RATR_STA_MIDDLE			2
#define DM_RATR_STA_LOW				3
#define CTS2SELF_THVAL				30
#define REGC38_TH				20
#define WAIOTTHVal				25
#define TXHIGHPWRLEVEL_NORMAL			0
#define TXHIGHPWRLEVEL_LEVEL1			1
#define TXHIGHPWRLEVEL_LEVEL2			2
#define TXHIGHPWRLEVEL_BT1			3
#define TXHIGHPWRLEVEL_BT2			4
#define DM_TYPE_BYFW				0
#define DM_TYPE_BYDRIVER			1
#define TX_POWER_NEAR_FIELD_THRESH_LVL2		74
#define TX_POWER_NEAR_FIELD_THRESH_LVL1		67
struct ps_t ;
struct dig_t ;
struct swat_t ;
enum tag_dynamic_init_gain_operation_type_definition ;
enum tag_cck_packet_detection_threshold_type_definition ;
enum dm_1r_cca_e ;
enum dm_rf_e ;
enum dm_sw_ant_switch_e ;
enum dm_dig_ext_port_alg_e ;
enum dm_dig_connect_e ;
extern struct dig_t dm_digtable;
void rtl92c_dm_init(struct ieee80211_hw *hw);
void rtl92c_dm_watchdog(struct ieee80211_hw *hw);
void rtl92c_dm_write_dig(struct ieee80211_hw *hw);
void rtl92c_dm_init_edca_turbo(struct ieee80211_hw *hw);
void rtl92c_dm_check_txpower_tracking(struct ieee80211_hw *hw);
void rtl92c_dm_init_rate_adaptive_mask(struct ieee80211_hw *hw);
void rtl92c_dm_rf_saving(struct ieee80211_hw *hw, u8 bforce_in_normal);
void rtl92c_phy_ap_calibrate(struct ieee80211_hw *hw, char delta);
void rtl92c_phy_lc_calibrate(struct ieee80211_hw *hw);
void rtl92c_phy_iq_calibrate(struct ieee80211_hw *hw, bool recovery);
void rtl92c_dm_dynamic_txpower(struct ieee80211_hw *hw);
void rtl92c_dm_bt_coexist(struct ieee80211_hw *hw);
