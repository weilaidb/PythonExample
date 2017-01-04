struct wm8990_priv ;
static const u16 wm8990_reg[] = ;
#define wm8990_reset(c) snd_soc_write(c, WM8990_RESET, 0)
static const DECLARE_TLV_DB_SCALE(rec_mix_tlv, -1500, 600, 0);
static const DECLARE_TLV_DB_SCALE(in_pga_tlv, -1650, 3000, 0);
static const DECLARE_TLV_DB_SCALE(out_mix_tlv, 0, -2100, 0);
static const DECLARE_TLV_DB_SCALE(out_pga_tlv, -7300, 600, 0);
static const DECLARE_TLV_DB_SCALE(out_omix_tlv, -600, 0, 0);
static const DECLARE_TLV_DB_SCALE(out_dac_tlv, -7163, 0, 0);
static const DECLARE_TLV_DB_SCALE(in_adc_tlv, -7163, 1763, 0);
static const DECLARE_TLV_DB_SCALE(out_sidetone_tlv, -3600, 0, 0);
static int wm899x_outpga_put_volsw_vu(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define SOC_WM899X_OUTPGA_SINGLE_R_TLV(xname, reg, shift, max, invert,\
tlv_array)
static const char *wm8990_digital_sidetone[] =
;
static const struct soc_enum wm8990_left_digital_sidetone_enum =
SOC_ENUM_SINGLE(WM8990_DIGITAL_SIDE_TONE,
WM8990_ADC_TO_DACL_SHIFT,
WM8990_ADC_TO_DACL_MASK,
wm8990_digital_sidetone);
static const struct soc_enum wm8990_right_digital_sidetone_enum =
SOC_ENUM_SINGLE(WM8990_DIGITAL_SIDE_TONE,
WM8990_ADC_TO_DACR_SHIFT,
WM8990_ADC_TO_DACR_MASK,
wm8990_digital_sidetone);
static const char *wm8990_adcmode[] =
;
static const struct soc_enum wm8990_right_adcmode_enum =
SOC_ENUM_SINGLE(WM8990_ADC_CTRL,
WM8990_ADC_HPF_CUT_SHIFT,
WM8990_ADC_HPF_CUT_MASK,
wm8990_adcmode);
static const struct snd_kcontrol_new wm8990_snd_controls[] = ;
static int inmixer_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int outmixer_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const unsigned int in_mix_tlv[] = ;
static const struct snd_kcontrol_new wm8990_dapm_lin12_pga_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_lin34_pga_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_rin12_pga_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_rin34_pga_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_inmixl_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_inmixr_controls[] = ;
static const char *wm8990_ainlmux[] =
;
static const struct soc_enum wm8990_ainlmux_enum =
SOC_ENUM_SINGLE(WM8990_INPUT_MIXER1, WM8990_AINLMODE_SHIFT,
ARRAY_SIZE(wm8990_ainlmux), wm8990_ainlmux);
static const struct snd_kcontrol_new wm8990_dapm_ainlmux_controls =
SOC_DAPM_ENUM("Route", wm8990_ainlmux_enum);
static const char *wm8990_ainrmux[] =
;
static const struct soc_enum wm8990_ainrmux_enum =
SOC_ENUM_SINGLE(WM8990_INPUT_MIXER1, WM8990_AINRMODE_SHIFT,
ARRAY_SIZE(wm8990_ainrmux), wm8990_ainrmux);
static const struct snd_kcontrol_new wm8990_dapm_ainrmux_controls =
SOC_DAPM_ENUM("Route", wm8990_ainrmux_enum);
static const struct snd_kcontrol_new wm8990_dapm_rxvoice_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_lomix_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_romix_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_lonmix_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_lopmix_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_ronmix_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_ropmix_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_out3mix_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_out4mix_controls[] = ;
static const struct snd_kcontrol_new wm8990_dapm_spkmix_controls[] = ;
static const struct snd_soc_dapm_widget wm8990_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8990_add_widgets(struct snd_soc_codec *codec)
struct _pll_div ;
#define FIXED_PLL_SIZE ((1 << 16) * 10)
static void pll_factors(struct _pll_div *pll_div, unsigned int target,
unsigned int source)
static int wm8990_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
static int wm8990_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8990_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8990_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
static int wm8990_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8990_mute(struct snd_soc_dai *dai, int mute)
static int wm8990_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8990_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 | SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000)
#define WM8990_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8990_dai_ops = ;
static struct snd_soc_dai_driver wm8990_dai = ;
static int wm8990_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8990_resume(struct snd_soc_codec *codec)
static int wm8990_probe(struct snd_soc_codec *codec)
static int wm8990_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8990 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8990_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8990_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8990_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8990_i2c_id);
static struct i2c_driver wm8990_i2c_driver = ;
static int __init wm8990_modinit(void)
module_init(wm8990_modinit);
static void __exit wm8990_exit(void)
module_exit(wm8990_exit);
MODULE_DESCRIPTION("ASoC WM8990 driver");
MODULE_AUTHOR("Liam Girdwood");
MODULE_LICENSE("GPL");
