#define PFX "azt2320: "
MODULE_AUTHOR("Massimo Piccioni <dafastidio@libero.it>");
MODULE_DESCRIPTION("Aztech Systems AZT2320");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_ISAPNP;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long wss_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long mpu_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long fm_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma1[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma2[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for azt2320 based soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for azt2320 based soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable azt2320 based soundcard.");
struct snd_card_azt2320 ;
static struct pnp_card_device_id snd_azt2320_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_azt2320_pnpids);
#define	DRIVER_NAME	"snd-card-azt2320"
static int __devinit snd_card_azt2320_pnp(int dev, struct snd_card_azt2320 *acard,
struct pnp_card_link *card,
const struct pnp_card_device_id *id)
static int __devinit snd_card_azt2320_command(unsigned long port, unsigned char val)
static int __devinit snd_card_azt2320_enable_wss(unsigned long port)
static int __devinit snd_card_azt2320_probe(int dev,
struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static unsigned int __devinitdata azt2320_devices;
static int __devinit snd_azt2320_pnp_detect(struct pnp_card_link *card,
const struct pnp_card_device_id *id)
static void __devexit snd_azt2320_pnp_remove(struct pnp_card_link * pcard)
static int snd_azt2320_pnp_suspend(struct pnp_card_link *pcard, pm_message_t state)
static int snd_azt2320_pnp_resume(struct pnp_card_link *pcard)
static struct pnp_card_driver azt2320_pnpc_driver = ;
static int __init alsa_card_azt2320_init(void)
static void __exit alsa_card_azt2320_exit(void)
module_init(alsa_card_azt2320_init)
module_exit(alsa_card_azt2320_exit)
