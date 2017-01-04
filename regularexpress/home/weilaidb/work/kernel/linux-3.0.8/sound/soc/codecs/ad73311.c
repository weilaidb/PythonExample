static struct snd_soc_dai_driver ad73311_dai = ;
static struct snd_soc_codec_driver soc_codec_dev_ad73311;
static int ad73311_probe(struct platform_device *pdev)
static int __devexit ad73311_remove(struct platform_device *pdev)
static struct platform_driver ad73311_codec_driver = ;
static int __init ad73311_init(void)
module_init(ad73311_init);
static void __exit ad73311_exit(void)
module_exit(ad73311_exit);
MODULE_DESCRIPTION("ASoC ad73311 driver");
MODULE_AUTHOR("Cliff Cai ");
MODULE_LICENSE("GPL");
