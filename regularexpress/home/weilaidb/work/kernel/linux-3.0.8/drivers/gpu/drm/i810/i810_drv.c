static struct pci_device_id pciidlist[] = ;
static struct drm_driver driver = ;
static struct pci_driver i810_pci_driver = ;
static int __init i810_init(void)
static void __exit i810_exit(void)
module_init(i810_init);
module_exit(i810_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL and additional rights");
