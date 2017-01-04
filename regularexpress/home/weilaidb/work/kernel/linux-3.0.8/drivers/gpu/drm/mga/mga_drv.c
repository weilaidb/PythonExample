static int mga_driver_device_is_agp(struct drm_device *dev);
static struct pci_device_id pciidlist[] = ;
static struct drm_driver driver = ;
static struct pci_driver mga_pci_driver = ;
static int __init mga_init(void)
static void __exit mga_exit(void)
module_init(mga_init);
module_exit(mga_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL and additional rights");
static int mga_driver_device_is_agp(struct drm_device *dev)
