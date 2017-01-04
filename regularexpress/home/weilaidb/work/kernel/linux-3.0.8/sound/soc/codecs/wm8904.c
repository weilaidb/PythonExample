enum wm8904_type ;
#define WM8904_NUM_DCS_CHANNELS 4
#define WM8904_NUM_SUPPLIES 5
static const char *wm8904_supply_names[WM8904_NUM_SUPPLIES] = ;
struct wm8904_priv ;
static const u16 wm8904_reg[WM8904_MAX_REGISTER + 1] = ;
static struct  wm8904_access[] = ;
static int wm8904_volatile_register(struct snd_soc_codec *codec, unsigned int reg)
static int wm8904_reset(struct snd_soc_codec *codec)
static int wm8904_configure_clocking(struct snd_soc_codec *codec)
static void wm8904_set_drc(struct snd_soc_codec *codec)
static int wm8904_put_drc_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8904_get_drc_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void wm8904_set_retune_mobile(struct snd_soc_codec *codec)
static int wm8904_put_retune_mobile_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8904_get_retune_mobile_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int deemph_settings[] = ;
static int wm8904_set_deemph(struct snd_soc_codec *codec)
static int wm8904_get_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8904_put_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(dac_boost_tlv, 0, 600, 0);
static const DECLARE_TLV_DB_SCALE(digital_tlv, -7200, 75, 1);
static const DECLARE_TLV_DB_SCALE(out_tlv, -5700, 100, 0);
static const DECLARE_TLV_DB_SCALE(sidetone_tlv, -3600, 300, 0);
static const DECLARE_TLV_DB_SCALE(eq_tlv, -1200, 100, 0);
static const char *input_mode_text[] = ;
static const struct soc_enum lin_mode =
SOC_ENUM_SINGLE(WM8904_ANALOGUE_LEFT_INPUT_1, 0, 3, input_mode_text);
static const struct soc_enum rin_mode =
SOC_ENUM_SINGLE(WM8904_ANALOGUE_RIGHT_INPUT_1, 0, 3, input_mode_text);
static const char *hpf_mode_text[] = ;
static const struct soc_enum hpf_mode =
SOC_ENUM_SINGLE(WM8904_ADC_DIGITAL_0, 5, 4, hpf_mode_text);
static const struct snd_kcontrol_new wm8904_adc_snd_controls[] = ;
static const char *drc_path_text[] = ;
static const struct soc_enum drc_path =
SOC_ENUM_SINGLE(WM8904_DRC_0, 14, 2, drc_path_text);
static const struct snd_kcontrol_new wm8904_dac_snd_controls[] = ;
static const struct snd_kcontrol_new wm8904_snd_controls[] = ;
static const struct snd_kcontrol_new wm8904_eq_controls[] = ;
static int cp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int sysclk_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int out_pga_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const char *lin_text[] = ;
static const struct soc_enum lin_enum =
SOC_ENUM_SINGLE(WM8904_ANALOGUE_LEFT_INPUT_1, 2, 3, lin_text);
static const struct snd_kcontrol_new lin_mux =
SOC_DAPM_ENUM("Left Capture Mux", lin_enum);
static const struct soc_enum lin_inv_enum =
SOC_ENUM_SINGLE(WM8904_ANALOGUE_LEFT_INPUT_1, 4, 3, lin_text);
static const struct snd_kcontrol_new lin_inv_mux =
SOC_DAPM_ENUM("Left Capture Inveting Mux", lin_inv_enum);
static const char *rin_text[] = ;
static const struct soc_enum rin_enum =
SOC_ENUM_SINGLE(WM8904_ANALOGUE_RIGHT_INPUT_1, 2, 3, rin_text);
static const struct snd_kcontrol_new rin_mux =
SOC_DAPM_ENUM("Right Capture Mux", rin_enum);
static const struct soc_enum rin_inv_enum =
SOC_ENUM_SINGLE(WM8904_ANALOGUE_RIGHT_INPUT_1, 4, 3, rin_text);
static const struct snd_kcontrol_new rin_inv_mux =
SOC_DAPM_ENUM("Right Capture Inveting Mux", rin_inv_enum);
static const char *aif_text[] = ;
static const struct soc_enum aifoutl_enum =
SOC_ENUM_SINGLE(WM8904_AUDIO_INTERFACE_0, 7, 2, aif_text);
static const struct snd_kcontrol_new aifoutl_mux =
SOC_DAPM_ENUM("AIFOUTL Mux", aifoutl_enum);
static const struct soc_enum aifoutr_enum =
SOC_ENUM_SINGLE(WM8904_AUDIO_INTERFACE_0, 6, 2, aif_text);
static const struct snd_kcontrol_new aifoutr_mux =
SOC_DAPM_ENUM("AIFOUTR Mux", aifoutr_enum);
static const struct soc_enum aifinl_enum =
SOC_ENUM_SINGLE(WM8904_AUDIO_INTERFACE_0, 5, 2, aif_text);
static const struct snd_kcontrol_new aifinl_mux =
SOC_DAPM_ENUM("AIFINL Mux", aifinl_enum);
static const struct soc_enum aifinr_enum =
SOC_ENUM_SINGLE(WM8904_AUDIO_INTERFACE_0, 4, 2, aif_text);
static const struct snd_kcontrol_new aifinr_mux =
SOC_DAPM_ENUM("AIFINR Mux", aifinr_enum);
static const struct snd_soc_dapm_widget wm8904_core_dapm_widgets[] = ;
static const struct snd_soc_dapm_widget wm8904_adc_dapm_widgets[] = ;
static const struct snd_soc_dapm_widget wm8904_dac_dapm_widgets[] = ;
static const char *out_mux_text[] = ;
static const struct soc_enum hpl_enum =
SOC_ENUM_SINGLE(WM8904_ANALOGUE_OUT12_ZC, 3, 2, out_mux_text);
static const struct snd_kcontrol_new hpl_mux =
SOC_DAPM_ENUM("HPL Mux", hpl_enum);
static const struct soc_enum hpr_enum =
SOC_ENUM_SINGLE(WM8904_ANALOGUE_OUT12_ZC, 2, 2, out_mux_text);
static const struct snd_kcontrol_new hpr_mux =
SOC_DAPM_ENUM("HPR Mux", hpr_enum);
static const struct soc_enum linel_enum =
SOC_ENUM_SINGLE(WM8904_ANALOGUE_OUT12_ZC, 1, 2, out_mux_text);
static const struct snd_kcontrol_new linel_mux =
SOC_DAPM_ENUM("LINEL Mux", linel_enum);
static const struct soc_enum liner_enum =
SOC_ENUM_SINGLE(WM8904_ANALOGUE_OUT12_ZC, 0, 2, out_mux_text);
static const struct snd_kcontrol_new liner_mux =
SOC_DAPM_ENUM("LINEL Mux", liner_enum);
static const char *sidetone_text[] = ;
static const struct soc_enum dacl_sidetone_enum =
SOC_ENUM_SINGLE(WM8904_DAC_DIGITAL_0, 2, 3, sidetone_text);
static const struct snd_kcontrol_new dacl_sidetone_mux =
SOC_DAPM_ENUM("Left Sidetone Mux", dacl_sidetone_enum);
static const struct soc_enum dacr_sidetone_enum =
SOC_ENUM_SINGLE(WM8904_DAC_DIGITAL_0, 0, 3, sidetone_text);
static const struct snd_kcontrol_new dacr_sidetone_mux =
SOC_DAPM_ENUM("Right Sidetone Mux", dacr_sidetone_enum);
static const struct snd_soc_dapm_widget wm8904_dapm_widgets[] = ;
static const struct snd_soc_dapm_route core_intercon[] = ;
static const struct snd_soc_dapm_route adc_intercon[] = ;
static const struct snd_soc_dapm_route dac_intercon[] = ;
static const struct snd_soc_dapm_route wm8904_intercon[] = ;
static const struct snd_soc_dapm_route wm8912_intercon[] = ;
static int wm8904_add_widgets(struct snd_soc_codec *codec)
static struct  clk_sys_rates[] = ;
static struct  sample_rates[] = ;
static struct  bclk_divs[] = ;
static int wm8904_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8904_set_sysclk(struct snd_soc_dai *dai, int clk_id,
unsigned int freq, int dir)
static int wm8904_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static int wm8904_set_tdm_slot(struct snd_soc_dai *dai, unsigned int tx_mask,
unsigned int rx_mask, int slots, int slot_width)
struct _fll_div ;
#define FIXED_FLL_SIZE ((1 << 16) * 10)
static struct  fll_fratios[] = ;
static int fll_factors(struct _fll_div *fll_div, unsigned int Fref,
unsigned int Fout)
static int wm8904_set_fll(struct snd_soc_dai *dai, int fll_id, int source,
unsigned int Fref, unsigned int Fout)
static int wm8904_digital_mute(struct snd_soc_dai *codec_dai, int mute)
static void wm8904_sync_cache(struct snd_soc_codec *codec)
static int wm8904_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8904_RATES SNDRV_PCM_RATE_8000_96000
#define WM8904_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8904_dai_ops = ;
static struct snd_soc_dai_driver wm8904_dai = ;
static int wm8904_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8904_resume(struct snd_soc_codec *codec)
#define wm8904_suspend NULL
#define wm8904_resume NULL
static void wm8904_handle_retune_mobile_pdata(struct snd_soc_codec *codec)
static void wm8904_handle_pdata(struct snd_soc_codec *codec)
static int wm8904_probe(struct snd_soc_codec *codec)
static int wm8904_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8904 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8904_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8904_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8904_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8904_i2c_id);
static struct i2c_driver wm8904_i2c_driver = ;
static int __init wm8904_modinit(void)
module_init(wm8904_modinit);
static void __exit wm8904_exit(void)
module_exit(wm8904_exit);
MODULE_DESCRIPTION("ASoC WM8904 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
