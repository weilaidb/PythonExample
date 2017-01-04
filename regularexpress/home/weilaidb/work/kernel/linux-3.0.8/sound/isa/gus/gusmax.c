#define SNDRV_LEGACY_FIND_FREE_IRQ
#define SNDRV_LEGACY_FIND_FREE_DMA
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Gravis UltraSound MAX");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma1[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma2[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int joystick_dac[SNDRV_CARDS] = ;
static int channels[SNDRV_CARDS] = ;
static int pcm_channels[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for GUS MAX soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for GUS MAX soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable GUS MAX soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for GUS MAX driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for GUS MAX driver.");
module_param_array(dma1, int, NULL, 0444);
MODULE_PARM_DESC(dma1, "DMA1 # for GUS MAX driver.");
module_param_array(dma2, int, NULL, 0444);
MODULE_PARM_DESC(dma2, "DMA2 # for GUS MAX driver.");
module_param_array(joystick_dac, int, NULL, 0444);
MODULE_PARM_DESC(joystick_dac, "Joystick DAC level 0.59V-4.52V or 0.389V-2.98V for GUS MAX driver.");
module_param_array(channels, int, NULL, 0444);
MODULE_PARM_DESC(channels, "Used GF1 channels for GUS MAX driver.");
module_param_array(pcm_channels, int, NULL, 0444);
MODULE_PARM_DESC(pcm_channels, "Reserved PCM channels for GUS MAX driver.");
struct snd_gusmax ;
#define PFX	"gusmax: "
static int __devinit snd_gusmax_detect(struct snd_gus_card * gus)
static irqreturn_t snd_gusmax_interrupt(int irq, void *dev_id)
static void __devinit snd_gusmax_init(int dev, struct snd_card *card,
struct snd_gus_card * gus)
static int __devinit snd_gusmax_mixer(struct snd_wss *chip)
static void snd_gusmax_free(struct snd_card *card)
static int __devinit snd_gusmax_match(struct device *pdev, unsigned int dev)
static int __devinit snd_gusmax_probe(struct device *pdev, unsigned int dev)
static int __devexit snd_gusmax_remove(struct device *devptr, unsigned int dev)
#define DEV_NAME "gusmax"
static struct isa_driver snd_gusmax_driver = ;
static int __init alsa_card_gusmax_init(void)
static void __exit alsa_card_gusmax_exit(void)
module_init(alsa_card_gusmax_init)
module_exit(alsa_card_gusmax_exit)
