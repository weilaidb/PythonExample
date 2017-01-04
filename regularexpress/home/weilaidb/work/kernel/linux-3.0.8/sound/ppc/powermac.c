#define CHIP_NAME "PMac"
MODULE_DESCRIPTION("PowerMac");
MODULE_SUPPORTED_DEVICE("");
MODULE_LICENSE("GPL");
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
static int enable_beep = 1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for " CHIP_NAME " soundchip.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for " CHIP_NAME " soundchip.");
module_param(enable_beep, bool, 0444);
MODULE_PARM_DESC(enable_beep, "Enable beep using PCM.");
static struct platform_device *device;
static int __devinit snd_pmac_probe(struct platform_device *devptr)
static int __devexit snd_pmac_remove(struct platform_device *devptr)
static int snd_pmac_driver_suspend(struct platform_device *devptr, pm_message_t state)
static int snd_pmac_driver_resume(struct platform_device *devptr)
#define SND_PMAC_DRIVER		"snd_powermac"
static struct platform_driver snd_pmac_driver = ;
static int __init alsa_card_pmac_init(void)
static void __exit alsa_card_pmac_exit(void)
module_init(alsa_card_pmac_init)
module_exit(alsa_card_pmac_exit)
