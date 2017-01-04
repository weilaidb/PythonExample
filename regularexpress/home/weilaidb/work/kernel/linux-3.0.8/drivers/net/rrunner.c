#define DEBUG 1
#define RX_DMA_SKBUFF 1
#define PKT_COPY_THRESHOLD 512
#define rr_if_busy(dev)     netif_queue_stopped(dev)
#define rr_if_running(dev)  netif_running(dev)
#define RUN_AT(x) (jiffies + (x))
MODULE_AUTHOR("Jes Sorensen <jes@wildopensource.com>");
MODULE_DESCRIPTION("Essential RoadRunner HIPPI driver");
MODULE_LICENSE("GPL");
static char version[] __devinitdata = "rrunner.c: v0.50 11/11/2002  Jes Sorensen (jes@wildopensource.com)\n";
static const struct net_device_ops rr_netdev_ops = ;
static int __devinit rr_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit rr_remove_one (struct pci_dev *pdev)
static void rr_issue_cmd(struct rr_private *rrpriv, struct cmd *cmd)
static int rr_reset(struct net_device *dev)
static unsigned int rr_read_eeprom(struct rr_private *rrpriv,
unsigned long offset,
unsigned char *buf,
unsigned long length)
static u32 rr_read_eeprom_word(struct rr_private *rrpriv,
size_t offset)
static unsigned int write_eeprom(struct rr_private *rrpriv,
unsigned long offset,
unsigned char *buf,
unsigned long length)
static int __devinit rr_init(struct net_device *dev)
static int rr_init1(struct net_device *dev)
static u32 rr_handle_event(struct net_device *dev, u32 prodidx, u32 eidx)
static void rx_int(struct net_device *dev, u32 rxlimit, u32 index)
static irqreturn_t rr_interrupt(int irq, void *dev_id)
static inline void rr_raz_tx(struct rr_private *rrpriv,
struct net_device *dev)
static inline void rr_raz_rx(struct rr_private *rrpriv,
struct net_device *dev)
static void rr_timer(unsigned long data)
static int rr_open(struct net_device *dev)
static void rr_dump(struct net_device *dev)
static int rr_close(struct net_device *dev)
static netdev_tx_t rr_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int rr_load_firmware(struct net_device *dev)
static int rr_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static DEFINE_PCI_DEVICE_TABLE(rr_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, rr_pci_tbl);
static struct pci_driver rr_driver = ;
static int __init rr_init_module(void)
static void __exit rr_cleanup_module(void)
module_init(rr_init_module);
module_exit(rr_cleanup_module);
