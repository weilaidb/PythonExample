MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Sound Blaster 1.0/2.0/Pro");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma8[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Sound Blaster soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Sound Blaster soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Sound Blaster soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for SB8 driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for SB8 driver.");
module_param_array(dma8, int, NULL, 0444);
MODULE_PARM_DESC(dma8, "8-bit DMA # for SB8 driver.");
struct snd_sb8 ;
static irqreturn_t snd_sb8_interrupt(int irq, void *dev_id)
static void snd_sb8_free(struct snd_card *card)
static int __devinit snd_sb8_match(struct device *pdev, unsigned int dev)
static int __devinit snd_sb8_probe(struct device *pdev, unsigned int dev)
static int __devexit snd_sb8_remove(struct device *pdev, unsigned int dev)
static int snd_sb8_suspend(struct device *dev, unsigned int n,
pm_message_t state)
static int snd_sb8_resume(struct device *dev, unsigned int n)
#define DEV_NAME "sb8"
static struct isa_driver snd_sb8_driver = ;
static int __init alsa_card_sb8_init(void)
static void __exit alsa_card_sb8_exit(void)
module_init(alsa_card_sb8_init)
module_exit(alsa_card_sb8_exit)
