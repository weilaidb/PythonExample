#undef USE_SIMIC
struct _wm8350_audio ;
static const struct _wm8350_audio wm8350_audio[] = ;
static int wm1133_ev1_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops wm1133_ev1_ops = ;
static const struct snd_soc_dapm_widget wm1133_ev1_widgets[] = ;
static const struct snd_soc_dapm_route wm1133_ev1_map[] = ;
static struct snd_soc_jack hp_jack;
static struct snd_soc_jack_pin hp_jack_pins[] = ;
static struct snd_soc_jack mic_jack;
static struct snd_soc_jack_pin mic_jack_pins[] = ;
static int wm1133_ev1_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link wm1133_ev1_dai = ;
static struct snd_soc_card wm1133_ev1 = ;
static struct platform_device *wm1133_ev1_snd_device;
static int __init wm1133_ev1_audio_init(void)
module_init(wm1133_ev1_audio_init);
static void __exit wm1133_ev1_audio_exit(void)
module_exit(wm1133_ev1_audio_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("Audio for WM1133-EV1 on i.MX31ADS");
MODULE_LICENSE("GPL");
