#define SNDRV_LEGACY_FIND_FREE_IRQ
#define SNDRV_LEGACY_FIND_FREE_DMA
MODULE_AUTHOR("Massimo Piccioni <dafastidio@libero.it>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("OPTi93X");
MODULE_SUPPORTED_DEVICE("");
MODULE_DESCRIPTION("OPTi92X - CS4231");
MODULE_SUPPORTED_DEVICE("");
MODULE_DESCRIPTION("OPTi92X - AD1848");
MODULE_SUPPORTED_DEVICE("");
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
static int isapnp = 1;
static long port = SNDRV_DEFAULT_PORT1;
static long mpu_port = SNDRV_DEFAULT_PORT1;
static long fm_port = SNDRV_DEFAULT_PORT1;
static int irq = SNDRV_DEFAULT_IRQ1;
static int mpu_irq = SNDRV_DEFAULT_IRQ1;
static int dma1 = SNDRV_DEFAULT_DMA1;
#if defined(CS4231) || defined(OPTi93X)
static int dma2 = SNDRV_DEFAULT_DMA1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for opti9xx based soundcard.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for opti9xx based soundcard.");
module_param(isapnp, bool, 0444);
MODULE_PARM_DESC(isapnp, "Enable ISA PnP detection for specified soundcard.");
module_param(port, long, 0444);
MODULE_PARM_DESC(port, "WSS port # for opti9xx driver.");
module_param(mpu_port, long, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 port # for opti9xx driver.");
module_param(fm_port, long, 0444);
MODULE_PARM_DESC(fm_port, "FM port # for opti9xx driver.");
module_param(irq, int, 0444);
MODULE_PARM_DESC(irq, "WSS irq # for opti9xx driver.");
module_param(mpu_irq, int, 0444);
MODULE_PARM_DESC(mpu_irq, "MPU-401 irq # for opti9xx driver.");
module_param(dma1, int, 0444);
MODULE_PARM_DESC(dma1, "1st dma # for opti9xx driver.");
#if defined(CS4231) || defined(OPTi93X)
module_param(dma2, int, 0444);
MODULE_PARM_DESC(dma2, "2nd dma # for opti9xx driver.");
#define OPTi9XX_HW_82C928	1
#define OPTi9XX_HW_82C929	2
#define OPTi9XX_HW_82C924	3
#define OPTi9XX_HW_82C925	4
#define OPTi9XX_HW_82C930	5
#define OPTi9XX_HW_82C931	6
#define OPTi9XX_HW_82C933	7
#define OPTi9XX_HW_LAST		OPTi9XX_HW_82C933
#define OPTi9XX_MC_REG(n)	n
#define OPTi93X_STATUS			0x02
#define OPTi93X_PORT(chip, r)		((chip)->port + OPTi93X_##r)
#define OPTi93X_IRQ_PLAYBACK		0x04
#define OPTi93X_IRQ_CAPTURE		0x08
struct snd_opti9xx ;
static int snd_opti9xx_pnp_is_probed;
static struct pnp_card_device_id snd_opti9xx_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_opti9xx_pnpids);
#define DEV_NAME "opti93x"
#define DEV_NAME "opti92x"
static char * snd_opti9xx_names[] = ;
static long __devinit snd_legacy_find_free_ioport(long *port_table, long size)
static int __devinit snd_opti9xx_init(struct snd_opti9xx *chip,
unsigned short hardware)
static unsigned char snd_opti9xx_read(struct snd_opti9xx *chip,
unsigned char reg)
static void snd_opti9xx_write(struct snd_opti9xx *chip, unsigned char reg,
unsigned char value)
#define snd_opti9xx_write_mask(chip, reg, value, mask)	\
snd_opti9xx_write(chip, reg,			\
(snd_opti9xx_read(chip, reg) & ~(mask)) | ((value) & (mask)))
static int __devinit snd_opti9xx_configure(struct snd_opti9xx *chip,
long port,
int irq, int dma1, int dma2,
long mpu_port, int mpu_irq)
static const DECLARE_TLV_DB_SCALE(db_scale_5bit_3db_step, -9300, 300, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_5bit, -4650, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_4bit_12db_max, -3300, 300, 0);
static struct snd_kcontrol_new snd_opti93x_controls[] = ;
static int __devinit snd_opti93x_mixer(struct snd_wss *chip)
static irqreturn_t snd_opti93x_interrupt(int irq, void *dev_id)
static int __devinit snd_opti9xx_read_check(struct snd_opti9xx *chip)
static int __devinit snd_card_opti9xx_detect(struct snd_card *card,
struct snd_opti9xx *chip)
{
int i, err;
for (i = OPTi9XX_HW_82C928; i < OPTi9XX_HW_82C930; i++)
static int __devinit snd_card_opti9xx_pnp(struct snd_opti9xx *chip,
struct pnp_card_link *card,
const struct pnp_card_device_id *pid)
static void snd_card_opti9xx_free(struct snd_card *card)
static int __devinit snd_opti9xx_probe(struct snd_card *card)
static int snd_opti9xx_card_new(struct snd_card **cardp)
static int __devinit snd_opti9xx_isa_match(struct device *devptr,
unsigned int dev)
static int __devinit snd_opti9xx_isa_probe(struct device *devptr,
unsigned int dev)
static int __devexit snd_opti9xx_isa_remove(struct device *devptr,
unsigned int dev)
static struct isa_driver snd_opti9xx_driver = ;
static int __devinit snd_opti9xx_pnp_probe(struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static void __devexit snd_opti9xx_pnp_remove(struct pnp_card_link * pcard)
static struct pnp_card_driver opti9xx_pnpc_driver = ;
#define CHIP_NAME	"82C93x"
#define CHIP_NAME	"82C92x"
static int __init alsa_card_opti9xx_init(void)
static void __exit alsa_card_opti9xx_exit(void)
module_init(alsa_card_opti9xx_init)
module_exit(alsa_card_opti9xx_exit)
