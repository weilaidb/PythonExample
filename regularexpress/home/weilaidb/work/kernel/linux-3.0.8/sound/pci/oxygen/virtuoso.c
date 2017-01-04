MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_DESCRIPTION("Asus Virtuoso driver");
MODULE_LICENSE("GPL v2");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "card index");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "enable card");
static DEFINE_PCI_DEVICE_TABLE(xonar_ids) = ;
MODULE_DEVICE_TABLE(pci, xonar_ids);
static int __devinit get_xonar_model(struct oxygen *chip,
const struct pci_device_id *id)
static int __devinit xonar_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static struct pci_driver xonar_driver = ;
static int __init alsa_card_xonar_init(void)
static void __exit alsa_card_xonar_exit(void)
module_init(alsa_card_xonar_init)
module_exit(alsa_card_xonar_exit)
