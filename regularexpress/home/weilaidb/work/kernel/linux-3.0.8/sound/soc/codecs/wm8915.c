#define WM8915_AIFS 2
#define HPOUT1L 1
#define HPOUT1R 2
#define HPOUT2L 4
#define HPOUT2R 8
#define WM8915_NUM_SUPPLIES 6
static const char *wm8915_supply_names[WM8915_NUM_SUPPLIES] = ;
struct wm8915_priv ;
#define WM8915_REGULATOR_EVENT(n) \
static int wm8915_regulator_event_##n(struct notifier_block *nb, \
unsigned long event, void *data)	\
WM8915_REGULATOR_EVENT(0)
WM8915_REGULATOR_EVENT(1)
WM8915_REGULATOR_EVENT(2)
WM8915_REGULATOR_EVENT(3)
WM8915_REGULATOR_EVENT(4)
WM8915_REGULATOR_EVENT(5)
static const u16 wm8915_reg[WM8915_MAX_REGISTER] = ;
static const DECLARE_TLV_DB_SCALE(inpga_tlv, 0, 100, 0);
static const DECLARE_TLV_DB_SCALE(sidetone_tlv, -3600, 150, 0);
static const DECLARE_TLV_DB_SCALE(digital_tlv, -7200, 75, 1);
static const DECLARE_TLV_DB_SCALE(out_digital_tlv, -1200, 150, 0);
static const DECLARE_TLV_DB_SCALE(out_tlv, -900, 75, 0);
static const DECLARE_TLV_DB_SCALE(spk_tlv, -900, 150, 0);
static const DECLARE_TLV_DB_SCALE(eq_tlv, -1200, 100, 0);
static const char *sidetone_hpf_text[] = ;
static const struct soc_enum sidetone_hpf =
SOC_ENUM_SINGLE(WM8915_SIDETONE, 7, 6, sidetone_hpf_text);
static const char *hpf_mode_text[] = ;
static const struct soc_enum dsp1tx_hpf_mode =
SOC_ENUM_SINGLE(WM8915_DSP1_TX_FILTERS, 3, 3, hpf_mode_text);
static const struct soc_enum dsp2tx_hpf_mode =
SOC_ENUM_SINGLE(WM8915_DSP2_TX_FILTERS, 3, 3, hpf_mode_text);
static const char *hpf_cutoff_text[] = ;
static const struct soc_enum dsp1tx_hpf_cutoff =
SOC_ENUM_SINGLE(WM8915_DSP1_TX_FILTERS, 0, 7, hpf_cutoff_text);
static const struct soc_enum dsp2tx_hpf_cutoff =
SOC_ENUM_SINGLE(WM8915_DSP2_TX_FILTERS, 0, 7, hpf_cutoff_text);
static void wm8915_set_retune_mobile(struct snd_soc_codec *codec, int block)
static int wm8915_get_retune_mobile_block(const char *name)
static int wm8915_put_retune_mobile_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8915_get_retune_mobile_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new wm8915_snd_controls[] = ;
static const struct snd_kcontrol_new wm8915_eq_controls[] = ;
static int cp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int rmv_short_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static void wait_for_dc_servo(struct snd_soc_codec *codec, u16 mask)
static void wm8915_seq_notifier(struct snd_soc_dapm_context *dapm,
enum snd_soc_dapm_type event, int subseq)
static int dcs_start(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const char *sidetone_text[] = ;
static const struct soc_enum left_sidetone_enum =
SOC_ENUM_SINGLE(WM8915_SIDETONE, 0, 2, sidetone_text);
static const struct snd_kcontrol_new left_sidetone =
SOC_DAPM_ENUM("Left Sidetone", left_sidetone_enum);
static const struct soc_enum right_sidetone_enum =
SOC_ENUM_SINGLE(WM8915_SIDETONE, 1, 2, sidetone_text);
static const struct snd_kcontrol_new right_sidetone =
SOC_DAPM_ENUM("Right Sidetone", right_sidetone_enum);
static const char *spk_text[] = ;
static const struct soc_enum spkl_enum =
SOC_ENUM_SINGLE(WM8915_LEFT_PDM_SPEAKER, 0, 4, spk_text);
static const struct snd_kcontrol_new spkl_mux =
SOC_DAPM_ENUM("SPKL", spkl_enum);
static const struct soc_enum spkr_enum =
SOC_ENUM_SINGLE(WM8915_RIGHT_PDM_SPEAKER, 0, 4, spk_text);
static const struct snd_kcontrol_new spkr_mux =
SOC_DAPM_ENUM("SPKR", spkr_enum);
static const char *dsp1rx_text[] = ;
static const struct soc_enum dsp1rx_enum =
SOC_ENUM_SINGLE(WM8915_POWER_MANAGEMENT_8, 0, 2, dsp1rx_text);
static const struct snd_kcontrol_new dsp1rx =
SOC_DAPM_ENUM("DSP1RX", dsp1rx_enum);
static const char *dsp2rx_text[] = ;
static const struct soc_enum dsp2rx_enum =
SOC_ENUM_SINGLE(WM8915_POWER_MANAGEMENT_8, 4, 2, dsp2rx_text);
static const struct snd_kcontrol_new dsp2rx =
SOC_DAPM_ENUM("DSP2RX", dsp2rx_enum);
static const char *aif2tx_text[] = ;
static const struct soc_enum aif2tx_enum =
SOC_ENUM_SINGLE(WM8915_POWER_MANAGEMENT_8, 6, 3, aif2tx_text);
static const struct snd_kcontrol_new aif2tx =
SOC_DAPM_ENUM("AIF2TX", aif2tx_enum);
static const char *inmux_text[] = ;
static const struct soc_enum in1_enum =
SOC_ENUM_SINGLE(WM8915_POWER_MANAGEMENT_7, 0, 3, inmux_text);
static const struct snd_kcontrol_new in1_mux =
SOC_DAPM_ENUM("IN1 Mux", in1_enum);
static const struct soc_enum in2_enum =
SOC_ENUM_SINGLE(WM8915_POWER_MANAGEMENT_7, 4, 3, inmux_text);
static const struct snd_kcontrol_new in2_mux =
SOC_DAPM_ENUM("IN2 Mux", in2_enum);
static const struct snd_kcontrol_new dac2r_mix[] = ;
static const struct snd_kcontrol_new dac2l_mix[] = ;
static const struct snd_kcontrol_new dac1r_mix[] = ;
static const struct snd_kcontrol_new dac1l_mix[] = ;
static const struct snd_kcontrol_new dsp1txl[] = ;
static const struct snd_kcontrol_new dsp1txr[] = ;
static const struct snd_kcontrol_new dsp2txl[] = ;
static const struct snd_kcontrol_new dsp2txr[] = ;
static const struct snd_soc_dapm_widget wm8915_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm8915_dapm_routes[] = ;
static int wm8915_readable_register(struct snd_soc_codec *codec,
unsigned int reg)
static int wm8915_volatile_register(struct snd_soc_codec *codec,
unsigned int reg)
static int wm8915_reset(struct snd_soc_codec *codec)
static int wm8915_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm8915_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static const int bclk_divs[] = ;
static const int dsp_divs[] = ;
static int wm8915_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8915_set_sysclk(struct snd_soc_dai *dai,
int clk_id, unsigned int freq, int dir)
struct _fll_div ;
static struct  fll_fratios[] = ;
static int fll_factors(struct _fll_div *fll_div, unsigned int Fref,
unsigned int Fout)
static int wm8915_set_fll(struct snd_soc_codec *codec, int fll_id, int source,
unsigned int Fref, unsigned int Fout)
static inline struct wm8915_priv *gpio_to_wm8915(struct gpio_chip *chip)
static void wm8915_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int wm8915_gpio_direction_out(struct gpio_chip *chip,
unsigned offset, int value)
static int wm8915_gpio_get(struct gpio_chip *chip, unsigned offset)
static int wm8915_gpio_direction_in(struct gpio_chip *chip, unsigned offset)
static struct gpio_chip wm8915_template_chip = ;
static void wm8915_init_gpio(struct snd_soc_codec *codec)
static void wm8915_free_gpio(struct snd_soc_codec *codec)
static void wm8915_init_gpio(struct snd_soc_codec *codec)
static void wm8915_free_gpio(struct snd_soc_codec *codec)
int wm8915_detect(struct snd_soc_codec *codec, struct snd_soc_jack *jack,
wm8915_polarity_fn polarity_cb)
EXPORT_SYMBOL_GPL(wm8915_detect);
static void wm8915_micd(struct snd_soc_codec *codec)
static irqreturn_t wm8915_irq(int irq, void *data)
static void wm8915_retune_mobile_pdata(struct snd_soc_codec *codec)
static int wm8915_probe(struct snd_soc_codec *codec)
static int wm8915_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8915 = ;
#define WM8915_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_16000 |\
SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_48000)
#define WM8915_FORMATS (SNDRV_PCM_FMTBIT_S8 | SNDRV_PCM_FMTBIT_S16_LE |\
SNDRV_PCM_FMTBIT_S20_3LE | SNDRV_PCM_FMTBIT_S24_LE |\
SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8915_dai_ops = ;
static struct snd_soc_dai_driver wm8915_dai[] = ;
static __devinit int wm8915_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8915_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8915_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8915_i2c_id);
static struct i2c_driver wm8915_i2c_driver = ;
static int __init wm8915_modinit(void)
module_init(wm8915_modinit);
static void __exit wm8915_exit(void)
module_exit(wm8915_exit);
MODULE_DESCRIPTION("ASoC WM8915 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
