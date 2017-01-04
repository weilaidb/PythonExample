static const u16 wm8750_reg[] = ;
struct wm8750_priv ;
#define wm8750_reset(c)	snd_soc_write(c, WM8750_RESET, 0)
static const char *wm8750_bass[] = ;
static const char *wm8750_bass_filter[] = ;
static const char *wm8750_treble[] = ;
static const char *wm8750_3d_lc[] = ;
static const char *wm8750_3d_uc[] = ;
static const char *wm8750_3d_func[] = ;
static const char *wm8750_alc_func[] = ;
static const char *wm8750_ng_type[] = ;
static const char *wm8750_line_mux[] = ;
static const char *wm8750_pga_sel[] = ;
static const char *wm8750_out3[] = ;
static const char *wm8750_diff_sel[] = ;
static const char *wm8750_adcpol[] = ;
static const char *wm8750_deemph[] = ;
static const char *wm8750_mono_mux[] = ;
static const struct soc_enum wm8750_enum[] = ;
static const struct snd_kcontrol_new wm8750_snd_controls[] = ;
static const struct snd_kcontrol_new wm8750_left_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8750_right_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8750_mono_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8750_left_line_controls =
SOC_DAPM_ENUM("Route", wm8750_enum[8]);
static const struct snd_kcontrol_new wm8750_right_line_controls =
SOC_DAPM_ENUM("Route", wm8750_enum[9]);
static const struct snd_kcontrol_new wm8750_left_pga_controls =
SOC_DAPM_ENUM("Route", wm8750_enum[10]);
static const struct snd_kcontrol_new wm8750_right_pga_controls =
SOC_DAPM_ENUM("Route", wm8750_enum[11]);
static const struct snd_kcontrol_new wm8750_out3_controls =
SOC_DAPM_ENUM("Route", wm8750_enum[12]);
static const struct snd_kcontrol_new wm8750_diffmux_controls =
SOC_DAPM_ENUM("Route", wm8750_enum[13]);
static const struct snd_kcontrol_new wm8750_monomux_controls =
SOC_DAPM_ENUM("Route", wm8750_enum[16]);
static const struct snd_soc_dapm_widget wm8750_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8750_add_widgets(struct snd_soc_codec *codec)
struct _coeff_div ;
static const struct _coeff_div coeff_div[] = ;
static inline int get_coeff(int mclk, int rate)
static int wm8750_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8750_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8750_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8750_mute(struct snd_soc_dai *dai, int mute)
static int wm8750_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8750_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 | SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000)
#define WM8750_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8750_dai_ops = ;
static struct snd_soc_dai_driver wm8750_dai = ;
static int wm8750_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8750_resume(struct snd_soc_codec *codec)
static int wm8750_probe(struct snd_soc_codec *codec)
static int wm8750_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8750 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8750_spi_probe(struct spi_device *spi)
static int __devexit wm8750_spi_remove(struct spi_device *spi)
static struct spi_driver wm8750_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8750_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8750_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8750_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8750_i2c_id);
static struct i2c_driver wm8750_i2c_driver = ;
static int __init wm8750_modinit(void)
module_init(wm8750_modinit);
static void __exit wm8750_exit(void)
module_exit(wm8750_exit);
MODULE_DESCRIPTION("ASoC WM8750 driver");
MODULE_AUTHOR("Liam Girdwood");
MODULE_LICENSE("GPL");
