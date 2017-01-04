struct ani_ofdm_level_entry ;
static const struct ani_ofdm_level_entry ofdm_level_table[] = ;
#define ATH9K_ANI_OFDM_NUM_LEVEL \
ARRAY_SIZE(ofdm_level_table)
#define ATH9K_ANI_OFDM_MAX_LEVEL \
(ATH9K_ANI_OFDM_NUM_LEVEL-1)
#define ATH9K_ANI_OFDM_DEF_LEVEL \
3
struct ani_cck_level_entry ;
static const struct ani_cck_level_entry cck_level_table[] = ;
#define ATH9K_ANI_CCK_NUM_LEVEL \
ARRAY_SIZE(cck_level_table)
#define ATH9K_ANI_CCK_MAX_LEVEL \
(ATH9K_ANI_CCK_NUM_LEVEL-1)
#define ATH9K_ANI_CCK_MAX_LEVEL_LOW_RSSI \
(ATH9K_ANI_CCK_NUM_LEVEL-3)
#define ATH9K_ANI_CCK_DEF_LEVEL \
2
static bool use_new_ani(struct ath_hw *ah)
static void ath9k_hw_update_mibstats(struct ath_hw *ah,
struct ath9k_mib_stats *stats)
static void ath9k_ani_restart(struct ath_hw *ah)
static void ath9k_hw_ani_ofdm_err_trigger_old(struct ath_hw *ah)
static void ath9k_hw_ani_cck_err_trigger_old(struct ath_hw *ah)
static void ath9k_hw_set_ofdm_nil(struct ath_hw *ah, u8 immunityLevel)
static void ath9k_hw_ani_ofdm_err_trigger(struct ath_hw *ah)
static void ath9k_hw_set_cck_nil(struct ath_hw *ah, u_int8_t immunityLevel)
static void ath9k_hw_ani_cck_err_trigger(struct ath_hw *ah)
static void ath9k_hw_ani_lower_immunity_old(struct ath_hw *ah)
static void ath9k_hw_ani_lower_immunity(struct ath_hw *ah)
static void ath9k_ani_reset_old(struct ath_hw *ah, bool is_scanning)
void ath9k_ani_reset(struct ath_hw *ah, bool is_scanning)
static bool ath9k_hw_ani_read_counters(struct ath_hw *ah)
void ath9k_hw_ani_monitor(struct ath_hw *ah, struct ath9k_channel *chan)
EXPORT_SYMBOL(ath9k_hw_ani_monitor);
void ath9k_enable_mib_counters(struct ath_hw *ah)
void ath9k_hw_disable_mib_counters(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_disable_mib_counters);
void ath9k_hw_proc_mib_event(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_proc_mib_event);
void ath9k_hw_ani_setup(struct ath_hw *ah)
void ath9k_hw_ani_init(struct ath_hw *ah)
