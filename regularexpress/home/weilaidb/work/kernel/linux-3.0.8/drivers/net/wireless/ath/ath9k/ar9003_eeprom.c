#define COMP_HDR_LEN 4
#define COMP_CKSUM_LEN 2
#define AR_CH0_TOP (0x00016288)
#define AR_CH0_TOP_XPABIASLVL (0x300)
#define AR_CH0_TOP_XPABIASLVL_S (8)
#define AR_CH0_THERM (0x00016290)
#define AR_CH0_THERM_XPABIASLVL_MSB 0x3
#define AR_CH0_THERM_XPABIASLVL_MSB_S 0
#define AR_CH0_THERM_XPASHORT2GND 0x4
#define AR_CH0_THERM_XPASHORT2GND_S 2
#define AR_SWITCH_TABLE_COM_ALL (0xffff)
#define AR_SWITCH_TABLE_COM_ALL_S (0)
#define AR_SWITCH_TABLE_COM2_ALL (0xffffff)
#define AR_SWITCH_TABLE_COM2_ALL_S (0)
#define AR_SWITCH_TABLE_ALL (0xfff)
#define AR_SWITCH_TABLE_ALL_S (0)
#define LE16(x) __constant_cpu_to_le16(x)
#define LE32(x) __constant_cpu_to_le32(x)
#define EXT_ADDITIVE (0x8000)
#define CTL_11A_EXT (CTL_11A | EXT_ADDITIVE)
#define CTL_11G_EXT (CTL_11G | EXT_ADDITIVE)
#define CTL_11B_EXT (CTL_11B | EXT_ADDITIVE)
#define REDUCE_SCALED_POWER_BY_TWO_CHAIN     6
#define REDUCE_SCALED_POWER_BY_THREE_CHAIN   9
#define PWRINCR_3_TO_1_CHAIN      9
#define PWRINCR_3_TO_2_CHAIN      3
#define PWRINCR_2_TO_1_CHAIN      6
#define SUB_NUM_CTL_MODES_AT_5G_40 2
#define SUB_NUM_CTL_MODES_AT_2G_40 3
#define CTL(_tpower, _flag) ((_tpower) | ((_flag) << 6))
#define EEPROM_DATA_LEN_9485	1088
static int ar9003_hw_power_interpolate(int32_t x,
int32_t *px, int32_t *py, u_int16_t np);
static const struct ar9300_eeprom ar9300_default = ;
static const struct ar9300_eeprom ar9300_x113 = ;
static const struct ar9300_eeprom ar9300_h112 = ;
static const struct ar9300_eeprom ar9300_x112 = ;
static const struct ar9300_eeprom ar9300_h116 = ;
static const struct ar9300_eeprom *ar9300_eep_templates[] = ;
static const struct ar9300_eeprom *ar9003_eeprom_struct_find_by_id(int id)
static u16 ath9k_hw_fbin2freq(u8 fbin, bool is2GHz)
static int ath9k_hw_ar9300_check_eeprom(struct ath_hw *ah)
static int interpolate(int x, int xa, int xb, int ya, int yb)
static u32 ath9k_hw_ar9300_get_eeprom(struct ath_hw *ah,
enum eeprom_param param)
static bool ar9300_eeprom_read_byte(struct ath_common *common, int address,
u8 *buffer)
static bool ar9300_eeprom_read_word(struct ath_common *common, int address,
u8 *buffer)
static bool ar9300_read_eeprom(struct ath_hw *ah, int address, u8 *buffer,
int count)
static bool ar9300_otp_read_word(struct ath_hw *ah, int addr, u32 *data)
static bool ar9300_read_otp(struct ath_hw *ah, int address, u8 *buffer,
int count)
static void ar9300_comp_hdr_unpack(u8 *best, int *code, int *reference,
int *length, int *major, int *minor)
static u16 ar9300_comp_cksum(u8 *data, int dsize)
static bool ar9300_uncompress_block(struct ath_hw *ah,
u8 *mptr,
int mdataSize,
u8 *block,
int size)
static int ar9300_compress_decision(struct ath_hw *ah,
int it,
int code,
int reference,
u8 *mptr,
u8 *word, int length, int mdata_size)
typedef bool (*eeprom_read_op)(struct ath_hw *ah, int address, u8 *buffer,
int count);
static bool ar9300_check_header(void *data)
static bool ar9300_check_eeprom_header(struct ath_hw *ah, eeprom_read_op read,
int base_addr)
static int ar9300_eeprom_restore_flash(struct ath_hw *ah, u8 *mptr,
int mdata_size)
static int ar9300_eeprom_restore_internal(struct ath_hw *ah,
u8 *mptr, int mdata_size)
static bool ath9k_hw_ar9300_fill_eeprom(struct ath_hw *ah)
static int ath9k_hw_ar9300_get_eeprom_ver(struct ath_hw *ah)
static int ath9k_hw_ar9300_get_eeprom_rev(struct ath_hw *ah)
static s32 ar9003_hw_xpa_bias_level_get(struct ath_hw *ah, bool is2ghz)
static void ar9003_hw_xpa_bias_level_apply(struct ath_hw *ah, bool is2ghz)
static u32 ar9003_hw_ant_ctrl_common_get(struct ath_hw *ah, bool is2ghz)
static u32 ar9003_hw_ant_ctrl_common_2_get(struct ath_hw *ah, bool is2ghz)
static u16 ar9003_hw_ant_ctrl_chain_get(struct ath_hw *ah,
int chain,
bool is2ghz)
static void ar9003_hw_ant_ctrl_apply(struct ath_hw *ah, bool is2ghz)
static void ar9003_hw_drive_strength_apply(struct ath_hw *ah)
static u16 ar9003_hw_atten_chain_get(struct ath_hw *ah, int chain,
struct ath9k_channel *chan)
static u16 ar9003_hw_atten_chain_get_margin(struct ath_hw *ah, int chain,
struct ath9k_channel *chan)
static void ar9003_hw_atten_apply(struct ath_hw *ah, struct ath9k_channel *chan)
static bool is_pmu_set(struct ath_hw *ah, u32 pmu_reg, int pmu_set)
static void ar9003_hw_internal_regulator_apply(struct ath_hw *ah)
static void ar9003_hw_apply_tuning_caps(struct ath_hw *ah)
static void ath9k_hw_ar9300_set_board_values(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ath9k_hw_ar9300_set_addac(struct ath_hw *ah,
struct ath9k_channel *chan)
static int ar9003_hw_power_interpolate(int32_t x,
int32_t *px, int32_t *py, u_int16_t np)
static u8 ar9003_hw_eeprom_get_tgt_pwr(struct ath_hw *ah,
u16 rateIndex, u16 freq, bool is2GHz)
static u8 ar9003_hw_eeprom_get_ht20_tgt_pwr(struct ath_hw *ah,
u16 rateIndex,
u16 freq, bool is2GHz)
static u8 ar9003_hw_eeprom_get_ht40_tgt_pwr(struct ath_hw *ah,
u16 rateIndex,
u16 freq, bool is2GHz)
static u8 ar9003_hw_eeprom_get_cck_tgt_pwr(struct ath_hw *ah,
u16 rateIndex, u16 freq)
static int ar9003_hw_tx_power_regwrite(struct ath_hw *ah, u8 * pPwrArray)
static void ar9003_hw_set_target_power_eeprom(struct ath_hw *ah, u16 freq,
u8 *targetPowerValT2)
static int ar9003_hw_cal_pier_get(struct ath_hw *ah,
int mode,
int ipier,
int ichain,
int *pfrequency,
int *pcorrection,
int *ptemperature, int *pvoltage)
static int ar9003_hw_power_control_override(struct ath_hw *ah,
int frequency,
int *correction,
int *voltage, int *temperature)
static int ar9003_hw_calibration_apply(struct ath_hw *ah, int frequency)
static u16 ar9003_hw_get_direct_edge_power(struct ar9300_eeprom *eep,
int idx,
int edge,
bool is2GHz)
static u16 ar9003_hw_get_indirect_edge_power(struct ar9300_eeprom *eep,
int idx,
unsigned int edge,
u16 freq,
bool is2GHz)
static u16 ar9003_hw_get_max_edge_power(struct ar9300_eeprom *eep,
u16 freq, int idx, bool is2GHz)
static void ar9003_hw_set_power_per_rate_table(struct ath_hw *ah,
struct ath9k_channel *chan,
u8 *pPwrArray, u16 cfgCtl,
u8 twiceAntennaReduction,
u8 twiceMaxRegulatoryPower,
u16 powerLimit)
static inline u8 mcsidx_to_tgtpwridx(unsigned int mcs_idx, u8 base_pwridx)
static void ath9k_hw_ar9300_set_txpower(struct ath_hw *ah,
struct ath9k_channel *chan, u16 cfgCtl,
u8 twiceAntennaReduction,
u8 twiceMaxRegulatoryPower,
u8 powerLimit, bool test)
static u16 ath9k_hw_ar9300_get_spur_channel(struct ath_hw *ah,
u16 i, bool is2GHz)
s32 ar9003_hw_get_tx_gain_idx(struct ath_hw *ah)
s32 ar9003_hw_get_rx_gain_idx(struct ath_hw *ah)
u8 *ar9003_get_spur_chan_ptr(struct ath_hw *ah, bool is_2ghz)
unsigned int ar9003_get_paprd_scale_factor(struct ath_hw *ah,
struct ath9k_channel *chan)
const struct eeprom_ops eep_ar9300_ops = ;
