#define PRISM2_PCI
static char *dev_info = "hostap_pci";
MODULE_AUTHOR("Jouni Malinen");
MODULE_DESCRIPTION("Support for Intersil Prism2.5-based 802.11 wireless LAN "
"PCI cards.");
MODULE_SUPPORTED_DEVICE("Intersil Prism2.5-based WLAN PCI cards");
MODULE_LICENSE("GPL");
struct hostap_pci_priv ;
static DEFINE_PCI_DEVICE_TABLE(prism2_pci_id_table) = ;
static inline void hfa384x_outb_debug(struct net_device *dev, int a, u8 v)
static inline u8 hfa384x_inb_debug(struct net_device *dev, int a)
static inline void hfa384x_outw_debug(struct net_device *dev, int a, u16 v)
static inline u16 hfa384x_inw_debug(struct net_device *dev, int a)
#define HFA384X_OUTB(v,a) hfa384x_outb_debug(dev, (a), (v))
#define HFA384X_INB(a) hfa384x_inb_debug(dev, (a))
#define HFA384X_OUTW(v,a) hfa384x_outw_debug(dev, (a), (v))
#define HFA384X_INW(a) hfa384x_inw_debug(dev, (a))
#define HFA384X_OUTW_DATA(v,a) hfa384x_outw_debug(dev, (a), le16_to_cpu((v)))
#define HFA384X_INW_DATA(a) cpu_to_le16(hfa384x_inw_debug(dev, (a)))
static inline void hfa384x_outb(struct net_device *dev, int a, u8 v)
static inline u8 hfa384x_inb(struct net_device *dev, int a)
static inline void hfa384x_outw(struct net_device *dev, int a, u16 v)
static inline u16 hfa384x_inw(struct net_device *dev, int a)
#define HFA384X_OUTB(v,a) hfa384x_outb(dev, (a), (v))
#define HFA384X_INB(a) hfa384x_inb(dev, (a))
#define HFA384X_OUTW(v,a) hfa384x_outw(dev, (a), (v))
#define HFA384X_INW(a) hfa384x_inw(dev, (a))
#define HFA384X_OUTW_DATA(v,a) hfa384x_outw(dev, (a), le16_to_cpu((v)))
#define HFA384X_INW_DATA(a) cpu_to_le16(hfa384x_inw(dev, (a)))
static int hfa384x_from_bap(struct net_device *dev, u16 bap, void *buf,
int len)
static int hfa384x_to_bap(struct net_device *dev, u16 bap, void *buf, int len)
static void prism2_pci_cor_sreset(local_info_t *local)
static void prism2_pci_genesis_reset(local_info_t *local, int hcr)
static struct prism2_helper_functions prism2_pci_funcs =
;
static int prism2_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void prism2_pci_remove(struct pci_dev *pdev)
static int prism2_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int prism2_pci_resume(struct pci_dev *pdev)
MODULE_DEVICE_TABLE(pci, prism2_pci_id_table);
static struct pci_driver prism2_pci_driver = ;
static int __init init_prism2_pci(void)
static void __exit exit_prism2_pci(void)
module_init(init_prism2_pci);
module_exit(exit_prism2_pci);
