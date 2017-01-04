MODULE_AUTHOR("Ash Willis");
MODULE_DESCRIPTION("CS5530 Audio");
MODULE_LICENSE("GPL");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
struct snd_cs5530 ;
static DEFINE_PCI_DEVICE_TABLE(snd_cs5530_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_cs5530_ids);
static int snd_cs5530_free(struct snd_cs5530 *chip)
static int snd_cs5530_dev_free(struct snd_device *device)
static void __devexit snd_cs5530_remove(struct pci_dev *pci)
static u8 __devinit snd_cs5530_mixer_read(unsigned long io, u8 reg)
static int __devinit snd_cs5530_create(struct snd_card *card,
struct pci_dev *pci,
struct snd_cs5530 **rchip)
static int __devinit snd_cs5530_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static struct pci_driver driver = ;
static int __init alsa_card_cs5530_init(void)
static void __exit alsa_card_cs5530_exit(void)
module_init(alsa_card_cs5530_init)
module_exit(alsa_card_cs5530_exit)
