#define WM8737_NUM_SUPPLIES 4
static const char *wm8737_supply_names[WM8737_NUM_SUPPLIES] = ;
struct wm8737_priv ;
static const u16 wm8737_reg[WM8737_REGISTER_COUNT] = ;
static int wm8737_reset(struct snd_soc_codec *codec)
static const unsigned int micboost_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(pga_tlv, -9750, 50, 1);
static const DECLARE_TLV_DB_SCALE(adc_tlv, -600, 600, 0);
static const DECLARE_TLV_DB_SCALE(ng_tlv, -7800, 600, 0);
static const DECLARE_TLV_DB_SCALE(alc_max_tlv, -1200, 600, 0);
static const DECLARE_TLV_DB_SCALE(alc_target_tlv, -1800, 100, 0);
static const char *micbias_enum_text[] = ;
static const struct soc_enum micbias_enum =
SOC_ENUM_SINGLE(WM8737_MIC_PREAMP_CONTROL, 0, 4, micbias_enum_text);
static const char *low_cutoff_text[] = ;
static const struct soc_enum low_3d =
SOC_ENUM_SINGLE(WM8737_3D_ENHANCE, 6, 2, low_cutoff_text);
static const char *high_cutoff_text[] = ;
static const struct soc_enum high_3d =
SOC_ENUM_SINGLE(WM8737_3D_ENHANCE, 5, 2, high_cutoff_text);
static const char *alc_fn_text[] = ;
static const struct soc_enum alc_fn =
SOC_ENUM_SINGLE(WM8737_ALC1, 7, 4, alc_fn_text);
static const char *alc_hold_text[] = ;
static const struct soc_enum alc_hold =
SOC_ENUM_SINGLE(WM8737_ALC2, 0, 16, alc_hold_text);
static const char *alc_atk_text[] = ;
static const struct soc_enum alc_atk =
SOC_ENUM_SINGLE(WM8737_ALC3, 0, 11, alc_atk_text);
static const char *alc_dcy_text[] = ;
static const struct soc_enum alc_dcy =
SOC_ENUM_SINGLE(WM8737_ALC3, 4, 11, alc_dcy_text);
static const struct snd_kcontrol_new wm8737_snd_controls[] = ;
static const char *linsel_text[] = ;
static const struct soc_enum linsel_enum =
SOC_ENUM_SINGLE(WM8737_AUDIO_PATH_L, 7, 4, linsel_text);
static const struct snd_kcontrol_new linsel_mux =
SOC_DAPM_ENUM("LINSEL", linsel_enum);
static const char *rinsel_text[] = ;
static const struct soc_enum rinsel_enum =
SOC_ENUM_SINGLE(WM8737_AUDIO_PATH_R, 7, 4, rinsel_text);
static const struct snd_kcontrol_new rinsel_mux =
SOC_DAPM_ENUM("RINSEL", rinsel_enum);
static const char *bypass_text[] = ;
static const struct soc_enum lbypass_enum =
SOC_ENUM_SINGLE(WM8737_MIC_PREAMP_CONTROL, 2, 2, bypass_text);
static const struct snd_kcontrol_new lbypass_mux =
SOC_DAPM_ENUM("Left Bypass", lbypass_enum);
static const struct soc_enum rbypass_enum =
SOC_ENUM_SINGLE(WM8737_MIC_PREAMP_CONTROL, 3, 2, bypass_text);
static const struct snd_kcontrol_new rbypass_mux =
SOC_DAPM_ENUM("Left Bypass", rbypass_enum);
static const struct snd_soc_dapm_widget wm8737_dapm_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static int wm8737_add_widgets(struct snd_soc_codec *codec)
static const struct  coeff_div[] = ;
static int wm8737_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8737_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8737_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8737_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8737_RATES SNDRV_PCM_RATE_8000_96000
#define WM8737_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8737_dai_ops = ;
static struct snd_soc_dai_driver wm8737_dai = ;
static int wm8737_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8737_resume(struct snd_soc_codec *codec)
#define wm8737_suspend NULL
#define wm8737_resume NULL
static int wm8737_probe(struct snd_soc_codec *codec)
static int wm8737_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8737 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8737_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8737_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8737_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8737_i2c_id);
static struct i2c_driver wm8737_i2c_driver = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8737_spi_probe(struct spi_device *spi)
static int __devexit wm8737_spi_remove(struct spi_device *spi)
static struct spi_driver wm8737_spi_driver = ;
static int __init wm8737_modinit(void)
module_init(wm8737_modinit);
static void __exit wm8737_exit(void)
module_exit(wm8737_exit);
MODULE_DESCRIPTION("ASoC WM8737 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
