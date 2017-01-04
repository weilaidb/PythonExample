#define AR9285_CLCAL_REDO_THRESH    1
enum ar9002_cal_types ;
static bool ar9002_hw_is_cal_supported(struct ath_hw *ah,
struct ath9k_channel *chan,
enum ar9002_cal_types cal_type)
static void ar9002_hw_setup_calibration(struct ath_hw *ah,
struct ath9k_cal_list *currCal)
static bool ar9002_hw_per_calibration(struct ath_hw *ah,
struct ath9k_channel *ichan,
u8 rxchainmask,
struct ath9k_cal_list *currCal)
static void ar9002_hw_iqcal_collect(struct ath_hw *ah)
static void ar9002_hw_adc_gaincal_collect(struct ath_hw *ah)
static void ar9002_hw_adc_dccal_collect(struct ath_hw *ah)
static void ar9002_hw_iqcalibrate(struct ath_hw *ah, u8 numChains)
static void ar9002_hw_adc_gaincal_calibrate(struct ath_hw *ah, u8 numChains)
static void ar9002_hw_adc_dccal_calibrate(struct ath_hw *ah, u8 numChains)
static void ar9287_hw_olc_temp_compensation(struct ath_hw *ah)
static void ar9280_hw_olc_temp_compensation(struct ath_hw *ah)
static void ar9271_hw_pa_cal(struct ath_hw *ah, bool is_reset)
static inline void ar9285_hw_pa_cal(struct ath_hw *ah, bool is_reset)
static void ar9002_hw_pa_cal(struct ath_hw *ah, bool is_reset)
static void ar9002_hw_olc_temp_compensation(struct ath_hw *ah)
static bool ar9002_hw_calibrate(struct ath_hw *ah,
struct ath9k_channel *chan,
u8 rxchainmask,
bool longcal)
static bool ar9285_hw_cl_cal(struct ath_hw *ah, struct ath9k_channel *chan)
static bool ar9285_hw_clc(struct ath_hw *ah, struct ath9k_channel *chan)
static bool ar9002_hw_init_cal(struct ath_hw *ah, struct ath9k_channel *chan)
static const struct ath9k_percal_data iq_cal_multi_sample = ;
static const struct ath9k_percal_data iq_cal_single_sample = ;
static const struct ath9k_percal_data adc_gain_cal_multi_sample = ;
static const struct ath9k_percal_data adc_gain_cal_single_sample = ;
static const struct ath9k_percal_data adc_dc_cal_multi_sample = ;
static const struct ath9k_percal_data adc_dc_cal_single_sample = ;
static void ar9002_hw_init_cal_settings(struct ath_hw *ah)
void ar9002_hw_attach_calib_ops(struct ath_hw *ah)
