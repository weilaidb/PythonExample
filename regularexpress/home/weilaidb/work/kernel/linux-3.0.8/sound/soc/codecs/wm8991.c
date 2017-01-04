struct wm8991_priv ;
static const u16 wm8991_reg_defs[] = ;
#define wm8991_reset(c) snd_soc_write(c, WM8991_RESET, 0)
static const unsigned int rec_mix_tlv[] = ;
static const unsigned int in_pga_tlv[] = ;
static const unsigned int out_mix_tlv[] = ;
static const unsigned int out_pga_tlv[] = ;
static const unsigned int out_omix_tlv[] = ;
static const unsigned int out_dac_tlv[] = ;
static const unsigned int in_adc_tlv[] = ;
static const unsigned int out_sidetone_tlv[] = ;
static int wm899x_outpga_put_volsw_vu(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const char *wm8991_digital_sidetone[] =
;
static const struct soc_enum wm8991_left_digital_sidetone_enum =
SOC_ENUM_SINGLE(WM8991_DIGITAL_SIDE_TONE,
WM8991_ADC_TO_DACL_SHIFT,
WM8991_ADC_TO_DACL_MASK,
wm8991_digital_sidetone);
static const struct soc_enum wm8991_right_digital_sidetone_enum =
SOC_ENUM_SINGLE(WM8991_DIGITAL_SIDE_TONE,
WM8991_ADC_TO_DACR_SHIFT,
WM8991_ADC_TO_DACR_MASK,
wm8991_digital_sidetone);
static const char *wm8991_adcmode[] =
;
static const struct soc_enum wm8991_right_adcmode_enum =
SOC_ENUM_SINGLE(WM8991_ADC_CTRL,
WM8991_ADC_HPF_CUT_SHIFT,
WM8991_ADC_HPF_CUT_MASK,
wm8991_adcmode);
static const struct snd_kcontrol_new wm8991_snd_controls[] = ;
static int inmixer_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int outmixer_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const unsigned int in_mix_tlv[] = ;
static const struct snd_kcontrol_new wm8991_dapm_lin12_pga_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_lin34_pga_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_rin12_pga_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_rin34_pga_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_inmixl_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_inmixr_controls[] = ;
static const char *wm8991_ainlmux[] =
;
static const struct soc_enum wm8991_ainlmux_enum =
SOC_ENUM_SINGLE(WM8991_INPUT_MIXER1, WM8991_AINLMODE_SHIFT,
ARRAY_SIZE(wm8991_ainlmux), wm8991_ainlmux);
static const struct snd_kcontrol_new wm8991_dapm_ainlmux_controls =
SOC_DAPM_ENUM("Route", wm8991_ainlmux_enum);
static const char *wm8991_ainrmux[] =
;
static const struct soc_enum wm8991_ainrmux_enum =
SOC_ENUM_SINGLE(WM8991_INPUT_MIXER1, WM8991_AINRMODE_SHIFT,
ARRAY_SIZE(wm8991_ainrmux), wm8991_ainrmux);
static const struct snd_kcontrol_new wm8991_dapm_ainrmux_controls =
SOC_DAPM_ENUM("Route", wm8991_ainrmux_enum);
static const struct snd_kcontrol_new wm8991_dapm_rxvoice_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_lomix_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_romix_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_lonmix_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_lopmix_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_ronmix_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_ropmix_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_out3mix_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_out4mix_controls[] = ;
static const struct snd_kcontrol_new wm8991_dapm_spkmix_controls[] = ;
static const struct snd_soc_dapm_widget wm8991_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
struct _pll_div ;
#define FIXED_PLL_SIZE ((1 << 16) * 10)
static void pll_factors(struct _pll_div *pll_div, unsigned int target,
unsigned int source)
static int wm8991_set_dai_pll(struct snd_soc_dai *codec_dai,
int pll_id, int src, unsigned int freq_in, unsigned int freq_out)
static int wm8991_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8991_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
static int wm8991_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8991_mute(struct snd_soc_dai *dai, int mute)
static int wm8991_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm8991_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8991_resume(struct snd_soc_codec *codec)
static int wm8991_remove(struct snd_soc_codec *codec)
static int wm8991_probe(struct snd_soc_codec *codec)
#define WM8991_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8991_ops = ;
static struct snd_soc_dai_driver wm8991_dai = ;
static struct snd_soc_codec_driver soc_codec_dev_wm8991 = ;
static __devinit int wm8991_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8991_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8991_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8991_i2c_id);
static struct i2c_driver wm8991_i2c_driver = ;
static int __init wm8991_modinit(void)
module_init(wm8991_modinit);
static void __exit wm8991_exit(void)
module_exit(wm8991_exit);
MODULE_DESCRIPTION("ASoC WM8991 driver");
MODULE_AUTHOR("Graeme Gregory");
MODULE_LICENSE("GPL");
