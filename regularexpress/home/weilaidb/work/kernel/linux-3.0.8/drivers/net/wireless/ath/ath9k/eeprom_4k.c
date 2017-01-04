static int ath9k_hw_4k_get_eeprom_ver(struct ath_hw *ah)
static int ath9k_hw_4k_get_eeprom_rev(struct ath_hw *ah)
#define SIZE_EEPROM_4K (sizeof(struct ar5416_eeprom_4k) / sizeof(u16))
static bool __ath9k_hw_4k_fill_eeprom(struct ath_hw *ah)
static bool __ath9k_hw_usb_4k_fill_eeprom(struct ath_hw *ah)
static bool ath9k_hw_4k_fill_eeprom(struct ath_hw *ah)
#undef SIZE_EEPROM_4K
static int ath9k_hw_4k_check_eeprom(struct ath_hw *ah)
static u32 ath9k_hw_4k_get_eeprom(struct ath_hw *ah,
enum eeprom_param param)
static void ath9k_hw_set_4k_power_cal_table(struct ath_hw *ah,
struct ath9k_channel *chan,
int16_t *pTxPowerIndexOffset)
static void ath9k_hw_set_4k_power_per_rate_table(struct ath_hw *ah,
struct ath9k_channel *chan,
int16_t *ratesArray,
u16 cfgCtl,
u16 AntennaReduction,
u16 twiceMaxRegulatoryPower,
u16 powerLimit)
static void ath9k_hw_4k_set_txpower(struct ath_hw *ah,
struct ath9k_channel *chan,
u16 cfgCtl,
u8 twiceAntennaReduction,
u8 twiceMaxRegulatoryPower,
u8 powerLimit, bool test)
static void ath9k_hw_4k_set_addac(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ath9k_hw_4k_set_gain(struct ath_hw *ah,
struct modal_eep_4k_header *pModal,
struct ar5416_eeprom_4k *eep,
u8 txRxAttenLocal)
static void ath9k_hw_4k_set_board_values(struct ath_hw *ah,
struct ath9k_channel *chan)
static u16 ath9k_hw_4k_get_spur_channel(struct ath_hw *ah, u16 i, bool is2GHz)
const struct eeprom_ops eep_4k_ops = ;
