#define __RTL_92S_DM_H__
struct dig_t ;
enum dm_dig_alg ;
enum dm_dig_two_port_alg ;
enum dm_dig_dbg ;
enum dm_dig_sta ;
enum dm_dig_connect ;
enum dm_dig_ext_port_alg ;
enum dm_ratr_sta ;
#define DM_TYPE_BYFW			0
#define DM_TYPE_BYDRIVER		1
#define	TX_HIGH_PWR_LEVEL_NORMAL	0
#define	TX_HIGH_PWR_LEVEL_LEVEL1	1
#define	TX_HIGH_PWR_LEVEL_LEVEL2	2
#define	HAL_DM_DIG_DISABLE		BIT(0)
#define	HAL_DM_HIPWR_DISABLE		BIT(1)
#define	TX_HIGHPWR_LEVEL_NORMAL		0
#define	TX_HIGHPWR_LEVEL_NORMAL1	1
#define	TX_HIGHPWR_LEVEL_NORMAL2	2
#define	TX_POWER_NEAR_FIELD_THRESH_LVL2	74
#define	TX_POWER_NEAR_FIELD_THRESH_LVL1	67
#define DM_DIG_THRESH_HIGH		40
#define DM_DIG_THRESH_LOW		35
#define	DM_FALSEALARM_THRESH_LOW	40
#define	DM_FALSEALARM_THRESH_HIGH	1000
#define	DM_DIG_HIGH_PWR_THRESH_HIGH	75
#define	DM_DIG_HIGH_PWR_THRESH_LOW	70
#define	DM_DIG_BACKOFF			12
#define	DM_DIG_MAX			0x3e
#define	DM_DIG_MIN			0x1c
#define	DM_DIG_MIN_Netcore		0x12
#define	DM_DIG_BACKOFF_MAX		12
#define	DM_DIG_BACKOFF_MIN		-4
extern struct dig_t digtable;
void rtl92s_dm_watchdog(struct ieee80211_hw *hw);
void rtl92s_dm_init(struct ieee80211_hw *hw);
void rtl92s_dm_init_edca_turbo(struct ieee80211_hw *hw);
