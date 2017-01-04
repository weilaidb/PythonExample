static struct pci_device_id pciidlist[] = ;
static struct drm_driver driver = ;
static struct pci_driver savage_pci_driver = ;
static int __init savage_init(void)
static void __exit savage_exit(void)
module_init(savage_init);
module_exit(savage_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL and additional rights");
