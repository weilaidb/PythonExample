static struct pci_device_id pciidlist[] = ;
static struct drm_driver driver = ;
static struct pci_driver via_pci_driver = ;
static int __init via_init(void)
static void __exit via_exit(void)
module_init(via_init);
module_exit(via_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL and additional rights");
