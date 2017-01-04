#define WM8400_INTDRIVBITS      (WM8400_REGISTER_COUNT + 1)
#define WM8400_INMIXL_PWR			0
#define WM8400_AINLMUX_PWR			1
#define WM8400_INMIXR_PWR			2
#define WM8400_AINRMUX_PWR			3
static struct regulator_bulk_data power[] = ;
struct wm8400_priv ;
static inline unsigned int wm8400_read(struct snd_soc_codec *codec,
unsigned int reg)
static int wm8400_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static void wm8400_codec_reset(struct snd_soc_codec *codec)
static const DECLARE_TLV_DB_SCALE(rec_mix_tlv, -1500, 600, 0);
static const DECLARE_TLV_DB_SCALE(in_pga_tlv, -1650, 3000, 0);
static const DECLARE_TLV_DB_SCALE(out_mix_tlv, -2100, 0, 0);
static const DECLARE_TLV_DB_SCALE(out_pga_tlv, -7300, 600, 0);
static const DECLARE_TLV_DB_SCALE(out_omix_tlv, -600, 0, 0);
static const DECLARE_TLV_DB_SCALE(out_dac_tlv, -7163, 0, 0);
static const DECLARE_TLV_DB_SCALE(in_adc_tlv, -7163, 1763, 0);
static const DECLARE_TLV_DB_SCALE(out_sidetone_tlv, -3600, 0, 0);
static int wm8400_outpga_put_volsw_vu(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define WM8400_OUTPGA_SINGLE_R_TLV(xname, reg, shift, max, invert, tlv_array) \
static const char *wm8400_digital_sidetone[] =
;
static const struct soc_enum wm8400_left_digital_sidetone_enum =
SOC_ENUM_SINGLE(WM8400_DIGITAL_SIDE_TONE,
WM8400_ADC_TO_DACL_SHIFT, 2, wm8400_digital_sidetone);
static const struct soc_enum wm8400_right_digital_sidetone_enum =
SOC_ENUM_SINGLE(WM8400_DIGITAL_SIDE_TONE,
WM8400_ADC_TO_DACR_SHIFT, 2, wm8400_digital_sidetone);
static const char *wm8400_adcmode[] =
;
static const struct soc_enum wm8400_right_adcmode_enum =
SOC_ENUM_SINGLE(WM8400_ADC_CTRL, WM8400_ADC_HPF_CUT_SHIFT, 3, wm8400_adcmode);
static const struct snd_kcontrol_new wm8400_snd_controls[] = ;
static int wm8400_add_controls(struct snd_soc_codec *codec)
static int inmixer_event (struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int outmixer_event (struct snd_soc_dapm_widget *w,
struct snd_kcontrol * kcontrol, int event)
static const unsigned int in_mix_tlv[] = ;
static const struct snd_kcontrol_new wm8400_dapm_lin12_pga_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_lin34_pga_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_rin12_pga_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_rin34_pga_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_inmixl_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_inmixr_controls[] = ;
static const char *wm8400_ainlmux[] =
;
static const struct soc_enum wm8400_ainlmux_enum =
SOC_ENUM_SINGLE( WM8400_INPUT_MIXER1, WM8400_AINLMODE_SHIFT,
ARRAY_SIZE(wm8400_ainlmux), wm8400_ainlmux);
static const struct snd_kcontrol_new wm8400_dapm_ainlmux_controls =
SOC_DAPM_ENUM("Route", wm8400_ainlmux_enum);
static const char *wm8400_ainrmux[] =
;
static const struct soc_enum wm8400_ainrmux_enum =
SOC_ENUM_SINGLE( WM8400_INPUT_MIXER1, WM8400_AINRMODE_SHIFT,
ARRAY_SIZE(wm8400_ainrmux), wm8400_ainrmux);
static const struct snd_kcontrol_new wm8400_dapm_ainrmux_controls =
SOC_DAPM_ENUM("Route", wm8400_ainrmux_enum);
static const struct snd_kcontrol_new wm8400_dapm_rxvoice_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_lomix_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_romix_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_lonmix_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_lopmix_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_ronmix_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_ropmix_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_out3mix_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_out4mix_controls[] = ;
static const struct snd_kcontrol_new wm8400_dapm_spkmix_controls[] = ;
static const struct snd_soc_dapm_widget wm8400_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8400_add_widgets(struct snd_soc_codec *codec)
static int wm8400_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
struct fll_factors ;
#define FIXED_FLL_SIZE ((1 << 16) * 10)
static int fll_factors(struct wm8400_priv *wm8400, struct fll_factors *factors,
unsigned int Fref, unsigned int Fout)
static int wm8400_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in,
unsigned int freq_out)
static int wm8400_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8400_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
static int wm8400_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8400_mute(struct snd_soc_dai *dai, int mute)
static int wm8400_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8400_RATES SNDRV_PCM_RATE_8000_96000
#define WM8400_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8400_dai_ops = ;
static struct snd_soc_dai_driver wm8400_dai = ;
static int wm8400_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8400_resume(struct snd_soc_codec *codec)
static void wm8400_probe_deferred(struct work_struct *work)
static int wm8400_codec_probe(struct snd_soc_codec *codec)
static int  wm8400_codec_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8400 = ;
static int __devinit wm8400_probe(struct platform_device *pdev)
static int __devexit wm8400_remove(struct platform_device *pdev)
static struct platform_driver wm8400_codec_driver = ;
static __init int wm8400_init(void)
module_init(wm8400_init);
static __exit void wm8400_exit(void)
module_exit(wm8400_exit);
MODULE_DESCRIPTION("ASoC WM8400 driver");
MODULE_AUTHOR("Mark Brown");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8400-codec");
