#define AIC3X_NUM_SUPPLIES	4
static const char *aic3x_supply_names[AIC3X_NUM_SUPPLIES] = ;
static LIST_HEAD(reset_list);
struct aic3x_priv;
struct aic3x_disable_nb ;
struct aic3x_priv ;
static const u8 aic3x_reg[AIC3X_CACHEREGNUM] = ;
static int aic3x_read(struct snd_soc_codec *codec, unsigned int reg,
u8 *value)
#define SOC_DAPM_SINGLE_AIC3X(xname, reg, shift, mask, invert) \
static int snd_soc_dapm_put_volsw_aic3x(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const char *aic3x_left_dac_mux[] = ;
static const char *aic3x_right_dac_mux[] = ;
static const char *aic3x_left_hpcom_mux[] =
;
static const char *aic3x_right_hpcom_mux[] =
;
static const char *aic3x_linein_mode_mux[] = ;
static const char *aic3x_adc_hpf[] =
;
#define LDAC_ENUM	0
#define RDAC_ENUM	1
#define LHPCOM_ENUM	2
#define RHPCOM_ENUM	3
#define LINE1L_ENUM	4
#define LINE1R_ENUM	5
#define LINE2L_ENUM	6
#define LINE2R_ENUM	7
#define ADC_HPF_ENUM	8
static const struct soc_enum aic3x_enum[] = ;
static DECLARE_TLV_DB_SCALE(dac_tlv, -6350, 50, 0);
static DECLARE_TLV_DB_SCALE(adc_tlv, 0, 50, 0);
static DECLARE_TLV_DB_SCALE(output_stage_tlv, -5900, 50, 1);
static const struct snd_kcontrol_new aic3x_snd_controls[] = ;
static DECLARE_TLV_DB_SCALE(classd_amp_tlv, 0, 600, 0);
static const struct snd_kcontrol_new aic3x_classd_amp_gain_ctrl =
SOC_DOUBLE_TLV("Class-D Amplifier Gain", CLASSD_CTRL, 6, 4, 3, 0, classd_amp_tlv);
static const struct snd_kcontrol_new aic3x_left_dac_mux_controls =
SOC_DAPM_ENUM("Route", aic3x_enum[LDAC_ENUM]);
static const struct snd_kcontrol_new aic3x_right_dac_mux_controls =
SOC_DAPM_ENUM("Route", aic3x_enum[RDAC_ENUM]);
static const struct snd_kcontrol_new aic3x_left_hpcom_mux_controls =
SOC_DAPM_ENUM("Route", aic3x_enum[LHPCOM_ENUM]);
static const struct snd_kcontrol_new aic3x_right_hpcom_mux_controls =
SOC_DAPM_ENUM("Route", aic3x_enum[RHPCOM_ENUM]);
static const struct snd_kcontrol_new aic3x_left_line_mixer_controls[] = ;
static const struct snd_kcontrol_new aic3x_right_line_mixer_controls[] = ;
static const struct snd_kcontrol_new aic3x_mono_mixer_controls[] = ;
static const struct snd_kcontrol_new aic3x_left_hp_mixer_controls[] = ;
static const struct snd_kcontrol_new aic3x_right_hp_mixer_controls[] = ;
static const struct snd_kcontrol_new aic3x_left_hpcom_mixer_controls[] = ;
static const struct snd_kcontrol_new aic3x_right_hpcom_mixer_controls[] = ;
static const struct snd_kcontrol_new aic3x_left_pga_mixer_controls[] = ;
static const struct snd_kcontrol_new aic3x_right_pga_mixer_controls[] = ;
static const struct snd_kcontrol_new aic3x_left_line1_mux_controls =
SOC_DAPM_ENUM("Route", aic3x_enum[LINE1L_ENUM]);
static const struct snd_kcontrol_new aic3x_right_line1_mux_controls =
SOC_DAPM_ENUM("Route", aic3x_enum[LINE1R_ENUM]);
static const struct snd_kcontrol_new aic3x_left_line2_mux_controls =
SOC_DAPM_ENUM("Route", aic3x_enum[LINE2L_ENUM]);
static const struct snd_kcontrol_new aic3x_right_line2_mux_controls =
SOC_DAPM_ENUM("Route", aic3x_enum[LINE2R_ENUM]);
static const struct snd_soc_dapm_widget aic3x_dapm_widgets[] = ;
static const struct snd_soc_dapm_widget aic3007_dapm_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static const struct snd_soc_dapm_route intercon_3007[] = ;
static int aic3x_add_widgets(struct snd_soc_codec *codec)
static int aic3x_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int aic3x_mute(struct snd_soc_dai *dai, int mute)
static int aic3x_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int aic3x_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int aic3x_init_3007(struct snd_soc_codec *codec)
static int aic3x_regulator_event(struct notifier_block *nb,
unsigned long event, void *data)
static int aic3x_set_power(struct snd_soc_codec *codec, int power)
static int aic3x_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
void aic3x_set_gpio(struct snd_soc_codec *codec, int gpio, int state)
EXPORT_SYMBOL_GPL(aic3x_set_gpio);
int aic3x_get_gpio(struct snd_soc_codec *codec, int gpio)
EXPORT_SYMBOL_GPL(aic3x_get_gpio);
void aic3x_set_headset_detection(struct snd_soc_codec *codec, int detect,
int headset_debounce, int button_debounce)
EXPORT_SYMBOL_GPL(aic3x_set_headset_detection);
int aic3x_headset_detected(struct snd_soc_codec *codec)
EXPORT_SYMBOL_GPL(aic3x_headset_detected);
int aic3x_button_pressed(struct snd_soc_codec *codec)
EXPORT_SYMBOL_GPL(aic3x_button_pressed);
#define AIC3X_RATES	SNDRV_PCM_RATE_8000_96000
#define AIC3X_FORMATS	(SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE | \
SNDRV_PCM_FMTBIT_S24_3LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops aic3x_dai_ops = ;
static struct snd_soc_dai_driver aic3x_dai = ;
static int aic3x_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int aic3x_resume(struct snd_soc_codec *codec)
static int aic3x_init(struct snd_soc_codec *codec)
static bool aic3x_is_shared_reset(struct aic3x_priv *aic3x)
static int aic3x_probe(struct snd_soc_codec *codec)
static int aic3x_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_aic3x = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static const struct i2c_device_id aic3x_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, aic3x_i2c_id);
static int aic3x_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int aic3x_i2c_remove(struct i2c_client *client)
static struct i2c_driver aic3x_i2c_driver = ;
static int __init aic3x_modinit(void)
module_init(aic3x_modinit);
static void __exit aic3x_exit(void)
module_exit(aic3x_exit);
MODULE_DESCRIPTION("ASoC TLV320AIC3X codec driver");
MODULE_AUTHOR("Vladimir Barinov");
MODULE_LICENSE("GPL");
