#define SNDRV_LEGACY_FIND_FREE_IRQ
#define SNDRV_LEGACY_FIND_FREE_DMA
#define PFX "sbawe: "
#define PFX "sb16: "
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Sound Blaster 16");
MODULE_SUPPORTED_DEVICE("");
MODULE_DESCRIPTION("Sound Blaster AWE");
MODULE_SUPPORTED_DEVICE("");
#if defined(SNDRV_SBAWE) && (defined(CONFIG_SND_SEQUENCER) || (defined(MODULE) && defined(CONFIG_SND_SEQUENCER_MODULE)))
#define SNDRV_SBAWE_EMU8000
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_ISAPNP;
static int isapnp[SNDRV_CARDS] = ;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long mpu_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long fm_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long awe_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma8[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma16[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int mic_agc[SNDRV_CARDS] = ;
static int csp[SNDRV_CARDS];
static int seq_ports[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for SoundBlaster 16 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for SoundBlaster 16 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable SoundBlaster 16 soundcard.");
module_param_array(isapnp, bool, NULL, 0444);
MODULE_PARM_DESC(isapnp, "PnP detection for specified soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for SB16 driver.");
module_param_array(mpu_port, long, NULL, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 port # for SB16 driver.");
module_param_array(fm_port, long, NULL, 0444);
MODULE_PARM_DESC(fm_port, "FM port # for SB16 PnP driver.");
module_param_array(awe_port, long, NULL, 0444);
MODULE_PARM_DESC(awe_port, "AWE port # for SB16 PnP driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for SB16 driver.");
module_param_array(dma8, int, NULL, 0444);
MODULE_PARM_DESC(dma8, "8-bit DMA # for SB16 driver.");
module_param_array(dma16, int, NULL, 0444);
MODULE_PARM_DESC(dma16, "16-bit DMA # for SB16 driver.");
module_param_array(mic_agc, int, NULL, 0444);
MODULE_PARM_DESC(mic_agc, "Mic Auto-Gain-Control switch.");
module_param_array(csp, int, NULL, 0444);
MODULE_PARM_DESC(csp, "ASP/CSP chip support.");
module_param_array(seq_ports, int, NULL, 0444);
MODULE_PARM_DESC(seq_ports, "Number of sequencer ports for WaveTable synth.");
static int isa_registered;
static int pnp_registered;
struct snd_card_sb16 ;
static struct pnp_card_device_id snd_sb16_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_sb16_pnpids);
#define DRIVER_NAME	"snd-card-sbawe"
#define DRIVER_NAME	"snd-card-sb16"
static int __devinit snd_card_sb16_pnp(int dev, struct snd_card_sb16 *acard,
struct pnp_card_link *card,
const struct pnp_card_device_id *id)
static void snd_sb16_free(struct snd_card *card)
#define is_isapnp_selected(dev)		isapnp[dev]
#define is_isapnp_selected(dev)		0
static int snd_sb16_card_new(int dev, struct snd_card **cardp)
static int __devinit snd_sb16_probe(struct snd_card *card, int dev)
static int snd_sb16_suspend(struct snd_card *card, pm_message_t state)
static int snd_sb16_resume(struct snd_card *card)
static int __devinit snd_sb16_isa_probe1(int dev, struct device *pdev)
static int __devinit snd_sb16_isa_match(struct device *pdev, unsigned int dev)
static int __devinit snd_sb16_isa_probe(struct device *pdev, unsigned int dev)
static int __devexit snd_sb16_isa_remove(struct device *pdev, unsigned int dev)
static int snd_sb16_isa_suspend(struct device *dev, unsigned int n,
pm_message_t state)
static int snd_sb16_isa_resume(struct device *dev, unsigned int n)
#define DEV_NAME "sbawe"
#define DEV_NAME "sb16"
static struct isa_driver snd_sb16_isa_driver = ;
static int __devinit snd_sb16_pnp_detect(struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static void __devexit snd_sb16_pnp_remove(struct pnp_card_link * pcard)
static int snd_sb16_pnp_suspend(struct pnp_card_link *pcard, pm_message_t state)
static int snd_sb16_pnp_resume(struct pnp_card_link *pcard)
static struct pnp_card_driver sb16_pnpc_driver = ;
static int __init alsa_card_sb16_init(void)
static void __exit alsa_card_sb16_exit(void)
module_init(alsa_card_sb16_init)
module_exit(alsa_card_sb16_exit)
