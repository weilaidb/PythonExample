MODULE_AUTHOR("[Intersil] R.Bastings and W.Termorshuizen, The prism54.org Development Team <prism54-devel@prism54.org>");
MODULE_DESCRIPTION("The Prism54 802.11 Wireless LAN adapter");
MODULE_LICENSE("GPL");
static int	init_pcitm = 0;
module_param(init_pcitm, int, 0);
,
,
,
,
};
MODULE_DEVICE_TABLE(pci, prism54_id_tbl);
static int prism54_probe(struct pci_dev *, const struct pci_device_id *);
static void prism54_remove(struct pci_dev *);
static int prism54_suspend(struct pci_dev *, pm_message_t state);
static int prism54_resume(struct pci_dev *);
static struct pci_driver prism54_driver = ;
static int
prism54_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static volatile int __in_cleanup_module = 0;
static void
prism54_remove(struct pci_dev *pdev)
static int
prism54_suspend(struct pci_dev *pdev, pm_message_t state)
static int
prism54_resume(struct pci_dev *pdev)
static int __init
prism54_module_init(void)
static void __exit
prism54_module_exit(void)
module_init(prism54_module_init);
module_exit(prism54_module_exit);
