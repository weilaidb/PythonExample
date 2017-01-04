static struct snd_soc_card tosa;
#define TOSA_HP        0
#define TOSA_MIC_INT   1
#define TOSA_HEADSET   2
#define TOSA_HP_OFF    3
#define TOSA_SPK_ON    0
#define TOSA_SPK_OFF   1
static int tosa_jack_func;
static int tosa_spk_func;
static void tosa_ext_control(struct snd_soc_codec *codec)
static int tosa_startup(struct snd_pcm_substream *substream)
static struct snd_soc_ops tosa_ops = ;
static int tosa_get_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tosa_set_jack(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tosa_get_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tosa_set_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tosa_hp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_soc_dapm_widget tosa_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static const char *jack_function[] = ;
static const char *spk_function[] = ;
static const struct soc_enum tosa_enum[] = ;
static const struct snd_kcontrol_new tosa_controls[] = ;
static int tosa_ac97_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link tosa_dai[] = ;
static int tosa_probe(struct snd_soc_card *card)
static int tosa_remove(struct snd_soc_card *card)
static struct snd_soc_card tosa = ;
static struct platform_device *tosa_snd_device;
static int __init tosa_init(void)
static void __exit tosa_exit(void)
module_init(tosa_init);
module_exit(tosa_exit);
MODULE_AUTHOR("Richard Purdie");
MODULE_DESCRIPTION("ALSA SoC Tosa");
MODULE_LICENSE("GPL");
