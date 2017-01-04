static int modparam_nohwcrypt;
module_param_named(nohwcrypt, modparam_nohwcrypt, bool, S_IRUGO);
MODULE_PARM_DESC(nohwcrypt, "Disable hardware encryption.");
static void rt2800usb_start_queue(struct data_queue *queue)
static void rt2800usb_stop_queue(struct data_queue *queue)
static bool rt2800usb_txstatus_pending(struct rt2x00_dev *rt2x00dev)
static bool rt2800usb_tx_sta_fifo_read_completed(struct rt2x00_dev *rt2x00dev,
int urb_status, u32 tx_status)
static void rt2800usb_tx_dma_done(struct queue_entry *entry)
static void rt2800usb_tx_sta_fifo_timeout(unsigned long data)
static char *rt2800usb_get_firmware_name(struct rt2x00_dev *rt2x00dev)
static int rt2800usb_write_firmware(struct rt2x00_dev *rt2x00dev,
const u8 *data, const size_t len)
static int rt2800usb_init_registers(struct rt2x00_dev *rt2x00dev)
static int rt2800usb_enable_radio(struct rt2x00_dev *rt2x00dev)
static void rt2800usb_disable_radio(struct rt2x00_dev *rt2x00dev)
static int rt2800usb_set_state(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static int rt2800usb_set_device_state(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static void rt2800usb_watchdog(struct rt2x00_dev *rt2x00dev)
static __le32 *rt2800usb_get_txwi(struct queue_entry *entry)
static void rt2800usb_write_tx_desc(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt2800usb_write_tx_data(struct queue_entry *entry,
struct txentry_desc *txdesc)
static int rt2800usb_get_tx_data_len(struct queue_entry *entry)
static void rt2800usb_work_txdone(struct work_struct *work)
static void rt2800usb_fill_rxdone(struct queue_entry *entry,
struct rxdone_entry_desc *rxdesc)
static int rt2800usb_validate_eeprom(struct rt2x00_dev *rt2x00dev)
static int rt2800usb_probe_hw(struct rt2x00_dev *rt2x00dev)
static const struct ieee80211_ops rt2800usb_mac80211_ops = ;
static const struct rt2800_ops rt2800usb_rt2800_ops = ;
static const struct rt2x00lib_ops rt2800usb_rt2x00_ops = ;
static const struct data_queue_desc rt2800usb_queue_rx = ;
static const struct data_queue_desc rt2800usb_queue_tx = ;
static const struct data_queue_desc rt2800usb_queue_bcn = ;
static const struct rt2x00_ops rt2800usb_ops = ;
static struct usb_device_id rt2800usb_device_table[] = ;
MODULE_AUTHOR(DRV_PROJECT);
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION("Ralink RT2800 USB Wireless LAN driver.");
MODULE_SUPPORTED_DEVICE("Ralink RT2870 USB chipset based cards");
MODULE_DEVICE_TABLE(usb, rt2800usb_device_table);
MODULE_FIRMWARE(FIRMWARE_RT2870);
MODULE_LICENSE("GPL");
static int rt2800usb_probe(struct usb_interface *usb_intf,
const struct usb_device_id *id)
static struct usb_driver rt2800usb_driver = ;
static int __init rt2800usb_init(void)
static void __exit rt2800usb_exit(void)
module_init(rt2800usb_init);
module_exit(rt2800usb_exit);
