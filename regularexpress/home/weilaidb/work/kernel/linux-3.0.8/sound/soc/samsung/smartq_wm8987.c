static struct snd_soc_card snd_soc_smartq;
static int smartq_hifi_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops smartq_hifi_ops = ;
static struct snd_soc_jack smartq_jack;
static struct snd_soc_jack_pin smartq_jack_pins[] = ;
static struct snd_soc_jack_gpio smartq_jack_gpios[] = ;
static const struct snd_kcontrol_new wm8987_smartq_controls[] = ;
static int smartq_speaker_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k,
int event)
static const struct snd_soc_dapm_widget wm8987_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int smartq_wm8987_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link smartq_dai[] = ;
static struct snd_soc_card snd_soc_smartq = ;
static struct platform_device *smartq_snd_device;
static int __init smartq_init(void)
static void __exit smartq_exit(void)
module_init(smartq_init);
module_exit(smartq_exit);
MODULE_AUTHOR("Maurus Cuelenaere <mcuelenaere@gmail.com>");
MODULE_DESCRIPTION("ALSA SoC SmartQ WM8987");
MODULE_LICENSE("GPL");
