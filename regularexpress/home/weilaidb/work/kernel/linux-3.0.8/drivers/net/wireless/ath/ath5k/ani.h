#define ANI_H
#define ATH5K_ANI_LISTEN_PERIOD		100
#define ATH5K_ANI_OFDM_TRIG_HIGH	500
#define ATH5K_ANI_OFDM_TRIG_LOW		200
#define ATH5K_ANI_CCK_TRIG_HIGH		200
#define ATH5K_ANI_CCK_TRIG_LOW		100
#define ATH5K_ANI_RSSI_THR_HIGH		40
#define ATH5K_ANI_RSSI_THR_LOW		7
#define ATH5K_ANI_MAX_FIRSTEP_LVL	2
#define ATH5K_ANI_MAX_NOISE_IMM_LVL	1
enum ath5k_ani_mode ;
struct ath5k_ani_state ;
void ath5k_ani_init(struct ath5k_hw *ah, enum ath5k_ani_mode mode);
void ath5k_ani_mib_intr(struct ath5k_hw *ah);
void ath5k_ani_calibration(struct ath5k_hw *ah);
void ath5k_ani_phy_error_report(struct ath5k_hw *ah,
enum ath5k_phy_error_code phyerr);
void ath5k_ani_set_noise_immunity_level(struct ath5k_hw *ah, int level);
void ath5k_ani_set_spur_immunity_level(struct ath5k_hw *ah, int level);
void ath5k_ani_set_firstep_level(struct ath5k_hw *ah, int level);
void ath5k_ani_set_ofdm_weak_signal_detection(struct ath5k_hw *ah, bool on);
void ath5k_ani_set_cck_weak_signal_detection(struct ath5k_hw *ah, bool on);
void ath5k_ani_print_counters(struct ath5k_hw *ah);
