static int saarb_pm860x_init(struct snd_soc_pcm_runtime *rtd);
static struct platform_device *saarb_snd_device;
static struct snd_soc_jack hs_jack, mic_jack;
static struct snd_soc_jack_pin hs_jack_pins[] = ;
static struct snd_soc_jack_pin mic_jack_pins[] = ;
static const struct snd_soc_dapm_widget saarb_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int saarb_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops saarb_i2s_ops = ;
static struct snd_soc_dai_link saarb_dai[] = ;
static struct snd_soc_card snd_soc_card_saarb = ;
static int saarb_pm860x_init(struct snd_soc_pcm_runtime *rtd)
static int __init saarb_init(void)
static void __exit saarb_exit(void)
module_init(saarb_init);
module_exit(saarb_exit);
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_DESCRIPTION("ALSA SoC 88PM860x Saarb");
MODULE_LICENSE("GPL");
