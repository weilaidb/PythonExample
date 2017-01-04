enum ath_bt_mode ;
struct ath_btcoex_config ;
void ath9k_hw_init_btcoex_hw(struct ath_hw *ah, int qnum)
EXPORT_SYMBOL(ath9k_hw_init_btcoex_hw);
void ath9k_hw_btcoex_init_2wire(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_btcoex_init_2wire);
void ath9k_hw_btcoex_init_3wire(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_btcoex_init_3wire);
static void ath9k_hw_btcoex_enable_2wire(struct ath_hw *ah)
void ath9k_hw_btcoex_set_weight(struct ath_hw *ah,
u32 bt_weight,
u32 wlan_weight)
EXPORT_SYMBOL(ath9k_hw_btcoex_set_weight);
static void ath9k_hw_btcoex_enable_3wire(struct ath_hw *ah)
void ath9k_hw_btcoex_enable(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_btcoex_enable);
void ath9k_hw_btcoex_disable(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_btcoex_disable);
static void ar9003_btcoex_bt_stomp(struct ath_hw *ah,
enum ath_stomp_type stomp_type)
void ath9k_hw_btcoex_bt_stomp(struct ath_hw *ah,
enum ath_stomp_type stomp_type)
EXPORT_SYMBOL(ath9k_hw_btcoex_bt_stomp);
