#define POODLE_HP        1
#define POODLE_HP_OFF    0
#define POODLE_SPK_ON    1
#define POODLE_SPK_OFF   0
#define POODLE_AUDIO_CLOCK 12288000
static int poodle_jack_func;
static int poodle_spk_func;
static void poodle_ext_control(struct snd_soc_codec *codec)
static int poodle_startup(struct snd_pcm_substream *substream)
static void poodle_shutdown(struct snd_pcm_substream *substream)
static int poodle_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops poodle_ops = ;
static int poodle_get_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int poodle_set_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int poodle_get_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int poodle_set_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int poodle_amp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_soc_dapm_widget wm8731_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static const char *jack_function[] = ;
static const char *spk_function[] = ;
static const struct soc_enum poodle_enum[] = ;
static const struct snd_kcontrol_new wm8731_poodle_controls[] = ;
static int poodle_wm8731_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link poodle_dai = ;
static struct snd_soc_card snd_soc_poodle = ;
static struct platform_device *poodle_snd_device;
static int __init poodle_init(void)
static void __exit poodle_exit(void)
module_init(poodle_init);
module_exit(poodle_exit);
MODULE_AUTHOR("Richard Purdie");
MODULE_DESCRIPTION("ALSA SoC Poodle");
MODULE_LICENSE("GPL");
