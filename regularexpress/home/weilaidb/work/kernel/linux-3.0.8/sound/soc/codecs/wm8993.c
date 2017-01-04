#define WM8993_NUM_SUPPLIES 6
static const char *wm8993_supply_names[WM8993_NUM_SUPPLIES] = ;
static u16 wm8993_reg_defaults[WM8993_REGISTER_COUNT] = ;
static struct  clk_sys_rates[] = ;
static struct  sample_rates[] = ;
static struct  bclk_divs[] = ;
struct wm8993_priv ;
static int wm8993_volatile(struct snd_soc_codec *codec, unsigned int reg)
struct _fll_div ;
#define FIXED_FLL_SIZE ((1 << 16) * 10)
static struct  fll_fratios[] = ;
static int fll_factors(struct _fll_div *fll_div, unsigned int Fref,
unsigned int Fout)
static int _wm8993_set_fll(struct snd_soc_codec *codec, int fll_id, int source,
unsigned int Fref, unsigned int Fout)
static int wm8993_set_fll(struct snd_soc_dai *dai, int fll_id, int source,
unsigned int Fref, unsigned int Fout)
static int configure_clock(struct snd_soc_codec *codec)
static const DECLARE_TLV_DB_SCALE(sidetone_tlv, -3600, 300, 0);
static const DECLARE_TLV_DB_SCALE(drc_comp_threash, -4500, 75, 0);
static const DECLARE_TLV_DB_SCALE(drc_comp_amp, -2250, 75, 0);
static const DECLARE_TLV_DB_SCALE(drc_min_tlv, -1800, 600, 0);
static const unsigned int drc_max_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(drc_qr_tlv, 1200, 600, 0);
static const DECLARE_TLV_DB_SCALE(drc_startup_tlv, -1800, 300, 0);
static const DECLARE_TLV_DB_SCALE(eq_tlv, -1200, 100, 0);
static const DECLARE_TLV_DB_SCALE(digital_tlv, -7200, 75, 1);
static const DECLARE_TLV_DB_SCALE(dac_boost_tlv, 0, 600, 0);
static const char *dac_deemph_text[] = ;
static const struct soc_enum dac_deemph =
SOC_ENUM_SINGLE(WM8993_DAC_CTRL, 4, 4, dac_deemph_text);
static const char *adc_hpf_text[] = ;
static const struct soc_enum adc_hpf =
SOC_ENUM_SINGLE(WM8993_ADC_CTRL, 5, 4, adc_hpf_text);
static const char *drc_path_text[] = ;
static const struct soc_enum drc_path =
SOC_ENUM_SINGLE(WM8993_DRC_CONTROL_1, 14, 2, drc_path_text);
static const char *drc_r0_text[] = ;
static const struct soc_enum drc_r0 =
SOC_ENUM_SINGLE(WM8993_DRC_CONTROL_3, 8, 6, drc_r0_text);
static const char *drc_r1_text[] = ;
static const struct soc_enum drc_r1 =
SOC_ENUM_SINGLE(WM8993_DRC_CONTROL_4, 13, 5, drc_r1_text);
static const char *drc_attack_text[] = ;
static const struct soc_enum drc_attack =
SOC_ENUM_SINGLE(WM8993_DRC_CONTROL_2, 12, 12, drc_attack_text);
static const char *drc_decay_text[] = ;
static const struct soc_enum drc_decay =
SOC_ENUM_SINGLE(WM8993_DRC_CONTROL_2, 8, 9, drc_decay_text);
static const char *drc_ff_text[] = ;
static const struct soc_enum drc_ff =
SOC_ENUM_SINGLE(WM8993_DRC_CONTROL_3, 7, 2, drc_ff_text);
static const char *drc_qr_rate_text[] = ;
static const struct soc_enum drc_qr_rate =
SOC_ENUM_SINGLE(WM8993_DRC_CONTROL_3, 0, 3, drc_qr_rate_text);
static const char *drc_smooth_text[] = ;
static const struct soc_enum drc_smooth =
SOC_ENUM_SINGLE(WM8993_DRC_CONTROL_1, 4, 3, drc_smooth_text);
static const struct snd_kcontrol_new wm8993_snd_controls[] = ;
static const struct snd_kcontrol_new wm8993_eq_controls[] = ;
static int clk_sys_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int class_w_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define SOC_DAPM_ENUM_W(xname, xenum) \
static const char *hp_mux_text[] = ;
static const struct soc_enum hpl_enum =
SOC_ENUM_SINGLE(WM8993_OUTPUT_MIXER1, 8, 2, hp_mux_text);
static const struct snd_kcontrol_new hpl_mux =
SOC_DAPM_ENUM_W("Left Headphone Mux", hpl_enum);
static const struct soc_enum hpr_enum =
SOC_ENUM_SINGLE(WM8993_OUTPUT_MIXER2, 8, 2, hp_mux_text);
static const struct snd_kcontrol_new hpr_mux =
SOC_DAPM_ENUM_W("Right Headphone Mux", hpr_enum);
static const struct snd_kcontrol_new left_speaker_mixer[] = ;
static const struct snd_kcontrol_new right_speaker_mixer[] = ;
static const char *aif_text[] = ;
static const struct soc_enum aifoutl_enum =
SOC_ENUM_SINGLE(WM8993_AUDIO_INTERFACE_1, 15, 2, aif_text);
static const struct snd_kcontrol_new aifoutl_mux =
SOC_DAPM_ENUM("AIFOUTL Mux", aifoutl_enum);
static const struct soc_enum aifoutr_enum =
SOC_ENUM_SINGLE(WM8993_AUDIO_INTERFACE_1, 14, 2, aif_text);
static const struct snd_kcontrol_new aifoutr_mux =
SOC_DAPM_ENUM("AIFOUTR Mux", aifoutr_enum);
static const struct soc_enum aifinl_enum =
SOC_ENUM_SINGLE(WM8993_AUDIO_INTERFACE_2, 15, 2, aif_text);
static const struct snd_kcontrol_new aifinl_mux =
SOC_DAPM_ENUM("AIFINL Mux", aifinl_enum);
static const struct soc_enum aifinr_enum =
SOC_ENUM_SINGLE(WM8993_AUDIO_INTERFACE_2, 14, 2, aif_text);
static const struct snd_kcontrol_new aifinr_mux =
SOC_DAPM_ENUM("AIFINR Mux", aifinr_enum);
static const char *sidetone_text[] = ;
static const struct soc_enum sidetonel_enum =
SOC_ENUM_SINGLE(WM8993_DIGITAL_SIDE_TONE, 2, 3, sidetone_text);
static const struct snd_kcontrol_new sidetonel_mux =
SOC_DAPM_ENUM("Left Sidetone", sidetonel_enum);
static const struct soc_enum sidetoner_enum =
SOC_ENUM_SINGLE(WM8993_DIGITAL_SIDE_TONE, 0, 3, sidetone_text);
static const struct snd_kcontrol_new sidetoner_mux =
SOC_DAPM_ENUM("Right Sidetone", sidetoner_enum);
static const struct snd_soc_dapm_widget wm8993_dapm_widgets[] = ;
static const struct snd_soc_dapm_route routes[] = ;
static void wm8993_cache_restore(struct snd_soc_codec *codec)
static int wm8993_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm8993_set_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8993_set_dai_fmt(struct snd_soc_dai *dai,
unsigned int fmt)
static int wm8993_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8993_digital_mute(struct snd_soc_dai *codec_dai, int mute)
static int wm8993_set_tdm_slot(struct snd_soc_dai *dai, unsigned int tx_mask,
unsigned int rx_mask, int slots, int slot_width)
static struct snd_soc_dai_ops wm8993_ops = ;
#define WM8993_RATES SNDRV_PCM_RATE_8000_48000
#define WM8993_FORMATS (SNDRV_PCM_FMTBIT_S16_LE |\
SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE |\
SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_driver wm8993_dai = ;
static int wm8993_probe(struct snd_soc_codec *codec)
static int wm8993_remove(struct snd_soc_codec *codec)
static int wm8993_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8993_resume(struct snd_soc_codec *codec)
#define wm8993_suspend NULL
#define wm8993_resume NULL
static struct snd_soc_codec_driver soc_codec_dev_wm8993 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8993_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8993_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8993_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8993_i2c_id);
static struct i2c_driver wm8993_i2c_driver = ;
static int __init wm8993_modinit(void)
module_init(wm8993_modinit);
static void __exit wm8993_exit(void)
module_exit(wm8993_exit);
MODULE_DESCRIPTION("ASoC WM8993 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
