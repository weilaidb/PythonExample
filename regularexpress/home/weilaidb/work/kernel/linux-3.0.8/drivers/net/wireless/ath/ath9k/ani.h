#define ANI_H
#define HAL_PROCESS_ANI           0x00000001
#define DO_ANI(ah) (((ah)->proc_phyerr & HAL_PROCESS_ANI) && ah->curchan)
#define BEACON_RSSI(ahp) (ahp->stats.avgbrssi)
#define ATH9K_ANI_OFDM_TRIG_HIGH_OLD      500
#define ATH9K_ANI_OFDM_TRIG_HIGH_NEW      1000
#define ATH9K_ANI_OFDM_TRIG_LOW_OLD       200
#define ATH9K_ANI_OFDM_TRIG_LOW_NEW       400
#define ATH9K_ANI_CCK_TRIG_HIGH_OLD       200
#define ATH9K_ANI_CCK_TRIG_HIGH_NEW       600
#define ATH9K_ANI_CCK_TRIG_LOW_OLD        100
#define ATH9K_ANI_CCK_TRIG_LOW_NEW        300
#define ATH9K_ANI_NOISE_IMMUNE_LVL        4
#define ATH9K_ANI_USE_OFDM_WEAK_SIG       true
#define ATH9K_ANI_CCK_WEAK_SIG_THR        false
#define ATH9K_ANI_SPUR_IMMUNE_LVL_OLD     7
#define ATH9K_ANI_SPUR_IMMUNE_LVL_NEW     3
#define ATH9K_ANI_FIRSTEP_LVL_OLD         0
#define ATH9K_ANI_FIRSTEP_LVL_NEW         2
#define ATH9K_ANI_RSSI_THR_HIGH           40
#define ATH9K_ANI_RSSI_THR_LOW            7
#define ATH9K_ANI_PERIOD_OLD              100
#define ATH9K_ANI_PERIOD_NEW              1000
#define ATH9K_ANI_POLLINTERVAL_OLD        100
#define ATH9K_ANI_POLLINTERVAL_NEW        1000
#define HAL_NOISE_IMMUNE_MAX              4
#define HAL_SPUR_IMMUNE_MAX               7
#define HAL_FIRST_STEP_MAX                2
#define ATH9K_SIG_FIRSTEP_SETTING_MIN     0
#define ATH9K_SIG_FIRSTEP_SETTING_MAX     20
#define ATH9K_SIG_SPUR_IMM_SETTING_MIN    0
#define ATH9K_SIG_SPUR_IMM_SETTING_MAX    22
#define ATH9K_ANI_ENABLE_MRC_CCK          true
enum ath9k_ani_cmd ;
struct ath9k_mib_stats ;
struct ath9k_ani_default ;
struct ar5416AniState ;
struct ar5416Stats ;
#define ah_mibStats stats.ast_mibstats
void ath9k_enable_mib_counters(struct ath_hw *ah);
void ath9k_hw_disable_mib_counters(struct ath_hw *ah);
void ath9k_hw_ani_setup(struct ath_hw *ah);
void ath9k_hw_ani_init(struct ath_hw *ah);
int ath9k_hw_get_ani_channel_idx(struct ath_hw *ah,
struct ath9k_channel *chan);
