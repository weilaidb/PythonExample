#define WM8741_NUM_SUPPLIES 2
static const char *wm8741_supply_names[WM8741_NUM_SUPPLIES] = ;
#define WM8741_NUM_RATES 6
struct wm8741_priv ;
static const u16 wm8741_reg_defaults[WM8741_REGISTER_COUNT] = ;
static int wm8741_reset(struct snd_soc_codec *codec)
static const DECLARE_TLV_DB_SCALE(dac_tlv_fine, -12700, 13, 0);
static const DECLARE_TLV_DB_SCALE(dac_tlv, -12700, 400, 0);
static const struct snd_kcontrol_new wm8741_snd_controls[] = ;
static const struct snd_soc_dapm_widget wm8741_dapm_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static int wm8741_add_widgets(struct snd_soc_codec *codec)
static struct  lrclk_ratios[WM8741_NUM_RATES] = ;
static unsigned int rates_11289[] = ;
static struct snd_pcm_hw_constraint_list constraints_11289 = ;
static unsigned int rates_12288[] = ;
static struct snd_pcm_hw_constraint_list constraints_12288 = ;
static unsigned int rates_16384[] = ;
static struct snd_pcm_hw_constraint_list constraints_16384 = ;
static unsigned int rates_16934[] = ;
static struct snd_pcm_hw_constraint_list constraints_16934 = ;
static unsigned int rates_18432[] = ;
static struct snd_pcm_hw_constraint_list constraints_18432 = ;
static unsigned int rates_22579[] = ;
static struct snd_pcm_hw_constraint_list constraints_22579 = ;
static unsigned int rates_24576[] = ;
static struct snd_pcm_hw_constraint_list constraints_24576 = ;
static unsigned int rates_36864[] = ;
static struct snd_pcm_hw_constraint_list constraints_36864 = ;
static int wm8741_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int wm8741_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8741_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8741_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
#define WM8741_RATES (SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_88200 | \
SNDRV_PCM_RATE_96000 | SNDRV_PCM_RATE_176400 | \
SNDRV_PCM_RATE_192000)
#define WM8741_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8741_dai_ops = ;
static struct snd_soc_dai_driver wm8741_dai = ;
static int wm8741_resume(struct snd_soc_codec *codec)
#define wm8741_suspend NULL
#define wm8741_resume NULL
static int wm8741_probe(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8741 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static int wm8741_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int wm8741_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8741_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8741_i2c_id);
static struct i2c_driver wm8741_i2c_driver = ;
static int __init wm8741_modinit(void)
module_init(wm8741_modinit);
static void __exit wm8741_exit(void)
module_exit(wm8741_exit);
MODULE_DESCRIPTION("ASoC WM8741 driver");
MODULE_AUTHOR("Ian Lartey <ian@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
