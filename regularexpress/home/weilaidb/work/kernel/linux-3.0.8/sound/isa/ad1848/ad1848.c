#define CRD_NAME "Generic AD1848/AD1847/CS4248"
#define DEV_NAME "ad1848"
MODULE_DESCRIPTION(CRD_NAME);
MODULE_AUTHOR("Tugrul Galatali <galatalt@stuy.edu>, Jaroslav Kysela <perex@perex.cz>");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma1[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int thinkpad[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " CRD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " CRD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " CRD_NAME " soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for " CRD_NAME " driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for " CRD_NAME " driver.");
module_param_array(dma1, int, NULL, 0444);
MODULE_PARM_DESC(dma1, "DMA1 # for " CRD_NAME " driver.");
module_param_array(thinkpad, bool, NULL, 0444);
MODULE_PARM_DESC(thinkpad, "Enable only for the onboard CS4248 of IBM Thinkpad 360/750/755 series.");
static int __devinit snd_ad1848_match(struct device *dev, unsigned int n)
static int __devinit snd_ad1848_probe(struct device *dev, unsigned int n)
static int __devexit snd_ad1848_remove(struct device *dev, unsigned int n)
static int snd_ad1848_suspend(struct device *dev, unsigned int n, pm_message_t state)
static int snd_ad1848_resume(struct device *dev, unsigned int n)
static struct isa_driver snd_ad1848_driver = ;
static int __init alsa_card_ad1848_init(void)
static void __exit alsa_card_ad1848_exit(void)
module_init(alsa_card_ad1848_init);
module_exit(alsa_card_ad1848_exit);
