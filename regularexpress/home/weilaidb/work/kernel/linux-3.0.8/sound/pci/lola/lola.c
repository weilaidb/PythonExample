static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Digigram Lola driver.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Digigram Lola driver.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Digigram Lola driver.");
static int granularity[SNDRV_CARDS] = ;
static int sample_rate_min[SNDRV_CARDS] = ;
module_param_array(granularity, int, NULL, 0444);
MODULE_PARM_DESC(granularity, "Granularity value");
module_param_array(sample_rate_min, int, NULL, 0444);
MODULE_PARM_DESC(sample_rate_min, "Minimal sample rate");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
MODULE_DESCRIPTION("Digigram Lola driver");
MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
static int debug;
module_param(debug, int, 0644);
#define verbose_debug(fmt, args...)			\
do  while (0)
#define verbose_debug(fmt, args...)
static int corb_send_verb(struct lola *chip, unsigned int nid,
unsigned int verb, unsigned int data,
unsigned int extdata)
static void lola_queue_unsol_event(struct lola *chip, unsigned int res,
unsigned int res_ex)
static void lola_update_rirb(struct lola *chip)
static int rirb_get_response(struct lola *chip, unsigned int *val,
unsigned int *extval)
int lola_codec_write(struct lola *chip, unsigned int nid, unsigned int verb,
unsigned int data, unsigned int extdata)
int lola_codec_read(struct lola *chip, unsigned int nid, unsigned int verb,
unsigned int data, unsigned int extdata,
unsigned int *val, unsigned int *extval)
int lola_codec_flush(struct lola *chip)
static irqreturn_t lola_interrupt(int irq, void *dev_id)
static int reset_controller(struct lola *chip)
static void lola_irq_enable(struct lola *chip)
static void lola_irq_disable(struct lola *chip)
static int setup_corb_rirb(struct lola *chip)
static void stop_corb_rirb(struct lola *chip)
static void lola_reset_setups(struct lola *chip)
static int __devinit lola_parse_tree(struct lola *chip)
static void lola_stop_hw(struct lola *chip)
static void lola_free(struct lola *chip)
static int lola_dev_free(struct snd_device *device)
static int __devinit lola_create(struct snd_card *card, struct pci_dev *pci,
int dev, struct lola **rchip)
static int __devinit lola_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit lola_remove(struct pci_dev *pci)
static DEFINE_PCI_DEVICE_TABLE(lola_ids) = ;
MODULE_DEVICE_TABLE(pci, lola_ids);
static struct pci_driver driver = ;
static int __init alsa_card_lola_init(void)
static void __exit alsa_card_lola_exit(void)
module_init(alsa_card_lola_init)
module_exit(alsa_card_lola_exit)
