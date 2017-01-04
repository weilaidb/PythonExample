static struct snd_soc_dai_driver dfbmcs320_dai = ;
static struct snd_soc_codec_driver soc_codec_dev_dfbmcs320;
static int __devinit dfbmcs320_probe(struct platform_device *pdev)
static int __devexit dfbmcs320_remove(struct platform_device *pdev)
static struct platform_driver dfmcs320_driver = ;
static int __init dfbmcs320_init(void)
module_init(dfbmcs320_init);
static void __exit dfbmcs320_exit(void)
module_exit(dfbmcs320_exit);
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_DESCRIPTION("ASoC DFBM-CS320 bluethooth module driver");
MODULE_LICENSE("GPL");
