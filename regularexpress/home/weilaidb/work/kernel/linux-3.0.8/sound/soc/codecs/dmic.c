static struct snd_soc_dai_driver dmic_dai = ;
static const struct snd_soc_dapm_widget dmic_dapm_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static int dmic_probe(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_dmic = ;
static int __devinit dmic_dev_probe(struct platform_device *pdev)
static int __devexit dmic_dev_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:dmic-codec");
static struct platform_driver dmic_driver = ;
static int __init dmic_init(void)
module_init(dmic_init);
static void __exit dmic_exit(void)
module_exit(dmic_exit);
MODULE_DESCRIPTION("Generic DMIC driver");
MODULE_AUTHOR("Liam Girdwood <lrg@slimlogic.co.uk>");
MODULE_LICENSE("GPL");
