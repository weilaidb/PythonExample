static u16 wm9081_reg_defaults[] = ;
static struct  clk_sys_rates[] = ;
static struct  sample_rates[] = ;
static struct  bclk_divs[] = ;
struct wm9081_priv ;
static int wm9081_volatile_register(struct snd_soc_codec *codec, unsigned int reg)
static int wm9081_reset(struct snd_soc_codec *codec)
static const DECLARE_TLV_DB_SCALE(drc_in_tlv, -4500, 75, 0);
static const DECLARE_TLV_DB_SCALE(drc_out_tlv, -2250, 75, 0);
static const DECLARE_TLV_DB_SCALE(drc_min_tlv, -1800, 600, 0);
static unsigned int drc_max_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(drc_qr_tlv, 1200, 600, 0);
static const DECLARE_TLV_DB_SCALE(drc_startup_tlv, -300, 50, 0);
static const DECLARE_TLV_DB_SCALE(eq_tlv, -1200, 100, 0);
static const DECLARE_TLV_DB_SCALE(in_tlv, -600, 600, 0);
static const DECLARE_TLV_DB_SCALE(dac_tlv, -7200, 75, 1);
static const DECLARE_TLV_DB_SCALE(out_tlv, -5700, 100, 0);
static const char *drc_high_text[] = ;
static const struct soc_enum drc_high =
SOC_ENUM_SINGLE(WM9081_DRC_3, 3, 6, drc_high_text);
static const char *drc_low_text[] = ;
static const struct soc_enum drc_low =
SOC_ENUM_SINGLE(WM9081_DRC_3, 0, 5, drc_low_text);
static const char *drc_atk_text[] = ;
static const struct soc_enum drc_atk =
SOC_ENUM_SINGLE(WM9081_DRC_2, 12, 12, drc_atk_text);
static const char *drc_dcy_text[] = ;
static const struct soc_enum drc_dcy =
SOC_ENUM_SINGLE(WM9081_DRC_2, 8, 9, drc_dcy_text);
static const char *drc_qr_dcy_text[] = ;
static const struct soc_enum drc_qr_dcy =
SOC_ENUM_SINGLE(WM9081_DRC_2, 4, 3, drc_qr_dcy_text);
static const char *dac_deemph_text[] = ;
static const struct soc_enum dac_deemph =
SOC_ENUM_SINGLE(WM9081_DAC_DIGITAL_2, 1, 4, dac_deemph_text);
static const char *speaker_mode_text[] = ;
static const struct soc_enum speaker_mode =
SOC_ENUM_SINGLE(WM9081_ANALOGUE_SPEAKER_2, 6, 2, speaker_mode_text);
static int speaker_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int speaker_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new wm9081_snd_controls[] = ;
static const struct snd_kcontrol_new wm9081_eq_controls[] = ;
static const struct snd_kcontrol_new mixer[] = ;
struct _fll_div ;
#define FIXED_FLL_SIZE ((1 << 16) * 10)
static struct  fll_fratios[] = ;
static int fll_factors(struct _fll_div *fll_div, unsigned int Fref,
unsigned int Fout)
static int wm9081_set_fll(struct snd_soc_codec *codec, int fll_id,
unsigned int Fref, unsigned int Fout)
static int configure_clock(struct snd_soc_codec *codec)
static int clk_sys_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const struct snd_soc_dapm_widget wm9081_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm9081_audio_paths[] = ;
static int wm9081_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm9081_set_dai_fmt(struct snd_soc_dai *dai,
unsigned int fmt)
static int wm9081_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm9081_digital_mute(struct snd_soc_dai *codec_dai, int mute)
static int wm9081_set_sysclk(struct snd_soc_codec *codec,
int clk_id, unsigned int freq, int dir)
static int wm9081_set_tdm_slot(struct snd_soc_dai *dai,
unsigned int tx_mask, unsigned int rx_mask, int slots, int slot_width)
#define WM9081_RATES SNDRV_PCM_RATE_8000_96000
#define WM9081_FORMATS \
(SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE | \
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm9081_dai_ops = ;
static struct snd_soc_dai_driver wm9081_dai = ;
static int wm9081_probe(struct snd_soc_codec *codec)
static int wm9081_remove(struct snd_soc_codec *codec)
static int wm9081_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm9081_resume(struct snd_soc_codec *codec)
#define wm9081_suspend NULL
#define wm9081_resume NULL
static struct snd_soc_codec_driver soc_codec_dev_wm9081 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm9081_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm9081_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm9081_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm9081_i2c_id);
static struct i2c_driver wm9081_i2c_driver = ;
static int __init wm9081_modinit(void)
module_init(wm9081_modinit);
static void __exit wm9081_exit(void)
module_exit(wm9081_exit);
MODULE_DESCRIPTION("ASoC WM9081 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
