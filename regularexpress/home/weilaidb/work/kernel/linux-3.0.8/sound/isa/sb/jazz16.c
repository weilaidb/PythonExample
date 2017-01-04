#define SNDRV_LEGACY_FIND_FREE_IRQ
#define SNDRV_LEGACY_FIND_FREE_DMA
#define PFX "jazz16: "
MODULE_DESCRIPTION("Media Vision Jazz16");
MODULE_SUPPORTED_DEVICE("");
MODULE_AUTHOR("Krzysztof Helt <krzysztof.h1@wp.pl>");
MODULE_LICENSE("GPL");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static unsigned long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static unsigned long mpu_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma8[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma16[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Media Vision Jazz16 based soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Media Vision Jazz16 based soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Media Vision Jazz16 based soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for jazz16 driver.");
module_param_array(mpu_port, long, NULL, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 port # for jazz16 driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for jazz16 driver.");
module_param_array(mpu_irq, int, NULL, 0444);
MODULE_PARM_DESC(mpu_irq, "MPU-401 IRQ # for jazz16 driver.");
module_param_array(dma8, int, NULL, 0444);
MODULE_PARM_DESC(dma8, "DMA8 # for jazz16 driver.");
module_param_array(dma16, int, NULL, 0444);
MODULE_PARM_DESC(dma16, "DMA16 # for jazz16 driver.");
#define SB_JAZZ16_WAKEUP	0xaf
#define SB_JAZZ16_SET_PORTS	0x50
#define SB_DSP_GET_JAZZ_BRD_REV	0xfa
#define SB_JAZZ16_SET_DMAINTR	0xfb
#define SB_DSP_GET_JAZZ_MODEL	0xfe
struct snd_card_jazz16 ;
static irqreturn_t jazz16_interrupt(int irq, void *chip)
static int __devinit jazz16_configure_ports(unsigned long port,
unsigned long mpu_port, int idx)
static int __devinit jazz16_detect_board(unsigned long port,
unsigned long mpu_port)
static int __devinit jazz16_configure_board(struct snd_sb *chip, int mpu_irq)
static int __devinit snd_jazz16_match(struct device *devptr, unsigned int dev)
static int __devinit snd_jazz16_probe(struct device *devptr, unsigned int dev)
static int __devexit snd_jazz16_remove(struct device *devptr, unsigned int dev)
static int snd_jazz16_suspend(struct device *pdev, unsigned int n,
pm_message_t state)
static int snd_jazz16_resume(struct device *pdev, unsigned int n)
static struct isa_driver snd_jazz16_driver = ;
static int __init alsa_card_jazz16_init(void)
static void __exit alsa_card_jazz16_exit(void)
module_init(alsa_card_jazz16_init)
module_exit(alsa_card_jazz16_exit)
