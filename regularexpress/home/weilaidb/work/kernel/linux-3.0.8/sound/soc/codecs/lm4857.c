struct lm4857 ;
static const uint8_t lm4857_default_regs[] = ;
#define LM4857_MVOL 0
#define LM4857_LVOL 1
#define LM4857_RVOL 2
#define LM4857_CTRL 3
#define LM4857_3D 5
#define LM4857_WAKEUP 5
#define LM4857_EPGAIN 4
static int lm4857_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static unsigned int lm4857_read(struct snd_soc_codec *codec,
unsigned int reg)
static int lm4857_get_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int lm4857_set_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int lm4857_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static const char *lm4857_mode[] = ;
static const struct soc_enum lm4857_mode_enum =
SOC_ENUM_SINGLE_EXT(ARRAY_SIZE(lm4857_mode), lm4857_mode);
static const struct snd_soc_dapm_widget lm4857_dapm_widgets[] = ;
static const DECLARE_TLV_DB_SCALE(stereo_tlv, -4050, 150, 0);
static const DECLARE_TLV_DB_SCALE(mono_tlv, -3450, 150, 0);
static const struct snd_kcontrol_new lm4857_controls[] = ;
static const struct snd_soc_dapm_route lm4857_routes[] = ;
static int lm4857_probe(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_lm4857 = ;
static int __devinit lm4857_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit lm4857_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id lm4857_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm4857_i2c_id);
static struct i2c_driver lm4857_i2c_driver = ;
static int __init lm4857_init(void)
module_init(lm4857_init);
static void __exit lm4857_exit(void)
module_exit(lm4857_exit);
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_DESCRIPTION("LM4857 amplifier driver");
MODULE_LICENSE("GPL");
