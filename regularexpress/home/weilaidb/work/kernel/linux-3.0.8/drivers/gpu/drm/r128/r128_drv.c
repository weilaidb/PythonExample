static struct pci_device_id pciidlist[] = ;
static struct drm_driver driver = ;
int r128_driver_load(struct drm_device *dev, unsigned long flags)
static struct pci_driver r128_pci_driver = ;
static int __init r128_init(void)
static void __exit r128_exit(void)
module_init(r128_init);
module_exit(r128_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL and additional rights");
