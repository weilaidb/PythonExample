static int neo1973_hifi_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int neo1973_hifi_hw_free(struct snd_pcm_substream *substream)
static struct snd_soc_ops neo1973_hifi_ops = ;
static int neo1973_voice_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int neo1973_voice_hw_free(struct snd_pcm_substream *substream)
static struct snd_soc_ops neo1973_voice_ops = ;
static const struct snd_soc_dapm_widget neo1973_wm8753_dapm_widgets[] = ;
static const struct snd_soc_dapm_route neo1973_wm8753_routes[] = ;
static const struct snd_kcontrol_new neo1973_wm8753_controls[] = ;
static int gta02_speaker_enabled;
static int lm4853_set_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int lm4853_get_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int lm4853_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_soc_dapm_route neo1973_gta02_routes[] = ;
static const struct snd_kcontrol_new neo1973_gta02_wm8753_controls[] = ;
static const struct snd_soc_dapm_widget neo1973_gta02_wm8753_dapm_widgets[] = ;
static int neo1973_gta02_wm8753_init(struct snd_soc_codec *codec)
static int neo1973_gta02_wm8753_init(struct snd_soc_code *codec)
static int neo1973_wm8753_init(struct snd_soc_pcm_runtime *rtd)
static const struct snd_soc_dapm_route neo1973_lm4857_routes[] = ;
static const struct snd_soc_dapm_widget neo1973_lm4857_dapm_widgets[] = ;
static int neo1973_lm4857_init(struct snd_soc_dapm_context *dapm)
static int neo1973_lm4857_init(struct snd_soc_dapm_context *dapm) ;
static struct snd_soc_dai_link neo1973_dai[] = ;
static struct snd_soc_aux_dev neo1973_aux_devs[] = ;
static struct snd_soc_codec_conf neo1973_codec_conf[] = ;
static const struct gpio neo1973_gta02_gpios[] = ;
static const struct gpio neo1973_gta02_gpios[] = ;
static struct snd_soc_card neo1973 = ;
static struct platform_device *neo1973_snd_device;
static int __init neo1973_init(void)
module_init(neo1973_init);
static void __exit neo1973_exit(void)
module_exit(neo1973_exit);
MODULE_AUTHOR("Graeme Gregory, graeme@openmoko.org, www.openmoko.org");
MODULE_DESCRIPTION("ALSA SoC WM8753 Neo1973 and Frerunner");
MODULE_LICENSE("GPL");
