#define SNDRV_LEGACY_FIND_FREE_IRQ
#define SNDRV_LEGACY_FIND_FREE_DMA
#define CRD_NAME "Generic ESS ES1688/ES688 AudioDrive"
#define DEV_NAME "es1688"
MODULE_DESCRIPTION(CRD_NAME);
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
MODULE_ALIAS("snd_es968");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int isapnp[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_ISAPNP;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long fm_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long mpu_port[SNDRV_CARDS] = ;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma8[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " CRD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " CRD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
module_param_array(isapnp, bool, NULL, 0444);
MODULE_PARM_DESC(isapnp, "PnP detection for specified soundcard.");
MODULE_PARM_DESC(enable, "Enable " CRD_NAME " soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for " CRD_NAME " driver.");
module_param_array(mpu_port, long, NULL, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 port # for " CRD_NAME " driver.");
module_param_array(irq, int, NULL, 0444);
module_param_array(fm_port, long, NULL, 0444);
MODULE_PARM_DESC(fm_port, "FM port # for ES1688 driver.");
MODULE_PARM_DESC(irq, "IRQ # for " CRD_NAME " driver.");
module_param_array(mpu_irq, int, NULL, 0444);
MODULE_PARM_DESC(mpu_irq, "MPU-401 IRQ # for " CRD_NAME " driver.");
module_param_array(dma8, int, NULL, 0444);
MODULE_PARM_DESC(dma8, "8-bit DMA # for " CRD_NAME " driver.");
#define is_isapnp_selected(dev)		isapnp[dev]
#define is_isapnp_selected(dev)		0
static int __devinit snd_es1688_match(struct device *dev, unsigned int n)
static int __devinit snd_es1688_legacy_create(struct snd_card *card,
struct device *dev, unsigned int n)
static int __devinit snd_es1688_probe(struct snd_card *card, unsigned int n)
static int __devinit snd_es1688_isa_probe(struct device *dev, unsigned int n)
static int __devexit snd_es1688_isa_remove(struct device *dev, unsigned int n)
static struct isa_driver snd_es1688_driver = ;
static int snd_es968_pnp_is_probed;
static int __devinit snd_card_es968_pnp(struct snd_card *card, unsigned int n,
struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static int __devinit snd_es968_pnp_detect(struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static void __devexit snd_es968_pnp_remove(struct pnp_card_link * pcard)
static int snd_es968_pnp_suspend(struct pnp_card_link *pcard,
pm_message_t state)
static int snd_es968_pnp_resume(struct pnp_card_link *pcard)
static struct pnp_card_device_id snd_es968_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_es968_pnpids);
static struct pnp_card_driver es968_pnpc_driver = ;
static int __init alsa_card_es1688_init(void)
static void __exit alsa_card_es1688_exit(void)
module_init(alsa_card_es1688_init);
module_exit(alsa_card_es1688_exit);
