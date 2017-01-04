MODULE_DESCRIPTION(CRD_NAME);
MODULE_AUTHOR("Rene Herman");
MODULE_LICENSE("GPL");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " CRD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " CRD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " CRD_NAME " soundcard.");
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long wss_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long mpu_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long fm_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma1[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma2[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for " CRD_NAME " driver.");
module_param_array(wss_port, long, NULL, 0444);
MODULE_PARM_DESC(wss_port, "WSS port # for " CRD_NAME " driver.");
module_param_array(mpu_port, long, NULL, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 port # for " CRD_NAME " driver.");
module_param_array(fm_port, long, NULL, 0444);
MODULE_PARM_DESC(fm_port, "FM port # for " CRD_NAME " driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for " CRD_NAME " driver.");
module_param_array(mpu_irq, int, NULL, 0444);
MODULE_PARM_DESC(mpu_irq, "MPU-401 IRQ # for " CRD_NAME " driver.");
module_param_array(dma1, int, NULL, 0444);
MODULE_PARM_DESC(dma1, "Playback DMA # for " CRD_NAME " driver.");
module_param_array(dma2, int, NULL, 0444);
MODULE_PARM_DESC(dma2, "Capture DMA # for " CRD_NAME " driver.");
#define DSP_PORT_RESET		0x6
#define DSP_PORT_READ		0xa
#define DSP_PORT_COMMAND	0xc
#define DSP_PORT_STATUS		0xc
#define DSP_PORT_DATA_AVAIL	0xe
#define DSP_SIGNATURE		0xaa
#define DSP_COMMAND_GET_VERSION	0xe1
static int __devinit dsp_get_byte(void __iomem *port, u8 *val)
static int __devinit dsp_reset(void __iomem *port)
static int __devinit dsp_command(void __iomem *port, u8 cmd)
static int __devinit dsp_get_version(void __iomem *port, u8 *major, u8 *minor)
#define WSS_CONFIG_DMA_0	(1 << 0)
#define WSS_CONFIG_DMA_1	(2 << 0)
#define WSS_CONFIG_DMA_3	(3 << 0)
#define WSS_CONFIG_DUPLEX	(1 << 2)
#define WSS_CONFIG_IRQ_7	(1 << 3)
#define WSS_CONFIG_IRQ_9	(2 << 3)
#define WSS_CONFIG_IRQ_10	(3 << 3)
#define WSS_CONFIG_IRQ_11	(4 << 3)
#define WSS_PORT_CONFIG		0
#define WSS_PORT_SIGNATURE	3
#define WSS_SIGNATURE		4
static int __devinit wss_detect(void __iomem *wss_port)
static void wss_set_config(void __iomem *wss_port, u8 wss_config)
#define GALAXY_PORT_CONFIG	1024
#define CONFIG_PORT_SET		4
#define DSP_COMMAND_GALAXY_8	8
#define GALAXY_COMMAND_GET_TYPE	5
#define DSP_COMMAND_GALAXY_9	9
#define GALAXY_COMMAND_WSSMODE	0
#define GALAXY_COMMAND_SB8MODE	1
#define GALAXY_MODE_WSS		GALAXY_COMMAND_WSSMODE
#define GALAXY_MODE_SB8		GALAXY_COMMAND_SB8MODE
struct snd_galaxy ;
static u32 config[SNDRV_CARDS];
static u8 wss_config[SNDRV_CARDS];
static int __devinit snd_galaxy_match(struct device *dev, unsigned int n)
static int __devinit galaxy_init(struct snd_galaxy *galaxy, u8 *type)
static int __devinit galaxy_set_mode(struct snd_galaxy *galaxy, u8 mode)
static void galaxy_set_config(struct snd_galaxy *galaxy, u32 config)
static void __devinit galaxy_config(struct snd_galaxy *galaxy, u32 config)
static int __devinit galaxy_wss_config(struct snd_galaxy *galaxy, u8 wss_config)
static void snd_galaxy_free(struct snd_card *card)
static int __devinit snd_galaxy_probe(struct device *dev, unsigned int n)
static int __devexit snd_galaxy_remove(struct device *dev, unsigned int n)
static struct isa_driver snd_galaxy_driver = ;
static int __init alsa_card_galaxy_init(void)
static void __exit alsa_card_galaxy_exit(void)
module_init(alsa_card_galaxy_init);
module_exit(alsa_card_galaxy_exit);
