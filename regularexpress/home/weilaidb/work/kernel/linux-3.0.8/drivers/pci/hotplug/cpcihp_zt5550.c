#define DRIVER_VERSION	"0.2"
#define DRIVER_AUTHOR	"Scott Murray <scottm@somanetworks.com>"
#define DRIVER_DESC	"ZT5550 CompactPCI Hot Plug Driver"
#define MY_NAME	"cpcihp_zt5550"
#define dbg(format, arg...)					\
do  while(0)
#define err(format, arg...) printk(KERN_ERR "%s: " format "\n", MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format "\n", MY_NAME , ## arg)
#define warn(format, arg...) printk(KERN_WARNING "%s: " format "\n", MY_NAME , ## arg)
static int debug;
static int poll;
static struct cpci_hp_controller_ops zt5550_hpc_ops;
static struct cpci_hp_controller zt5550_hpc;
static struct pci_dev *bus0_dev;
static struct pci_bus *bus0;
static struct pci_dev *hc_dev;
static void __iomem *hc_registers;
static void __iomem *csr_hc_index;
static void __iomem *csr_hc_data;
static void __iomem *csr_int_status;
static void __iomem *csr_int_mask;
static int zt5550_hc_config(struct pci_dev *pdev)
static int zt5550_hc_cleanup(void)
static int zt5550_hc_query_enum(void)
static int zt5550_hc_check_irq(void *dev_id)
static int zt5550_hc_enable_irq(void)
static int zt5550_hc_disable_irq(void)
static int zt5550_hc_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit zt5550_hc_remove_one(struct pci_dev *pdev)
static struct pci_device_id zt5550_hc_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, zt5550_hc_pci_tbl);
static struct pci_driver zt5550_hc_driver = ;
static int __init zt5550_init(void)
static void __exit
zt5550_exit(void)
module_init(zt5550_init);
module_exit(zt5550_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Debugging mode enabled or not");
module_param(poll, bool, 0644);
MODULE_PARM_DESC(poll, "#ENUM polling mode enabled or not");
