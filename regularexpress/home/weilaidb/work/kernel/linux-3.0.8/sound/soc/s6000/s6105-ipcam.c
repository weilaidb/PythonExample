#define S6105_CAM_CODEC_CLOCK 12288000
static int s6105_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops s6105_ops = ;
static const struct snd_soc_dapm_widget aic3x_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int output_type_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int output_type_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int output_type_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new audio_out_mux = ;
static int s6105_aic3x_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link s6105_dai = ;
static struct snd_soc_card snd_soc_card_s6105 = ;
static struct s6000_snd_platform_data __initdata s6105_snd_data = ;
static struct platform_device *s6105_snd_device;
static struct i2c_board_info i2c_device[] = ;
static int __init s6105_init(void)
static void __exit s6105_exit(void)
module_init(s6105_init);
module_exit(s6105_exit);
MODULE_AUTHOR("Daniel Gloeckner");
MODULE_DESCRIPTION("Stretch s6105 IP camera ASoC driver");
MODULE_LICENSE("GPL");
