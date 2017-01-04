static const u16 wm8978_reg[WM8978_CACHEREGNUM] = ;
struct wm8978_priv ;
static const char *wm8978_companding[] = ;
static const char *wm8978_eqmode[] = ;
static const char *wm8978_bw[] = ;
static const char *wm8978_eq1[] = ;
static const char *wm8978_eq2[] = ;
static const char *wm8978_eq3[] = ;
static const char *wm8978_eq4[] = ;
static const char *wm8978_eq5[] = ;
static const char *wm8978_alc3[] = ;
static const char *wm8978_alc1[] = ;
static const SOC_ENUM_SINGLE_DECL(adc_compand, WM8978_COMPANDING_CONTROL, 1,
wm8978_companding);
static const SOC_ENUM_SINGLE_DECL(dac_compand, WM8978_COMPANDING_CONTROL, 3,
wm8978_companding);
static const SOC_ENUM_SINGLE_DECL(eqmode, WM8978_EQ1, 8, wm8978_eqmode);
static const SOC_ENUM_SINGLE_DECL(eq1, WM8978_EQ1, 5, wm8978_eq1);
static const SOC_ENUM_SINGLE_DECL(eq2bw, WM8978_EQ2, 8, wm8978_bw);
static const SOC_ENUM_SINGLE_DECL(eq2, WM8978_EQ2, 5, wm8978_eq2);
static const SOC_ENUM_SINGLE_DECL(eq3bw, WM8978_EQ3, 8, wm8978_bw);
static const SOC_ENUM_SINGLE_DECL(eq3, WM8978_EQ3, 5, wm8978_eq3);
static const SOC_ENUM_SINGLE_DECL(eq4bw, WM8978_EQ4, 8, wm8978_bw);
static const SOC_ENUM_SINGLE_DECL(eq4, WM8978_EQ4, 5, wm8978_eq4);
static const SOC_ENUM_SINGLE_DECL(eq5, WM8978_EQ5, 5, wm8978_eq5);
static const SOC_ENUM_SINGLE_DECL(alc3, WM8978_ALC_CONTROL_3, 8, wm8978_alc3);
static const SOC_ENUM_SINGLE_DECL(alc1, WM8978_ALC_CONTROL_1, 7, wm8978_alc1);
static const DECLARE_TLV_DB_SCALE(digital_tlv, -12750, 50, 1);
static const DECLARE_TLV_DB_SCALE(eq_tlv, -1200, 100, 0);
static const DECLARE_TLV_DB_SCALE(inpga_tlv, -1200, 75, 0);
static const DECLARE_TLV_DB_SCALE(spk_tlv, -5700, 100, 0);
static const DECLARE_TLV_DB_SCALE(boost_tlv, -1500, 300, 1);
static const DECLARE_TLV_DB_SCALE(limiter_tlv, 0, 100, 0);
static const struct snd_kcontrol_new wm8978_snd_controls[] = ;
static const struct snd_kcontrol_new wm8978_left_out_mixer[] = ;
static const struct snd_kcontrol_new wm8978_right_out_mixer[] = ;
static const struct snd_kcontrol_new wm8978_left_input_mixer[] = ;
static const struct snd_kcontrol_new wm8978_right_input_mixer[] = ;
static const struct snd_soc_dapm_widget wm8978_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8978_add_widgets(struct snd_soc_codec *codec)
struct wm8978_pll_div ;
#define FIXED_PLL_SIZE (1 << 24)
static void pll_factors(struct snd_soc_codec *codec,
struct wm8978_pll_div *pll_div, unsigned int target, unsigned int source)
static const int mclk_numerator[]	= ;
static const int mclk_denominator[]	= ;
static int wm8978_enum_mclk(unsigned int f_out, unsigned int f_mclk,
unsigned int *f_pllout)
static int wm8978_configure_pll(struct snd_soc_codec *codec)
static int wm8978_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
static int wm8978_set_dai_sysclk(struct snd_soc_dai *codec_dai, int clk_id,
unsigned int freq, int dir)
static int wm8978_set_dai_fmt(struct snd_soc_dai *codec_dai, unsigned int fmt)
static int wm8978_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8978_mute(struct snd_soc_dai *dai, int mute)
static int wm8978_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8978_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE | \
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8978_dai_ops = ;
static struct snd_soc_dai_driver wm8978_dai = ;
static int wm8978_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8978_resume(struct snd_soc_codec *codec)
static const int update_reg[] = ;
static int wm8978_probe(struct snd_soc_codec *codec)
static int wm8978_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8978 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8978_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8978_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8978_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8978_i2c_id);
static struct i2c_driver wm8978_i2c_driver = ;
static int __init wm8978_modinit(void)
module_init(wm8978_modinit);
static void __exit wm8978_exit(void)
module_exit(wm8978_exit);
MODULE_DESCRIPTION("ASoC WM8978 codec driver");
MODULE_AUTHOR("Guennadi Liakhovetski <g.liakhovetski@gmx.de>");
MODULE_LICENSE("GPL");
