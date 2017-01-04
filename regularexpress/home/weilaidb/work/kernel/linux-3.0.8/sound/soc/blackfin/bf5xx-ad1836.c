static struct snd_soc_card bf5xx_ad1836;
static int bf5xx_ad1836_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops bf5xx_ad1836_ops = ;
static struct snd_soc_dai_link bf5xx_ad1836_dai[] = ;
static struct snd_soc_card bf5xx_ad1836 = ;
static struct platform_device *bfxx_ad1836_snd_device;
static int __init bf5xx_ad1836_init(void)
static void __exit bf5xx_ad1836_exit(void)
module_init(bf5xx_ad1836_init);
module_exit(bf5xx_ad1836_exit);
MODULE_AUTHOR("Barry Song");
MODULE_DESCRIPTION("ALSA SoC AD1836 board driver");
MODULE_LICENSE("GPL");
