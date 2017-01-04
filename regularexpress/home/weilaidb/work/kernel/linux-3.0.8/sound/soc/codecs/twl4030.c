#define TWL4030_REG_SW_SHADOW		0x4A
#define TWL4030_CACHEREGNUM	(TWL4030_REG_SW_SHADOW + 1)
#define TWL4030_HFL_EN			0x01
#define TWL4030_HFR_EN			0x02
static const u8 twl4030_reg[TWL4030_CACHEREGNUM] = ;
struct twl4030_priv ;
static inline unsigned int twl4030_read_reg_cache(struct snd_soc_codec *codec,
unsigned int reg)
static inline void twl4030_write_reg_cache(struct snd_soc_codec *codec,
u8 reg, u8 value)
static int twl4030_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int value)
static inline void twl4030_wait_ms(int time)
static void twl4030_codec_enable(struct snd_soc_codec *codec, int enable)
static inline void twl4030_check_defaults(struct snd_soc_codec *codec)
static inline void twl4030_reset_registers(struct snd_soc_codec *codec)
static void twl4030_init_chip(struct snd_soc_codec *codec)
static void twl4030_apll_enable(struct snd_soc_codec *codec, int enable)
static const struct snd_kcontrol_new twl4030_dapm_earpiece_controls[] = ;
static const struct snd_kcontrol_new twl4030_dapm_predrivel_controls[] = ;
static const struct snd_kcontrol_new twl4030_dapm_predriver_controls[] = ;
static const struct snd_kcontrol_new twl4030_dapm_hsol_controls[] = ;
static const struct snd_kcontrol_new twl4030_dapm_hsor_controls[] = ;
static const struct snd_kcontrol_new twl4030_dapm_carkitl_controls[] = ;
static const struct snd_kcontrol_new twl4030_dapm_carkitr_controls[] = ;
static const char *twl4030_handsfreel_texts[] =
;
static const struct soc_enum twl4030_handsfreel_enum =
SOC_ENUM_SINGLE(TWL4030_REG_HFL_CTL, 0,
ARRAY_SIZE(twl4030_handsfreel_texts),
twl4030_handsfreel_texts);
static const struct snd_kcontrol_new twl4030_dapm_handsfreel_control =
SOC_DAPM_ENUM("Route", twl4030_handsfreel_enum);
static const struct snd_kcontrol_new twl4030_dapm_handsfreelmute_control =
SOC_DAPM_SINGLE("Switch", TWL4030_REG_SW_SHADOW, 0, 1, 0);
static const char *twl4030_handsfreer_texts[] =
;
static const struct soc_enum twl4030_handsfreer_enum =
SOC_ENUM_SINGLE(TWL4030_REG_HFR_CTL, 0,
ARRAY_SIZE(twl4030_handsfreer_texts),
twl4030_handsfreer_texts);
static const struct snd_kcontrol_new twl4030_dapm_handsfreer_control =
SOC_DAPM_ENUM("Route", twl4030_handsfreer_enum);
static const struct snd_kcontrol_new twl4030_dapm_handsfreermute_control =
SOC_DAPM_SINGLE("Switch", TWL4030_REG_SW_SHADOW, 1, 1, 0);
static const char *twl4030_vibra_texts[] =
;
static const struct soc_enum twl4030_vibra_enum =
SOC_ENUM_SINGLE(TWL4030_REG_VIBRA_CTL, 2,
ARRAY_SIZE(twl4030_vibra_texts),
twl4030_vibra_texts);
static const struct snd_kcontrol_new twl4030_dapm_vibra_control =
SOC_DAPM_ENUM("Route", twl4030_vibra_enum);
static const char *twl4030_vibrapath_texts[] =
;
static const struct soc_enum twl4030_vibrapath_enum =
SOC_ENUM_SINGLE(TWL4030_REG_VIBRA_CTL, 4,
ARRAY_SIZE(twl4030_vibrapath_texts),
twl4030_vibrapath_texts);
static const struct snd_kcontrol_new twl4030_dapm_vibrapath_control =
SOC_DAPM_ENUM("Route", twl4030_vibrapath_enum);
static const struct snd_kcontrol_new twl4030_dapm_analoglmic_controls[] = ;
static const struct snd_kcontrol_new twl4030_dapm_analogrmic_controls[] = ;
static const char *twl4030_micpathtx1_texts[] =
;
static const struct soc_enum twl4030_micpathtx1_enum =
SOC_ENUM_SINGLE(TWL4030_REG_ADCMICSEL, 0,
ARRAY_SIZE(twl4030_micpathtx1_texts),
twl4030_micpathtx1_texts);
static const struct snd_kcontrol_new twl4030_dapm_micpathtx1_control =
SOC_DAPM_ENUM("Route", twl4030_micpathtx1_enum);
static const char *twl4030_micpathtx2_texts[] =
;
static const struct soc_enum twl4030_micpathtx2_enum =
SOC_ENUM_SINGLE(TWL4030_REG_ADCMICSEL, 2,
ARRAY_SIZE(twl4030_micpathtx2_texts),
twl4030_micpathtx2_texts);
static const struct snd_kcontrol_new twl4030_dapm_micpathtx2_control =
SOC_DAPM_ENUM("Route", twl4030_micpathtx2_enum);
static const struct snd_kcontrol_new twl4030_dapm_abypassr1_control =
SOC_DAPM_SINGLE("Switch", TWL4030_REG_ARXR1_APGA_CTL, 2, 1, 0);
static const struct snd_kcontrol_new twl4030_dapm_abypassl1_control =
SOC_DAPM_SINGLE("Switch", TWL4030_REG_ARXL1_APGA_CTL, 2, 1, 0);
static const struct snd_kcontrol_new twl4030_dapm_abypassr2_control =
SOC_DAPM_SINGLE("Switch", TWL4030_REG_ARXR2_APGA_CTL, 2, 1, 0);
static const struct snd_kcontrol_new twl4030_dapm_abypassl2_control =
SOC_DAPM_SINGLE("Switch", TWL4030_REG_ARXL2_APGA_CTL, 2, 1, 0);
static const struct snd_kcontrol_new twl4030_dapm_abypassv_control =
SOC_DAPM_SINGLE("Switch", TWL4030_REG_VDL_APGA_CTL, 2, 1, 0);
static const unsigned int twl4030_dapm_dbypass_tlv[] = ;
static const struct snd_kcontrol_new twl4030_dapm_dbypassl_control =
SOC_DAPM_SINGLE_TLV("Volume",
TWL4030_REG_ATX2ARXPGA, 3, 7, 0,
twl4030_dapm_dbypass_tlv);
static const struct snd_kcontrol_new twl4030_dapm_dbypassr_control =
SOC_DAPM_SINGLE_TLV("Volume",
TWL4030_REG_ATX2ARXPGA, 0, 7, 0,
twl4030_dapm_dbypass_tlv);
static DECLARE_TLV_DB_SCALE(twl4030_dapm_dbypassv_tlv, -5100, 100, 1);
static const struct snd_kcontrol_new twl4030_dapm_dbypassv_control =
SOC_DAPM_SINGLE_TLV("Volume",
TWL4030_REG_VSTPGA, 0, 0x29, 0,
twl4030_dapm_dbypassv_tlv);
#define TWL4030_OUTPUT_PGA(pin_name, reg, mask)				\
static int pin_name##pga_event(struct snd_soc_dapm_widget *w,		\
struct snd_kcontrol *kcontrol, int event)		\
TWL4030_OUTPUT_PGA(earpiece, TWL4030_REG_EAR_CTL, TWL4030_EAR_GAIN);
TWL4030_OUTPUT_PGA(predrivel, TWL4030_REG_PREDL_CTL, TWL4030_PREDL_GAIN);
TWL4030_OUTPUT_PGA(predriver, TWL4030_REG_PREDR_CTL, TWL4030_PREDR_GAIN);
TWL4030_OUTPUT_PGA(carkitl, TWL4030_REG_PRECKL_CTL, TWL4030_PRECKL_GAIN);
TWL4030_OUTPUT_PGA(carkitr, TWL4030_REG_PRECKR_CTL, TWL4030_PRECKR_GAIN);
static void handsfree_ramp(struct snd_soc_codec *codec, int reg, int ramp)
static int handsfreelpga_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int handsfreerpga_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int vibramux_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int apll_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int aif_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static void headset_ramp(struct snd_soc_codec *codec, int ramp)
static int headsetlpga_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int headsetrpga_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int digimic_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
#define SOC_DOUBLE_TLV_TWL4030(xname, xreg, shift_left, shift_right, xmax,\
xinvert, tlv_array) \
#define SOC_DOUBLE_R_TLV_TWL4030(xname, reg_left, reg_right, xshift, xmax,\
xinvert, tlv_array) \
#define SOC_SINGLE_TLV_TWL4030(xname, xreg, xshift, xmax, xinvert, tlv_array) \
SOC_DOUBLE_TLV_TWL4030(xname, xreg, xshift, xshift, xmax, \
xinvert, tlv_array)
static int snd_soc_get_volsw_twl4030(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_soc_put_volsw_twl4030(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_soc_get_volsw_r2_twl4030(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_soc_put_volsw_r2_twl4030(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const char *twl4030_op_modes_texts[] = ;
static const struct soc_enum twl4030_op_modes_enum =
SOC_ENUM_SINGLE(TWL4030_REG_CODEC_MODE, 0,
ARRAY_SIZE(twl4030_op_modes_texts),
twl4030_op_modes_texts);
static int snd_soc_put_twl4030_opmode_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static DECLARE_TLV_DB_SCALE(digital_fine_tlv, -6300, 100, 1);
static DECLARE_TLV_DB_SCALE(digital_coarse_tlv, 0, 600, 0);
static DECLARE_TLV_DB_SCALE(digital_voice_downlink_tlv, -3700, 100, 1);
static DECLARE_TLV_DB_SCALE(analog_tlv, -2400, 200, 0);
static DECLARE_TLV_DB_SCALE(output_tvl, -1200, 600, 1);
static DECLARE_TLV_DB_SCALE(output_ear_tvl, -600, 600, 1);
static DECLARE_TLV_DB_SCALE(digital_capture_tlv, 0, 100, 0);
static DECLARE_TLV_DB_SCALE(input_gain_tlv, 0, 600, 0);
static const char *twl4030_avadc_clk_priority_texts[] = ;
static const struct soc_enum twl4030_avadc_clk_priority_enum =
SOC_ENUM_SINGLE(TWL4030_REG_AVADC_CTL, 2,
ARRAY_SIZE(twl4030_avadc_clk_priority_texts),
twl4030_avadc_clk_priority_texts);
static const char *twl4030_rampdelay_texts[] = ;
static const struct soc_enum twl4030_rampdelay_enum =
SOC_ENUM_SINGLE(TWL4030_REG_HS_POPN_SET, 2,
ARRAY_SIZE(twl4030_rampdelay_texts),
twl4030_rampdelay_texts);
static const char *twl4030_vibradirmode_texts[] = ;
static const struct soc_enum twl4030_vibradirmode_enum =
SOC_ENUM_SINGLE(TWL4030_REG_VIBRA_CTL, 5,
ARRAY_SIZE(twl4030_vibradirmode_texts),
twl4030_vibradirmode_texts);
static const char *twl4030_vibradir_texts[] = ;
static const struct soc_enum twl4030_vibradir_enum =
SOC_ENUM_SINGLE(TWL4030_REG_VIBRA_CTL, 1,
ARRAY_SIZE(twl4030_vibradir_texts),
twl4030_vibradir_texts);
static const char *twl4030_digimicswap_texts[] = ;
static const struct soc_enum twl4030_digimicswap_enum =
SOC_ENUM_SINGLE(TWL4030_REG_MISC_SET_1, 0,
ARRAY_SIZE(twl4030_digimicswap_texts),
twl4030_digimicswap_texts);
static const struct snd_kcontrol_new twl4030_snd_controls[] = ;
static const struct snd_soc_dapm_widget twl4030_dapm_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static int twl4030_add_widgets(struct snd_soc_codec *codec)
static int twl4030_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static void twl4030_constraints(struct twl4030_priv *twl4030,
struct snd_pcm_substream *mst_substream)
static void twl4030_tdm_enable(struct snd_soc_codec *codec, int direction,
int enable)
static int twl4030_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void twl4030_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int twl4030_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int twl4030_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int twl4030_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int twl4030_set_tristate(struct snd_soc_dai *dai, int tristate)
static void twl4030_voice_enable(struct snd_soc_codec *codec, int direction,
int enable)
static int twl4030_voice_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void twl4030_voice_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int twl4030_voice_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params, struct snd_soc_dai *dai)
static int twl4030_voice_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int twl4030_voice_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int twl4030_voice_set_tristate(struct snd_soc_dai *dai, int tristate)
#define TWL4030_RATES	 (SNDRV_PCM_RATE_8000_48000)
#define TWL4030_FORMATS	 (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops twl4030_dai_hifi_ops = ;
static struct snd_soc_dai_ops twl4030_dai_voice_ops = ;
static struct snd_soc_dai_driver twl4030_dai[] = ;
static int twl4030_soc_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int twl4030_soc_resume(struct snd_soc_codec *codec)
static int twl4030_soc_probe(struct snd_soc_codec *codec)
static int twl4030_soc_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_twl4030 = ;
static int __devinit twl4030_codec_probe(struct platform_device *pdev)
static int __devexit twl4030_codec_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:twl4030-codec");
static struct platform_driver twl4030_codec_driver = ;
static int __init twl4030_modinit(void)
module_init(twl4030_modinit);
static void __exit twl4030_exit(void)
module_exit(twl4030_exit);
MODULE_DESCRIPTION("ASoC TWL4030 codec driver");
MODULE_AUTHOR("Steve Sakoman");
MODULE_LICENSE("GPL");
