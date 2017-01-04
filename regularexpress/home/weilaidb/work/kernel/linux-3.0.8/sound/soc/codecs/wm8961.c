#define WM8961_MAX_REGISTER                     0xFC
static u16 wm8961_reg_defaults[] = ;
struct wm8961_priv ;
static int wm8961_volatile_register(struct snd_soc_codec *codec, unsigned int reg)
static int wm8961_reset(struct snd_soc_codec *codec)
static int wm8961_hp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int wm8961_spk_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const char *adc_hpf_text[] = ;
static const struct soc_enum adc_hpf =
SOC_ENUM_SINGLE(WM8961_ADC_DAC_CONTROL_2, 7, 4, adc_hpf_text);
static const char *dac_deemph_text[] = ;
static const struct soc_enum dac_deemph =
SOC_ENUM_SINGLE(WM8961_ADC_DAC_CONTROL_1, 1, 4, dac_deemph_text);
static const DECLARE_TLV_DB_SCALE(out_tlv, -12100, 100, 1);
static const DECLARE_TLV_DB_SCALE(hp_sec_tlv, -700, 100, 0);
static const DECLARE_TLV_DB_SCALE(adc_tlv, -7200, 75, 1);
static const DECLARE_TLV_DB_SCALE(sidetone_tlv, -3600, 300, 0);
static unsigned int boost_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(pga_tlv, -2325, 75, 0);
static const struct snd_kcontrol_new wm8961_snd_controls[] = ;
static const char *sidetone_text[] = ;
static const struct soc_enum dacl_sidetone =
SOC_ENUM_SINGLE(WM8961_DSP_SIDETONE_0, 2, 3, sidetone_text);
static const struct soc_enum dacr_sidetone =
SOC_ENUM_SINGLE(WM8961_DSP_SIDETONE_1, 2, 3, sidetone_text);
static const struct snd_kcontrol_new dacl_mux =
SOC_DAPM_ENUM("DACL Sidetone", dacl_sidetone);
static const struct snd_kcontrol_new dacr_mux =
SOC_DAPM_ENUM("DACR Sidetone", dacr_sidetone);
static const struct snd_soc_dapm_widget wm8961_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_paths[] = ;
static struct  wm8961_clk_sys_ratio[] = ;
static struct  wm8961_srate[] = ;
static int wm8961_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8961_set_sysclk(struct snd_soc_dai *dai, int clk_id,
unsigned int freq,
int dir)
static int wm8961_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static int wm8961_set_tristate(struct snd_soc_dai *dai, int tristate)
static int wm8961_digital_mute(struct snd_soc_dai *dai, int mute)
static int wm8961_set_clkdiv(struct snd_soc_dai *dai, int div_id, int div)
static int wm8961_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8961_RATES SNDRV_PCM_RATE_8000_48000
#define WM8961_FORMATS \
(SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE | \
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8961_dai_ops = ;
static struct snd_soc_dai_driver wm8961_dai = ;
static int wm8961_probe(struct snd_soc_codec *codec)
static int wm8961_remove(struct snd_soc_codec *codec)
static int wm8961_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8961_resume(struct snd_soc_codec *codec)
#define wm8961_suspend NULL
#define wm8961_resume NULL
static struct snd_soc_codec_driver soc_codec_dev_wm8961 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8961_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8961_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8961_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8961_i2c_id);
static struct i2c_driver wm8961_i2c_driver = ;
static int __init wm8961_modinit(void)
module_init(wm8961_modinit);
static void __exit wm8961_exit(void)
module_exit(wm8961_exit);
MODULE_DESCRIPTION("ASoC WM8961 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
