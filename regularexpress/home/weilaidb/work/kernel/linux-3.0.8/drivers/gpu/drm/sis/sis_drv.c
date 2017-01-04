static struct pci_device_id pciidlist[] = ;
static int sis_driver_load(struct drm_device *dev, unsigned long chipset)
static int sis_driver_unload(struct drm_device *dev)
static struct drm_driver driver = ;
static struct pci_driver sis_pci_driver = ;
static int __init sis_init(void)
static void __exit sis_exit(void)
module_init(sis_init);
module_exit(sis_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL and additional rights");
