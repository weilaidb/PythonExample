#define WAIT_FOR_BBP(__dev, __reg) \
rt2800_regbusy_read((__dev), BBP_CSR_CFG, BBP_CSR_CFG_BUSY, (__reg))
#define WAIT_FOR_RFCSR(__dev, __reg) \
rt2800_regbusy_read((__dev), RF_CSR_CFG, RF_CSR_CFG_BUSY, (__reg))
#define WAIT_FOR_RF(__dev, __reg) \
rt2800_regbusy_read((__dev), RF_CSR_CFG0, RF_CSR_CFG0_BUSY, (__reg))
#define WAIT_FOR_MCU(__dev, __reg) \
rt2800_regbusy_read((__dev), H2M_MAILBOX_CSR, \
H2M_MAILBOX_CSR_OWNER, (__reg))
static inline bool rt2800_is_305x_soc(struct rt2x00_dev *rt2x00dev)
static void rt2800_bbp_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, const u8 value)
static void rt2800_bbp_read(struct rt2x00_dev *rt2x00dev,
const unsigned int word, u8 *value)
static void rt2800_rfcsr_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, const u8 value)
static void rt2800_rfcsr_read(struct rt2x00_dev *rt2x00dev,
const unsigned int word, u8 *value)
static void rt2800_rf_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, const u32 value)
void rt2800_mcu_request(struct rt2x00_dev *rt2x00dev,
const u8 command, const u8 token,
const u8 arg0, const u8 arg1)
EXPORT_SYMBOL_GPL(rt2800_mcu_request);
int rt2800_wait_csr_ready(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_wait_csr_ready);
int rt2800_wait_wpdma_ready(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_wait_wpdma_ready);
static bool rt2800_check_firmware_crc(const u8 *data, const size_t len)
int rt2800_check_firmware(struct rt2x00_dev *rt2x00dev,
const u8 *data, const size_t len)
EXPORT_SYMBOL_GPL(rt2800_check_firmware);
int rt2800_load_firmware(struct rt2x00_dev *rt2x00dev,
const u8 *data, const size_t len)
EXPORT_SYMBOL_GPL(rt2800_load_firmware);
void rt2800_write_tx_data(struct queue_entry *entry,
struct txentry_desc *txdesc)
EXPORT_SYMBOL_GPL(rt2800_write_tx_data);
static int rt2800_agc_to_rssi(struct rt2x00_dev *rt2x00dev, u32 rxwi_w2)
void rt2800_process_rxwi(struct queue_entry *entry,
struct rxdone_entry_desc *rxdesc)
EXPORT_SYMBOL_GPL(rt2800_process_rxwi);
static bool rt2800_txdone_entry_check(struct queue_entry *entry, u32 reg)
void rt2800_txdone_entry(struct queue_entry *entry, u32 status)
EXPORT_SYMBOL_GPL(rt2800_txdone_entry);
void rt2800_txdone(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_txdone);
void rt2800_write_beacon(struct queue_entry *entry, struct txentry_desc *txdesc)
EXPORT_SYMBOL_GPL(rt2800_write_beacon);
static inline void rt2800_clear_beacon_register(struct rt2x00_dev *rt2x00dev,
unsigned int beacon_base)
void rt2800_clear_beacon(struct queue_entry *entry)
EXPORT_SYMBOL_GPL(rt2800_clear_beacon);
const struct rt2x00debug rt2800_rt2x00debug = ;
EXPORT_SYMBOL_GPL(rt2800_rt2x00debug);
int rt2800_rfkill_poll(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_rfkill_poll);
static void rt2800_brightness_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static int rt2800_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on, unsigned long *delay_off)
static void rt2800_init_led(struct rt2x00_dev *rt2x00dev,
struct rt2x00_led *led, enum led_type type)
static void rt2800_config_wcid_attr(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_crypto *crypto,
struct ieee80211_key_conf *key)
int rt2800_config_shared_key(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_crypto *crypto,
struct ieee80211_key_conf *key)
EXPORT_SYMBOL_GPL(rt2800_config_shared_key);
static inline int rt2800_find_pairwise_keyslot(struct rt2x00_dev *rt2x00dev)
int rt2800_config_pairwise_key(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_crypto *crypto,
struct ieee80211_key_conf *key)
EXPORT_SYMBOL_GPL(rt2800_config_pairwise_key);
void rt2800_config_filter(struct rt2x00_dev *rt2x00dev,
const unsigned int filter_flags)
EXPORT_SYMBOL_GPL(rt2800_config_filter);
void rt2800_config_intf(struct rt2x00_dev *rt2x00dev, struct rt2x00_intf *intf,
struct rt2x00intf_conf *conf, const unsigned int flags)
EXPORT_SYMBOL_GPL(rt2800_config_intf);
static void rt2800_config_ht_opmode(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_erp *erp)
void rt2800_config_erp(struct rt2x00_dev *rt2x00dev, struct rt2x00lib_erp *erp,
u32 changed)
EXPORT_SYMBOL_GPL(rt2800_config_erp);
static void rt2800_set_ant_diversity(struct rt2x00_dev *rt2x00dev,
enum antenna ant)
void rt2800_config_ant(struct rt2x00_dev *rt2x00dev, struct antenna_setup *ant)
EXPORT_SYMBOL_GPL(rt2800_config_ant);
static void rt2800_config_lna_gain(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
static void rt2800_config_channel_rf2xxx(struct rt2x00_dev *rt2x00dev,
struct ieee80211_conf *conf,
struct rf_channel *rf,
struct channel_info *info)
static void rt2800_config_channel_rf3xxx(struct rt2x00_dev *rt2x00dev,
struct ieee80211_conf *conf,
struct rf_channel *rf,
struct channel_info *info)
#define RT5390_POWER_BOUND     0x27
#define RT5390_FREQ_OFFSET_BOUND       0x5f
static void rt2800_config_channel_rf53xx(struct rt2x00_dev *rt2x00dev,
struct ieee80211_conf *conf,
struct rf_channel *rf,
struct channel_info *info)
static void rt2800_config_channel(struct rt2x00_dev *rt2x00dev,
struct ieee80211_conf *conf,
struct rf_channel *rf,
struct channel_info *info)
static int rt2800_get_gain_calibration_delta(struct rt2x00_dev *rt2x00dev)
static int rt2800_get_txpower_bw_comp(struct rt2x00_dev *rt2x00dev,
enum ieee80211_band band)
static u8 rt2800_compensate_txpower(struct rt2x00_dev *rt2x00dev, int is_rate_b,
enum ieee80211_band band, int power_level,
u8 txpower, int delta)
static void rt2800_config_txpower(struct rt2x00_dev *rt2x00dev,
enum ieee80211_band band,
int power_level)
void rt2800_gain_calibration(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_gain_calibration);
static void rt2800_config_retry_limit(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
static void rt2800_config_ps(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
void rt2800_config(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf,
const unsigned int flags)
EXPORT_SYMBOL_GPL(rt2800_config);
void rt2800_link_stats(struct rt2x00_dev *rt2x00dev, struct link_qual *qual)
EXPORT_SYMBOL_GPL(rt2800_link_stats);
static u8 rt2800_get_default_vgc(struct rt2x00_dev *rt2x00dev)
static inline void rt2800_set_vgc(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual, u8 vgc_level)
void rt2800_reset_tuner(struct rt2x00_dev *rt2x00dev, struct link_qual *qual)
EXPORT_SYMBOL_GPL(rt2800_reset_tuner);
void rt2800_link_tuner(struct rt2x00_dev *rt2x00dev, struct link_qual *qual,
const u32 count)
EXPORT_SYMBOL_GPL(rt2800_link_tuner);
static int rt2800_init_registers(struct rt2x00_dev *rt2x00dev)
static int rt2800_wait_bbp_rf_ready(struct rt2x00_dev *rt2x00dev)
static int rt2800_wait_bbp_ready(struct rt2x00_dev *rt2x00dev)
static int rt2800_init_bbp(struct rt2x00_dev *rt2x00dev)
static u8 rt2800_init_rx_filter(struct rt2x00_dev *rt2x00dev,
bool bw40, u8 rfcsr24, u8 filter_target)
static int rt2800_init_rfcsr(struct rt2x00_dev *rt2x00dev)
int rt2800_enable_radio(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_enable_radio);
void rt2800_disable_radio(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_disable_radio);
int rt2800_efuse_detect(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_efuse_detect);
static void rt2800_efuse_read(struct rt2x00_dev *rt2x00dev, unsigned int i)
void rt2800_read_eeprom_efuse(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_read_eeprom_efuse);
int rt2800_validate_eeprom(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_validate_eeprom);
int rt2800_init_eeprom(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_init_eeprom);
static const struct rf_channel rf_vals[] = ;
static const struct rf_channel rf_vals_3x[] = ;
int rt2800_probe_hw_mode(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2800_probe_hw_mode);
void rt2800_get_tkip_seq(struct ieee80211_hw *hw, u8 hw_key_idx, u32 *iv32,
u16 *iv16)
EXPORT_SYMBOL_GPL(rt2800_get_tkip_seq);
int rt2800_set_rts_threshold(struct ieee80211_hw *hw, u32 value)
EXPORT_SYMBOL_GPL(rt2800_set_rts_threshold);
int rt2800_conf_tx(struct ieee80211_hw *hw, u16 queue_idx,
const struct ieee80211_tx_queue_params *params)
EXPORT_SYMBOL_GPL(rt2800_conf_tx);
u64 rt2800_get_tsf(struct ieee80211_hw *hw)
EXPORT_SYMBOL_GPL(rt2800_get_tsf);
int rt2800_ampdu_action(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta, u16 tid, u16 *ssn,
u8 buf_size)
EXPORT_SYMBOL_GPL(rt2800_ampdu_action);
int rt2800_get_survey(struct ieee80211_hw *hw, int idx,
struct survey_info *survey)
EXPORT_SYMBOL_GPL(rt2800_get_survey);
MODULE_AUTHOR(DRV_PROJECT ", Bartlomiej Zolnierkiewicz");
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION("Ralink RT2800 library");
MODULE_LICENSE("GPL");
