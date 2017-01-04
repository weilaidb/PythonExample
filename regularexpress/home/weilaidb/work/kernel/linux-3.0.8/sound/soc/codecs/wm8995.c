#define WM8995_NUM_SUPPLIES 8
static const char *wm8995_supply_names[WM8995_NUM_SUPPLIES] = ;
static const u16 wm8995_reg_defs[WM8995_MAX_REGISTER + 1] = ;
struct fll_config ;
struct wm8995_priv ;
#define WM8995_REGULATOR_EVENT(n) \
static int wm8995_regulator_event_##n(struct notifier_block *nb, \
unsigned long event, void *data)    \
WM8995_REGULATOR_EVENT(0)
WM8995_REGULATOR_EVENT(1)
WM8995_REGULATOR_EVENT(2)
WM8995_REGULATOR_EVENT(3)
WM8995_REGULATOR_EVENT(4)
WM8995_REGULATOR_EVENT(5)
WM8995_REGULATOR_EVENT(6)
WM8995_REGULATOR_EVENT(7)
static const DECLARE_TLV_DB_SCALE(digital_tlv, -7200, 75, 1);
static const DECLARE_TLV_DB_SCALE(in1lr_pga_tlv, -1650, 150, 0);
static const DECLARE_TLV_DB_SCALE(in1l_boost_tlv, 0, 600, 0);
static const DECLARE_TLV_DB_SCALE(sidetone_tlv, -3600, 150, 0);
static const char *in1l_text[] = ;
static const SOC_ENUM_SINGLE_DECL(in1l_enum, WM8995_LEFT_LINE_INPUT_CONTROL,
2, in1l_text);
static const char *in1r_text[] = ;
static const SOC_ENUM_SINGLE_DECL(in1r_enum, WM8995_LEFT_LINE_INPUT_CONTROL,
0, in1r_text);
static const char *dmic_src_text[] = ;
static const SOC_ENUM_SINGLE_DECL(dmic_src1_enum, WM8995_POWER_MANAGEMENT_5,
8, dmic_src_text);
static const SOC_ENUM_SINGLE_DECL(dmic_src2_enum, WM8995_POWER_MANAGEMENT_5,
6, dmic_src_text);
static const struct snd_kcontrol_new wm8995_snd_controls[] = ;
static void wm8995_update_class_w(struct snd_soc_codec *codec)
static int check_clk_sys(struct snd_soc_dapm_widget *source,
struct snd_soc_dapm_widget *sink)
static int wm8995_put_class_w(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int hp_supply_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static void dc_servo_cmd(struct snd_soc_codec *codec,
unsigned int reg, unsigned int val, unsigned int mask)
static int hp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int configure_aif_clock(struct snd_soc_codec *codec, int aif)
static int configure_clock(struct snd_soc_codec *codec)
static int clk_sys_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const char *sidetone_text[] = ;
static const struct soc_enum sidetone1_enum =
SOC_ENUM_SINGLE(WM8995_SIDETONE, 0, 2, sidetone_text);
static const struct snd_kcontrol_new sidetone1_mux =
SOC_DAPM_ENUM("Left Sidetone Mux", sidetone1_enum);
static const struct soc_enum sidetone2_enum =
SOC_ENUM_SINGLE(WM8995_SIDETONE, 1, 2, sidetone_text);
static const struct snd_kcontrol_new sidetone2_mux =
SOC_DAPM_ENUM("Right Sidetone Mux", sidetone2_enum);
static const struct snd_kcontrol_new aif1adc1l_mix[] = ;
static const struct snd_kcontrol_new aif1adc1r_mix[] = ;
static const struct snd_kcontrol_new aif1adc2l_mix[] = ;
static const struct snd_kcontrol_new aif1adc2r_mix[] = ;
static const struct snd_kcontrol_new dac1l_mix[] = ;
static const struct snd_kcontrol_new dac1r_mix[] = ;
static const struct snd_kcontrol_new aif2dac2l_mix[] = ;
static const struct snd_kcontrol_new aif2dac2r_mix[] = ;
static const struct snd_kcontrol_new in1l_pga =
SOC_DAPM_SINGLE("IN1L Switch", WM8995_POWER_MANAGEMENT_2, 5, 1, 0);
static const struct snd_kcontrol_new in1r_pga =
SOC_DAPM_SINGLE("IN1R Switch", WM8995_POWER_MANAGEMENT_2, 4, 1, 0);
static const char *adc_mux_text[] = ;
static const struct soc_enum adc_enum =
SOC_ENUM_SINGLE(0, 0, 2, adc_mux_text);
static const struct snd_kcontrol_new adcl_mux =
SOC_DAPM_ENUM_VIRT("ADCL Mux", adc_enum);
static const struct snd_kcontrol_new adcr_mux =
SOC_DAPM_ENUM_VIRT("ADCR Mux", adc_enum);
static const char *spk_src_text[] = ;
static const SOC_ENUM_SINGLE_DECL(spk1l_src_enum, WM8995_LEFT_PDM_SPEAKER_1,
0, spk_src_text);
static const SOC_ENUM_SINGLE_DECL(spk1r_src_enum, WM8995_RIGHT_PDM_SPEAKER_1,
0, spk_src_text);
static const SOC_ENUM_SINGLE_DECL(spk2l_src_enum, WM8995_LEFT_PDM_SPEAKER_2,
0, spk_src_text);
static const SOC_ENUM_SINGLE_DECL(spk2r_src_enum, WM8995_RIGHT_PDM_SPEAKER_2,
0, spk_src_text);
static const struct snd_kcontrol_new spk1l_mux =
SOC_DAPM_ENUM("SPK1L SRC", spk1l_src_enum);
static const struct snd_kcontrol_new spk1r_mux =
SOC_DAPM_ENUM("SPK1R SRC", spk1r_src_enum);
static const struct snd_kcontrol_new spk2l_mux =
SOC_DAPM_ENUM("SPK2L SRC", spk2l_src_enum);
static const struct snd_kcontrol_new spk2r_mux =
SOC_DAPM_ENUM("SPK2R SRC", spk2r_src_enum);
static const struct snd_soc_dapm_widget wm8995_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm8995_intercon[] = ;
static int wm8995_volatile(struct snd_soc_codec *codec, unsigned int reg)
static int wm8995_aif_mute(struct snd_soc_dai *dai, int mute)
static int wm8995_set_dai_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static const int srs[] = ;
static const int fs_ratios[] = ;
static const int bclk_divs[] = ;
static int wm8995_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8995_set_tristate(struct snd_soc_dai *codec_dai, int tristate)
#define FIXED_FLL_SIZE ((1 << 16) * 10)
struct fll_div ;
static int wm8995_get_fll_config(struct fll_div *fll,
int freq_in, int freq_out)
static int wm8995_set_fll(struct snd_soc_dai *dai, int id,
int src, unsigned int freq_in,
unsigned int freq_out)
static int wm8995_set_dai_sysclk(struct snd_soc_dai *dai,
int clk_id, unsigned int freq, int dir)
static int wm8995_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm8995_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8995_resume(struct snd_soc_codec *codec)
#define wm8995_suspend NULL
#define wm8995_resume NULL
static int wm8995_remove(struct snd_soc_codec *codec)
static int wm8995_probe(struct snd_soc_codec *codec)
#define WM8995_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8995_aif1_dai_ops = ;
static struct snd_soc_dai_ops wm8995_aif2_dai_ops = ;
static struct snd_soc_dai_ops wm8995_aif3_dai_ops = ;
static struct snd_soc_dai_driver wm8995_dai[] = ;
static struct snd_soc_codec_driver soc_codec_dev_wm8995 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8995_spi_probe(struct spi_device *spi)
static int __devexit wm8995_spi_remove(struct spi_device *spi)
static struct spi_driver wm8995_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8995_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8995_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8995_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8995_i2c_id);
static struct i2c_driver wm8995_i2c_driver = ;
static int __init wm8995_modinit(void)
module_init(wm8995_modinit);
static void __exit wm8995_exit(void)
module_exit(wm8995_exit);
MODULE_DESCRIPTION("ASoC WM8995 driver");
MODULE_AUTHOR("Dimitris Papastamos <dp@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
