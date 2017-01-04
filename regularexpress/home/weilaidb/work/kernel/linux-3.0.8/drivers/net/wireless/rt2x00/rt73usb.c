static int modparam_nohwcrypt;
module_param_named(nohwcrypt, modparam_nohwcrypt, bool, S_IRUGO);
MODULE_PARM_DESC(nohwcrypt, "Disable hardware encryption.");
#define WAIT_FOR_BBP(__dev, __reg) \
rt2x00usb_regbusy_read((__dev), PHY_CSR3, PHY_CSR3_BUSY, (__reg))
#define WAIT_FOR_RF(__dev, __reg) \
rt2x00usb_regbusy_read((__dev), PHY_CSR4, PHY_CSR4_BUSY, (__reg))
static void rt73usb_bbp_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, const u8 value)
static void rt73usb_bbp_read(struct rt2x00_dev *rt2x00dev,
const unsigned int word, u8 *value)
static void rt73usb_rf_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, const u32 value)
static const struct rt2x00debug rt73usb_rt2x00debug = ;
static int rt73usb_rfkill_poll(struct rt2x00_dev *rt2x00dev)
static void rt73usb_brightness_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static int rt73usb_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
static void rt73usb_init_led(struct rt2x00_dev *rt2x00dev,
struct rt2x00_led *led,
enum led_type type)
static int rt73usb_config_shared_key(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_crypto *crypto,
struct ieee80211_key_conf *key)
static int rt73usb_config_pairwise_key(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_crypto *crypto,
struct ieee80211_key_conf *key)
static void rt73usb_config_filter(struct rt2x00_dev *rt2x00dev,
const unsigned int filter_flags)
static void rt73usb_config_intf(struct rt2x00_dev *rt2x00dev,
struct rt2x00_intf *intf,
struct rt2x00intf_conf *conf,
const unsigned int flags)
static void rt73usb_config_erp(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_erp *erp,
u32 changed)
static void rt73usb_config_antenna_5x(struct rt2x00_dev *rt2x00dev,
struct antenna_setup *ant)
static void rt73usb_config_antenna_2x(struct rt2x00_dev *rt2x00dev,
struct antenna_setup *ant)
struct antenna_sel ;
static const struct antenna_sel antenna_sel_a[] = ;
static const struct antenna_sel antenna_sel_bg[] = ;
static void rt73usb_config_ant(struct rt2x00_dev *rt2x00dev,
struct antenna_setup *ant)
static void rt73usb_config_lna_gain(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
static void rt73usb_config_channel(struct rt2x00_dev *rt2x00dev,
struct rf_channel *rf, const int txpower)
static void rt73usb_config_txpower(struct rt2x00_dev *rt2x00dev,
const int txpower)
static void rt73usb_config_retry_limit(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
static void rt73usb_config_ps(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
static void rt73usb_config(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf,
const unsigned int flags)
static void rt73usb_link_stats(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual)
static inline void rt73usb_set_vgc(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual, u8 vgc_level)
static void rt73usb_reset_tuner(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual)
static void rt73usb_link_tuner(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual, const u32 count)
static void rt73usb_start_queue(struct data_queue *queue)
static void rt73usb_stop_queue(struct data_queue *queue)
static char *rt73usb_get_firmware_name(struct rt2x00_dev *rt2x00dev)
static int rt73usb_check_firmware(struct rt2x00_dev *rt2x00dev,
const u8 *data, const size_t len)
static int rt73usb_load_firmware(struct rt2x00_dev *rt2x00dev,
const u8 *data, const size_t len)
static int rt73usb_init_registers(struct rt2x00_dev *rt2x00dev)
static int rt73usb_wait_bbp_ready(struct rt2x00_dev *rt2x00dev)
static int rt73usb_init_bbp(struct rt2x00_dev *rt2x00dev)
static int rt73usb_enable_radio(struct rt2x00_dev *rt2x00dev)
static void rt73usb_disable_radio(struct rt2x00_dev *rt2x00dev)
static int rt73usb_set_state(struct rt2x00_dev *rt2x00dev, enum dev_state state)
static int rt73usb_set_device_state(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static void rt73usb_write_tx_desc(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt73usb_write_beacon(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt73usb_clear_beacon(struct queue_entry *entry)
static int rt73usb_get_tx_data_len(struct queue_entry *entry)
static int rt73usb_agc_to_rssi(struct rt2x00_dev *rt2x00dev, int rxd_w1)
static void rt73usb_fill_rxdone(struct queue_entry *entry,
struct rxdone_entry_desc *rxdesc)
static int rt73usb_validate_eeprom(struct rt2x00_dev *rt2x00dev)
static int rt73usb_init_eeprom(struct rt2x00_dev *rt2x00dev)
static const struct rf_channel rf_vals_bg_2528[] = ;
static const struct rf_channel rf_vals_5226[] = ;
static const struct rf_channel rf_vals_5225_2527[] = ;
static int rt73usb_probe_hw_mode(struct rt2x00_dev *rt2x00dev)
static int rt73usb_probe_hw(struct rt2x00_dev *rt2x00dev)
static int rt73usb_conf_tx(struct ieee80211_hw *hw, u16 queue_idx,
const struct ieee80211_tx_queue_params *params)
static u64 rt73usb_get_tsf(struct ieee80211_hw *hw)
static const struct ieee80211_ops rt73usb_mac80211_ops = ;
static const struct rt2x00lib_ops rt73usb_rt2x00_ops = ;
static const struct data_queue_desc rt73usb_queue_rx = ;
static const struct data_queue_desc rt73usb_queue_tx = ;
static const struct data_queue_desc rt73usb_queue_bcn = ;
static const struct rt2x00_ops rt73usb_ops = ;
static struct usb_device_id rt73usb_device_table[] = ;
MODULE_AUTHOR(DRV_PROJECT);
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION("Ralink RT73 USB Wireless LAN driver.");
MODULE_SUPPORTED_DEVICE("Ralink RT2571W & RT2671 USB chipset based cards");
MODULE_DEVICE_TABLE(usb, rt73usb_device_table);
MODULE_FIRMWARE(FIRMWARE_RT2571);
MODULE_LICENSE("GPL");
static int rt73usb_probe(struct usb_interface *usb_intf,
const struct usb_device_id *id)
static struct usb_driver rt73usb_driver = ;
static int __init rt73usb_init(void)
static void __exit rt73usb_exit(void)
module_init(rt73usb_init);
module_exit(rt73usb_exit);
