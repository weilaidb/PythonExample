static inline u16 ath9k_hw_fbin2freq(u8 fbin, bool is2GHz)
void ath9k_hw_analog_shift_regwrite(struct ath_hw *ah, u32 reg, u32 val)
void ath9k_hw_analog_shift_rmw(struct ath_hw *ah, u32 reg, u32 mask,
u32 shift, u32 val)
int16_t ath9k_hw_interpolate(u16 target, u16 srcLeft, u16 srcRight,
int16_t targetLeft, int16_t targetRight)
bool ath9k_hw_get_lower_upper_index(u8 target, u8 *pList, u16 listSize,
u16 *indexL, u16 *indexR)
void ath9k_hw_usb_gen_fill_eeprom(struct ath_hw *ah, u16 *eep_data,
int eep_start_loc, int size)
bool ath9k_hw_nvram_read(struct ath_common *common, u32 off, u16 *data)
void ath9k_hw_fill_vpd_table(u8 pwrMin, u8 pwrMax, u8 *pPwrList,
u8 *pVpdList, u16 numIntercepts,
u8 *pRetVpdList)
void ath9k_hw_get_legacy_target_powers(struct ath_hw *ah,
struct ath9k_channel *chan,
struct cal_target_power_leg *powInfo,
u16 numChannels,
struct cal_target_power_leg *pNewPower,
u16 numRates, bool isExtTarget)
void ath9k_hw_get_target_powers(struct ath_hw *ah,
struct ath9k_channel *chan,
struct cal_target_power_ht *powInfo,
u16 numChannels,
struct cal_target_power_ht *pNewPower,
u16 numRates, bool isHt40Target)
u16 ath9k_hw_get_max_edge_power(u16 freq, struct cal_ctl_edges *pRdEdgesPower,
bool is2GHz, int num_band_edges)
void ath9k_hw_update_regulatory_maxpower(struct ath_hw *ah)
void ath9k_hw_get_gain_boundaries_pdadcs(struct ath_hw *ah,
struct ath9k_channel *chan,
void *pRawDataSet,
u8 *bChans, u16 availPiers,
u16 tPdGainOverlap,
u16 *pPdGainBoundaries, u8 *pPDADCValues,
u16 numXpdGains)
int ath9k_hw_eeprom_init(struct ath_hw *ah)
