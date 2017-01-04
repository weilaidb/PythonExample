#define WM8523_NUM_SUPPLIES 2
static const char *wm8523_supply_names[WM8523_NUM_SUPPLIES] = ;
#define WM8523_NUM_RATES 7
struct wm8523_priv ;
static const u16 wm8523_reg[WM8523_REGISTER_COUNT] = ;
static int wm8523_volatile_register(struct snd_soc_codec *codec, unsigned int reg)
static int wm8523_reset(struct snd_soc_codec *codec)
static const DECLARE_TLV_DB_SCALE(dac_tlv, -10000, 25, 0);
static const char *wm8523_zd_count_text[] = ;
static const struct soc_enum wm8523_zc_count =
SOC_ENUM_SINGLE(WM8523_ZERO_DETECT, 0, 2, wm8523_zd_count_text);
static const struct snd_kcontrol_new wm8523_snd_controls[] = ;
static const struct snd_soc_dapm_widget wm8523_dapm_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static int wm8523_add_widgets(struct snd_soc_codec *codec)
static struct  lrclk_ratios[WM8523_NUM_RATES] = ;
static int wm8523_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int wm8523_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8523_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8523_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8523_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8523_RATES SNDRV_PCM_RATE_8000_192000
#define WM8523_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8523_dai_ops = ;
static struct snd_soc_dai_driver wm8523_dai = ;
static int wm8523_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8523_resume(struct snd_soc_codec *codec)
#define wm8523_suspend NULL
#define wm8523_resume NULL
static int wm8523_probe(struct snd_soc_codec *codec)
static int wm8523_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8523 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8523_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8523_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8523_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8523_i2c_id);
static struct i2c_driver wm8523_i2c_driver = ;
static int __init wm8523_modinit(void)
module_init(wm8523_modinit);
static void __exit wm8523_exit(void)
module_exit(wm8523_exit);
MODULE_DESCRIPTION("ASoC WM8523 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
