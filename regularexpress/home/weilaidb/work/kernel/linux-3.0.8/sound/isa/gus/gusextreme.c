#define SNDRV_LEGACY_AUTO_PROBE
#define SNDRV_LEGACY_FIND_FREE_IRQ
#define SNDRV_LEGACY_FIND_FREE_DMA
#define CRD_NAME "Gravis UltraSound Extreme"
#define DEV_NAME "gusextreme"
MODULE_DESCRIPTION(CRD_NAME);
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long gf1_port[SNDRV_CARDS] = ;
static long mpu_port[SNDRV_CARDS] = ;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int gf1_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma8[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma1[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int joystick_dac[SNDRV_CARDS] = ;
static int channels[SNDRV_CARDS] = ;
static int pcm_channels[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " CRD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " CRD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " CRD_NAME " soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for " CRD_NAME " driver.");
module_param_array(gf1_port, long, NULL, 0444);
MODULE_PARM_DESC(gf1_port, "GF1 port # for " CRD_NAME " driver (optional).");
module_param_array(mpu_port, long, NULL, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 port # for " CRD_NAME " driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for " CRD_NAME " driver.");
module_param_array(mpu_irq, int, NULL, 0444);
MODULE_PARM_DESC(mpu_irq, "MPU-401 IRQ # for " CRD_NAME " driver.");
module_param_array(gf1_irq, int, NULL, 0444);
MODULE_PARM_DESC(gf1_irq, "GF1 IRQ # for " CRD_NAME " driver.");
module_param_array(dma8, int, NULL, 0444);
MODULE_PARM_DESC(dma8, "8-bit DMA # for " CRD_NAME " driver.");
module_param_array(dma1, int, NULL, 0444);
MODULE_PARM_DESC(dma1, "GF1 DMA # for " CRD_NAME " driver.");
module_param_array(joystick_dac, int, NULL, 0444);
MODULE_PARM_DESC(joystick_dac, "Joystick DAC level 0.59V-4.52V or 0.389V-2.98V for " CRD_NAME " driver.");
module_param_array(channels, int, NULL, 0444);
MODULE_PARM_DESC(channels, "GF1 channels for " CRD_NAME " driver.");
module_param_array(pcm_channels, int, NULL, 0444);
MODULE_PARM_DESC(pcm_channels, "Reserved PCM channels for " CRD_NAME " driver.");
static int __devinit snd_gusextreme_match(struct device *dev, unsigned int n)
static int __devinit snd_gusextreme_es1688_create(struct snd_card *card,
struct snd_es1688 *chip, struct device *dev, unsigned int n)
static int __devinit snd_gusextreme_gus_card_create(struct snd_card *card,
struct device *dev, unsigned int n, struct snd_gus_card **rgus)
static int __devinit snd_gusextreme_detect(struct snd_gus_card *gus,
struct snd_es1688 *es1688)
static int __devinit snd_gusextreme_mixer(struct snd_card *card)
static int __devinit snd_gusextreme_probe(struct device *dev, unsigned int n)
static int __devexit snd_gusextreme_remove(struct device *dev, unsigned int n)
static struct isa_driver snd_gusextreme_driver = ;
static int __init alsa_card_gusextreme_init(void)
static void __exit alsa_card_gusextreme_exit(void)
module_init(alsa_card_gusextreme_init);
module_exit(alsa_card_gusextreme_exit);
