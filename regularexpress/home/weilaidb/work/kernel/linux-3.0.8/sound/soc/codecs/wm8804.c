#define WM8804_NUM_SUPPLIES 2
static const char *wm8804_supply_names[WM8804_NUM_SUPPLIES] = ;
static const u8 wm8804_reg_defs[] = ;
struct wm8804_priv ;
static int txsrc_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
static int txsrc_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
#define WM8804_REGULATOR_EVENT(n) \
static int wm8804_regulator_event_##n(struct notifier_block *nb, \
unsigned long event, void *data)    \
WM8804_REGULATOR_EVENT(0)
WM8804_REGULATOR_EVENT(1)
static const char *txsrc_text[] = ;
static const SOC_ENUM_SINGLE_EXT_DECL(txsrc, txsrc_text);
static const struct snd_kcontrol_new wm8804_snd_controls[] = ;
static int txsrc_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int txsrc_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8804_volatile(struct snd_soc_codec *codec, unsigned int reg)
static int wm8804_reset(struct snd_soc_codec *codec)
static int wm8804_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static int wm8804_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
struct pll_div ;
static struct  post_table[] = ;
#define FIXED_PLL_SIZE ((1ULL << 22) * 10)
static int pll_factors(struct pll_div *pll_div, unsigned int target,
unsigned int source)
static int wm8804_set_pll(struct snd_soc_dai *dai, int pll_id,
int source, unsigned int freq_in,
unsigned int freq_out)
static int wm8804_set_sysclk(struct snd_soc_dai *dai,
int clk_id, unsigned int freq, int dir)
static int wm8804_set_clkdiv(struct snd_soc_dai *dai,
int div_id, int div)
static void wm8804_sync_cache(struct snd_soc_codec *codec)
static int wm8804_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm8804_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8804_resume(struct snd_soc_codec *codec)
#define wm8804_suspend NULL
#define wm8804_resume NULL
static int wm8804_remove(struct snd_soc_codec *codec)
static int wm8804_probe(struct snd_soc_codec *codec)
static struct snd_soc_dai_ops wm8804_dai_ops = ;
#define WM8804_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE | \
SNDRV_PCM_FMTBIT_S24_LE)
#define WM8804_RATES (SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_64000 | \
SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000 | \
SNDRV_PCM_RATE_176400 | SNDRV_PCM_RATE_192000)
static struct snd_soc_dai_driver wm8804_dai = ;
static struct snd_soc_codec_driver soc_codec_dev_wm8804 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8804_spi_probe(struct spi_device *spi)
static int __devexit wm8804_spi_remove(struct spi_device *spi)
static struct spi_driver wm8804_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8804_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8804_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8804_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8804_i2c_id);
static struct i2c_driver wm8804_i2c_driver = ;
static int __init wm8804_modinit(void)
module_init(wm8804_modinit);
static void __exit wm8804_exit(void)
module_exit(wm8804_exit);
MODULE_DESCRIPTION("ASoC WM8804 driver");
MODULE_AUTHOR("Dimitris Papastamos <dp@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
