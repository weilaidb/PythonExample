#define ADS117X_RATES (SNDRV_PCM_RATE_8000_48000)
#define ADS117X_FORMATS (SNDRV_PCM_FMTBIT_S16_LE)
static struct snd_soc_dai_driver ads117x_dai = ;
static struct snd_soc_codec_driver soc_codec_dev_ads117x;
static __devinit int ads117x_probe(struct platform_device *pdev)
static int __devexit ads117x_remove(struct platform_device *pdev)
static struct platform_driver ads117x_codec_driver = ;
static int __init ads117x_init(void)
module_init(ads117x_init);
static void __exit ads117x_exit(void)
module_exit(ads117x_exit);
MODULE_DESCRIPTION("ASoC ads117x driver");
MODULE_AUTHOR("Graeme Gregory");
MODULE_LICENSE("GPL");
