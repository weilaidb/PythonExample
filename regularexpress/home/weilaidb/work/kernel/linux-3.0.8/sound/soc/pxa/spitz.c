#define SPITZ_HP        0
#define SPITZ_MIC       1
#define SPITZ_LINE      2
#define SPITZ_HEADSET   3
#define SPITZ_HP_OFF    4
#define SPITZ_SPK_ON    0
#define SPITZ_SPK_OFF   1
#define SPITZ_AUDIO_CLOCK 12288000
static int spitz_jack_func;
static int spitz_spk_func;
static int spitz_mic_gpio;
static void spitz_ext_control(struct snd_soc_codec *codec)
static int spitz_startup(struct snd_pcm_substream *substream)
static int spitz_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops spitz_ops = ;
static int spitz_get_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int spitz_set_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int spitz_get_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int spitz_set_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int spitz_mic_bias(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_soc_dapm_widget wm8750_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static const char *jack_function[] = ;
static const char *spk_function[] = ;
static const struct soc_enum spitz_enum[] = ;
static const struct snd_kcontrol_new wm8750_spitz_controls[] = ;
static int spitz_wm8750_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link spitz_dai = ;
static struct snd_soc_card snd_soc_spitz = ;
static struct platform_device *spitz_snd_device;
static int __init spitz_init(void)
static void __exit spitz_exit(void)
module_init(spitz_init);
module_exit(spitz_exit);
MODULE_AUTHOR("Richard Purdie");
MODULE_DESCRIPTION("ALSA SoC Spitz");
MODULE_LICENSE("GPL");
