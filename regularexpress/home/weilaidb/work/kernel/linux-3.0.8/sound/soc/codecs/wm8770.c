#define WM8770_NUM_SUPPLIES 3
static const char *wm8770_supply_names[WM8770_NUM_SUPPLIES] = ;
static const u16 wm8770_reg_defs[WM8770_CACHEREGNUM] = ;
struct wm8770_priv ;
static int vout12supply_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event);
static int vout34supply_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event);
#define WM8770_REGULATOR_EVENT(n) \
static int wm8770_regulator_event_##n(struct notifier_block *nb, \
unsigned long event, void *data)    \
WM8770_REGULATOR_EVENT(0)
WM8770_REGULATOR_EVENT(1)
WM8770_REGULATOR_EVENT(2)
static const DECLARE_TLV_DB_SCALE(adc_tlv, -1200, 100, 0);
static const DECLARE_TLV_DB_SCALE(dac_dig_tlv, -12750, 50, 1);
static const DECLARE_TLV_DB_SCALE(dac_alg_tlv, -12700, 100, 1);
static const char *dac_phase_text[][2] = ;
static const struct soc_enum dac_phase[] = ;
static const struct snd_kcontrol_new wm8770_snd_controls[] = ;
static const char *ain_text[] = ;
static const struct soc_enum ain_enum =
SOC_ENUM_DOUBLE(WM8770_ADCMUX, 0, 4, 8, ain_text);
static const struct snd_kcontrol_new ain_mux =
SOC_DAPM_ENUM("Capture Mux", ain_enum);
static const struct snd_kcontrol_new vout1_mix_controls[] = ;
static const struct snd_kcontrol_new vout2_mix_controls[] = ;
static const struct snd_kcontrol_new vout3_mix_controls[] = ;
static const struct snd_kcontrol_new vout4_mix_controls[] = ;
static const struct snd_soc_dapm_widget wm8770_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm8770_intercon[] = ;
static int vout12supply_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int vout34supply_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int wm8770_reset(struct snd_soc_codec *codec)
static int wm8770_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static const int mclk_ratios[] = ;
static int wm8770_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8770_mute(struct snd_soc_dai *dai, int mute)
static int wm8770_set_sysclk(struct snd_soc_dai *dai,
int clk_id, unsigned int freq, int dir)
static void wm8770_sync_cache(struct snd_soc_codec *codec)
static int wm8770_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8770_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE | \
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8770_dai_ops = ;
static struct snd_soc_dai_driver wm8770_dai = ;
static int wm8770_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8770_resume(struct snd_soc_codec *codec)
#define wm8770_suspend NULL
#define wm8770_resume NULL
static int wm8770_probe(struct snd_soc_codec *codec)
static int wm8770_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8770 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8770_spi_probe(struct spi_device *spi)
static int __devexit wm8770_spi_remove(struct spi_device *spi)
static struct spi_driver wm8770_spi_driver = ;
static int __init wm8770_modinit(void)
module_init(wm8770_modinit);
static void __exit wm8770_exit(void)
module_exit(wm8770_exit);
MODULE_DESCRIPTION("ASoC WM8770 driver");
MODULE_AUTHOR("Dimitris Papastamos <dp@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
