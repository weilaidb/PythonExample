#define WM8962_NUM_SUPPLIES 8
static const char *wm8962_supply_names[WM8962_NUM_SUPPLIES] = ;
struct wm8962_priv ;
#define WM8962_REGULATOR_EVENT(n) \
static int wm8962_regulator_event_##n(struct notifier_block *nb, \
unsigned long event, void *data)	\
WM8962_REGULATOR_EVENT(0)
WM8962_REGULATOR_EVENT(1)
WM8962_REGULATOR_EVENT(2)
WM8962_REGULATOR_EVENT(3)
WM8962_REGULATOR_EVENT(4)
WM8962_REGULATOR_EVENT(5)
WM8962_REGULATOR_EVENT(6)
WM8962_REGULATOR_EVENT(7)
static const u16 wm8962_reg[WM8962_MAX_REGISTER + 1] = ;
static const struct wm8962_reg_access  wm8962_reg_access[WM8962_MAX_REGISTER + 1] = ;
static int wm8962_volatile_register(struct snd_soc_codec *codec, unsigned int reg)
static int wm8962_readable_register(struct snd_soc_codec *codec, unsigned int reg)
static int wm8962_reset(struct snd_soc_codec *codec)
static const DECLARE_TLV_DB_SCALE(inpga_tlv, -2325, 75, 0);
static const DECLARE_TLV_DB_SCALE(mixin_tlv, -1500, 300, 0);
static const unsigned int mixinpga_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(beep_tlv, -9600, 600, 1);
static const DECLARE_TLV_DB_SCALE(digital_tlv, -7200, 75, 1);
static const DECLARE_TLV_DB_SCALE(st_tlv, -3600, 300, 0);
static const DECLARE_TLV_DB_SCALE(inmix_tlv, -600, 600, 0);
static const DECLARE_TLV_DB_SCALE(bypass_tlv, -1500, 300, 0);
static const DECLARE_TLV_DB_SCALE(out_tlv, -12100, 100, 1);
static const DECLARE_TLV_DB_SCALE(hp_tlv, -700, 100, 0);
static const unsigned int classd_tlv[] = ;
static int wm8962_put_hp_sw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8962_put_spk_sw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const char *cap_hpf_mode_text[] = ;
static const struct soc_enum cap_hpf_mode =
SOC_ENUM_SINGLE(WM8962_ADC_DAC_CONTROL_2, 10, 2, cap_hpf_mode_text);
static const struct snd_kcontrol_new wm8962_snd_controls[] = ;
static const struct snd_kcontrol_new wm8962_spk_mono_controls[] = ;
static const struct snd_kcontrol_new wm8962_spk_stereo_controls[] = ;
static int sysclk_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int cp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int hp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int out_pga_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const char *st_text[] = ;
static const struct soc_enum str_enum =
SOC_ENUM_SINGLE(WM8962_DAC_DSP_MIXING_1, 2, 3, st_text);
static const struct snd_kcontrol_new str_mux =
SOC_DAPM_ENUM("Right Sidetone", str_enum);
static const struct soc_enum stl_enum =
SOC_ENUM_SINGLE(WM8962_DAC_DSP_MIXING_2, 2, 3, st_text);
static const struct snd_kcontrol_new stl_mux =
SOC_DAPM_ENUM("Left Sidetone", stl_enum);
static const char *outmux_text[] = ;
static const struct soc_enum spkoutr_enum =
SOC_ENUM_SINGLE(WM8962_SPEAKER_MIXER_2, 7, 2, outmux_text);
static const struct snd_kcontrol_new spkoutr_mux =
SOC_DAPM_ENUM("SPKOUTR Mux", spkoutr_enum);
static const struct soc_enum spkoutl_enum =
SOC_ENUM_SINGLE(WM8962_SPEAKER_MIXER_1, 7, 2, outmux_text);
static const struct snd_kcontrol_new spkoutl_mux =
SOC_DAPM_ENUM("SPKOUTL Mux", spkoutl_enum);
static const struct soc_enum hpoutr_enum =
SOC_ENUM_SINGLE(WM8962_HEADPHONE_MIXER_2, 7, 2, outmux_text);
static const struct snd_kcontrol_new hpoutr_mux =
SOC_DAPM_ENUM("HPOUTR Mux", hpoutr_enum);
static const struct soc_enum hpoutl_enum =
SOC_ENUM_SINGLE(WM8962_HEADPHONE_MIXER_1, 7, 2, outmux_text);
static const struct snd_kcontrol_new hpoutl_mux =
SOC_DAPM_ENUM("HPOUTL Mux", hpoutl_enum);
static const struct snd_kcontrol_new inpgal[] = ;
static const struct snd_kcontrol_new inpgar[] = ;
static const struct snd_kcontrol_new mixinl[] = ;
static const struct snd_kcontrol_new mixinr[] = ;
static const struct snd_kcontrol_new hpmixl[] = ;
static const struct snd_kcontrol_new hpmixr[] = ;
static const struct snd_kcontrol_new spkmixl[] = ;
static const struct snd_kcontrol_new spkmixr[] = ;
static const struct snd_soc_dapm_widget wm8962_dapm_widgets[] = ;
static const struct snd_soc_dapm_widget wm8962_dapm_spk_mono_widgets[] = ;
static const struct snd_soc_dapm_widget wm8962_dapm_spk_stereo_widgets[] = ;
static const struct snd_soc_dapm_route wm8962_intercon[] = ;
static const struct snd_soc_dapm_route wm8962_spk_mono_intercon[] = ;
static const struct snd_soc_dapm_route wm8962_spk_stereo_intercon[] = ;
static int wm8962_add_widgets(struct snd_soc_codec *codec)
static void wm8962_sync_cache(struct snd_soc_codec *codec)
static const int bclk_divs[] = ;
static void wm8962_configure_bclk(struct snd_soc_codec *codec)
static int wm8962_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static const struct  sr_vals[] = ;
static const int sysclk_rates[] = ;
static int wm8962_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8962_set_dai_sysclk(struct snd_soc_dai *dai, int clk_id,
unsigned int freq, int dir)
static int wm8962_set_dai_fmt(struct snd_soc_dai *dai, unsigned int fmt)
struct _fll_div ;
#define FIXED_FLL_SIZE ((1 << 16) * 10)
static struct  fll_fratios[] = ;
static int fll_factors(struct _fll_div *fll_div, unsigned int Fref,
unsigned int Fout)
static int wm8962_set_fll(struct snd_soc_codec *codec, int fll_id, int source,
unsigned int Fref, unsigned int Fout)
static int wm8962_mute(struct snd_soc_dai *dai, int mute)
#define WM8962_RATES SNDRV_PCM_RATE_8000_96000
#define WM8962_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8962_dai_ops = ;
static struct snd_soc_dai_driver wm8962_dai = ;
static void wm8962_mic_work(struct work_struct *work)
static irqreturn_t wm8962_irq(int irq, void *data)
int wm8962_mic_detect(struct snd_soc_codec *codec, struct snd_soc_jack *jack)
EXPORT_SYMBOL_GPL(wm8962_mic_detect);
static int wm8962_resume(struct snd_soc_codec *codec)
#define wm8962_resume NULL
#if defined(CONFIG_INPUT) || defined(CONFIG_INPUT_MODULE)
static int beep_rates[] = ;
static void wm8962_beep_work(struct work_struct *work)
static int wm8962_beep_event(struct input_dev *dev, unsigned int type,
unsigned int code, int hz)
static ssize_t wm8962_beep_set(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(beep, 0200, NULL, wm8962_beep_set);
static void wm8962_init_beep(struct snd_soc_codec *codec)
static void wm8962_free_beep(struct snd_soc_codec *codec)
static void wm8962_init_beep(struct snd_soc_codec *codec)
static void wm8962_free_beep(struct snd_soc_codec *codec)
static void wm8962_set_gpio_mode(struct snd_soc_codec *codec, int gpio)
static inline struct wm8962_priv *gpio_to_wm8962(struct gpio_chip *chip)
static int wm8962_gpio_request(struct gpio_chip *chip, unsigned offset)
static void wm8962_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int wm8962_gpio_direction_out(struct gpio_chip *chip,
unsigned offset, int value)
static struct gpio_chip wm8962_template_chip = ;
static void wm8962_init_gpio(struct snd_soc_codec *codec)
static void wm8962_free_gpio(struct snd_soc_codec *codec)
static void wm8962_init_gpio(struct snd_soc_codec *codec)
static void wm8962_free_gpio(struct snd_soc_codec *codec)
static int wm8962_probe(struct snd_soc_codec *codec)
static int wm8962_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8962 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8962_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8962_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8962_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8962_i2c_id);
static struct i2c_driver wm8962_i2c_driver = ;
static int __init wm8962_modinit(void)
module_init(wm8962_modinit);
static void __exit wm8962_exit(void)
module_exit(wm8962_exit);
MODULE_DESCRIPTION("ASoC WM8962 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
