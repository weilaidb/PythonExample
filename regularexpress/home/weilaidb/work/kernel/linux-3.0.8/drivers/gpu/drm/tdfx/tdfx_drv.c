static struct pci_device_id pciidlist[] = ;
static struct drm_driver driver = ;
static struct pci_driver tdfx_pci_driver = ;
static int __init tdfx_init(void)
static void __exit tdfx_exit(void)
module_init(tdfx_init);
module_exit(tdfx_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL and additional rights");
