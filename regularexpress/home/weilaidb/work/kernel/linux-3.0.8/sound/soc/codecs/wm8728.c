static const u16 wm8728_reg_defaults[] = ;
struct wm8728_priv ;
static const DECLARE_TLV_DB_SCALE(wm8728_tlv, -12750, 50, 1);
static const struct snd_kcontrol_new wm8728_snd_controls[] = ;
static const struct snd_soc_dapm_widget wm8728_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm8728_intercon[] = ;
static int wm8728_mute(struct snd_soc_dai *dai, int mute)
static int wm8728_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8728_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8728_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8728_RATES (SNDRV_PCM_RATE_8000_192000)
#define WM8728_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8728_dai_ops = ;
static struct snd_soc_dai_driver wm8728_dai = ;
static int wm8728_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8728_resume(struct snd_soc_codec *codec)
static int wm8728_probe(struct snd_soc_codec *codec)
static int wm8728_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8728 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8728_spi_probe(struct spi_device *spi)
static int __devexit wm8728_spi_remove(struct spi_device *spi)
static struct spi_driver wm8728_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8728_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8728_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8728_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8728_i2c_id);
static struct i2c_driver wm8728_i2c_driver = ;
static int __init wm8728_modinit(void)
module_init(wm8728_modinit);
static void __exit wm8728_exit(void)
module_exit(wm8728_exit);
MODULE_DESCRIPTION("ASoC WM8728 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
