#define CORGI_HP        0
#define CORGI_MIC       1
#define CORGI_LINE      2
#define CORGI_HEADSET   3
#define CORGI_HP_OFF    4
#define CORGI_SPK_ON    0
#define CORGI_SPK_OFF   1
#define CORGI_AUDIO_CLOCK 12288000
static int corgi_jack_func;
static int corgi_spk_func;
static void corgi_ext_control(struct snd_soc_codec *codec)
static int corgi_startup(struct snd_pcm_substream *substream)
static void corgi_shutdown(struct snd_pcm_substream *substream)
static int corgi_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops corgi_ops = ;
static int corgi_get_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int corgi_set_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int corgi_get_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int corgi_set_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int corgi_amp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int corgi_mic_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_soc_dapm_widget wm8731_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static const char *jack_function[] = ;
static const char *spk_function[] = ;
static const struct soc_enum corgi_enum[] = ;
static const struct snd_kcontrol_new wm8731_corgi_controls[] = ;
static int corgi_wm8731_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link corgi_dai = ;
static struct snd_soc_card snd_soc_corgi = ;
static struct platform_device *corgi_snd_device;
static int __init corgi_init(void)
static void __exit corgi_exit(void)
module_init(corgi_init);
module_exit(corgi_exit);
MODULE_AUTHOR("Richard Purdie");
MODULE_DESCRIPTION("ALSA SoC Corgi");
MODULE_LICENSE("GPL");
