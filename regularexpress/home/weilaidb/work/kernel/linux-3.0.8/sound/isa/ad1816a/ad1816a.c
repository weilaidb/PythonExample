#define PFX "ad1816a: "
MODULE_AUTHOR("Massimo Piccioni <dafastidio@libero.it>");
MODULE_DESCRIPTION("AD1816A, AD1815");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_ISAPNP;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long mpu_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long fm_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma1[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma2[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int clockfreq[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for ad1816a based soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for ad1816a based soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable ad1816a based soundcard.");
module_param_array(clockfreq, int, NULL, 0444);
MODULE_PARM_DESC(clockfreq, "Clock frequency for ad1816a driver (default = 0).");
struct snd_card_ad1816a ;
static struct pnp_card_device_id snd_ad1816a_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_ad1816a_pnpids);
#define	DRIVER_NAME	"snd-card-ad1816a"
static int __devinit snd_card_ad1816a_pnp(int dev, struct snd_card_ad1816a *acard,
struct pnp_card_link *card,
const struct pnp_card_device_id *id)
static int __devinit snd_card_ad1816a_probe(int dev, struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static unsigned int __devinitdata ad1816a_devices;
static int __devinit snd_ad1816a_pnp_detect(struct pnp_card_link *card,
const struct pnp_card_device_id *id)
static void __devexit snd_ad1816a_pnp_remove(struct pnp_card_link * pcard)
static struct pnp_card_driver ad1816a_pnpc_driver = ;
static int __init alsa_card_ad1816a_init(void)
static void __exit alsa_card_ad1816a_exit(void)
module_init(alsa_card_ad1816a_init)
module_exit(alsa_card_ad1816a_exit)
