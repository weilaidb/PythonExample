#define RX51_TVOUT_SEL_GPIO		40
#define RX51_JACK_DETECT_GPIO		177
#define RX51_ECI_SW_GPIO		182
#define RX51_SPEAKER_AMP_TWL_GPIO	(192 + 7)
enum ;
static int rx51_spk_func;
static int rx51_dmic_func;
static int rx51_jack_func;
static void rx51_ext_control(struct snd_soc_codec *codec)
static int rx51_startup(struct snd_pcm_substream *substream)
static int rx51_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops rx51_ops = ;
static int rx51_get_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int rx51_set_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int rx51_spk_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int rx51_hp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int rx51_get_input(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int rx51_set_input(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int rx51_get_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int rx51_set_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_soc_jack rx51_av_jack;
static struct snd_soc_jack_gpio rx51_av_jack_gpios[] = ;
static const struct snd_soc_dapm_widget aic34_dapm_widgets[] = ;
static const struct snd_soc_dapm_widget aic34_dapm_widgetsb[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static const struct snd_soc_dapm_route audio_mapb[] = ;
static const char *spk_function[] = ;
static const char *input_function[] = ;
static const char *jack_function[] = ;
static const struct soc_enum rx51_enum[] = ;
static const struct snd_kcontrol_new aic34_rx51_controls[] = ;
static const struct snd_kcontrol_new aic34_rx51_controlsb[] = ;
static int rx51_aic34_init(struct snd_soc_pcm_runtime *rtd)
static int rx51_aic34b_init(struct snd_soc_dapm_context *dapm)
static struct snd_soc_dai_link rx51_dai[] = ;
struct snd_soc_aux_dev rx51_aux_dev[] = ;
static struct snd_soc_codec_conf rx51_codec_conf[] = ;
static struct snd_soc_card rx51_sound_card = ;
static struct platform_device *rx51_snd_device;
static int __init rx51_soc_init(void)
static void __exit rx51_soc_exit(void)
module_init(rx51_soc_init);
module_exit(rx51_soc_exit);
MODULE_AUTHOR("Nokia Corporation");
MODULE_DESCRIPTION("ALSA SoC Nokia RX-51");
MODULE_LICENSE("GPL");
