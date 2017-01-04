MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Cirrus Logic Sound Fusion CS46XX");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int external_amp[SNDRV_CARDS];
static int thinkpad[SNDRV_CARDS];
static int mmap_valid[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the CS46xx soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for the CS46xx soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable CS46xx soundcard.");
module_param_array(external_amp, bool, NULL, 0444);
MODULE_PARM_DESC(external_amp, "Force to enable external amplifer.");
module_param_array(thinkpad, bool, NULL, 0444);
MODULE_PARM_DESC(thinkpad, "Force to enable Thinkpad's CLKRUN control.");
module_param_array(mmap_valid, bool, NULL, 0444);
MODULE_PARM_DESC(mmap_valid, "Support OSS mmap.");
static DEFINE_PCI_DEVICE_TABLE(snd_cs46xx_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_cs46xx_ids);
static int __devinit snd_card_cs46xx_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_card_cs46xx_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_cs46xx_init(void)
static void __exit alsa_card_cs46xx_exit(void)
module_init(alsa_card_cs46xx_init)
module_exit(alsa_card_cs46xx_exit)
