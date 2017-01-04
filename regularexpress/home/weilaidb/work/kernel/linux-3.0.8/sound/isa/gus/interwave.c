#define SNDRV_LEGACY_FIND_FREE_IRQ
#define SNDRV_LEGACY_FIND_FREE_DMA
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("AMD InterWave");
MODULE_SUPPORTED_DEVICE("");
MODULE_DESCRIPTION("AMD InterWave STB with TEA6330T");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_ISAPNP;
static int isapnp[SNDRV_CARDS] = ;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long port_tc[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma1[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma2[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int joystick_dac[SNDRV_CARDS] = ;
static int midi[SNDRV_CARDS];
static int pcm_channels[SNDRV_CARDS] = ;
static int effect[SNDRV_CARDS];
#define PFX "interwave-stb: "
#define INTERWAVE_DRIVER	"snd_interwave_stb"
#define INTERWAVE_PNP_DRIVER	"interwave-stb"
#define PFX "interwave: "
#define INTERWAVE_DRIVER	"snd_interwave"
#define INTERWAVE_PNP_DRIVER	"interwave"
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for InterWave soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for InterWave soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable InterWave soundcard.");
module_param_array(isapnp, bool, NULL, 0444);
MODULE_PARM_DESC(isapnp, "ISA PnP detection for specified soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for InterWave driver.");
module_param_array(port_tc, long, NULL, 0444);
MODULE_PARM_DESC(port_tc, "Tone control (TEA6330T - i2c bus) port # for InterWave driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for InterWave driver.");
module_param_array(dma1, int, NULL, 0444);
MODULE_PARM_DESC(dma1, "DMA1 # for InterWave driver.");
module_param_array(dma2, int, NULL, 0444);
MODULE_PARM_DESC(dma2, "DMA2 # for InterWave driver.");
module_param_array(joystick_dac, int, NULL, 0444);
MODULE_PARM_DESC(joystick_dac, "Joystick DAC level 0.59V-4.52V or 0.389V-2.98V for InterWave driver.");
module_param_array(midi, int, NULL, 0444);
MODULE_PARM_DESC(midi, "MIDI UART enable for InterWave driver.");
module_param_array(pcm_channels, int, NULL, 0444);
MODULE_PARM_DESC(pcm_channels, "Reserved PCM channels for InterWave driver.");
module_param_array(effect, int, NULL, 0444);
MODULE_PARM_DESC(effect, "Effects enable for InterWave driver.");
struct snd_interwave ;
static int isa_registered;
static int pnp_registered;
static struct pnp_card_device_id snd_interwave_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_interwave_pnpids);
static void snd_interwave_i2c_setlines(struct snd_i2c_bus *bus, int ctrl, int data)
static int snd_interwave_i2c_getclockline(struct snd_i2c_bus *bus)
static int snd_interwave_i2c_getdataline(struct snd_i2c_bus *bus, int ack)
static struct snd_i2c_bit_ops snd_interwave_i2c_bit_ops = ;
static int __devinit snd_interwave_detect_stb(struct snd_interwave *iwcard,
struct snd_gus_card * gus, int dev,
struct snd_i2c_bus **rbus)
static int __devinit snd_interwave_detect(struct snd_interwave *iwcard,
struct snd_gus_card * gus,
int dev
, struct snd_i2c_bus **rbus
)
static irqreturn_t snd_interwave_interrupt(int irq, void *dev_id)
static void __devinit snd_interwave_reset(struct snd_gus_card * gus)
static void __devinit snd_interwave_bank_sizes(struct snd_gus_card * gus, int *sizes)
struct rom_hdr ;
static void __devinit snd_interwave_detect_memory(struct snd_gus_card * gus)
static void __devinit snd_interwave_init(int dev, struct snd_gus_card * gus)
static struct snd_kcontrol_new snd_interwave_controls[] = ;
static int __devinit snd_interwave_mixer(struct snd_wss *chip)
static int __devinit snd_interwave_pnp(int dev, struct snd_interwave *iwcard,
struct pnp_card_link *card,
const struct pnp_card_device_id *id)
static void snd_interwave_free(struct snd_card *card)
static int snd_interwave_card_new(int dev, struct snd_card **cardp)
static int __devinit snd_interwave_probe(struct snd_card *card, int dev)
static int __devinit snd_interwave_isa_probe1(int dev, struct device *devptr)
static int __devinit snd_interwave_isa_match(struct device *pdev,
unsigned int dev)
static int __devinit snd_interwave_isa_probe(struct device *pdev,
unsigned int dev)
static int __devexit snd_interwave_isa_remove(struct device *devptr, unsigned int dev)
static struct isa_driver snd_interwave_driver = ;
static int __devinit snd_interwave_pnp_detect(struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static void __devexit snd_interwave_pnp_remove(struct pnp_card_link * pcard)
static struct pnp_card_driver interwave_pnpc_driver = ;
static int __init alsa_card_interwave_init(void)
static void __exit alsa_card_interwave_exit(void)
module_init(alsa_card_interwave_init)
module_exit(alsa_card_interwave_exit)
