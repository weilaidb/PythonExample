static const u16 wm8974_reg[WM8974_CACHEREGNUM] = ;
#define WM8974_POWER1_BIASEN  0x08
#define WM8974_POWER1_BUFIOEN 0x04
struct wm8974_priv ;
#define wm8974_reset(c)	snd_soc_write(c, WM8974_RESET, 0)
static const char *wm8974_companding[] = ;
static const char *wm8974_deemp[] = ;
static const char *wm8974_eqmode[] = ;
static const char *wm8974_bw[] = ;
static const char *wm8974_eq1[] = ;
static const char *wm8974_eq2[] = ;
static const char *wm8974_eq3[] = ;
static const char *wm8974_eq4[] = ;
static const char *wm8974_eq5[] = ;
static const char *wm8974_alc[] = ;
static const struct soc_enum wm8974_enum[] = ;
static const char *wm8974_auxmode_text[] = ;
static const struct soc_enum wm8974_auxmode =
SOC_ENUM_SINGLE(WM8974_INPUT,  3, 2, wm8974_auxmode_text);
static const DECLARE_TLV_DB_SCALE(digital_tlv, -12750, 50, 1);
static const DECLARE_TLV_DB_SCALE(eq_tlv, -1200, 100, 0);
static const DECLARE_TLV_DB_SCALE(inpga_tlv, -1200, 75, 0);
static const DECLARE_TLV_DB_SCALE(spk_tlv, -5700, 100, 0);
static const struct snd_kcontrol_new wm8974_snd_controls[] = ;
static const struct snd_kcontrol_new wm8974_speaker_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8974_mono_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8974_boost_mixer[] = ;
static const struct snd_kcontrol_new wm8974_inpga[] = ;
static const struct snd_kcontrol_new wm8974_aux_boost_controls =
SOC_DAPM_SINGLE("Aux Volume", WM8974_ADCBOOST, 0, 7, 0);
static const struct snd_kcontrol_new wm8974_mic_boost_controls =
SOC_DAPM_SINGLE("Mic Volume", WM8974_ADCBOOST, 4, 7, 0);
static const struct snd_soc_dapm_widget wm8974_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8974_add_widgets(struct snd_soc_codec *codec)
struct pll_ ;
#define FIXED_PLL_SIZE ((1 << 24) * 10)
static void pll_factors(struct pll_ *pll_div,
unsigned int target, unsigned int source)
static int wm8974_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
static int wm8974_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
static int wm8974_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8974_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8974_mute(struct snd_soc_dai *dai, int mute)
static int wm8974_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8974_RATES (SNDRV_PCM_RATE_8000_48000)
#define WM8974_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8974_ops = ;
static struct snd_soc_dai_driver wm8974_dai = ;
static int wm8974_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8974_resume(struct snd_soc_codec *codec)
static int wm8974_probe(struct snd_soc_codec *codec)
static int wm8974_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8974 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8974_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8974_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8974_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8974_i2c_id);
static struct i2c_driver wm8974_i2c_driver = ;
static int __init wm8974_modinit(void)
module_init(wm8974_modinit);
static void __exit wm8974_exit(void)
module_exit(wm8974_exit);
MODULE_DESCRIPTION("ASoC WM8974 driver");
MODULE_AUTHOR("Liam Girdwood");
MODULE_LICENSE("GPL");
