static const u16 wm8510_reg[WM8510_CACHEREGNUM] = ;
#define WM8510_POWER1_BIASEN  0x08
#define WM8510_POWER1_BUFIOEN 0x10
#define wm8510_reset(c)	snd_soc_write(c, WM8510_RESET, 0)
struct wm8510_priv ;
static const char *wm8510_companding[] = ;
static const char *wm8510_deemp[] = ;
static const char *wm8510_alc[] = ;
static const struct soc_enum wm8510_enum[] = ;
static const struct snd_kcontrol_new wm8510_snd_controls[] = ;
static const struct snd_kcontrol_new wm8510_speaker_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8510_mono_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8510_boost_controls[] = ;
static const struct snd_kcontrol_new wm8510_micpga_controls[] = ;
static const struct snd_soc_dapm_widget wm8510_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8510_add_widgets(struct snd_soc_codec *codec)
struct pll_ ;
static struct pll_ pll_div;
#define FIXED_PLL_SIZE ((1 << 24) * 10)
static void pll_factors(unsigned int target, unsigned int source)
static int wm8510_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
static int wm8510_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
static int wm8510_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8510_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8510_mute(struct snd_soc_dai *dai, int mute)
static int wm8510_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8510_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 |\
SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000)
#define WM8510_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8510_dai_ops = ;
static struct snd_soc_dai_driver wm8510_dai = ;
static int wm8510_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8510_resume(struct snd_soc_codec *codec)
static int wm8510_probe(struct snd_soc_codec *codec)
static int wm8510_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8510 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8510_spi_probe(struct spi_device *spi)
static int __devexit wm8510_spi_remove(struct spi_device *spi)
static struct spi_driver wm8510_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8510_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8510_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8510_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8510_i2c_id);
static struct i2c_driver wm8510_i2c_driver = ;
static int __init wm8510_modinit(void)
module_init(wm8510_modinit);
static void __exit wm8510_exit(void)
module_exit(wm8510_exit);
MODULE_DESCRIPTION("ASoC WM8510 driver");
MODULE_AUTHOR("Liam Girdwood");
MODULE_LICENSE("GPL");
