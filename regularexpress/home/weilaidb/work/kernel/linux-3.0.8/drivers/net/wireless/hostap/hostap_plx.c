#define PRISM2_PLX
static char *dev_info = "hostap_plx";
MODULE_AUTHOR("Jouni Malinen");
MODULE_DESCRIPTION("Support for Intersil Prism2-based 802.11 wireless LAN "
"cards (PLX).");
MODULE_SUPPORTED_DEVICE("Intersil Prism2-based WLAN cards (PLX)");
MODULE_LICENSE("GPL");
static int ignore_cis;
module_param(ignore_cis, int, 0444);
MODULE_PARM_DESC(ignore_cis, "Do not verify manfid information in CIS");
struct hostap_plx_priv ;
#define PLX_MIN_ATTR_LEN 512
#define COR_SRESET       0x80
#define COR_LEVLREQ      0x40
#define COR_ENABLE_FUNC  0x01
#define PLX_PCIIPR       0x3d
#define PLX_INTCSR       0x4c
#define PLX_INTCSR_PCI_INTEN BIT(6)
#define PLX_CNTRL        0x50
#define PLX_CNTRL_SERIAL_EEPROM_PRESENT BIT(28)
#define PLXDEV(vendor,dev,str)
static DEFINE_PCI_DEVICE_TABLE(prism2_plx_id_table) = ;
static struct prism2_plx_manfid  prism2_plx_known_manfids[] = ;
static inline void hfa384x_outb_debug(struct net_device *dev, int a, u8 v)
static inline u8 hfa384x_inb_debug(struct net_device *dev, int a)
static inline void hfa384x_outw_debug(struct net_device *dev, int a, u16 v)
static inline u16 hfa384x_inw_debug(struct net_device *dev, int a)
static inline void hfa384x_outsw_debug(struct net_device *dev, int a,
u8 *buf, int wc)
static inline void hfa384x_insw_debug(struct net_device *dev, int a,
u8 *buf, int wc)
#define HFA384X_OUTB(v,a) hfa384x_outb_debug(dev, (a), (v))
#define HFA384X_INB(a) hfa384x_inb_debug(dev, (a))
#define HFA384X_OUTW(v,a) hfa384x_outw_debug(dev, (a), (v))
#define HFA384X_INW(a) hfa384x_inw_debug(dev, (a))
#define HFA384X_OUTSW(a, buf, wc) hfa384x_outsw_debug(dev, (a), (buf), (wc))
#define HFA384X_INSW(a, buf, wc) hfa384x_insw_debug(dev, (a), (buf), (wc))
#define HFA384X_OUTB(v,a) outb((v), dev->base_addr + (a))
#define HFA384X_INB(a) inb(dev->base_addr + (a))
#define HFA384X_OUTW(v,a) outw((v), dev->base_addr + (a))
#define HFA384X_INW(a) inw(dev->base_addr + (a))
#define HFA384X_INSW(a, buf, wc) insw(dev->base_addr + (a), buf, wc)
#define HFA384X_OUTSW(a, buf, wc) outsw(dev->base_addr + (a), buf, wc)
static int hfa384x_from_bap(struct net_device *dev, u16 bap, void *buf,
int len)
static int hfa384x_to_bap(struct net_device *dev, u16 bap, void *buf, int len)
static void prism2_plx_cor_sreset(local_info_t *local)
static void prism2_plx_genesis_reset(local_info_t *local, int hcr)
static struct prism2_helper_functions prism2_plx_funcs =
;
static int prism2_plx_check_cis(void __iomem *attr_mem, int attr_len,
unsigned int *cor_offset,
unsigned int *cor_index)
static int prism2_plx_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void prism2_plx_remove(struct pci_dev *pdev)
MODULE_DEVICE_TABLE(pci, prism2_plx_id_table);
static struct pci_driver prism2_plx_driver = ;
static int __init init_prism2_plx(void)
static void __exit exit_prism2_plx(void)
module_init(init_prism2_plx);
module_exit(exit_prism2_plx);
