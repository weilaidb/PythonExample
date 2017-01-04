#define SNDRV_LEGACY_FIND_FREE_IRQ
#define SNDRV_LEGACY_FIND_FREE_DMA
MODULE_AUTHOR("Krzysztof Helt");
MODULE_DESCRIPTION("Gallant SC-6000");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static long mss_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long mpu_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static bool joystick[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for sc-6000 based soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for sc-6000 based soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable sc-6000 based soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for sc-6000 driver.");
module_param_array(mss_port, long, NULL, 0444);
MODULE_PARM_DESC(mss_port, "MSS Port # for sc-6000 driver.");
module_param_array(mpu_port, long, NULL, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 port # for sc-6000 driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for sc-6000 driver.");
module_param_array(mpu_irq, int, NULL, 0444);
MODULE_PARM_DESC(mpu_irq, "MPU-401 IRQ # for sc-6000 driver.");
module_param_array(dma, int, NULL, 0444);
MODULE_PARM_DESC(dma, "DMA # for sc-6000 driver.");
module_param_array(joystick, bool, NULL, 0444);
MODULE_PARM_DESC(joystick, "Enable gameport.");
#define WRITE_MDIRQ_CFG	0x50
#define COMMAND_52	0x52
#define READ_HARD_CFG	0x58
#define COMMAND_5C	0x5c
#define COMMAND_60	0x60
#define COMMAND_66	0x66
#define COMMAND_6C	0x6c
#define COMMAND_6E	0x6e
#define COMMAND_88	0x88
#define DSP_INIT_MSS	0x8c
#define COMMAND_C5	0xc5
#define GET_DSP_VERSION	0xe1
#define GET_DSP_COPYRIGHT 0xe3
#define DSP_RESET	0x06
#define DSP_READ	0x0a
#define DSP_WRITE	0x0c
#define DSP_COMMAND	0x0c
#define DSP_STATUS	0x0c
#define DSP_DATAVAIL	0x0e
#define PFX "sc6000: "
#define DRV_NAME "SC-6000"
static __devinit unsigned char sc6000_irq_to_softcfg(int irq)
static __devinit unsigned char sc6000_dma_to_softcfg(int dma)
static __devinit unsigned char sc6000_mpu_irq_to_softcfg(int mpu_irq)
static int sc6000_wait_data(char __iomem *vport)
static int sc6000_read(char __iomem *vport)
static int sc6000_write(char __iomem *vport, int cmd)
static int __devinit sc6000_dsp_get_answer(char __iomem *vport, int command,
char *data, int data_len)
static int __devinit sc6000_dsp_reset(char __iomem *vport)
static int __devinit sc6000_hw_cfg_write(char __iomem *vport, const int *cfg)
static int sc6000_cfg_write(char __iomem *vport, unsigned char softcfg)
static int sc6000_setup_board(char __iomem *vport, int config)
static int __devinit sc6000_init_mss(char __iomem *vport, int config,
char __iomem *vmss_port, int mss_config)
static void __devinit sc6000_hw_cfg_encode(char __iomem *vport, int *cfg,
long xport, long xmpu,
long xmss_port, int joystick)
static int __devinit sc6000_init_board(char __iomem *vport,
char __iomem *vmss_port, int dev)
static int __devinit snd_sc6000_mixer(struct snd_wss *chip)
static int __devinit snd_sc6000_match(struct device *devptr, unsigned int dev)
static int __devinit snd_sc6000_probe(struct device *devptr, unsigned int dev)
static int __devexit snd_sc6000_remove(struct device *devptr, unsigned int dev)
static struct isa_driver snd_sc6000_driver = ;
static int __init alsa_card_sc6000_init(void)
static void __exit alsa_card_sc6000_exit(void)
module_init(alsa_card_sc6000_init)
module_exit(alsa_card_sc6000_exit)
