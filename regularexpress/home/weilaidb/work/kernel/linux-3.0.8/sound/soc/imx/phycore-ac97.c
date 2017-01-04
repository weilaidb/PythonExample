static struct snd_soc_card imx_phycore;
static struct snd_soc_ops imx_phycore_hifi_ops = ;
static struct snd_soc_dai_link imx_phycore_dai_ac97[] = ;
static struct snd_soc_card imx_phycore = ;
static struct platform_device *imx_phycore_snd_ac97_device;
static struct platform_device *imx_phycore_snd_device;
static int __init imx_phycore_init(void)
static void __exit imx_phycore_exit(void)
late_initcall(imx_phycore_init);
module_exit(imx_phycore_exit);
MODULE_AUTHOR("Sascha Hauer <s.hauer@pengutronix.de>");
MODULE_DESCRIPTION("PhyCORE ALSA SoC driver");
MODULE_LICENSE("GPL");
