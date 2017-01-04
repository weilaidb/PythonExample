static int modparam_nohwcrypt = 0;
module_param_named(nohwcrypt, modparam_nohwcrypt, bool, S_IRUGO);
MODULE_PARM_DESC(nohwcrypt, "Disable hardware encryption.");
static void rt2800pci_mcu_status(struct rt2x00_dev *rt2x00dev, const u8 token)
#if defined(CONFIG_RALINK_RT288X) || defined(CONFIG_RALINK_RT305X)
static void rt2800pci_read_eeprom_soc(struct rt2x00_dev *rt2x00dev)
static inline void rt2800pci_read_eeprom_soc(struct rt2x00_dev *rt2x00dev)
static void rt2800pci_eepromregister_read(struct eeprom_93cx6 *eeprom)
static void rt2800pci_eepromregister_write(struct eeprom_93cx6 *eeprom)
static void rt2800pci_read_eeprom_pci(struct rt2x00_dev *rt2x00dev)
static int rt2800pci_efuse_detect(struct rt2x00_dev *rt2x00dev)
static inline void rt2800pci_read_eeprom_efuse(struct rt2x00_dev *rt2x00dev)
static inline void rt2800pci_read_eeprom_pci(struct rt2x00_dev *rt2x00dev)
static inline int rt2800pci_efuse_detect(struct rt2x00_dev *rt2x00dev)
static inline void rt2800pci_read_eeprom_efuse(struct rt2x00_dev *rt2x00dev)
static void rt2800pci_start_queue(struct data_queue *queue)
static void rt2800pci_kick_queue(struct data_queue *queue)
static void rt2800pci_stop_queue(struct data_queue *queue)
static char *rt2800pci_get_firmware_name(struct rt2x00_dev *rt2x00dev)
static int rt2800pci_write_firmware(struct rt2x00_dev *rt2x00dev,
const u8 *data, const size_t len)
static bool rt2800pci_get_entry_state(struct queue_entry *entry)
static void rt2800pci_clear_entry(struct queue_entry *entry)
static int rt2800pci_init_queues(struct rt2x00_dev *rt2x00dev)
static void rt2800pci_toggle_irq(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static int rt2800pci_init_registers(struct rt2x00_dev *rt2x00dev)
static int rt2800pci_enable_radio(struct rt2x00_dev *rt2x00dev)
static void rt2800pci_disable_radio(struct rt2x00_dev *rt2x00dev)
static int rt2800pci_set_state(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static int rt2800pci_set_device_state(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static __le32 *rt2800pci_get_txwi(struct queue_entry *entry)
static void rt2800pci_write_tx_desc(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt2800pci_fill_rxdone(struct queue_entry *entry,
struct rxdone_entry_desc *rxdesc)
static void rt2800pci_wakeup(struct rt2x00_dev *rt2x00dev)
static bool rt2800pci_txdone(struct rt2x00_dev *rt2x00dev)
static inline void rt2800pci_enable_interrupt(struct rt2x00_dev *rt2x00dev,
struct rt2x00_field32 irq_field)
static void rt2800pci_txstatus_tasklet(unsigned long data)
static void rt2800pci_pretbtt_tasklet(unsigned long data)
static void rt2800pci_tbtt_tasklet(unsigned long data)
static void rt2800pci_rxdone_tasklet(unsigned long data)
static void rt2800pci_autowake_tasklet(unsigned long data)
static void rt2800pci_txstatus_interrupt(struct rt2x00_dev *rt2x00dev)
static irqreturn_t rt2800pci_interrupt(int irq, void *dev_instance)
static int rt2800pci_validate_eeprom(struct rt2x00_dev *rt2x00dev)
static int rt2800pci_probe_hw(struct rt2x00_dev *rt2x00dev)
static const struct ieee80211_ops rt2800pci_mac80211_ops = ;
static const struct rt2800_ops rt2800pci_rt2800_ops = ;
static const struct rt2x00lib_ops rt2800pci_rt2x00_ops = ;
static const struct data_queue_desc rt2800pci_queue_rx = ;
static const struct data_queue_desc rt2800pci_queue_tx = ;
static const struct data_queue_desc rt2800pci_queue_bcn = ;
static const struct rt2x00_ops rt2800pci_ops = ;
static DEFINE_PCI_DEVICE_TABLE(rt2800pci_device_table) = ;
MODULE_AUTHOR(DRV_PROJECT);
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION("Ralink RT2800 PCI & PCMCIA Wireless LAN driver.");
MODULE_SUPPORTED_DEVICE("Ralink RT2860 PCI & PCMCIA chipset based cards");
MODULE_FIRMWARE(FIRMWARE_RT2860);
MODULE_DEVICE_TABLE(pci, rt2800pci_device_table);
MODULE_LICENSE("GPL");
#if defined(CONFIG_RALINK_RT288X) || defined(CONFIG_RALINK_RT305X)
static int rt2800soc_probe(struct platform_device *pdev)
static struct platform_driver rt2800soc_driver = ;
static int rt2800pci_probe(struct pci_dev *pci_dev,
const struct pci_device_id *id)
static struct pci_driver rt2800pci_driver = ;
static int __init rt2800pci_init(void)
static void __exit rt2800pci_exit(void)
module_init(rt2800pci_init);
module_exit(rt2800pci_exit);
