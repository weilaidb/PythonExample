#define PFX "als100: "
MODULE_DESCRIPTION("Avance Logic ALS007/ALS1X0");
MODULE_SUPPORTED_DEVICE(""
"");
MODULE_AUTHOR("Massimo Piccioni <dafastidio@libero.it>");
MODULE_LICENSE("GPL");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long mpu_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long fm_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma8[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma16[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Avance Logic based soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Avance Logic based soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Avance Logic based soundcard.");
MODULE_ALIAS("snd-dt019x");
struct snd_card_als100 ;
static struct pnp_card_device_id snd_als100_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_als100_pnpids);
static int __devinit snd_card_als100_pnp(int dev, struct snd_card_als100 *acard,
struct pnp_card_link *card,
const struct pnp_card_device_id *id)
static int __devinit snd_card_als100_probe(int dev,
struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static unsigned int __devinitdata als100_devices;
static int __devinit snd_als100_pnp_detect(struct pnp_card_link *card,
const struct pnp_card_device_id *id)
static void __devexit snd_als100_pnp_remove(struct pnp_card_link * pcard)
static int snd_als100_pnp_suspend(struct pnp_card_link *pcard, pm_message_t state)
static int snd_als100_pnp_resume(struct pnp_card_link *pcard)
static struct pnp_card_driver als100_pnpc_driver = ;
static int __init alsa_card_als100_init(void)
static void __exit alsa_card_als100_exit(void)
module_init(alsa_card_als100_init)
module_exit(alsa_card_als100_exit)
