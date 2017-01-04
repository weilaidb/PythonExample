#define AR9003_EEPROM_H
#define AR9300_EEP_VER               0xD000
#define AR9300_EEP_VER_MINOR_MASK    0xFFF
#define AR9300_EEP_MINOR_VER_1       0x1
#define AR9300_EEP_MINOR_VER         AR9300_EEP_MINOR_VER_1
#define AR9300_EEP_START_LOC         256
#define AR9300_NUM_5G_CAL_PIERS      8
#define AR9300_NUM_2G_CAL_PIERS      3
#define AR9300_NUM_5G_20_TARGET_POWERS  8
#define AR9300_NUM_5G_40_TARGET_POWERS  8
#define AR9300_NUM_2G_CCK_TARGET_POWERS 2
#define AR9300_NUM_2G_20_TARGET_POWERS  3
#define AR9300_NUM_2G_40_TARGET_POWERS  3
#define AR9300_NUM_CTLS_5G           9
#define AR9300_NUM_CTLS_2G           12
#define AR9300_NUM_BAND_EDGES_5G     8
#define AR9300_NUM_BAND_EDGES_2G     4
#define AR9300_EEPMISC_BIG_ENDIAN    0x01
#define AR9300_EEPMISC_WOW           0x02
#define AR9300_CUSTOMER_DATA_SIZE    20
#define FBIN2FREQ(x, y) ((y) ? (2300 + x) : (4800 + 5 * x))
#define AR9300_MAX_CHAINS            3
#define AR9300_ANT_16S               25
#define AR9300_FUTURE_MODAL_SZ       6
#define AR9300_PAPRD_RATE_MASK		0x01ffffff
#define AR9300_PAPRD_SCALE_1		0x0e000000
#define AR9300_PAPRD_SCALE_1_S		25
#define AR9300_PAPRD_SCALE_2		0x70000000
#define AR9300_PAPRD_SCALE_2_S		28
#define AR9300_PWR_TABLE_OFFSET  0
#define AR9300_EEPROM_SIZE (16*1024)
#define AR9300_BASE_ADDR_4K 0xfff
#define AR9300_BASE_ADDR 0x3ff
#define AR9300_BASE_ADDR_512 0x1ff
#define AR9300_OTP_BASE			0x14000
#define AR9300_OTP_STATUS		0x15f18
#define AR9300_OTP_STATUS_TYPE		0x7
#define AR9300_OTP_STATUS_VALID		0x4
#define AR9300_OTP_STATUS_ACCESS_BUSY	0x2
#define AR9300_OTP_STATUS_SM_BUSY	0x1
#define AR9300_OTP_READ_DATA		0x15f1c
enum targetPowerHTRates ;
enum targetPowerLegacyRates ;
enum targetPowerCckRates ;
enum ar9300_Rates ;
struct eepFlags  __packed;
enum CompressAlgorithm ;
struct ar9300_base_eep_hdr  __packed;
struct ar9300_modal_eep_header  __packed;
struct ar9300_cal_data_per_freq_op_loop  __packed;
struct cal_tgt_pow_legacy  __packed;
struct cal_tgt_pow_ht  __packed;
struct cal_ctl_data_2g  __packed;
struct cal_ctl_data_5g  __packed;
struct ar9300_BaseExtension_1  __packed;
struct ar9300_BaseExtension_2  __packed;
struct ar9300_eeprom  __packed;
s32 ar9003_hw_get_tx_gain_idx(struct ath_hw *ah);
s32 ar9003_hw_get_rx_gain_idx(struct ath_hw *ah);
u8 *ar9003_get_spur_chan_ptr(struct ath_hw *ah, bool is_2ghz);
unsigned int ar9003_get_paprd_scale_factor(struct ath_hw *ah,
struct ath9k_channel *chan);
