MODULE_AUTHOR("Paul Barton-Davis <pbd@op.net>");
MODULE_DESCRIPTION("Turtle Beach Wavefront");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static int isapnp[SNDRV_CARDS] = ;
static long cs4232_pcm_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int cs4232_pcm_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static long cs4232_mpu_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int cs4232_mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static long ics2115_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int ics2115_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static long fm_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int dma1[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma2[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int use_cs4232_midi[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for WaveFront soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for WaveFront soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable WaveFront soundcard.");
module_param_array(isapnp, bool, NULL, 0444);
MODULE_PARM_DESC(isapnp, "ISA PnP detection for WaveFront soundcards.");
module_param_array(cs4232_pcm_port, long, NULL, 0444);
MODULE_PARM_DESC(cs4232_pcm_port, "Port # for CS4232 PCM interface.");
module_param_array(cs4232_pcm_irq, int, NULL, 0444);
MODULE_PARM_DESC(cs4232_pcm_irq, "IRQ # for CS4232 PCM interface.");
module_param_array(dma1, int, NULL, 0444);
MODULE_PARM_DESC(dma1, "DMA1 # for CS4232 PCM interface.");
module_param_array(dma2, int, NULL, 0444);
MODULE_PARM_DESC(dma2, "DMA2 # for CS4232 PCM interface.");
module_param_array(cs4232_mpu_port, long, NULL, 0444);
MODULE_PARM_DESC(cs4232_mpu_port, "port # for CS4232 MPU-401 interface.");
module_param_array(cs4232_mpu_irq, int, NULL, 0444);
MODULE_PARM_DESC(cs4232_mpu_irq, "IRQ # for CS4232 MPU-401 interface.");
module_param_array(ics2115_irq, int, NULL, 0444);
MODULE_PARM_DESC(ics2115_irq, "IRQ # for ICS2115.");
module_param_array(ics2115_port, long, NULL, 0444);
MODULE_PARM_DESC(ics2115_port, "Port # for ICS2115.");
module_param_array(fm_port, long, NULL, 0444);
MODULE_PARM_DESC(fm_port, "FM port #.");
module_param_array(use_cs4232_midi, bool, NULL, 0444);
MODULE_PARM_DESC(use_cs4232_midi, "Use CS4232 MPU-401 interface (inaccessibly located inside your computer)");
static int isa_registered;
static int pnp_registered;
static struct pnp_card_device_id snd_wavefront_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_wavefront_pnpids);
static int __devinit
snd_wavefront_pnp (int dev, snd_wavefront_card_t *acard, struct pnp_card_link *card,
const struct pnp_card_device_id *id)
static irqreturn_t snd_wavefront_ics2115_interrupt(int irq, void *dev_id)
static struct snd_hwdep * __devinit
snd_wavefront_new_synth (struct snd_card *card,
int hw_dev,
snd_wavefront_card_t *acard)
static struct snd_hwdep * __devinit
snd_wavefront_new_fx (struct snd_card *card,
int hw_dev,
snd_wavefront_card_t *acard,
unsigned long port)
static snd_wavefront_mpu_id internal_id = internal_mpu;
static snd_wavefront_mpu_id external_id = external_mpu;
static struct snd_rawmidi *__devinit
snd_wavefront_new_midi (struct snd_card *card,
int midi_dev,
snd_wavefront_card_t *acard,
unsigned long port,
snd_wavefront_mpu_id mpu)
static void
snd_wavefront_free(struct snd_card *card)
static int snd_wavefront_card_new(int dev, struct snd_card **cardp)
static int __devinit
snd_wavefront_probe (struct snd_card *card, int dev)
static int __devinit snd_wavefront_isa_match(struct device *pdev,
unsigned int dev)
static int __devinit snd_wavefront_isa_probe(struct device *pdev,
unsigned int dev)
static int __devexit snd_wavefront_isa_remove(struct device *devptr,
unsigned int dev)
#define DEV_NAME "wavefront"
static struct isa_driver snd_wavefront_driver = ;
static int __devinit snd_wavefront_pnp_detect(struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static void __devexit snd_wavefront_pnp_remove(struct pnp_card_link * pcard)
static struct pnp_card_driver wavefront_pnpc_driver = ;
static int __init alsa_card_wavefront_init(void)
static void __exit alsa_card_wavefront_exit(void)
module_init(alsa_card_wavefront_init)
module_exit(alsa_card_wavefront_exit)
