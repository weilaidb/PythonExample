int ibmasm_debug = 0;
module_param(ibmasm_debug, int , S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ibmasm_debug, " Set debug mode on or off");
static int __devinit ibmasm_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static void __devexit ibmasm_remove_one(struct pci_dev *pdev)
static struct pci_device_id ibmasm_pci_table[] =
;
static struct pci_driver ibmasm_driver = ;
static void __exit ibmasm_exit (void)
static int __init ibmasm_init(void)
module_init(ibmasm_init);
module_exit(ibmasm_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, ibmasm_pci_table);
