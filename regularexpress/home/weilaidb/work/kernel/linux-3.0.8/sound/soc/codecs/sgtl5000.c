#define SGTL5000_DAP_REG_OFFSET	0x0100
#define SGTL5000_MAX_REG_OFFSET	0x013A
static const u16 sgtl5000_regs[SGTL5000_MAX_REG_OFFSET] =  ;
enum sgtl5000_regulator_supplies ;
static const char *supply_names[SGTL5000_SUPPLY_NUM] = ;
#define LDO_CONSUMER_NAME	"VDDD_LDO"
#define LDO_VOLTAGE		1200000
static struct regulator_consumer_supply ldo_consumer[] = ;
static struct regulator_init_data ldo_init_data = ;
struct ldo_regulator ;
struct sgtl5000_priv ;
static int mic_bias_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int small_pop_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const char *adc_mux_text[] = ;
static const struct soc_enum adc_enum =
SOC_ENUM_SINGLE(SGTL5000_CHIP_ANA_CTRL, 2, 2, adc_mux_text);
static const struct snd_kcontrol_new adc_mux =
SOC_DAPM_ENUM("Capture Mux", adc_enum);
static const char *dac_mux_text[] = ;
static const struct soc_enum dac_enum =
SOC_ENUM_SINGLE(SGTL5000_CHIP_ANA_CTRL, 6, 2, dac_mux_text);
static const struct snd_kcontrol_new dac_mux =
SOC_DAPM_ENUM("Headphone Mux", dac_enum);
static const struct snd_soc_dapm_widget sgtl5000_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int dac_info_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int dac_get_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int dac_put_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(capture_6db_attenuate, -600, 600, 0);
static const unsigned int mic_gain_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(headphone_volume, -5150, 50, 0);
static const struct snd_kcontrol_new sgtl5000_snd_controls[] = ;
static int sgtl5000_digital_mute(struct snd_soc_dai *codec_dai, int mute)
static int sgtl5000_set_dai_fmt(struct snd_soc_dai *codec_dai, unsigned int fmt)
static int sgtl5000_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int sgtl5000_set_clock(struct snd_soc_codec *codec, int frame_rate)
static int sgtl5000_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int ldo_regulator_is_enabled(struct regulator_dev *dev)
static int ldo_regulator_enable(struct regulator_dev *dev)
static int ldo_regulator_disable(struct regulator_dev *dev)
static int ldo_regulator_get_voltage(struct regulator_dev *dev)
static struct regulator_ops ldo_regulator_ops = ;
static int ldo_regulator_register(struct snd_soc_codec *codec,
struct regulator_init_data *init_data,
int voltage)
static int ldo_regulator_remove(struct snd_soc_codec *codec)
static int ldo_regulator_register(struct snd_soc_codec *codec,
struct regulator_init_data *init_data,
int voltage)
static int ldo_regulator_remove(struct snd_soc_codec *codec)
static int sgtl5000_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define SGTL5000_FORMATS (SNDRV_PCM_FMTBIT_S16_LE |\
SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE |\
SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops sgtl5000_ops = ;
static struct snd_soc_dai_driver sgtl5000_dai = ;
static int sgtl5000_volatile_register(struct snd_soc_codec *codec,
unsigned int reg)
static int sgtl5000_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int sgtl5000_restore_regs(struct snd_soc_codec *codec)
static int sgtl5000_resume(struct snd_soc_codec *codec)
#define sgtl5000_suspend NULL
#define sgtl5000_resume  NULL
static int sgtl5000_set_power_regs(struct snd_soc_codec *codec)
static int sgtl5000_enable_regulators(struct snd_soc_codec *codec)
static int sgtl5000_probe(struct snd_soc_codec *codec)
static int sgtl5000_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver sgtl5000_driver = ;
static __devinit int sgtl5000_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static __devexit int sgtl5000_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id sgtl5000_id[] = ;
MODULE_DEVICE_TABLE(i2c, sgtl5000_id);
static struct i2c_driver sgtl5000_i2c_driver = ;
static int __init sgtl5000_modinit(void)
module_init(sgtl5000_modinit);
static void __exit sgtl5000_exit(void)
module_exit(sgtl5000_exit);
MODULE_DESCRIPTION("Freescale SGTL5000 ALSA SoC Codec Driver");
MODULE_AUTHOR("Zeng Zhaoming <zhaoming.zeng@freescale.com>");
MODULE_LICENSE("GPL");
