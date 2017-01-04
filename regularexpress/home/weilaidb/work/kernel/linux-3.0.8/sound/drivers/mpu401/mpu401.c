MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("MPU-401 UART");
MODULE_LICENSE("GPL");
static int index[SNDRV_CARDS] = ;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static int pnp[SNDRV_CARDS] = ;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int uart_enter[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for MPU-401 device.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for MPU-401 device.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable MPU-401 device.");
module_param_array(pnp, bool, NULL, 0444);
MODULE_PARM_DESC(pnp, "PnP detection for MPU-401 device.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for MPU-401 device.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for MPU-401 device.");
module_param_array(uart_enter, bool, NULL, 0444);
MODULE_PARM_DESC(uart_enter, "Issue UART_ENTER command at open.");
static struct platform_device *platform_devices[SNDRV_CARDS];
static int pnp_registered;
static unsigned int snd_mpu401_devices;
static int snd_mpu401_create(int dev, struct snd_card **rcard)
static int __devinit snd_mpu401_probe(struct platform_device *devptr)
static int __devexit snd_mpu401_remove(struct platform_device *devptr)
#define SND_MPU401_DRIVER	"snd_mpu401"
static struct platform_driver snd_mpu401_driver = ;
#define IO_EXTENT 2
static struct pnp_device_id snd_mpu401_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp, snd_mpu401_pnpids);
static int __devinit snd_mpu401_pnp(int dev, struct pnp_dev *device,
const struct pnp_device_id *id)
static int __devinit snd_mpu401_pnp_probe(struct pnp_dev *pnp_dev,
const struct pnp_device_id *id)
static void __devexit snd_mpu401_pnp_remove(struct pnp_dev *dev)
static struct pnp_driver snd_mpu401_pnp_driver = ;
static struct pnp_driver snd_mpu401_pnp_driver;
static void snd_mpu401_unregister_all(void)
static int __init alsa_card_mpu401_init(void)
static void __exit alsa_card_mpu401_exit(void)
module_init(alsa_card_mpu401_init)
module_exit(alsa_card_mpu401_exit)
