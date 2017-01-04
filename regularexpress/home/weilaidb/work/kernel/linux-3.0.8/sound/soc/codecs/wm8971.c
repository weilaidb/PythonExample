#define	WM8971_REG_COUNT		43
static struct workqueue_struct *wm8971_workq = NULL;
struct wm8971_priv ;
static const u16 wm8971_reg[] = ;
#define wm8971_reset(c)	snd_soc_write(c, WM8971_RESET, 0)
static const char *wm8971_bass[] = ;
static const char *wm8971_bass_filter[] = ;
static const char *wm8971_treble[] = ;
static const char *wm8971_alc_func[] = ;
static const char *wm8971_ng_type[] = ;
static const char *wm8971_deemp[] = ;
static const char *wm8971_mono_mux[] = ;
static const char *wm8971_dac_phase[] = ;
static const char *wm8971_lline_mux[] = ;
static const char *wm8971_rline_mux[] = ;
static const char *wm8971_lpga_sel[] = ;
static const char *wm8971_rpga_sel[] = ;
static const char *wm8971_adcpol[] = ;
static const struct soc_enum wm8971_enum[] = ;
static const struct snd_kcontrol_new wm8971_snd_controls[] = ;
static const struct snd_kcontrol_new wm8971_left_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8971_right_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8971_mono_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8971_left_line_controls =
SOC_DAPM_ENUM("Route", wm8971_enum[8]);
static const struct snd_kcontrol_new wm8971_right_line_controls =
SOC_DAPM_ENUM("Route", wm8971_enum[9]);
static const struct snd_kcontrol_new wm8971_left_pga_controls =
SOC_DAPM_ENUM("Route", wm8971_enum[10]);
static const struct snd_kcontrol_new wm8971_right_pga_controls =
SOC_DAPM_ENUM("Route", wm8971_enum[11]);
static const struct snd_kcontrol_new wm8971_monomux_controls =
SOC_DAPM_ENUM("Route", wm8971_enum[13]);
static const struct snd_soc_dapm_widget wm8971_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8971_add_widgets(struct snd_soc_codec *codec)
struct _coeff_div ;
static const struct _coeff_div coeff_div[] = ;
static int get_coeff(int mclk, int rate)
static int wm8971_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8971_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8971_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8971_mute(struct snd_soc_dai *dai, int mute)
static int wm8971_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8971_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 | SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000)
#define WM8971_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8971_dai_ops = ;
static struct snd_soc_dai_driver wm8971_dai = ;
static void wm8971_work(struct work_struct *work)
static int wm8971_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8971_resume(struct snd_soc_codec *codec)
static int wm8971_probe(struct snd_soc_codec *codec)
static int wm8971_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8971 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8971_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8971_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8971_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8971_i2c_id);
static struct i2c_driver wm8971_i2c_driver = ;
static int __init wm8971_modinit(void)
module_init(wm8971_modinit);
static void __exit wm8971_exit(void)
module_exit(wm8971_exit);
MODULE_DESCRIPTION("ASoC WM8971 driver");
MODULE_AUTHOR("Lab126");
MODULE_LICENSE("GPL");
