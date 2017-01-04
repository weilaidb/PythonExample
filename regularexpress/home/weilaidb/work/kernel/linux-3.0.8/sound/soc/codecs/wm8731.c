#define WM8731_NUM_SUPPLIES 4
static const char *wm8731_supply_names[WM8731_NUM_SUPPLIES] = ;
struct wm8731_priv ;
static const u16 wm8731_reg[WM8731_CACHEREGNUM] = ;
#define wm8731_reset(c)	snd_soc_write(c, WM8731_RESET, 0)
static const char *wm8731_input_select[] = ;
static const struct soc_enum wm8731_insel_enum =
SOC_ENUM_SINGLE(WM8731_APANA, 2, 2, wm8731_input_select);
static int wm8731_deemph[] = ;
static int wm8731_set_deemph(struct snd_soc_codec *codec)
static int wm8731_get_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8731_put_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(in_tlv, -3450, 150, 0);
static const DECLARE_TLV_DB_SCALE(sidetone_tlv, -1500, 300, 0);
static const DECLARE_TLV_DB_SCALE(out_tlv, -12100, 100, 1);
static const DECLARE_TLV_DB_SCALE(mic_tlv, 0, 2000, 0);
static const struct snd_kcontrol_new wm8731_snd_controls[] = ;
static const struct snd_kcontrol_new wm8731_output_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8731_input_mux_controls =
SOC_DAPM_ENUM("Input Select", wm8731_insel_enum);
static const struct snd_soc_dapm_widget wm8731_dapm_widgets[] = ;
static int wm8731_check_osc(struct snd_soc_dapm_widget *source,
struct snd_soc_dapm_widget *sink)
static const struct snd_soc_dapm_route wm8731_intercon[] = ;
struct _coeff_div ;
static const struct _coeff_div coeff_div[] = ;
static inline int get_coeff(int mclk, int rate)
static int wm8731_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8731_mute(struct snd_soc_dai *dai, int mute)
static int wm8731_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8731_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8731_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8731_RATES SNDRV_PCM_RATE_8000_96000
#define WM8731_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8731_dai_ops = ;
static struct snd_soc_dai_driver wm8731_dai = ;
static int wm8731_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8731_resume(struct snd_soc_codec *codec)
#define wm8731_suspend NULL
#define wm8731_resume NULL
static int wm8731_probe(struct snd_soc_codec *codec)
static int wm8731_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8731 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8731_spi_probe(struct spi_device *spi)
static int __devexit wm8731_spi_remove(struct spi_device *spi)
static struct spi_driver wm8731_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8731_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8731_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8731_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8731_i2c_id);
static struct i2c_driver wm8731_i2c_driver = ;
static int __init wm8731_modinit(void)
module_init(wm8731_modinit);
static void __exit wm8731_exit(void)
module_exit(wm8731_exit);
MODULE_DESCRIPTION("ASoC WM8731 driver");
MODULE_AUTHOR("Richard Purdie");
MODULE_LICENSE("GPL");
