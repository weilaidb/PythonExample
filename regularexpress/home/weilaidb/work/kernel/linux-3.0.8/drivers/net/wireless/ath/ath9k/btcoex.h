#define BTCOEX_H
#define ATH_WLANACTIVE_GPIO_9280     5
#define ATH_BTACTIVE_GPIO_9280       6
#define ATH_BTPRIORITY_GPIO_9285     7
#define ATH_WLANACTIVE_GPIO_9300     5
#define ATH_BTACTIVE_GPIO_9300       4
#define ATH_BTPRIORITY_GPIO_9300     8
#define ATH_BTCOEX_DEF_BT_PERIOD  45
#define ATH_BTCOEX_DEF_DUTY_CYCLE 55
#define ATH_BTCOEX_BTSCAN_DUTY_CYCLE 90
#define ATH_BTCOEX_BMISS_THRESH   50
#define ATH_BT_PRIORITY_TIME_THRESHOLD 1000
#define ATH_BT_CNT_THRESHOLD	       3
#define ATH_BT_CNT_SCAN_THRESHOLD      15
enum ath_stomp_type ;
enum ath_btcoex_scheme ;
struct ath_btcoex_hw ;
void ath9k_hw_btcoex_init_2wire(struct ath_hw *ah);
void ath9k_hw_btcoex_init_3wire(struct ath_hw *ah);
void ath9k_hw_init_btcoex_hw(struct ath_hw *ah, int qnum);
void ath9k_hw_btcoex_set_weight(struct ath_hw *ah,
u32 bt_weight,
u32 wlan_weight);
void ath9k_hw_btcoex_enable(struct ath_hw *ah);
void ath9k_hw_btcoex_disable(struct ath_hw *ah);
void ath9k_hw_btcoex_bt_stomp(struct ath_hw *ah,
enum ath_stomp_type stomp_type);
