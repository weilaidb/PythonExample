static int imote2_asoc_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops imote2_asoc_ops = ;
static struct snd_soc_dai_link imote2_dai = ;
static struct snd_soc_card snd_soc_imote2 = ;
static struct platform_device *imote2_snd_device;
static int __init imote2_asoc_init(void)
module_init(imote2_asoc_init);
static void __exit imote2_asoc_exit(void)
module_exit(imote2_asoc_exit);
MODULE_AUTHOR("Jonathan Cameron");
MODULE_DESCRIPTION("ALSA SoC Imote 2");
MODULE_LICENSE("GPL");
