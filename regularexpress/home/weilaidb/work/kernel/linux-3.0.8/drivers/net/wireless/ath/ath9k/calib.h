#define CALIB_H
#define AR_PHY_CCA_FILTERWINDOW_LENGTH_INIT     3
#define AR_PHY_CCA_FILTERWINDOW_LENGTH          5
#define NUM_NF_READINGS       6
#define ATH9K_NF_CAL_HIST_MAX 5
struct ar5416IniArray ;
#define INIT_INI_ARRAY(iniarray, array, rows, columns) do  while (0)
#define INI_RA(iniarray, row, column) \
(((iniarray)->ia_array)[(row) *	((iniarray)->ia_columns) + (column)])
#define INIT_CAL(_perCal) do  while (0)
#define INSERT_CAL(_ahp, _perCal)					\
do  while (0)
enum ath9k_cal_state ;
#define MIN_CAL_SAMPLES     1
#define MAX_CAL_SAMPLES    64
#define INIT_LOG_COUNT      5
#define PER_MIN_LOG_COUNT   2
#define PER_MAX_LOG_COUNT  10
struct ath9k_percal_data ;
struct ath9k_cal_list ;
struct ath9k_nfcal_hist ;
#define MAX_PACAL_SKIPCOUNT 8
struct ath9k_pacal_info;
bool ath9k_hw_reset_calvalid(struct ath_hw *ah);
void ath9k_hw_start_nfcal(struct ath_hw *ah, bool update);
void ath9k_hw_loadnf(struct ath_hw *ah, struct ath9k_channel *chan);
bool ath9k_hw_getnf(struct ath_hw *ah, struct ath9k_channel *chan);
void ath9k_init_nfcal_hist_buffer(struct ath_hw *ah,
struct ath9k_channel *chan);
void ath9k_hw_bstuck_nfcal(struct ath_hw *ah);
void ath9k_hw_reset_calibration(struct ath_hw *ah,
struct ath9k_cal_list *currCal);
