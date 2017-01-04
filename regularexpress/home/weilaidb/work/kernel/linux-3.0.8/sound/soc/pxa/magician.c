#define MAGICIAN_MIC       0
#define MAGICIAN_MIC_EXT   1
static int magician_hp_switch;
static int magician_spk_switch = 1;
static int magician_in_sel = MAGICIAN_MIC;
static void magician_ext_control(struct snd_soc_codec *codec)
static int magician_startup(struct snd_pcm_substream *substream)
static int magician_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int magician_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops magician_capture_ops = ;
static struct snd_soc_ops magician_playback_ops = ;
static int magician_get_hp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int magician_set_hp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int magician_get_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int magician_set_spk(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int magician_get_input(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int magician_set_input(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int magician_spk_power(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int magician_hp_power(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int magician_mic_bias(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_soc_dapm_widget uda1380_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static const char *input_select[] = ;
static const struct soc_enum magician_in_sel_enum =
SOC_ENUM_SINGLE_EXT(2, input_select);
static const struct snd_kcontrol_new uda1380_magician_controls[] = ;
static int magician_uda1380_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link magician_dai[] = ;
static struct snd_soc_card snd_soc_card_magician = ;
static struct platform_device *magician_snd_device;
static struct uda1380_platform_data uda1380_info = ;
static struct i2c_board_info i2c_board_info[] = ;
static int __init magician_init(void)
static void __exit magician_exit(void)
module_init(magician_init);
module_exit(magician_exit);
MODULE_AUTHOR("Philipp Zabel");
MODULE_DESCRIPTION("ALSA SoC Magician");
MODULE_LICENSE("GPL");
