#define WM8915_HPSEL_GPIO 214
static int speyside_set_bias_level(struct snd_soc_card *card,
enum snd_soc_bias_level level)
static int speyside_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops speyside_ops = ;
static struct snd_soc_jack speyside_headset;
static struct snd_soc_jack_pin speyside_headset_pins[] = ;
static int speyside_jack_polarity;
static int speyside_get_micbias(struct snd_soc_dapm_widget *source,
struct snd_soc_dapm_widget *sink)
static void speyside_set_polarity(struct snd_soc_codec *codec,
int polarity)
static int speyside_wm8915_init(struct snd_soc_pcm_runtime *rtd)
static int speyside_late_probe(struct snd_soc_card *card)
static struct snd_soc_dai_link speyside_dai[] = ;
static int speyside_wm9081_init(struct snd_soc_dapm_context *dapm)
static struct snd_soc_aux_dev speyside_aux_dev[] = ;
static struct snd_soc_codec_conf speyside_codec_conf[] = ;
static const struct snd_kcontrol_new controls[] = ;
static struct snd_soc_dapm_widget widgets[] = ;
static struct snd_soc_dapm_route audio_paths[] = ;
static struct snd_soc_card speyside = ;
static __devinit int speyside_probe(struct platform_device *pdev)
static int __devexit speyside_remove(struct platform_device *pdev)
static struct platform_driver speyside_driver = ;
static int __init speyside_audio_init(void)
module_init(speyside_audio_init);
static void __exit speyside_audio_exit(void)
module_exit(speyside_audio_exit);
MODULE_DESCRIPTION("Speyside audio support");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:speyside");
