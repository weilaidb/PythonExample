#define DRIVER_NAME "cs5535audio"
static char *ac97_quirk;
module_param(ac97_quirk, charp, 0444);
MODULE_PARM_DESC(ac97_quirk, "AC'97 board specific workarounds.");
static struct ac97_quirk ac97_quirks[] __devinitdata = ;
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " DRIVER_NAME);
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " DRIVER_NAME);
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " DRIVER_NAME);
static DEFINE_PCI_DEVICE_TABLE(snd_cs5535audio_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_cs5535audio_ids);
static void wait_till_cmd_acked(struct cs5535audio *cs5535au, unsigned long timeout)
static unsigned short snd_cs5535audio_codec_read(struct cs5535audio *cs5535au,
unsigned short reg)
static void snd_cs5535audio_codec_write(struct cs5535audio *cs5535au,
unsigned short reg, unsigned short val)
static void snd_cs5535audio_ac97_codec_write(struct snd_ac97 *ac97,
unsigned short reg, unsigned short val)
static unsigned short snd_cs5535audio_ac97_codec_read(struct snd_ac97 *ac97,
unsigned short reg)
static int __devinit snd_cs5535audio_mixer(struct cs5535audio *cs5535au)
static void process_bm0_irq(struct cs5535audio *cs5535au)
static void process_bm1_irq(struct cs5535audio *cs5535au)
static irqreturn_t snd_cs5535audio_interrupt(int irq, void *dev_id)
static int snd_cs5535audio_free(struct cs5535audio *cs5535au)
static int snd_cs5535audio_dev_free(struct snd_device *device)
static int __devinit snd_cs5535audio_create(struct snd_card *card,
struct pci_dev *pci,
struct cs5535audio **rcs5535au)
static int __devinit snd_cs5535audio_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_cs5535audio_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_cs5535audio_init(void)
static void __exit alsa_card_cs5535audio_exit(void)
module_init(alsa_card_cs5535audio_init)
module_exit(alsa_card_cs5535audio_exit)
MODULE_AUTHOR("Jaya Kumar");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("CS5535 Audio");
MODULE_SUPPORTED_DEVICE("CS5535 Audio");
