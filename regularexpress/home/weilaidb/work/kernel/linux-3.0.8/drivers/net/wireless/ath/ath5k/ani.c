void
ath5k_ani_set_noise_immunity_level(struct ath5k_hw *ah, int level)
void
ath5k_ani_set_spur_immunity_level(struct ath5k_hw *ah, int level)
void
ath5k_ani_set_firstep_level(struct ath5k_hw *ah, int level)
void
ath5k_ani_set_ofdm_weak_signal_detection(struct ath5k_hw *ah, bool on)
void
ath5k_ani_set_cck_weak_signal_detection(struct ath5k_hw *ah, bool on)
static void
ath5k_ani_raise_immunity(struct ath5k_hw *ah, struct ath5k_ani_state *as,
bool ofdm_trigger)
static void
ath5k_ani_lower_immunity(struct ath5k_hw *ah, struct ath5k_ani_state *as)
static int
ath5k_hw_ani_get_listen_time(struct ath5k_hw *ah, struct ath5k_ani_state *as)
static int
ath5k_ani_save_and_clear_phy_errors(struct ath5k_hw *ah,
struct ath5k_ani_state *as)
static void
ath5k_ani_period_restart(struct ath5k_hw *ah, struct ath5k_ani_state *as)
void
ath5k_ani_calibration(struct ath5k_hw *ah)
void
ath5k_ani_mib_intr(struct ath5k_hw *ah)
void
ath5k_ani_phy_error_report(struct ath5k_hw *ah,
enum ath5k_phy_error_code phyerr)
static void
ath5k_enable_phy_err_counters(struct ath5k_hw *ah)
static void
ath5k_disable_phy_err_counters(struct ath5k_hw *ah)
void
ath5k_ani_init(struct ath5k_hw *ah, enum ath5k_ani_mode mode)
void
ath5k_ani_print_counters(struct ath5k_hw *ah)
