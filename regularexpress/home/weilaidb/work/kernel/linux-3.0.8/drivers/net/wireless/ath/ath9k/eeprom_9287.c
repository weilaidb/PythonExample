#define SIZE_EEPROM_AR9287 (sizeof(struct ar9287_eeprom) / sizeof(u16))
static int ath9k_hw_ar9287_get_eeprom_ver(struct ath_hw *ah)
static int ath9k_hw_ar9287_get_eeprom_rev(struct ath_hw *ah)
static bool __ath9k_hw_ar9287_fill_eeprom(struct ath_hw *ah)
static bool __ath9k_hw_usb_ar9287_fill_eeprom(struct ath_hw *ah)
static bool ath9k_hw_ar9287_fill_eeprom(struct ath_hw *ah)
static int ath9k_hw_ar9287_check_eeprom(struct ath_hw *ah)
static u32 ath9k_hw_ar9287_get_eeprom(struct ath_hw *ah,
enum eeprom_param param)
static void ar9287_eeprom_get_tx_gain_index(struct ath_hw *ah,
struct ath9k_channel *chan,
struct cal_data_op_loop_ar9287 *pRawDatasetOpLoop,
u8 *pCalChans,  u16 availPiers, int8_t *pPwr)
static void ar9287_eeprom_olpc_set_pdadcs(struct ath_hw *ah,
int32_t txPower, u16 chain)
static void ath9k_hw_set_ar9287_power_cal_table(struct ath_hw *ah,
struct ath9k_channel *chan,
int16_t *pTxPowerIndexOffset)
static void ath9k_hw_set_ar9287_power_per_rate_table(struct ath_hw *ah,
struct ath9k_channel *chan,
int16_t *ratesArray,
u16 cfgCtl,
u16 AntennaReduction,
u16 twiceMaxRegulatoryPower,
u16 powerLimit)
static void ath9k_hw_ar9287_set_txpower(struct ath_hw *ah,
struct ath9k_channel *chan, u16 cfgCtl,
u8 twiceAntennaReduction,
u8 twiceMaxRegulatoryPower,
u8 powerLimit, bool test)
static void ath9k_hw_ar9287_set_addac(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ath9k_hw_ar9287_set_board_values(struct ath_hw *ah,
struct ath9k_channel *chan)
static u16 ath9k_hw_ar9287_get_spur_channel(struct ath_hw *ah,
u16 i, bool is2GHz)
const struct eeprom_ops eep_ar9287_ops = ;
