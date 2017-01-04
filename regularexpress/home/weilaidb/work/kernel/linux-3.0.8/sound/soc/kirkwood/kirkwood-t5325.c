static int t5325_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops t5325_ops = ;
static const struct snd_soc_dapm_widget t5325_dapm_widgets[] = ;
static const struct snd_soc_dapm_route t5325_route[] = ;
static int t5325_dai_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link t5325_dai[] = ;
static struct snd_soc_card t5325 = ;
static struct platform_device *t5325_snd_device;
static int __init t5325_init(void)
module_init(t5325_init);
static void __exit t5325_exit(void)
module_exit(t5325_exit);
MODULE_AUTHOR("Arnaud Patard <arnaud.patard@rtp-net.org>");
MODULE_DESCRIPTION("ALSA SoC t5325 audio client");
MODULE_LICENSE("GPL");
