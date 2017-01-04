#define MAX_MEASUREMENT	8
#define MAX_MAG_DELTA	11
#define MAX_PHS_DELTA	10
struct coeff ;
enum ar9003_cal_types ;
static void ar9003_hw_setup_calibration(struct ath_hw *ah,
struct ath9k_cal_list *currCal)
static bool ar9003_hw_per_calibration(struct ath_hw *ah,
struct ath9k_channel *ichan,
u8 rxchainmask,
struct ath9k_cal_list *currCal)
static bool ar9003_hw_calibrate(struct ath_hw *ah,
struct ath9k_channel *chan,
u8 rxchainmask,
bool longcal)
static void ar9003_hw_iqcal_collect(struct ath_hw *ah)
static void ar9003_hw_iqcalibrate(struct ath_hw *ah, u8 numChains)
static const struct ath9k_percal_data iq_cal_single_sample = ;
static void ar9003_hw_init_cal_settings(struct ath_hw *ah)
static bool ar9003_hw_solve_iq_cal(struct ath_hw *ah,
s32 sin_2phi_1,
s32 cos_2phi_1,
s32 sin_2phi_2,
s32 cos_2phi_2,
s32 mag_a0_d0,
s32 phs_a0_d0,
s32 mag_a1_d0,
s32 phs_a1_d0,
s32 solved_eq[])
static s32 ar9003_hw_find_mag_approx(struct ath_hw *ah, s32 in_re, s32 in_im)
#define DELPT 32
static bool ar9003_hw_calc_iq_corr(struct ath_hw *ah,
s32 chain_idx,
const s32 iq_res[],
s32 iqc_coeff[])
static void ar9003_hw_detect_outlier(int *mp_coeff, int nmeasurement,
int max_delta)
static void ar9003_hw_tx_iqcal_load_avg_2_passes(struct ath_hw *ah,
u8 num_chains,
struct coeff *coeff)
static bool ar9003_hw_tx_iq_cal_run(struct ath_hw *ah)
static void ar9003_hw_tx_iq_cal_post_proc(struct ath_hw *ah)
static bool ar9003_hw_init_cal(struct ath_hw *ah,
struct ath9k_channel *chan)
void ar9003_hw_attach_calib_ops(struct ath_hw *ah)
