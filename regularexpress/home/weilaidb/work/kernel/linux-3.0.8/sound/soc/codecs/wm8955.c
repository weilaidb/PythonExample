#define WM8955_NUM_SUPPLIES 4
static const char *wm8955_supply_names[WM8955_NUM_SUPPLIES] = ;
struct wm8955_priv ;
static const u16 wm8955_reg[WM8955_MAX_REGISTER + 1] = ;
static int wm8955_reset(struct snd_soc_codec *codec)
struct pll_factors ;
#define FIXED_FLL_SIZE ((1 << 22) * 10)
static int wm8995_pll_factors(struct device *dev,
int Fref, int Fout, struct pll_factors *pll)
static struct  clock_cfgs[] = ;
static int wm8955_configure_clocking(struct snd_soc_codec *codec)
static int wm8955_sysclk(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int deemph_settings[] = ;
static int wm8955_set_deemph(struct snd_soc_codec *codec)
static int wm8955_get_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8955_put_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const char *bass_mode_text[] = ;
static const struct soc_enum bass_mode =
SOC_ENUM_SINGLE(WM8955_BASS_CONTROL, 7, 2, bass_mode_text);
static const char *bass_cutoff_text[] = ;
static const struct soc_enum bass_cutoff =
SOC_ENUM_SINGLE(WM8955_BASS_CONTROL, 6, 2, bass_cutoff_text);
static const char *treble_cutoff_text[] = ;
static const struct soc_enum treble_cutoff =
SOC_ENUM_SINGLE(WM8955_TREBLE_CONTROL, 6, 2, treble_cutoff_text);
static const DECLARE_TLV_DB_SCALE(digital_tlv, -12750, 50, 1);
static const DECLARE_TLV_DB_SCALE(atten_tlv, -600, 600, 0);
static const DECLARE_TLV_DB_SCALE(bypass_tlv, -1500, 300, 0);
static const DECLARE_TLV_DB_SCALE(mono_tlv, -2100, 300, 0);
static const DECLARE_TLV_DB_SCALE(out_tlv, -12100, 100, 1);
static const DECLARE_TLV_DB_SCALE(treble_tlv, -1200, 150, 1);
static const struct snd_kcontrol_new wm8955_snd_controls[] = ;
static const struct snd_kcontrol_new lmixer[] = ;
static const struct snd_kcontrol_new rmixer[] = ;
static const struct snd_kcontrol_new mmixer[] = ;
static const struct snd_soc_dapm_widget wm8955_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm8955_intercon[] = ;
static int wm8955_add_widgets(struct snd_soc_codec *codec)
static int wm8955_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8955_set_sysclk(struct snd_soc_dai *dai, int clk_id,
unsigned int freq, int dir)
static int wm8955_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static int wm8955_digital_mute(struct snd_soc_dai *codec_dai, int mute)
static int wm8955_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8955_RATES SNDRV_PCM_RATE_8000_96000
#define WM8955_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8955_dai_ops = ;
static struct snd_soc_dai_driver wm8955_dai = ;
static int wm8955_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8955_resume(struct snd_soc_codec *codec)
#define wm8955_suspend NULL
#define wm8955_resume NULL
static int wm8955_probe(struct snd_soc_codec *codec)
static int wm8955_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8955 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8955_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8955_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8955_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8955_i2c_id);
static struct i2c_driver wm8955_i2c_driver = ;
static int __init wm8955_modinit(void)
module_init(wm8955_modinit);
static void __exit wm8955_exit(void)
module_exit(wm8955_exit);
MODULE_DESCRIPTION("ASoC WM8955 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
