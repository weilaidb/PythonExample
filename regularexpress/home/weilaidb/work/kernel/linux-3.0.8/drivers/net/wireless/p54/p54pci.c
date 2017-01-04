MODULE_AUTHOR("Michael Wu <flamingice@sourmilk.net>");
MODULE_DESCRIPTION("Prism54 PCI wireless driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("prism54pci");
MODULE_FIRMWARE("isl3886pci");
static DEFINE_PCI_DEVICE_TABLE(p54p_table) = ;
MODULE_DEVICE_TABLE(pci, p54p_table);
static int p54p_upload_firmware(struct ieee80211_hw *dev)
static void p54p_refill_rx_ring(struct ieee80211_hw *dev,
int ring_index, struct p54p_desc *ring, u32 ring_limit,
struct sk_buff **rx_buf, u32 index)
static void p54p_check_rx_ring(struct ieee80211_hw *dev, u32 *index,
int ring_index, struct p54p_desc *ring, u32 ring_limit,
struct sk_buff **rx_buf)
static void p54p_check_tx_ring(struct ieee80211_hw *dev, u32 *index,
int ring_index, struct p54p_desc *ring, u32 ring_limit,
struct sk_buff **tx_buf)
static void p54p_tasklet(unsigned long dev_id)
static irqreturn_t p54p_interrupt(int irq, void *dev_id)
static void p54p_tx(struct ieee80211_hw *dev, struct sk_buff *skb)
static void p54p_stop(struct ieee80211_hw *dev)
static int p54p_open(struct ieee80211_hw *dev)
static int __devinit p54p_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit p54p_remove(struct pci_dev *pdev)
static int p54p_suspend(struct pci_dev *pdev, pm_message_t state)
static int p54p_resume(struct pci_dev *pdev)
static struct pci_driver p54p_driver = ;
static int __init p54p_init(void)
static void __exit p54p_exit(void)
module_init(p54p_init);
module_exit(p54p_exit);
