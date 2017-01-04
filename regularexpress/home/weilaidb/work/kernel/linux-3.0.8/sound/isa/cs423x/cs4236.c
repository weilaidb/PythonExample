MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Cirrus Logic CS4232-9");
MODULE_SUPPORTED_DEVICE(","
"");
MODULE_ALIAS("snd_cs4232");
#define IDENT "CS4232+"
#define DEV_NAME "cs4232+"
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_ISAPNP;
static int isapnp[SNDRV_CARDS] = ;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long cport[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long mpu_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long fm_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long sb_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma1[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma2[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " IDENT " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " IDENT " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " IDENT " soundcard.");
module_param_array(isapnp, bool, NULL, 0444);
MODULE_PARM_DESC(isapnp, "ISA PnP detection for specified soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for " IDENT " driver.");
module_param_array(cport, long, NULL, 0444);
MODULE_PARM_DESC(cport, "Control port # for " IDENT " driver.");
module_param_array(mpu_port, long, NULL, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 port # for " IDENT " driver.");
module_param_array(fm_port, long, NULL, 0444);
MODULE_PARM_DESC(fm_port, "FM port # for " IDENT " driver.");
module_param_array(sb_port, long, NULL, 0444);
MODULE_PARM_DESC(sb_port, "SB port # for " IDENT " driver (optional).");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for " IDENT " driver.");
module_param_array(mpu_irq, int, NULL, 0444);
MODULE_PARM_DESC(mpu_irq, "MPU-401 IRQ # for " IDENT " driver.");
module_param_array(dma1, int, NULL, 0444);
MODULE_PARM_DESC(dma1, "DMA1 # for " IDENT " driver.");
module_param_array(dma2, int, NULL, 0444);
MODULE_PARM_DESC(dma2, "DMA2 # for " IDENT " driver.");
static int isa_registered;
static int pnpc_registered;
static int pnp_registered;
struct snd_card_cs4236 ;
static const struct pnp_device_id snd_cs423x_pnpbiosids[] = ;
MODULE_DEVICE_TABLE(pnp, snd_cs423x_pnpbiosids);
#define CS423X_ISAPNP_DRIVER	"cs4232_isapnp"
static struct pnp_card_device_id snd_cs423x_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_cs423x_pnpids);
static int __devinit snd_cs423x_pnp_init_wss(int dev, struct pnp_dev *pdev)
static int __devinit snd_cs423x_pnp_init_ctrl(int dev, struct pnp_dev *pdev)
static int __devinit snd_cs423x_pnp_init_mpu(int dev, struct pnp_dev *pdev)
static int __devinit snd_card_cs423x_pnp(int dev, struct snd_card_cs4236 *acard,
struct pnp_dev *pdev,
struct pnp_dev *cdev)
static int __devinit snd_card_cs423x_pnpc(int dev, struct snd_card_cs4236 *acard,
struct pnp_card_link *card,
const struct pnp_card_device_id *id)
#define is_isapnp_selected(dev)		isapnp[dev]
#define is_isapnp_selected(dev)		0
static void snd_card_cs4236_free(struct snd_card *card)
static int snd_cs423x_card_new(int dev, struct snd_card **cardp)
static int __devinit snd_cs423x_probe(struct snd_card *card, int dev)
static int __devinit snd_cs423x_isa_match(struct device *pdev,
unsigned int dev)
static int __devinit snd_cs423x_isa_probe(struct device *pdev,
unsigned int dev)
static int __devexit snd_cs423x_isa_remove(struct device *pdev,
unsigned int dev)
static int snd_cs423x_suspend(struct snd_card *card)
static int snd_cs423x_resume(struct snd_card *card)
static int snd_cs423x_isa_suspend(struct device *dev, unsigned int n,
pm_message_t state)
static int snd_cs423x_isa_resume(struct device *dev, unsigned int n)
static struct isa_driver cs423x_isa_driver = ;
static int __devinit snd_cs423x_pnpbios_detect(struct pnp_dev *pdev,
const struct pnp_device_id *id)
static void __devexit snd_cs423x_pnp_remove(struct pnp_dev *pdev)
static int snd_cs423x_pnp_suspend(struct pnp_dev *pdev, pm_message_t state)
static int snd_cs423x_pnp_resume(struct pnp_dev *pdev)
static struct pnp_driver cs423x_pnp_driver = ;
static int __devinit snd_cs423x_pnpc_detect(struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static void __devexit snd_cs423x_pnpc_remove(struct pnp_card_link * pcard)
static int snd_cs423x_pnpc_suspend(struct pnp_card_link *pcard, pm_message_t state)
static int snd_cs423x_pnpc_resume(struct pnp_card_link *pcard)
static struct pnp_card_driver cs423x_pnpc_driver = ;
static int __init alsa_card_cs423x_init(void)
static void __exit alsa_card_cs423x_exit(void)
module_init(alsa_card_cs423x_init)
module_exit(alsa_card_cs423x_exit)
