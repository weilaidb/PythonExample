static DEFINE_PCI_DEVICE_TABLE(ath5k_pci_id_table) = ;
MODULE_DEVICE_TABLE(pci, ath5k_pci_id_table);
static void ath5k_pci_read_cachesize(struct ath_common *common, int *csz)
static bool
ath5k_pci_eeprom_read(struct ath_common *common, u32 offset, u16 *data)
int ath5k_hw_read_srev(struct ath5k_hw *ah)
static int ath5k_pci_eeprom_read_mac(struct ath5k_hw *ah, u8 *mac)
static const struct ath_bus_ops ath_pci_bus_ops = ;
static int __devinit
ath5k_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit
ath5k_pci_remove(struct pci_dev *pdev)
static int ath5k_pci_suspend(struct device *dev)
static int ath5k_pci_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(ath5k_pm_ops, ath5k_pci_suspend, ath5k_pci_resume);
#define ATH5K_PM_OPS	(&ath5k_pm_ops)
#define ATH5K_PM_OPS	NULL
static struct pci_driver ath5k_pci_driver = ;
static int __init
init_ath5k_pci(void)
static void __exit
exit_ath5k_pci(void)
module_init(init_ath5k_pci);
module_exit(exit_ath5k_pci);
