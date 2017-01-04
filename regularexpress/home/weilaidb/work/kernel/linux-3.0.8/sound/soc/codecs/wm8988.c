static const u16 wm8988_reg[] = ;
struct wm8988_priv ;
#define wm8988_reset(c)	snd_soc_write(c, WM8988_RESET, 0)
static const char *bass_boost_txt[] = ;
static const struct soc_enum bass_boost =
SOC_ENUM_SINGLE(WM8988_BASS, 7, 2, bass_boost_txt);
static const char *bass_filter_txt[] = ;
static const struct soc_enum bass_filter =
SOC_ENUM_SINGLE(WM8988_BASS, 6, 2, bass_filter_txt);
static const char *treble_txt[] = ;
static const struct soc_enum treble =
SOC_ENUM_SINGLE(WM8988_TREBLE, 6, 2, treble_txt);
static const char *stereo_3d_lc_txt[] = ;
static const struct soc_enum stereo_3d_lc =
SOC_ENUM_SINGLE(WM8988_3D, 5, 2, stereo_3d_lc_txt);
static const char *stereo_3d_uc_txt[] = ;
static const struct soc_enum stereo_3d_uc =
SOC_ENUM_SINGLE(WM8988_3D, 6, 2, stereo_3d_uc_txt);
static const char *stereo_3d_func_txt[] = ;
static const struct soc_enum stereo_3d_func =
SOC_ENUM_SINGLE(WM8988_3D, 7, 2, stereo_3d_func_txt);
static const char *alc_func_txt[] = ;
static const struct soc_enum alc_func =
SOC_ENUM_SINGLE(WM8988_ALC1, 7, 4, alc_func_txt);
static const char *ng_type_txt[] = ;
static const struct soc_enum ng_type =
SOC_ENUM_SINGLE(WM8988_NGATE, 1, 2, ng_type_txt);
static const char *deemph_txt[] = ;
static const struct soc_enum deemph =
SOC_ENUM_SINGLE(WM8988_ADCDAC, 1, 4, deemph_txt);
static const char *adcpol_txt[] = ;
static const struct soc_enum adcpol =
SOC_ENUM_SINGLE(WM8988_ADCDAC, 5, 4, adcpol_txt);
static const DECLARE_TLV_DB_SCALE(pga_tlv, -1725, 75, 0);
static const DECLARE_TLV_DB_SCALE(adc_tlv, -9750, 50, 1);
static const DECLARE_TLV_DB_SCALE(dac_tlv, -12750, 50, 1);
static const DECLARE_TLV_DB_SCALE(out_tlv, -12100, 100, 1);
static const DECLARE_TLV_DB_SCALE(bypass_tlv, -1500, 300, 0);
static const struct snd_kcontrol_new wm8988_snd_controls[] = ;
static int wm8988_lrc_control(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const char *wm8988_line_texts[] = ;
static const unsigned int wm8988_line_values[] = ;
static const struct soc_enum wm8988_lline_enum =
SOC_VALUE_ENUM_SINGLE(WM8988_LOUTM1, 0, 7,
ARRAY_SIZE(wm8988_line_texts),
wm8988_line_texts,
wm8988_line_values);
static const struct snd_kcontrol_new wm8988_left_line_controls =
SOC_DAPM_VALUE_ENUM("Route", wm8988_lline_enum);
static const struct soc_enum wm8988_rline_enum =
SOC_VALUE_ENUM_SINGLE(WM8988_ROUTM1, 0, 7,
ARRAY_SIZE(wm8988_line_texts),
wm8988_line_texts,
wm8988_line_values);
static const struct snd_kcontrol_new wm8988_right_line_controls =
SOC_DAPM_VALUE_ENUM("Route", wm8988_lline_enum);
static const struct snd_kcontrol_new wm8988_left_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8988_right_mixer_controls[] = ;
static const char *wm8988_pga_sel[] = ;
static const unsigned int wm8988_pga_val[] = ;
static const struct soc_enum wm8988_lpga_enum =
SOC_VALUE_ENUM_SINGLE(WM8988_LADCIN, 6, 3,
ARRAY_SIZE(wm8988_pga_sel),
wm8988_pga_sel,
wm8988_pga_val);
static const struct snd_kcontrol_new wm8988_left_pga_controls =
SOC_DAPM_VALUE_ENUM("Route", wm8988_lpga_enum);
static const struct soc_enum wm8988_rpga_enum =
SOC_VALUE_ENUM_SINGLE(WM8988_RADCIN, 6, 3,
ARRAY_SIZE(wm8988_pga_sel),
wm8988_pga_sel,
wm8988_pga_val);
static const struct snd_kcontrol_new wm8988_right_pga_controls =
SOC_DAPM_VALUE_ENUM("Route", wm8988_rpga_enum);
static const char *wm8988_diff_sel[] = ;
static const struct soc_enum diffmux =
SOC_ENUM_SINGLE(WM8988_ADCIN, 8, 2, wm8988_diff_sel);
static const struct snd_kcontrol_new wm8988_diffmux_controls =
SOC_DAPM_ENUM("Route", diffmux);
static const char *wm8988_mono_mux[] = ;
static const struct soc_enum monomux =
SOC_ENUM_SINGLE(WM8988_ADCIN, 6, 4, wm8988_mono_mux);
static const struct snd_kcontrol_new wm8988_monomux_controls =
SOC_DAPM_ENUM("Route", monomux);
static const struct snd_soc_dapm_widget wm8988_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
struct _coeff_div ;
static const struct _coeff_div coeff_div[] = ;
static inline int get_coeff(int mclk, int rate)
static unsigned int rates_12288[] = ;
static struct snd_pcm_hw_constraint_list constraints_12288 = ;
static unsigned int rates_112896[] = ;
static struct snd_pcm_hw_constraint_list constraints_112896 = ;
static unsigned int rates_12[] = ;
static struct snd_pcm_hw_constraint_list constraints_12 = ;
static int wm8988_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8988_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8988_pcm_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int wm8988_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8988_mute(struct snd_soc_dai *dai, int mute)
static int wm8988_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8988_RATES SNDRV_PCM_RATE_8000_96000
#define WM8988_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8988_ops = ;
static struct snd_soc_dai_driver wm8988_dai = ;
static int wm8988_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8988_resume(struct snd_soc_codec *codec)
static int wm8988_probe(struct snd_soc_codec *codec)
static int wm8988_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8988 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8988_spi_probe(struct spi_device *spi)
static int __devexit wm8988_spi_remove(struct spi_device *spi)
static struct spi_driver wm8988_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8988_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8988_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8988_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8988_i2c_id);
static struct i2c_driver wm8988_i2c_driver = ;
static int __init wm8988_modinit(void)
module_init(wm8988_modinit);
static void __exit wm8988_exit(void)
module_exit(wm8988_exit);
MODULE_DESCRIPTION("ASoC WM8988 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
