static int omap3beagle_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops omap3beagle_ops = ;
static struct snd_soc_dai_link omap3beagle_dai = ;
static struct snd_soc_card snd_soc_omap3beagle = ;
static struct platform_device *omap3beagle_snd_device;
static int __init omap3beagle_soc_init(void)
static void __exit omap3beagle_soc_exit(void)
module_init(omap3beagle_soc_init);
module_exit(omap3beagle_soc_exit);
MODULE_AUTHOR("Steve Sakoman <steve@sakoman.com>");
MODULE_DESCRIPTION("ALSA SoC OMAP3 Beagle");
MODULE_LICENSE("GPL");
