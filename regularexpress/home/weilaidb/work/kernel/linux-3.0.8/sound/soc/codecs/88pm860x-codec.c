#define MAX_NAME_LEN		20
#define REG_CACHE_SIZE		0x40
#define REG_CACHE_BASE		0xb0
#define REG_STATUS_1		0x01
#define MIC_STATUS		(1 << 7)
#define HOOK_STATUS		(1 << 6)
#define HEADSET_STATUS		(1 << 5)
#define REG_MIC_DET		0x37
#define CONTINUOUS_POLLING	(3 << 1)
#define EN_MIC_DET		(1 << 0)
#define MICDET_MASK		0x07
#define REG_HS_DET		0x38
#define EN_HS_DET		(1 << 0)
#define REG_MISC2		0x42
#define AUDIO_PLL		(1 << 5)
#define AUDIO_SECTION_RESET	(1 << 4)
#define AUDIO_SECTION_ON	(1 << 3)
#define PCM_INF2_BCLK		(1 << 6)
#define PCM_INF2_FS		(1 << 5)
#define PCM_INF2_MASTER		(1 << 4)
#define PCM_INF2_18WL		(1 << 3)
#define PCM_GENERAL_I2S		0
#define PCM_EXACT_I2S		1
#define PCM_LEFT_I2S		2
#define PCM_RIGHT_I2S		3
#define PCM_SHORT_FS		4
#define PCM_LONG_FS		5
#define PCM_MODE_MASK		7
#define I2S_EQU_BYP		(1 << 6)
#define DAC_MUTE		(1 << 7)
#define MUTE_LEFT		(1 << 6)
#define MUTE_RIGHT		(1 << 2)
#define REG_ADC_ANA_1		0xd0
#define MIC1BIAS_MASK		0x60
#define REG_EAR2		0xda
#define RSYNC_CHANGE		(1 << 2)
#define REG_SUPPLIES2		0xdc
#define LDO15_READY		(1 << 4)
#define LDO15_EN		(1 << 3)
#define CPUMP_READY		(1 << 2)
#define CPUMP_EN		(1 << 1)
#define AUDIO_EN		(1 << 0)
#define SUPPLY_MASK		(LDO15_EN | CPUMP_EN | AUDIO_EN)
#define ADC_MOD_RIGHT		(1 << 1)
#define ADC_MOD_LEFT		(1 << 0)
#define ADC_LEFT		(1 << 5)
#define ADC_RIGHT		(1 << 4)
#define DAC_LEFT		(1 << 5)
#define DAC_RIGHT		(1 << 4)
#define MODULATOR		(1 << 3)
#define REG_SHORTS		0xeb
#define CLR_SHORT_LO2		(1 << 7)
#define SHORT_LO2		(1 << 6)
#define CLR_SHORT_LO1		(1 << 5)
#define SHORT_LO1		(1 << 4)
#define CLR_SHORT_HS2		(1 << 3)
#define SHORT_HS2		(1 << 2)
#define CLR_SHORT_HS1		(1 << 1)
#define SHORT_HS1		(1 << 0)
#define PM860X_DAPM_OUTPUT(wname, wevent)	\
struct pm860x_det ;
struct pm860x_priv ;
static const DECLARE_TLV_DB_SCALE(dpga_tlv, -9450, 150, 1);
static const DECLARE_TLV_DB_SCALE(adc_tlv, -900, 300, 0);
static const unsigned int mic_tlv[] = ;
static const unsigned int aux_tlv[] = ;
static const unsigned int out_tlv[] = ;
static const unsigned int st_tlv[] = ;
struct st_gain ;
static struct st_gain st_table[] = ;
static int pm860x_volatile(unsigned int reg)
static unsigned int pm860x_read_reg_cache(struct snd_soc_codec *codec,
unsigned int reg)
static int pm860x_write_reg_cache(struct snd_soc_codec *codec,
unsigned int reg, unsigned int value)
static int snd_soc_get_volsw_2r_st(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_soc_put_volsw_2r_st(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_soc_get_volsw_2r_out(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_soc_put_volsw_2r_out(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pm860x_rsync_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int pm860x_dac_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const char *pm860x_opamp_texts[] = ;
static const char *pm860x_pa_texts[] = ;
static const struct soc_enum pm860x_hs1_opamp_enum =
SOC_ENUM_SINGLE(PM860X_HS1_CTRL, 5, 4, pm860x_opamp_texts);
static const struct soc_enum pm860x_hs2_opamp_enum =
SOC_ENUM_SINGLE(PM860X_HS2_CTRL, 5, 4, pm860x_opamp_texts);
static const struct soc_enum pm860x_hs1_pa_enum =
SOC_ENUM_SINGLE(PM860X_HS1_CTRL, 3, 4, pm860x_pa_texts);
static const struct soc_enum pm860x_hs2_pa_enum =
SOC_ENUM_SINGLE(PM860X_HS2_CTRL, 3, 4, pm860x_pa_texts);
static const struct soc_enum pm860x_lo1_opamp_enum =
SOC_ENUM_SINGLE(PM860X_LO1_CTRL, 5, 4, pm860x_opamp_texts);
static const struct soc_enum pm860x_lo2_opamp_enum =
SOC_ENUM_SINGLE(PM860X_LO2_CTRL, 5, 4, pm860x_opamp_texts);
static const struct soc_enum pm860x_lo1_pa_enum =
SOC_ENUM_SINGLE(PM860X_LO1_CTRL, 3, 4, pm860x_pa_texts);
static const struct soc_enum pm860x_lo2_pa_enum =
SOC_ENUM_SINGLE(PM860X_LO2_CTRL, 3, 4, pm860x_pa_texts);
static const struct soc_enum pm860x_spk_pa_enum =
SOC_ENUM_SINGLE(PM860X_EAR_CTRL_1, 5, 4, pm860x_pa_texts);
static const struct soc_enum pm860x_ear_pa_enum =
SOC_ENUM_SINGLE(PM860X_EAR_CTRL_2, 0, 4, pm860x_pa_texts);
static const struct soc_enum pm860x_spk_ear_opamp_enum =
SOC_ENUM_SINGLE(PM860X_EAR_CTRL_1, 3, 4, pm860x_opamp_texts);
static const struct snd_kcontrol_new pm860x_snd_controls[] = ;
static const struct snd_kcontrol_new pcm_switch_controls =
SOC_DAPM_SINGLE("Switch", PM860X_ADC_EN_2, 0, 1, 0);
static const struct snd_kcontrol_new aux1_switch_controls =
SOC_DAPM_SINGLE("Switch", PM860X_ANA_TO_ANA, 4, 1, 0);
static const struct snd_kcontrol_new aux2_switch_controls =
SOC_DAPM_SINGLE("Switch", PM860X_ANA_TO_ANA, 5, 1, 0);
static const struct snd_kcontrol_new lepa_switch_controls =
SOC_DAPM_SINGLE("Switch", PM860X_DAC_EN_2, 2, 1, 0);
static const struct snd_kcontrol_new repa_switch_controls =
SOC_DAPM_SINGLE("Switch", PM860X_DAC_EN_2, 1, 1, 0);
static const char *aif1_text[] = ;
static const struct soc_enum aif1_enum =
SOC_ENUM_SINGLE(PM860X_PCM_IFACE_3, 6, 2, aif1_text);
static const struct snd_kcontrol_new aif1_mux =
SOC_DAPM_ENUM("PCM Mux", aif1_enum);
static const char *i2s_din_text[] = ;
static const struct soc_enum i2s_din_enum =
SOC_ENUM_SINGLE(PM860X_I2S_IFACE_3, 1, 2, i2s_din_text);
static const struct snd_kcontrol_new i2s_din_mux =
SOC_DAPM_ENUM("I2S DIN Mux", i2s_din_enum);
static const char *i2s_mic_text[] = ;
static const struct soc_enum i2s_mic_enum =
SOC_ENUM_SINGLE(PM860X_I2S_IFACE_3, 4, 2, i2s_mic_text);
static const struct snd_kcontrol_new i2s_mic_mux =
SOC_DAPM_ENUM("I2S Mic Mux", i2s_mic_enum);
static const char *adcl_text[] = ;
static const struct soc_enum adcl_enum =
SOC_ENUM_SINGLE(PM860X_PCM_IFACE_3, 4, 2, adcl_text);
static const struct snd_kcontrol_new adcl_mux =
SOC_DAPM_ENUM("ADC Left Mux", adcl_enum);
static const char *adcr_text[] = ;
static const struct soc_enum adcr_enum =
SOC_ENUM_SINGLE(PM860X_PCM_IFACE_3, 2, 2, adcr_text);
static const struct snd_kcontrol_new adcr_mux =
SOC_DAPM_ENUM("ADC Right Mux", adcr_enum);
static const char *adcr_ec_text[] = ;
static const struct soc_enum adcr_ec_enum =
SOC_ENUM_SINGLE(PM860X_ADC_EN_2, 3, 2, adcr_ec_text);
static const struct snd_kcontrol_new adcr_ec_mux =
SOC_DAPM_ENUM("ADCR EC Mux", adcr_ec_enum);
static const char *ec_text[] = ;
static const struct soc_enum ec_enum =
SOC_ENUM_SINGLE(PM860X_EC_PATH, 1, 3, ec_text);
static const struct snd_kcontrol_new ec_mux =
SOC_DAPM_ENUM("EC Mux", ec_enum);
static const char *dac_text[] = ;
static const struct soc_enum dac_hs1_enum =
SOC_ENUM_SINGLE(PM860X_ANA_INPUT_SEL_1, 0, 4, dac_text);
static const struct snd_kcontrol_new dac_hs1_mux =
SOC_DAPM_ENUM("DAC HS1 Mux", dac_hs1_enum);
static const struct soc_enum dac_hs2_enum =
SOC_ENUM_SINGLE(PM860X_ANA_INPUT_SEL_1, 2, 4, dac_text);
static const struct snd_kcontrol_new dac_hs2_mux =
SOC_DAPM_ENUM("DAC HS2 Mux", dac_hs2_enum);
static const struct soc_enum dac_lo1_enum =
SOC_ENUM_SINGLE(PM860X_ANA_INPUT_SEL_1, 4, 4, dac_text);
static const struct snd_kcontrol_new dac_lo1_mux =
SOC_DAPM_ENUM("DAC LO1 Mux", dac_lo1_enum);
static const struct soc_enum dac_lo2_enum =
SOC_ENUM_SINGLE(PM860X_ANA_INPUT_SEL_1, 6, 4, dac_text);
static const struct snd_kcontrol_new dac_lo2_mux =
SOC_DAPM_ENUM("DAC LO2 Mux", dac_lo2_enum);
static const struct soc_enum dac_spk_ear_enum =
SOC_ENUM_SINGLE(PM860X_ANA_INPUT_SEL_2, 0, 4, dac_text);
static const struct snd_kcontrol_new dac_spk_ear_mux =
SOC_DAPM_ENUM("DAC SP Mux", dac_spk_ear_enum);
static const char *in_text[] = ;
static const struct soc_enum hs1_enum =
SOC_ENUM_SINGLE(PM860X_ANA_TO_ANA, 0, 2, in_text);
static const struct snd_kcontrol_new hs1_mux =
SOC_DAPM_ENUM("Headset1 Mux", hs1_enum);
static const struct soc_enum hs2_enum =
SOC_ENUM_SINGLE(PM860X_ANA_TO_ANA, 1, 2, in_text);
static const struct snd_kcontrol_new hs2_mux =
SOC_DAPM_ENUM("Headset2 Mux", hs2_enum);
static const struct soc_enum lo1_enum =
SOC_ENUM_SINGLE(PM860X_ANA_TO_ANA, 2, 2, in_text);
static const struct snd_kcontrol_new lo1_mux =
SOC_DAPM_ENUM("Lineout1 Mux", lo1_enum);
static const struct soc_enum lo2_enum =
SOC_ENUM_SINGLE(PM860X_ANA_TO_ANA, 3, 2, in_text);
static const struct snd_kcontrol_new lo2_mux =
SOC_DAPM_ENUM("Lineout2 Mux", lo2_enum);
static const char *spk_text[] = ;
static const struct soc_enum spk_enum =
SOC_ENUM_SINGLE(PM860X_ANA_TO_ANA, 6, 2, spk_text);
static const struct snd_kcontrol_new spk_demux =
SOC_DAPM_ENUM("Speaker Earpiece Demux", spk_enum);
static const char *mic_text[] = ;
static const struct soc_enum mic_enum =
SOC_ENUM_SINGLE(PM860X_ADC_ANA_4, 4, 2, mic_text);
static const struct snd_kcontrol_new mic_mux =
SOC_DAPM_ENUM("MIC Mux", mic_enum);
static const struct snd_soc_dapm_widget pm860x_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int pm860x_digital_mute(struct snd_soc_dai *codec_dai, int mute)
static int pm860x_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int pm860x_pcm_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int pm860x_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int pm860x_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int pm860x_i2s_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int pm860x_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static struct snd_soc_dai_ops pm860x_pcm_dai_ops = ;
static struct snd_soc_dai_ops pm860x_i2s_dai_ops = ;
#define PM860X_RATES	(SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_16000 |	\
SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_48000)
static struct snd_soc_dai_driver pm860x_dai[] = ;
static irqreturn_t pm860x_codec_handler(int irq, void *data)
int pm860x_hs_jack_detect(struct snd_soc_codec *codec,
struct snd_soc_jack *jack,
int det, int hook, int hs_shrt, int lo_shrt)
EXPORT_SYMBOL_GPL(pm860x_hs_jack_detect);
int pm860x_mic_jack_detect(struct snd_soc_codec *codec,
struct snd_soc_jack *jack, int det)
EXPORT_SYMBOL_GPL(pm860x_mic_jack_detect);
static int pm860x_probe(struct snd_soc_codec *codec)
static int pm860x_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_pm860x = ;
static int __devinit pm860x_codec_probe(struct platform_device *pdev)
static int __devexit pm860x_codec_remove(struct platform_device *pdev)
static struct platform_driver pm860x_codec_driver = ;
static __init int pm860x_init(void)
module_init(pm860x_init);
static __exit void pm860x_exit(void)
module_exit(pm860x_exit);
MODULE_DESCRIPTION("ASoC 88PM860x driver");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:88pm860x-codec");
