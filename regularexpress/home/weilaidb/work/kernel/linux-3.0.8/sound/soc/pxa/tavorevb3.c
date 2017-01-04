static int evb3_pm860x_init(struct snd_soc_pcm_runtime *rtd);
static struct platform_device *evb3_snd_device;
static struct snd_soc_jack hs_jack, mic_jack;
static struct snd_soc_jack_pin hs_jack_pins[] = ;
static struct snd_soc_jack_pin mic_jack_pins[] = ;
static const struct snd_soc_dapm_widget evb3_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int evb3_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops evb3_i2s_ops = ;
static struct snd_soc_dai_link evb3_dai[] = ;
static struct snd_soc_card snd_soc_card_evb3 = ;
static int evb3_pm860x_init(struct snd_soc_pcm_runtime *rtd)
static int __init tavorevb3_init(void)
static void __exit tavorevb3_exit(void)
module_init(tavorevb3_init);
module_exit(tavorevb3_exit);
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_DESCRIPTION("ALSA SoC 88PM860x Tavor EVB3");
MODULE_LICENSE("GPL");
