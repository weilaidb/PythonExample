struct wm8940_priv ;
static u16 wm8940_reg_defaults[] = ;
static const char *wm8940_companding[] = ;
static const struct soc_enum wm8940_adc_companding_enum
= SOC_ENUM_SINGLE(WM8940_COMPANDINGCTL, 1, 4, wm8940_companding);
static const struct soc_enum wm8940_dac_companding_enum
= SOC_ENUM_SINGLE(WM8940_COMPANDINGCTL, 3, 4, wm8940_companding);
static const char *wm8940_alc_mode_text[] = ;
static const struct soc_enum wm8940_alc_mode_enum
= SOC_ENUM_SINGLE(WM8940_ALC3, 8, 2, wm8940_alc_mode_text);
static const char *wm8940_mic_bias_level_text[] = ;
static const struct soc_enum wm8940_mic_bias_level_enum
= SOC_ENUM_SINGLE(WM8940_INPUTCTL, 8, 2, wm8940_mic_bias_level_text);
static const char *wm8940_filter_mode_text[] = ;
static const struct soc_enum wm8940_filter_mode_enum
= SOC_ENUM_SINGLE(WM8940_ADC, 7, 2, wm8940_filter_mode_text);
static DECLARE_TLV_DB_SCALE(wm8940_spk_vol_tlv, -5700, 100, 1);
static DECLARE_TLV_DB_SCALE(wm8940_att_tlv, -1000, 1000, 0);
static DECLARE_TLV_DB_SCALE(wm8940_pga_vol_tlv, -1200, 75, 0);
static DECLARE_TLV_DB_SCALE(wm8940_alc_min_tlv, -1200, 600, 0);
static DECLARE_TLV_DB_SCALE(wm8940_alc_max_tlv, 675, 600, 0);
static DECLARE_TLV_DB_SCALE(wm8940_alc_tar_tlv, -2250, 50, 0);
static DECLARE_TLV_DB_SCALE(wm8940_lim_boost_tlv, 0, 100, 0);
static DECLARE_TLV_DB_SCALE(wm8940_lim_thresh_tlv, -600, 100, 0);
static DECLARE_TLV_DB_SCALE(wm8940_adc_tlv, -12750, 50, 1);
static DECLARE_TLV_DB_SCALE(wm8940_capture_boost_vol_tlv, 0, 2000, 0);
static const struct snd_kcontrol_new wm8940_snd_controls[] = ;
static const struct snd_kcontrol_new wm8940_speaker_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8940_mono_mixer_controls[] = ;
static DECLARE_TLV_DB_SCALE(wm8940_boost_vol_tlv, -1500, 300, 1);
static const struct snd_kcontrol_new wm8940_input_boost_controls[] = ;
static const struct snd_kcontrol_new wm8940_micpga_controls[] = ;
static const struct snd_soc_dapm_widget wm8940_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8940_add_widgets(struct snd_soc_codec *codec)
#define wm8940_reset(c) snd_soc_write(c, WM8940_SOFTRESET, 0);
static int wm8940_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8940_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8940_mute(struct snd_soc_dai *dai, int mute)
static int wm8940_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
struct pll_ ;
static struct pll_ pll_div;
#define FIXED_PLL_SIZE ((1 << 24) * 10)
static void pll_factors(unsigned int target, unsigned int source)
static int wm8940_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
static int wm8940_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8940_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
#define WM8940_RATES SNDRV_PCM_RATE_8000_48000
#define WM8940_FORMATS (SNDRV_PCM_FMTBIT_S8 |				\
SNDRV_PCM_FMTBIT_S16_LE |			\
SNDRV_PCM_FMTBIT_S20_3LE |			\
SNDRV_PCM_FMTBIT_S24_LE |			\
SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8940_dai_ops = ;
static struct snd_soc_dai_driver wm8940_dai = ;
static int wm8940_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8940_resume(struct snd_soc_codec *codec)
static int wm8940_probe(struct snd_soc_codec *codec)
static int wm8940_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8940 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8940_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8940_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8940_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8940_i2c_id);
static struct i2c_driver wm8940_i2c_driver = ;
static int __init wm8940_modinit(void)
module_init(wm8940_modinit);
static void __exit wm8940_exit(void)
module_exit(wm8940_exit);
MODULE_DESCRIPTION("ASoC WM8940 driver");
MODULE_AUTHOR("Jonathan Cameron");
MODULE_LICENSE("GPL");
