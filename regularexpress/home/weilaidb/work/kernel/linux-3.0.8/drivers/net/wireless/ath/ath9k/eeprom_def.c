static void ath9k_get_txgain_index(struct ath_hw *ah,
struct ath9k_channel *chan,
struct calDataPerFreqOpLoop *rawDatasetOpLoop,
u8 *calChans,  u16 availPiers, u8 *pwr, u8 *pcdacIdx)
static void ath9k_olc_get_pdadcs(struct ath_hw *ah,
u32 initTxGain,
int txPower,
u8 *pPDADCValues)
static int ath9k_hw_def_get_eeprom_ver(struct ath_hw *ah)
static int ath9k_hw_def_get_eeprom_rev(struct ath_hw *ah)
#define SIZE_EEPROM_DEF (sizeof(struct ar5416_eeprom_def) / sizeof(u16))
static bool __ath9k_hw_def_fill_eeprom(struct ath_hw *ah)
static bool __ath9k_hw_usb_def_fill_eeprom(struct ath_hw *ah)
static bool ath9k_hw_def_fill_eeprom(struct ath_hw *ah)
#undef SIZE_EEPROM_DEF
static int ath9k_hw_def_check_eeprom(struct ath_hw *ah)
static u32 ath9k_hw_def_get_eeprom(struct ath_hw *ah,
enum eeprom_param param)
static void ath9k_hw_def_set_gain(struct ath_hw *ah,
struct modal_eep_header *pModal,
struct ar5416_eeprom_def *eep,
u8 txRxAttenLocal, int regChainOffset, int i)
static void ath9k_hw_def_set_board_values(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ath9k_hw_def_set_addac(struct ath_hw *ah,
struct ath9k_channel *chan)
static int16_t ath9k_change_gain_boundary_setting(struct ath_hw *ah,
u16 *gb,
u16 numXpdGain,
u16 pdGainOverlap_t2,
int8_t pwr_table_offset,
int16_t *diff)
static void ath9k_adjust_pdadc_values(struct ath_hw *ah,
int8_t pwr_table_offset,
int16_t diff,
u8 *pdadcValues)
static void ath9k_hw_set_def_power_cal_table(struct ath_hw *ah,
struct ath9k_channel *chan,
int16_t *pTxPowerIndexOffset)
static void ath9k_hw_set_def_power_per_rate_table(struct ath_hw *ah,
struct ath9k_channel *chan,
int16_t *ratesArray,
u16 cfgCtl,
u16 AntennaReduction,
u16 twiceMaxRegulatoryPower,
u16 powerLimit)
static void ath9k_hw_def_set_txpower(struct ath_hw *ah,
struct ath9k_channel *chan,
u16 cfgCtl,
u8 twiceAntennaReduction,
u8 twiceMaxRegulatoryPower,
u8 powerLimit, bool test)
static u16 ath9k_hw_def_get_spur_channel(struct ath_hw *ah, u16 i, bool is2GHz)
const struct eeprom_ops eep_def_ops = ;
