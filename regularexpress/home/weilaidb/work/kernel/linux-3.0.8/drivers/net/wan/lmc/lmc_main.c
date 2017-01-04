#define DRIVER_MAJOR_VERSION     1
#define DRIVER_MINOR_VERSION    34
#define DRIVER_SUB_VERSION       0
#define DRIVER_VERSION  ((DRIVER_MAJOR_VERSION << 8) + DRIVER_MINOR_VERSION)
static int LMC_PKT_BUF_SZ = 1542;
static DEFINE_PCI_DEVICE_TABLE(lmc_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, lmc_pci_tbl);
MODULE_LICENSE("GPL v2");
static netdev_tx_t lmc_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static int lmc_rx (struct net_device *dev);
static int lmc_open(struct net_device *dev);
static int lmc_close(struct net_device *dev);
static struct net_device_stats *lmc_get_stats(struct net_device *dev);
static irqreturn_t lmc_interrupt(int irq, void *dev_instance);
static void lmc_initcsrs(lmc_softc_t * const sc, lmc_csrptr_t csr_base, size_t csr_size);
static void lmc_softreset(lmc_softc_t * const);
static void lmc_running_reset(struct net_device *dev);
static int lmc_ifdown(struct net_device * const);
static void lmc_watchdog(unsigned long data);
static void lmc_reset(lmc_softc_t * const sc);
static void lmc_dec_reset(lmc_softc_t * const sc);
static void lmc_driver_timeout(struct net_device *dev);
int lmc_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void lmc_watchdog (unsigned long data)
static int lmc_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity)
static const struct net_device_ops lmc_ops = ;
static int __devinit lmc_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit lmc_remove_one(struct pci_dev *pdev)
static int lmc_open(struct net_device *dev)
static void lmc_running_reset (struct net_device *dev)
static int lmc_close(struct net_device *dev)
static int lmc_ifdown (struct net_device *dev)
static irqreturn_t lmc_interrupt (int irq, void *dev_instance)
static netdev_tx_t lmc_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int lmc_rx(struct net_device *dev)
static struct net_device_stats *lmc_get_stats(struct net_device *dev)
static struct pci_driver lmc_driver = ;
static int __init init_lmc(void)
static void __exit exit_lmc(void)
module_init(init_lmc);
module_exit(exit_lmc);
unsigned lmc_mii_readreg (lmc_softc_t * const sc, unsigned devaddr, unsigned regno)
void lmc_mii_writereg (lmc_softc_t * const sc, unsigned devaddr, unsigned regno, unsigned data)
static void lmc_softreset (lmc_softc_t * const sc)
void lmc_gpio_mkinput(lmc_softc_t * const sc, u32 bits)
void lmc_gpio_mkoutput(lmc_softc_t * const sc, u32 bits)
void lmc_led_on(lmc_softc_t * const sc, u32 led)
void lmc_led_off(lmc_softc_t * const sc, u32 led)
static void lmc_reset(lmc_softc_t * const sc)
static void lmc_dec_reset(lmc_softc_t * const sc)
static void lmc_initcsrs(lmc_softc_t * const sc, lmc_csrptr_t csr_base,
size_t csr_size)
static void lmc_driver_timeout(struct net_device *dev)
