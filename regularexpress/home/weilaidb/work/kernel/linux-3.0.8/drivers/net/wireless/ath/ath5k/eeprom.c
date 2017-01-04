static u16 ath5k_eeprom_bin2freq(struct ath5k_eeprom_info *ee, u16 bin,
unsigned int mode)
static int
ath5k_eeprom_init_header(struct ath5k_hw *ah)
static int ath5k_eeprom_read_ants(struct ath5k_hw *ah, u32 *offset,
unsigned int mode)
static int ath5k_eeprom_read_modes(struct ath5k_hw *ah, u32 *offset,
unsigned int mode)
static int
ath5k_eeprom_init_modes(struct ath5k_hw *ah)
static inline int
ath5k_eeprom_read_freq_list(struct ath5k_hw *ah, int *offset, int max,
struct ath5k_chan_pcal_info *pc, unsigned int mode)
static int
ath5k_eeprom_init_11a_pcal_freq(struct ath5k_hw *ah, int offset)
static inline int
ath5k_eeprom_init_11bg_2413(struct ath5k_hw *ah, unsigned int mode, int offset)
static inline void
ath5k_get_pcdac_intercepts(struct ath5k_hw *ah, u8 min, u8 max, u8 *vp)
static int
ath5k_eeprom_free_pcal_info(struct ath5k_hw *ah, int mode)
static int
ath5k_eeprom_convert_pcal_info_5111(struct ath5k_hw *ah, int mode,
struct ath5k_chan_pcal_info *chinfo)
static int
ath5k_eeprom_read_pcal_info_5111(struct ath5k_hw *ah, int mode)
static int
ath5k_eeprom_convert_pcal_info_5112(struct ath5k_hw *ah, int mode,
struct ath5k_chan_pcal_info *chinfo)
static int
ath5k_eeprom_read_pcal_info_5112(struct ath5k_hw *ah, int mode)
static inline unsigned int
ath5k_pdgains_size_2413(struct ath5k_eeprom_info *ee, unsigned int mode)
static unsigned int
ath5k_cal_data_offset_2413(struct ath5k_eeprom_info *ee, int mode)
static int
ath5k_eeprom_convert_pcal_info_2413(struct ath5k_hw *ah, int mode,
struct ath5k_chan_pcal_info *chinfo)
static int
ath5k_eeprom_read_pcal_info_2413(struct ath5k_hw *ah, int mode)
static int
ath5k_eeprom_read_target_rate_pwr_info(struct ath5k_hw *ah, unsigned int mode)
static int
ath5k_eeprom_read_pcal_info(struct ath5k_hw *ah)
static int
ath5k_eeprom_read_ctl_info(struct ath5k_hw *ah)
static int
ath5k_eeprom_read_spur_chans(struct ath5k_hw *ah)
int
ath5k_eeprom_init(struct ath5k_hw *ah)
void
ath5k_eeprom_detach(struct ath5k_hw *ah)
int
ath5k_eeprom_mode_from_channel(struct ieee80211_channel *channel)
