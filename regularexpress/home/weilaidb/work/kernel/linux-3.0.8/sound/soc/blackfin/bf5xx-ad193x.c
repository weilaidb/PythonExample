static struct snd_soc_card bf5xx_ad193x;
static int bf5xx_ad193x_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops bf5xx_ad193x_ops = ;
static struct snd_soc_dai_link bf5xx_ad193x_dai[] = ;
static struct snd_soc_card bf5xx_ad193x = ;
static struct platform_device *bfxx_ad193x_snd_device;
static int __init bf5xx_ad193x_init(void)
static void __exit bf5xx_ad193x_exit(void)
module_init(bf5xx_ad193x_init);
module_exit(bf5xx_ad193x_exit);
MODULE_AUTHOR("Barry Song");
MODULE_DESCRIPTION("ALSA SoC AD193X board driver");
MODULE_LICENSE("GPL");
