static int modparam_nohwcrypt = 0;
module_param_named(nohwcrypt, modparam_nohwcrypt, bool, S_IRUGO);
MODULE_PARM_DESC(nohwcrypt, "Disable hardware encryption.");
#define WAIT_FOR_BBP(__dev, __reg) \
rt2x00pci_regbusy_read((__dev), PHY_CSR3, PHY_CSR3_BUSY, (__reg))
#define WAIT_FOR_RF(__dev, __reg) \
rt2x00pci_regbusy_read((__dev), PHY_CSR4, PHY_CSR4_BUSY, (__reg))
#define WAIT_FOR_MCU(__dev, __reg) \
rt2x00pci_regbusy_read((__dev), H2M_MAILBOX_CSR, \
H2M_MAILBOX_CSR_OWNER, (__reg))
static void rt61pci_bbp_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, const u8 value)
static void rt61pci_bbp_read(struct rt2x00_dev *rt2x00dev,
const unsigned int word, u8 *value)
static void rt61pci_rf_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, const u32 value)
static void rt61pci_mcu_request(struct rt2x00_dev *rt2x00dev,
const u8 command, const u8 token,
const u8 arg0, const u8 arg1)
static void rt61pci_eepromregister_read(struct eeprom_93cx6 *eeprom)
static void rt61pci_eepromregister_write(struct eeprom_93cx6 *eeprom)
static const struct rt2x00debug rt61pci_rt2x00debug = ;
static int rt61pci_rfkill_poll(struct rt2x00_dev *rt2x00dev)
static void rt61pci_brightness_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static int rt61pci_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
static void rt61pci_init_led(struct rt2x00_dev *rt2x00dev,
struct rt2x00_led *led,
enum led_type type)
static int rt61pci_config_shared_key(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_crypto *crypto,
struct ieee80211_key_conf *key)
static int rt61pci_config_pairwise_key(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_crypto *crypto,
struct ieee80211_key_conf *key)
static void rt61pci_config_filter(struct rt2x00_dev *rt2x00dev,
const unsigned int filter_flags)
static void rt61pci_config_intf(struct rt2x00_dev *rt2x00dev,
struct rt2x00_intf *intf,
struct rt2x00intf_conf *conf,
const unsigned int flags)
static void rt61pci_config_erp(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_erp *erp,
u32 changed)
static void rt61pci_config_antenna_5x(struct rt2x00_dev *rt2x00dev,
struct antenna_setup *ant)
static void rt61pci_config_antenna_2x(struct rt2x00_dev *rt2x00dev,
struct antenna_setup *ant)
static void rt61pci_config_antenna_2529_rx(struct rt2x00_dev *rt2x00dev,
const int p1, const int p2)
static void rt61pci_config_antenna_2529(struct rt2x00_dev *rt2x00dev,
struct antenna_setup *ant)
struct antenna_sel ;
static const struct antenna_sel antenna_sel_a[] = ;
static const struct antenna_sel antenna_sel_bg[] = ;
static void rt61pci_config_ant(struct rt2x00_dev *rt2x00dev,
struct antenna_setup *ant)
static void rt61pci_config_lna_gain(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
static void rt61pci_config_channel(struct rt2x00_dev *rt2x00dev,
struct rf_channel *rf, const int txpower)
static void rt61pci_config_txpower(struct rt2x00_dev *rt2x00dev,
const int txpower)
static void rt61pci_config_retry_limit(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
static void rt61pci_config_ps(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
static void rt61pci_config(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf,
const unsigned int flags)
static void rt61pci_link_stats(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual)
static inline void rt61pci_set_vgc(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual, u8 vgc_level)
static void rt61pci_reset_tuner(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual)
static void rt61pci_link_tuner(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual, const u32 count)
static void rt61pci_start_queue(struct data_queue *queue)
static void rt61pci_kick_queue(struct data_queue *queue)
static void rt61pci_stop_queue(struct data_queue *queue)
static char *rt61pci_get_firmware_name(struct rt2x00_dev *rt2x00dev)
static int rt61pci_check_firmware(struct rt2x00_dev *rt2x00dev,
const u8 *data, const size_t len)
static int rt61pci_load_firmware(struct rt2x00_dev *rt2x00dev,
const u8 *data, const size_t len)
static bool rt61pci_get_entry_state(struct queue_entry *entry)
static void rt61pci_clear_entry(struct queue_entry *entry)
static int rt61pci_init_queues(struct rt2x00_dev *rt2x00dev)
static int rt61pci_init_registers(struct rt2x00_dev *rt2x00dev)
static int rt61pci_wait_bbp_ready(struct rt2x00_dev *rt2x00dev)
static int rt61pci_init_bbp(struct rt2x00_dev *rt2x00dev)
static void rt61pci_toggle_irq(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static int rt61pci_enable_radio(struct rt2x00_dev *rt2x00dev)
static void rt61pci_disable_radio(struct rt2x00_dev *rt2x00dev)
static int rt61pci_set_state(struct rt2x00_dev *rt2x00dev, enum dev_state state)
static int rt61pci_set_device_state(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static void rt61pci_write_tx_desc(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt61pci_write_beacon(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt61pci_clear_beacon(struct queue_entry *entry)
static int rt61pci_agc_to_rssi(struct rt2x00_dev *rt2x00dev, int rxd_w1)
static void rt61pci_fill_rxdone(struct queue_entry *entry,
struct rxdone_entry_desc *rxdesc)
static void rt61pci_txdone(struct rt2x00_dev *rt2x00dev)
static void rt61pci_wakeup(struct rt2x00_dev *rt2x00dev)
static inline void rt61pci_enable_interrupt(struct rt2x00_dev *rt2x00dev,
struct rt2x00_field32 irq_field)
static void rt61pci_enable_mcu_interrupt(struct rt2x00_dev *rt2x00dev,
struct rt2x00_field32 irq_field)
static void rt61pci_txstatus_tasklet(unsigned long data)
static void rt61pci_tbtt_tasklet(unsigned long data)
static void rt61pci_rxdone_tasklet(unsigned long data)
static void rt61pci_autowake_tasklet(unsigned long data)
static irqreturn_t rt61pci_interrupt(int irq, void *dev_instance)
static int rt61pci_validate_eeprom(struct rt2x00_dev *rt2x00dev)
static int rt61pci_init_eeprom(struct rt2x00_dev *rt2x00dev)
static const struct rf_channel rf_vals_noseq[] = ;
static const struct rf_channel rf_vals_seq[] = ;
static int rt61pci_probe_hw_mode(struct rt2x00_dev *rt2x00dev)
static int rt61pci_probe_hw(struct rt2x00_dev *rt2x00dev)
static int rt61pci_conf_tx(struct ieee80211_hw *hw, u16 queue_idx,
const struct ieee80211_tx_queue_params *params)
static u64 rt61pci_get_tsf(struct ieee80211_hw *hw)
static const struct ieee80211_ops rt61pci_mac80211_ops = ;
static const struct rt2x00lib_ops rt61pci_rt2x00_ops = ;
static const struct data_queue_desc rt61pci_queue_rx = ;
static const struct data_queue_desc rt61pci_queue_tx = ;
static const struct data_queue_desc rt61pci_queue_bcn = ;
static const struct rt2x00_ops rt61pci_ops = ;
static DEFINE_PCI_DEVICE_TABLE(rt61pci_device_table) = ;
MODULE_AUTHOR(DRV_PROJECT);
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION("Ralink RT61 PCI & PCMCIA Wireless LAN driver.");
MODULE_SUPPORTED_DEVICE("Ralink RT2561, RT2561s & RT2661 "
"PCI & PCMCIA chipset based cards");
MODULE_DEVICE_TABLE(pci, rt61pci_device_table);
MODULE_FIRMWARE(FIRMWARE_RT2561);
MODULE_FIRMWARE(FIRMWARE_RT2561s);
MODULE_FIRMWARE(FIRMWARE_RT2661);
MODULE_LICENSE("GPL");
static int rt61pci_probe(struct pci_dev *pci_dev,
const struct pci_device_id *id)
static struct pci_driver rt61pci_driver = ;
static int __init rt61pci_init(void)
static void __exit rt61pci_exit(void)
module_init(rt61pci_init);
module_exit(rt61pci_exit);
