static int modparam_nohwcrypt;
module_param_named(nohwcrypt, modparam_nohwcrypt, bool, S_IRUGO);
MODULE_PARM_DESC(nohwcrypt, "Disable hardware encryption.");
static inline void rt2500usb_register_read(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u16 *value)
static inline void rt2500usb_register_read_lock(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u16 *value)
static inline void rt2500usb_register_multiread(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
void *value, const u16 length)
static inline void rt2500usb_register_write(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u16 value)
static inline void rt2500usb_register_write_lock(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u16 value)
static inline void rt2500usb_register_multiwrite(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
void *value, const u16 length)
static int rt2500usb_regbusy_read(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
struct rt2x00_field16 field,
u16 *reg)
#define WAIT_FOR_BBP(__dev, __reg) \
rt2500usb_regbusy_read((__dev), PHY_CSR8, PHY_CSR8_BUSY, (__reg))
#define WAIT_FOR_RF(__dev, __reg) \
rt2500usb_regbusy_read((__dev), PHY_CSR10, PHY_CSR10_RF_BUSY, (__reg))
static void rt2500usb_bbp_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, const u8 value)
static void rt2500usb_bbp_read(struct rt2x00_dev *rt2x00dev,
const unsigned int word, u8 *value)
static void rt2500usb_rf_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, const u32 value)
static void _rt2500usb_register_read(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u32 *value)
static void _rt2500usb_register_write(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
u32 value)
static const struct rt2x00debug rt2500usb_rt2x00debug = ;
static int rt2500usb_rfkill_poll(struct rt2x00_dev *rt2x00dev)
static void rt2500usb_brightness_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static int rt2500usb_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
static void rt2500usb_init_led(struct rt2x00_dev *rt2x00dev,
struct rt2x00_led *led,
enum led_type type)
static int rt2500usb_config_key(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_crypto *crypto,
struct ieee80211_key_conf *key)
static void rt2500usb_config_filter(struct rt2x00_dev *rt2x00dev,
const unsigned int filter_flags)
static void rt2500usb_config_intf(struct rt2x00_dev *rt2x00dev,
struct rt2x00_intf *intf,
struct rt2x00intf_conf *conf,
const unsigned int flags)
static void rt2500usb_config_erp(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_erp *erp,
u32 changed)
static void rt2500usb_config_ant(struct rt2x00_dev *rt2x00dev,
struct antenna_setup *ant)
static void rt2500usb_config_channel(struct rt2x00_dev *rt2x00dev,
struct rf_channel *rf, const int txpower)
static void rt2500usb_config_txpower(struct rt2x00_dev *rt2x00dev,
const int txpower)
static void rt2500usb_config_ps(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
static void rt2500usb_config(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf,
const unsigned int flags)
static void rt2500usb_link_stats(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual)
static void rt2500usb_reset_tuner(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual)
static void rt2500usb_start_queue(struct data_queue *queue)
static void rt2500usb_stop_queue(struct data_queue *queue)
static int rt2500usb_init_registers(struct rt2x00_dev *rt2x00dev)
static int rt2500usb_wait_bbp_ready(struct rt2x00_dev *rt2x00dev)
static int rt2500usb_init_bbp(struct rt2x00_dev *rt2x00dev)
static int rt2500usb_enable_radio(struct rt2x00_dev *rt2x00dev)
static void rt2500usb_disable_radio(struct rt2x00_dev *rt2x00dev)
static int rt2500usb_set_state(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static int rt2500usb_set_device_state(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static void rt2500usb_write_tx_desc(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt2500usb_beacondone(struct urb *urb);
static void rt2500usb_write_beacon(struct queue_entry *entry,
struct txentry_desc *txdesc)
static int rt2500usb_get_tx_data_len(struct queue_entry *entry)
static void rt2500usb_fill_rxdone(struct queue_entry *entry,
struct rxdone_entry_desc *rxdesc)
static void rt2500usb_beacondone(struct urb *urb)
static int rt2500usb_validate_eeprom(struct rt2x00_dev *rt2x00dev)
static int rt2500usb_init_eeprom(struct rt2x00_dev *rt2x00dev)
static const struct rf_channel rf_vals_bg_2522[] = ;
static const struct rf_channel rf_vals_bg_2523[] = ;
static const struct rf_channel rf_vals_bg_2524[] = ;
static const struct rf_channel rf_vals_bg_2525[] = ;
static const struct rf_channel rf_vals_bg_2525e[] = ;
static const struct rf_channel rf_vals_5222[] = ;
static int rt2500usb_probe_hw_mode(struct rt2x00_dev *rt2x00dev)
static int rt2500usb_probe_hw(struct rt2x00_dev *rt2x00dev)
static const struct ieee80211_ops rt2500usb_mac80211_ops = ;
static const struct rt2x00lib_ops rt2500usb_rt2x00_ops = ;
static const struct data_queue_desc rt2500usb_queue_rx = ;
static const struct data_queue_desc rt2500usb_queue_tx = ;
static const struct data_queue_desc rt2500usb_queue_bcn = ;
static const struct data_queue_desc rt2500usb_queue_atim = ;
static const struct rt2x00_ops rt2500usb_ops = ;
static struct usb_device_id rt2500usb_device_table[] = ;
MODULE_AUTHOR(DRV_PROJECT);
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION("Ralink RT2500 USB Wireless LAN driver.");
MODULE_SUPPORTED_DEVICE("Ralink RT2570 USB chipset based cards");
MODULE_DEVICE_TABLE(usb, rt2500usb_device_table);
MODULE_LICENSE("GPL");
static int rt2500usb_probe(struct usb_interface *usb_intf,
const struct usb_device_id *id)
static struct usb_driver rt2500usb_driver = ;
static int __init rt2500usb_init(void)
static void __exit rt2500usb_exit(void)
module_init(rt2500usb_init);
module_exit(rt2500usb_exit);
