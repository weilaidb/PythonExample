struct wm8776_priv ;
static const u16 wm8776_reg[WM8776_CACHEREGNUM] = ;
static int wm8776_reset(struct snd_soc_codec *codec)
static const DECLARE_TLV_DB_SCALE(hp_tlv, -12100, 100, 1);
static const DECLARE_TLV_DB_SCALE(dac_tlv, -12750, 50, 1);
static const DECLARE_TLV_DB_SCALE(adc_tlv, -10350, 50, 1);
static const struct snd_kcontrol_new wm8776_snd_controls[] = ;
static const struct snd_kcontrol_new inmix_controls[] = ;
static const struct snd_kcontrol_new outmix_controls[] = ;
static const struct snd_soc_dapm_widget wm8776_dapm_widgets[] = ;
static const struct snd_soc_dapm_route routes[] = ;
static int wm8776_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static int mclk_ratios[] = ;
static int wm8776_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8776_mute(struct snd_soc_dai *dai, int mute)
static int wm8776_set_sysclk(struct snd_soc_dai *dai,
int clk_id, unsigned int freq, int dir)
static int wm8776_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8776_RATES (SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 |\
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_88200 |\
SNDRV_PCM_RATE_96000)
#define WM8776_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8776_dac_ops = ;
static struct snd_soc_dai_ops wm8776_adc_ops = ;
static struct snd_soc_dai_driver wm8776_dai[] = ;
static int wm8776_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8776_resume(struct snd_soc_codec *codec)
#define wm8776_suspend NULL
#define wm8776_resume NULL
static int wm8776_probe(struct snd_soc_codec *codec)
static int wm8776_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8776 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8776_spi_probe(struct spi_device *spi)
static int __devexit wm8776_spi_remove(struct spi_device *spi)
static struct spi_driver wm8776_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8776_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8776_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8776_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8776_i2c_id);
static struct i2c_driver wm8776_i2c_driver = ;
static int __init wm8776_modinit(void)
module_init(wm8776_modinit);
static void __exit wm8776_exit(void)
module_exit(wm8776_exit);
MODULE_DESCRIPTION("ASoC WM8776 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
