#define EEPROM_H
#define AR_EEPROM_MODAL_SPURS   5
#define AR5416_EEPROM_MAGIC 0x5aa5
#define AR5416_EEPROM_MAGIC 0xa55a
#define CTRY_DEBUG   0x1ff
#define	CTRY_DEFAULT 0
#define AR_EEPROM_EEPCAP_COMPRESS_DIS   0x0001
#define AR_EEPROM_EEPCAP_AES_DIS        0x0002
#define AR_EEPROM_EEPCAP_FASTFRAME_DIS  0x0004
#define AR_EEPROM_EEPCAP_BURST_DIS      0x0008
#define AR_EEPROM_EEPCAP_MAXQCU         0x01F0
#define AR_EEPROM_EEPCAP_MAXQCU_S       4
#define AR_EEPROM_EEPCAP_HEAVY_CLIP_EN  0x0200
#define AR_EEPROM_EEPCAP_KC_ENTRIES     0xF000
#define AR_EEPROM_EEPCAP_KC_ENTRIES_S   12
#define AR_EEPROM_EEREGCAP_EN_FCC_MIDBAND   0x0040
#define AR_EEPROM_EEREGCAP_EN_KK_U1_EVEN    0x0080
#define AR_EEPROM_EEREGCAP_EN_KK_U2         0x0100
#define AR_EEPROM_EEREGCAP_EN_KK_MIDBAND    0x0200
#define AR_EEPROM_EEREGCAP_EN_KK_U1_ODD     0x0400
#define AR_EEPROM_EEREGCAP_EN_KK_NEW_11A    0x0800
#define AR_EEPROM_EEREGCAP_EN_KK_U1_ODD_PRE4_0  0x4000
#define AR_EEPROM_EEREGCAP_EN_KK_NEW_11A_PRE4_0 0x8000
#define AR5416_EEPROM_MAGIC_OFFSET  0x0
#define AR5416_EEPROM_S             2
#define AR5416_EEPROM_OFFSET        0x2000
#define AR5416_EEPROM_MAX           0xae0
#define AR5416_EEPROM_START_ADDR \
(AR_SREV_9100(ah)) ? 0x1fff1000 : 0x503f1200
#define SD_NO_CTL               0xE0
#define NO_CTL                  0xff
#define CTL_MODE_M              0xf
#define CTL_11A                 0
#define CTL_11B                 1
#define CTL_11G                 2
#define CTL_2GHT20              5
#define CTL_5GHT20              6
#define CTL_2GHT40              7
#define CTL_5GHT40              8
#define EXT_ADDITIVE (0x8000)
#define CTL_11A_EXT (CTL_11A | EXT_ADDITIVE)
#define CTL_11G_EXT (CTL_11G | EXT_ADDITIVE)
#define CTL_11B_EXT (CTL_11B | EXT_ADDITIVE)
#define SUB_NUM_CTL_MODES_AT_5G_40 2
#define SUB_NUM_CTL_MODES_AT_2G_40 3
#define INCREASE_MAXPOW_BY_TWO_CHAIN     6
#define INCREASE_MAXPOW_BY_THREE_CHAIN   10
#define AR9285_RDEXT_DEFAULT    0x1F
#define ATH9K_POW_SM(_r, _s)	(((_r) & 0x3f) << (_s))
#define FREQ2FBIN(x, y)		((y) ? ((x) - 2300) : (((x) - 4800) / 5))
#define ath9k_hw_use_flash(_ah)	(!(_ah->ah_flags & AH_USE_EEPROM))
#define AR5416_VER_MASK (eep->baseEepHeader.version & AR5416_EEP_VER_MINOR_MASK)
#define OLC_FOR_AR9280_20_LATER (AR_SREV_9280_20_OR_LATER(ah) && \
ah->eep_ops->get_eeprom(ah, EEP_OL_PWRCTRL))
#define OLC_FOR_AR9287_10_LATER (AR_SREV_9287_11_OR_LATER(ah) && \
ah->eep_ops->get_eeprom(ah, EEP_OL_PWRCTRL))
#define AR_EEPROM_RFSILENT_GPIO_SEL     0x001c
#define AR_EEPROM_RFSILENT_GPIO_SEL_S   2
#define AR_EEPROM_RFSILENT_POLARITY     0x0002
#define AR_EEPROM_RFSILENT_POLARITY_S   1
#define EEP_RFSILENT_ENABLED        0x0001
#define EEP_RFSILENT_ENABLED_S      0
#define EEP_RFSILENT_POLARITY       0x0002
#define EEP_RFSILENT_POLARITY_S     1
#define EEP_RFSILENT_GPIO_SEL       0x001c
#define EEP_RFSILENT_GPIO_SEL_S     2
#define AR5416_OPFLAGS_11A           0x01
#define AR5416_OPFLAGS_11G           0x02
#define AR5416_OPFLAGS_N_5G_HT40     0x04
#define AR5416_OPFLAGS_N_2G_HT40     0x08
#define AR5416_OPFLAGS_N_5G_HT20     0x10
#define AR5416_OPFLAGS_N_2G_HT20     0x20
#define AR5416_EEP_NO_BACK_VER       0x1
#define AR5416_EEP_VER               0xE
#define AR5416_EEP_VER_MINOR_MASK    0x0FFF
#define AR5416_EEP_MINOR_VER_2       0x2
#define AR5416_EEP_MINOR_VER_3       0x3
#define AR5416_EEP_MINOR_VER_7       0x7
#define AR5416_EEP_MINOR_VER_9       0x9
#define AR5416_EEP_MINOR_VER_16      0x10
#define AR5416_EEP_MINOR_VER_17      0x11
#define AR5416_EEP_MINOR_VER_19      0x13
#define AR5416_EEP_MINOR_VER_20      0x14
#define AR5416_EEP_MINOR_VER_21      0x15
#define AR5416_EEP_MINOR_VER_22      0x16
#define AR5416_NUM_5G_CAL_PIERS         8
#define AR5416_NUM_2G_CAL_PIERS         4
#define AR5416_NUM_5G_20_TARGET_POWERS  8
#define AR5416_NUM_5G_40_TARGET_POWERS  8
#define AR5416_NUM_2G_CCK_TARGET_POWERS 3
#define AR5416_NUM_2G_20_TARGET_POWERS  4
#define AR5416_NUM_2G_40_TARGET_POWERS  4
#define AR5416_NUM_CTLS                 24
#define AR5416_NUM_BAND_EDGES           8
#define AR5416_NUM_PD_GAINS             4
#define AR5416_PD_GAINS_IN_MASK         4
#define AR5416_PD_GAIN_ICEPTS           5
#define AR5416_NUM_PDADC_VALUES         128
#define AR5416_BCHAN_UNUSED             0xFF
#define AR5416_MAX_PWR_RANGE_IN_HALF_DB 64
#define AR5416_MAX_CHAINS               3
#define AR9300_MAX_CHAINS		3
#define AR5416_PWR_TABLE_OFFSET_DB     -5
#define AR5416_EEP_RXGAIN_23DB_BACKOFF     0
#define AR5416_EEP_RXGAIN_13DB_BACKOFF     1
#define AR5416_EEP_RXGAIN_ORIG             2
#define AR5416_EEP_TXGAIN_ORIGINAL         0
#define AR5416_EEP_TXGAIN_HIGH_POWER       1
#define AR5416_EEP4K_START_LOC                64
#define AR5416_EEP4K_NUM_2G_CAL_PIERS         3
#define AR5416_EEP4K_NUM_2G_CCK_TARGET_POWERS 3
#define AR5416_EEP4K_NUM_2G_20_TARGET_POWERS  3
#define AR5416_EEP4K_NUM_2G_40_TARGET_POWERS  3
#define AR5416_EEP4K_NUM_CTLS                 12
#define AR5416_EEP4K_NUM_BAND_EDGES           4
#define AR5416_EEP4K_NUM_PD_GAINS             2
#define AR5416_EEP4K_MAX_CHAINS               1
#define AR9280_TX_GAIN_TABLE_SIZE 22
#define AR9287_EEP_VER               0xE
#define AR9287_EEP_VER_MINOR_MASK    0xFFF
#define AR9287_EEP_MINOR_VER_1       0x1
#define AR9287_EEP_MINOR_VER_2       0x2
#define AR9287_EEP_MINOR_VER_3       0x3
#define AR9287_EEP_MINOR_VER         AR9287_EEP_MINOR_VER_3
#define AR9287_EEP_MINOR_VER_b       AR9287_EEP_MINOR_VER
#define AR9287_EEP_NO_BACK_VER       AR9287_EEP_MINOR_VER_1
#define AR9287_EEP_START_LOC            128
#define AR9287_HTC_EEP_START_LOC        256
#define AR9287_NUM_2G_CAL_PIERS         3
#define AR9287_NUM_2G_CCK_TARGET_POWERS 3
#define AR9287_NUM_2G_20_TARGET_POWERS  3
#define AR9287_NUM_2G_40_TARGET_POWERS  3
#define AR9287_NUM_CTLS              	12
#define AR9287_NUM_BAND_EDGES        	4
#define AR9287_PD_GAIN_ICEPTS           1
#define AR9287_EEPMISC_BIG_ENDIAN       0x01
#define AR9287_EEPMISC_WOW              0x02
#define AR9287_MAX_CHAINS               2
#define AR9287_ANT_16S                  32
#define AR9287_DATA_SZ                  32
#define AR9287_PWR_TABLE_OFFSET_DB  -5
#define AR9287_CHECKSUM_LOCATION (AR9287_EEP_START_LOC + 1)
#define CTL_EDGE_TPOWER(_ctl) ((_ctl) & 0x3f)
#define CTL_EDGE_FLAGS(_ctl) (((_ctl) >> 6) & 0x03)
#define LNA_CTL_BUF_MODE	BIT(0)
#define LNA_CTL_ISEL_LO		BIT(1)
#define LNA_CTL_ISEL_HI		BIT(2)
#define LNA_CTL_BUF_IN		BIT(3)
#define LNA_CTL_FEM_BAND	BIT(4)
#define LNA_CTL_LOCAL_BIAS	BIT(5)
#define LNA_CTL_FORCE_XPA	BIT(6)
#define LNA_CTL_USE_ANT1	BIT(7)
enum eeprom_param ;
enum ar5416_rates ;
enum ath9k_hal_freq_band ;
struct base_eep_header  __packed;
struct base_eep_header_4k  __packed;
struct spur_chan  __packed;
struct modal_eep_header  __packed;
struct calDataPerFreqOpLoop  __packed;
struct modal_eep_4k_header  __packed;
struct base_eep_ar9287_header  __packed;
struct modal_eep_ar9287_header  __packed;
struct cal_data_per_freq  __packed;
struct cal_data_per_freq_4k  __packed;
struct cal_target_power_leg  __packed;
struct cal_target_power_ht  __packed;
struct cal_ctl_edges  __packed;
struct cal_data_op_loop_ar9287  __packed;
struct cal_data_per_freq_ar9287  __packed;
union cal_data_per_freq_ar9287_u  __packed;
struct cal_ctl_data_ar9287  __packed;
struct cal_ctl_data  __packed;
struct cal_ctl_data_4k  __packed;
struct ar5416_eeprom_def  __packed;
struct ar5416_eeprom_4k  __packed;
struct ar9287_eeprom  __packed;
enum reg_ext_bitmap ;
struct ath9k_country_entry ;
struct eeprom_ops ;
void ath9k_hw_analog_shift_regwrite(struct ath_hw *ah, u32 reg, u32 val);
void ath9k_hw_analog_shift_rmw(struct ath_hw *ah, u32 reg, u32 mask,
u32 shift, u32 val);
int16_t ath9k_hw_interpolate(u16 target, u16 srcLeft, u16 srcRight,
int16_t targetLeft,
int16_t targetRight);
bool ath9k_hw_get_lower_upper_index(u8 target, u8 *pList, u16 listSize,
u16 *indexL, u16 *indexR);
bool ath9k_hw_nvram_read(struct ath_common *common, u32 off, u16 *data);
void ath9k_hw_usb_gen_fill_eeprom(struct ath_hw *ah, u16 *eep_data,
int eep_start_loc, int size);
void ath9k_hw_fill_vpd_table(u8 pwrMin, u8 pwrMax, u8 *pPwrList,
u8 *pVpdList, u16 numIntercepts,
u8 *pRetVpdList);
void ath9k_hw_get_legacy_target_powers(struct ath_hw *ah,
struct ath9k_channel *chan,
struct cal_target_power_leg *powInfo,
u16 numChannels,
struct cal_target_power_leg *pNewPower,
u16 numRates, bool isExtTarget);
void ath9k_hw_get_target_powers(struct ath_hw *ah,
struct ath9k_channel *chan,
struct cal_target_power_ht *powInfo,
u16 numChannels,
struct cal_target_power_ht *pNewPower,
u16 numRates, bool isHt40Target);
u16 ath9k_hw_get_max_edge_power(u16 freq, struct cal_ctl_edges *pRdEdgesPower,
bool is2GHz, int num_band_edges);
void ath9k_hw_update_regulatory_maxpower(struct ath_hw *ah);
int ath9k_hw_eeprom_init(struct ath_hw *ah);
void ath9k_hw_get_gain_boundaries_pdadcs(struct ath_hw *ah,
struct ath9k_channel *chan,
void *pRawDataSet,
u8 *bChans, u16 availPiers,
u16 tPdGainOverlap,
u16 *pPdGainBoundaries, u8 *pPDADCValues,
u16 numXpdGains);
#define ar5416_get_ntxchains(_txchainmask)			\
(((_txchainmask >> 2) & 1) +                            \
((_txchainmask >> 1) & 1) + (_txchainmask & 1))
extern const struct eeprom_ops eep_def_ops;
extern const struct eeprom_ops eep_4k_ops;
extern const struct eeprom_ops eep_ar9287_ops;
extern const struct eeprom_ops eep_ar9287_ops;
extern const struct eeprom_ops eep_ar9300_ops;
