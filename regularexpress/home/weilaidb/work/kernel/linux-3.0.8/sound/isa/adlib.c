#define CRD_NAME "AdLib FM"
#define DEV_NAME "adlib"
MODULE_DESCRIPTION(CRD_NAME);
MODULE_AUTHOR("Rene Herman");
MODULE_LICENSE("GPL");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " CRD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " CRD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " CRD_NAME " soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for " CRD_NAME " driver.");
static int __devinit snd_adlib_match(struct device *dev, unsigned int n)
static void snd_adlib_free(struct snd_card *card)
static int __devinit snd_adlib_probe(struct device *dev, unsigned int n)
static int __devexit snd_adlib_remove(struct device *dev, unsigned int n)
static struct isa_driver snd_adlib_driver = ;
static int __init alsa_card_adlib_init(void)
static void __exit alsa_card_adlib_exit(void)
module_init(alsa_card_adlib_init);
module_exit(alsa_card_adlib_exit);
