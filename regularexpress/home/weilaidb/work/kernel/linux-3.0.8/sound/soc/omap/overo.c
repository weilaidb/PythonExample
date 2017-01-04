static int overo_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops overo_ops = ;
static struct snd_soc_dai_link overo_dai = ;
static struct snd_soc_card snd_soc_card_overo = ;
static struct platform_device *overo_snd_device;
static int __init overo_soc_init(void)
module_init(overo_soc_init);
static void __exit overo_soc_exit(void)
module_exit(overo_soc_exit);
MODULE_AUTHOR("Steve Sakoman <steve@sakoman.com>");
MODULE_DESCRIPTION("ALSA SoC overo");
MODULE_LICENSE("GPL");
