static int of_isp1760_probe(struct platform_device *dev)
static int of_isp1760_remove(struct platform_device *dev)
static const struct of_device_id of_isp1760_match[] = ;
MODULE_DEVICE_TABLE(of, of_isp1760_match);
static struct platform_driver isp1760_of_driver = ;
static int __devinit isp1761_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void isp1761_pci_remove(struct pci_dev *dev)
static void isp1761_pci_shutdown(struct pci_dev *dev)
static const struct pci_device_id isp1760_plx [] = ;
MODULE_DEVICE_TABLE(pci, isp1760_plx);
static struct pci_driver isp1761_pci_driver = ;
static int __devinit isp1760_plat_probe(struct platform_device *pdev)
static int __devexit isp1760_plat_remove(struct platform_device *pdev)
static struct platform_driver isp1760_plat_driver = ;
static int __init isp1760_init(void)
module_init(isp1760_init);
static void __exit isp1760_exit(void)
module_exit(isp1760_exit);
