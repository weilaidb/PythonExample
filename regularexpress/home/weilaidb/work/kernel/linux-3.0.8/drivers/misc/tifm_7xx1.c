#define DRIVER_NAME "tifm_7xx1"
#define DRIVER_VERSION "0.8"
#define TIFM_IRQ_ENABLE           0x80000000
#define TIFM_IRQ_SOCKMASK(x)      (x)
#define TIFM_IRQ_CARDMASK(x)      ((x) << 8)
#define TIFM_IRQ_FIFOMASK(x)      ((x) << 16)
#define TIFM_IRQ_SETALL           0xffffffff
static void tifm_7xx1_dummy_eject(struct tifm_adapter *fm,
struct tifm_dev *sock)
static void tifm_7xx1_eject(struct tifm_adapter *fm, struct tifm_dev *sock)
static irqreturn_t tifm_7xx1_isr(int irq, void *dev_id)
static unsigned char tifm_7xx1_toggle_sock_power(char __iomem *sock_addr)
inline static void tifm_7xx1_sock_power_off(char __iomem *sock_addr)
inline static char __iomem *
tifm_7xx1_sock_addr(char __iomem *base_addr, unsigned int sock_num)
static void tifm_7xx1_switch_media(struct work_struct *work)
static int tifm_7xx1_suspend(struct pci_dev *dev, pm_message_t state)
static int tifm_7xx1_resume(struct pci_dev *dev)
#define tifm_7xx1_suspend NULL
#define tifm_7xx1_resume NULL
static int tifm_7xx1_dummy_has_ms_pif(struct tifm_adapter *fm,
struct tifm_dev *sock)
static int tifm_7xx1_has_ms_pif(struct tifm_adapter *fm, struct tifm_dev *sock)
static int tifm_7xx1_probe(struct pci_dev *dev,
const struct pci_device_id *dev_id)
static void tifm_7xx1_remove(struct pci_dev *dev)
static struct pci_device_id tifm_7xx1_pci_tbl [] = ;
static struct pci_driver tifm_7xx1_driver = ;
static int __init tifm_7xx1_init(void)
static void __exit tifm_7xx1_exit(void)
MODULE_AUTHOR("Alex Dubov");
MODULE_DESCRIPTION("TI FlashMedia host driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, tifm_7xx1_pci_tbl);
MODULE_VERSION(DRIVER_VERSION);
module_init(tifm_7xx1_init);
module_exit(tifm_7xx1_exit);
