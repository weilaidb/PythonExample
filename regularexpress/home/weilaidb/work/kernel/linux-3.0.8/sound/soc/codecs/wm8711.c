struct wm8711_priv ;
static const u16 wm8711_reg[WM8711_CACHEREGNUM] = ;
#define wm8711_reset(c)	snd_soc_write(c, WM8711_RESET, 0)
static const DECLARE_TLV_DB_SCALE(out_tlv, -12100, 100, 1);
static const struct snd_kcontrol_new wm8711_snd_controls[] = ;
static const struct snd_kcontrol_new wm8711_output_mixer_controls[] = ;
static const struct snd_soc_dapm_widget wm8711_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm8711_intercon[] = ;
struct _coeff_div ;
static const struct _coeff_div coeff_div[] = ;
static inline int get_coeff(int mclk, int rate)
static int wm8711_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8711_pcm_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void wm8711_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int wm8711_mute(struct snd_soc_dai *dai, int mute)
static int wm8711_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8711_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8711_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8711_RATES SNDRV_PCM_RATE_8000_96000
#define WM8711_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8711_ops = ;
static struct snd_soc_dai_driver wm8711_dai = ;
static int wm8711_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8711_resume(struct snd_soc_codec *codec)
static int wm8711_probe(struct snd_soc_codec *codec)
static int wm8711_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8711 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8711_spi_probe(struct spi_device *spi)
static int __devexit wm8711_spi_remove(struct spi_device *spi)
static struct spi_driver wm8711_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8711_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static __devexit int wm8711_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8711_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8711_i2c_id);
static struct i2c_driver wm8711_i2c_driver = ;
static int __init wm8711_modinit(void)
module_init(wm8711_modinit);
static void __exit wm8711_exit(void)
module_exit(wm8711_exit);
MODULE_DESCRIPTION("ASoC WM8711 driver");
MODULE_AUTHOR("Mike Arthur");
MODULE_LICENSE("GPL");
