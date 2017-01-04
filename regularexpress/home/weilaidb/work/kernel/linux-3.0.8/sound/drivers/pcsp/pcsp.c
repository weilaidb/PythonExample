MODULE_AUTHOR("Stas Sergeev <stsp@users.sourceforge.net>");
MODULE_DESCRIPTION("PC-Speaker driver");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
MODULE_ALIAS("platform:pcspkr");
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
static int enable = SNDRV_DEFAULT_ENABLE1;
static int nopcm;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for pcsp soundcard.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for pcsp soundcard.");
module_param(enable, bool, 0444);
MODULE_PARM_DESC(enable, "Enable PC-Speaker sound.");
module_param(nopcm, bool, 0444);
MODULE_PARM_DESC(nopcm, "Disable PC-Speaker PCM sound. Only beeps remain.");
struct snd_pcsp pcsp_chip;
static int __devinit snd_pcsp_create(struct snd_card *card)
static int __devinit snd_card_pcsp_probe(int devnum, struct device *dev)
static int __devinit alsa_card_pcsp_init(struct device *dev)
static void __devexit alsa_card_pcsp_exit(struct snd_pcsp *chip)
static int __devinit pcsp_probe(struct platform_device *dev)
static int __devexit pcsp_remove(struct platform_device *dev)
static void pcsp_stop_beep(struct snd_pcsp *chip)
static int pcsp_suspend(struct platform_device *dev, pm_message_t state)
#define pcsp_suspend NULL
static void pcsp_shutdown(struct platform_device *dev)
static struct platform_driver pcsp_platform_driver = ;
static int __init pcsp_init(void)
static void __exit pcsp_exit(void)
module_init(pcsp_init);
module_exit(pcsp_exit);
