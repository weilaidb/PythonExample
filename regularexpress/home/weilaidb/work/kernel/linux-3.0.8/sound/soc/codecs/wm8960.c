#define AUDIO_NAME "wm8960"
#define WM8960_VMID_MASK 0x180
#define WM8960_VREF      0x40
#define WM8960_PWR2_LOUT1	0x40
#define WM8960_PWR2_ROUT1	0x20
#define WM8960_PWR2_OUT3	0x02
#define WM8960_POBCTRL   0x80
#define WM8960_BUFDCOPEN 0x10
#define WM8960_BUFIOEN   0x08
#define WM8960_SOFT_ST   0x04
#define WM8960_HPSTBY    0x01
#define WM8960_DISOP     0x40
#define WM8960_DRES_MASK 0x30
static const u16 wm8960_reg[WM8960_CACHEREGNUM] = ;
struct wm8960_priv ;
#define wm8960_reset(c)	snd_soc_write(c, WM8960_RESET, 0)
static const char *wm8960_polarity[] = ;
static const char *wm8960_3d_upper_cutoff[] = ;
static const char *wm8960_3d_lower_cutoff[] = ;
static const char *wm8960_alcfunc[] = ;
static const char *wm8960_alcmode[] = ;
static const struct soc_enum wm8960_enum[] = ;
static const int deemph_settings[] = ;
static int wm8960_set_deemph(struct snd_soc_codec *codec)
static int wm8960_get_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8960_put_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(adc_tlv, -9700, 50, 0);
static const DECLARE_TLV_DB_SCALE(dac_tlv, -12700, 50, 1);
static const DECLARE_TLV_DB_SCALE(bypass_tlv, -2100, 300, 0);
static const DECLARE_TLV_DB_SCALE(out_tlv, -12100, 100, 1);
static const struct snd_kcontrol_new wm8960_snd_controls[] = ;
static const struct snd_kcontrol_new wm8960_lin_boost[] = ;
static const struct snd_kcontrol_new wm8960_lin[] = ;
static const struct snd_kcontrol_new wm8960_rin_boost[] = ;
static const struct snd_kcontrol_new wm8960_rin[] = ;
static const struct snd_kcontrol_new wm8960_loutput_mixer[] = ;
static const struct snd_kcontrol_new wm8960_routput_mixer[] = ;
static const struct snd_kcontrol_new wm8960_mono_out[] = ;
static const struct snd_soc_dapm_widget wm8960_dapm_widgets[] = ;
static const struct snd_soc_dapm_widget wm8960_dapm_widgets_out3[] = ;
static const struct snd_soc_dapm_widget wm8960_dapm_widgets_capless[] = ;
static const struct snd_soc_dapm_route audio_paths[] = ;
static const struct snd_soc_dapm_route audio_paths_out3[] = ;
static const struct snd_soc_dapm_route audio_paths_capless[] = ;
static int wm8960_add_widgets(struct snd_soc_codec *codec)
static int wm8960_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static struct  alc_rates[] = ;
static int wm8960_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8960_mute(struct snd_soc_dai *dai, int mute)
static int wm8960_set_bias_level_out3(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm8960_set_bias_level_capless(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
struct _pll_div ;
#define FIXED_PLL_SIZE ((1 << 24) * 10)
static int pll_factors(unsigned int source, unsigned int target,
struct _pll_div *pll_div)
static int wm8960_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
static int wm8960_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
static int wm8960_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8960_RATES SNDRV_PCM_RATE_8000_48000
#define WM8960_FORMATS \
(SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE | \
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8960_dai_ops = ;
static struct snd_soc_dai_driver wm8960_dai = ;
static int wm8960_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8960_resume(struct snd_soc_codec *codec)
static int wm8960_probe(struct snd_soc_codec *codec)
static int wm8960_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8960 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8960_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8960_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8960_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8960_i2c_id);
static struct i2c_driver wm8960_i2c_driver = ;
static int __init wm8960_modinit(void)
module_init(wm8960_modinit);
static void __exit wm8960_exit(void)
module_exit(wm8960_exit);
MODULE_DESCRIPTION("ASoC WM8960 driver");
MODULE_AUTHOR("Liam Girdwood");
MODULE_LICENSE("GPL");
