MODULE_AUTHOR("Creative Technology Ltd");
MODULE_DESCRIPTION("X-Fi driver version 1.03");
MODULE_LICENSE("GPL v2");
MODULE_SUPPORTED_DEVICE("{");
static unsigned int reference_rate = 48000;
static unsigned int multiple = 2;
MODULE_PARM_DESC(reference_rate, "Reference rate (default=48000)");
module_param(reference_rate, uint, S_IRUGO);
MODULE_PARM_DESC(multiple, "Rate multiplier (default=2)");
module_param(multiple, uint, S_IRUGO);
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static unsigned int subsystem[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Creative X-Fi driver");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Creative X-Fi driver");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Creative X-Fi driver");
module_param_array(subsystem, int, NULL, 0444);
MODULE_PARM_DESC(subsystem, "Override subsystem ID for Creative X-Fi driver");
static DEFINE_PCI_DEVICE_TABLE(ct_pci_dev_ids) = ;
MODULE_DEVICE_TABLE(pci, ct_pci_dev_ids);
static int __devinit
ct_card_probe(struct pci_dev *pci, const struct pci_device_id *pci_id)
static void __devexit ct_card_remove(struct pci_dev *pci)
static int ct_card_suspend(struct pci_dev *pci, pm_message_t state)
static int ct_card_resume(struct pci_dev *pci)
static struct pci_driver ct_driver = ;
static int __init ct_card_init(void)
static void __exit ct_card_exit(void)
module_init(ct_card_init)
module_exit(ct_card_exit)
