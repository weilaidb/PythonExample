static DEFINE_PCI_DEVICE_TABLE(ath_pci_id_table) = ;
static void ath_pci_read_cachesize(struct ath_common *common, int *csz)
static bool ath_pci_eeprom_read(struct ath_common *common, u32 off, u16 *data)
static void ath_pci_bt_coex_prep(struct ath_common *common)
static void ath_pci_extn_synch_enable(struct ath_common *common)
static void ath_pci_aspm_init(struct ath_common *common)
static const struct ath_bus_ops ath_pci_bus_ops = ;
static int ath_pci_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void ath_pci_remove(struct pci_dev *pdev)
static int ath_pci_suspend(struct device *device)
static int ath_pci_resume(struct device *device)
static const struct dev_pm_ops ath9k_pm_ops = ;
#define ATH9K_PM_OPS	(&ath9k_pm_ops)
#define ATH9K_PM_OPS	NULL
MODULE_DEVICE_TABLE(pci, ath_pci_id_table);
static struct pci_driver ath_pci_driver = ;
int ath_pci_init(void)
void ath_pci_exit(void)
