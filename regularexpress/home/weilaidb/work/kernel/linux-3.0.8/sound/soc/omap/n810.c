#define N810_HEADSET_AMP_GPIO	10
#define N810_SPEAKER_AMP_GPIO	101
enum ;
static struct clk *sys_clkout2;
static struct clk *sys_clkout2_src;
static struct clk *func96m_clk;
static int n810_spk_func;
static int n810_jack_func;
static int n810_dmic_func;
static void n810_ext_control(struct snd_soc_codec *codec)
static int n810_startup(struct snd_pcm_substream *substream)
static void n810_shutdown(struct snd_pcm_substream *substream)
static int n810_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops n810_ops = ;
static int n810_get_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int n810_set_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int n810_get_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int n810_set_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int n810_get_input(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int n810_set_input(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int n810_spk_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int n810_jack_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_soc_dapm_widget aic33_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static const char *spk_function[] = ;
static const char *jack_function[] = ;
static const char *input_function[] = ;
static const struct soc_enum n810_enum[] = ;
static const struct snd_kcontrol_new aic33_n810_controls[] = ;
static int n810_aic33_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link n810_dai = ;
static struct snd_soc_card snd_soc_n810 = ;
static struct platform_device *n810_snd_device;
static int __init n810_soc_init(void)
static void __exit n810_soc_exit(void)
module_init(n810_soc_init);
module_exit(n810_soc_exit);
MODULE_AUTHOR("Jarkko Nikula <jhnikula@gmail.com>");
MODULE_DESCRIPTION("ALSA SoC Nokia N810");
MODULE_LICENSE("GPL");
