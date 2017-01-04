enum wl1273_mode ;
struct wl1273_priv ;
static int snd_wl1273_fm_set_i2s_mode(struct wl1273_core *core,
int rate, int width)
static int snd_wl1273_fm_set_channel_number(struct wl1273_core *core,
int channel_number)
static int snd_wl1273_get_audio_route(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const char * const wl1273_audio_route[] = ;
static int snd_wl1273_set_audio_route(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct soc_enum wl1273_enum =
SOC_ENUM_SINGLE_EXT(ARRAY_SIZE(wl1273_audio_route), wl1273_audio_route);
static int snd_wl1273_fm_audio_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_wl1273_fm_audio_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const char * const wl1273_audio_strings[] = ;
static const struct soc_enum wl1273_audio_enum =
SOC_ENUM_SINGLE_EXT(ARRAY_SIZE(wl1273_audio_strings),
wl1273_audio_strings);
static int snd_wl1273_fm_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_wl1273_fm_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new wl1273_controls[] = ;
static int wl1273_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int wl1273_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static struct snd_soc_dai_ops wl1273_dai_ops = ;
static struct snd_soc_dai_driver wl1273_dai = ;
int wl1273_get_format(struct snd_soc_codec *codec, unsigned int *fmt)
EXPORT_SYMBOL_GPL(wl1273_get_format);
static int wl1273_probe(struct snd_soc_codec *codec)
static int wl1273_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wl1273 = ;
static int __devinit wl1273_platform_probe(struct platform_device *pdev)
static int __devexit wl1273_platform_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:wl1273-codec");
static struct platform_driver wl1273_platform_driver = ;
static int __init wl1273_init(void)
module_init(wl1273_init);
static void __exit wl1273_exit(void)
module_exit(wl1273_exit);
MODULE_AUTHOR("Matti Aaltonen <matti.j.aaltonen@nokia.com>");
MODULE_DESCRIPTION("ASoC WL1273 codec driver");
MODULE_LICENSE("GPL");
