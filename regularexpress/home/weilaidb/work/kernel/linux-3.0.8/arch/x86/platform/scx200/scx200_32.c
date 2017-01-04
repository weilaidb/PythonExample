#define scx200_cb_probe(base) (inw((base) + SCx200_CBA) == (base))
#define NAME "scx200"
MODULE_AUTHOR("Christer Weinigel <wingel@nano-system.com>");
MODULE_DESCRIPTION("NatSemi SCx200 Driver");
MODULE_LICENSE("GPL");
unsigned scx200_gpio_base = 0;
unsigned long scx200_gpio_shadow[2];
unsigned scx200_cb_base = 0;
static struct pci_device_id scx200_tbl[] = ;
MODULE_DEVICE_TABLE(pci,scx200_tbl);
static int __devinit scx200_probe(struct pci_dev *, const struct pci_device_id *);
static struct pci_driver scx200_pci_driver = ;
static DEFINE_MUTEX(scx200_gpio_config_lock);
static void __devinit scx200_init_shadow(void)
static int __devinit scx200_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
u32 scx200_gpio_configure(unsigned index, u32 mask, u32 bits)
static int __init scx200_init(void)
static void __exit scx200_cleanup(void)
module_init(scx200_init);
module_exit(scx200_cleanup);
EXPORT_SYMBOL(scx200_gpio_base);
EXPORT_SYMBOL(scx200_gpio_shadow);
EXPORT_SYMBOL(scx200_gpio_configure);
EXPORT_SYMBOL(scx200_cb_base);
