#define ATH9K_NF_TOO_HIGH	-60
static int16_t ath9k_hw_get_nf_hist_mid(int16_t *nfCalBuffer)
static struct ath_nf_limits *ath9k_hw_get_nf_limits(struct ath_hw *ah,
struct ath9k_channel *chan)
static s16 ath9k_hw_get_default_nf(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ath9k_hw_update_nfcal_hist_buffer(struct ath_hw *ah,
struct ath9k_hw_cal_data *cal,
int16_t *nfarray)
static bool ath9k_hw_get_nf_thresh(struct ath_hw *ah,
enum ieee80211_band band,
int16_t *nft)
void ath9k_hw_reset_calibration(struct ath_hw *ah,
struct ath9k_cal_list *currCal)
bool ath9k_hw_reset_calvalid(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_reset_calvalid);
void ath9k_hw_start_nfcal(struct ath_hw *ah, bool update)
void ath9k_hw_loadnf(struct ath_hw *ah, struct ath9k_channel *chan)
static void ath9k_hw_nf_sanitize(struct ath_hw *ah, s16 *nf)
bool ath9k_hw_getnf(struct ath_hw *ah, struct ath9k_channel *chan)
void ath9k_init_nfcal_hist_buffer(struct ath_hw *ah,
struct ath9k_channel *chan)
void ath9k_hw_bstuck_nfcal(struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_hw_bstuck_nfcal);
