static struct i2c_client *i2c;
static u8 max9877_regs[5] = ;
static void max9877_write_regs(void)
static int max9877_get_reg(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max9877_set_reg(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max9877_get_2reg(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max9877_set_2reg(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max9877_get_out_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max9877_set_out_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max9877_get_osc_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max9877_set_osc_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const unsigned int max9877_pgain_tlv[] = ;
static const unsigned int max9877_output_tlv[] = ;
static const char *max9877_out_mode[] = ;
static const char *max9877_osc_mode[] = ;
static const struct soc_enum max9877_enum[] = ;
static const struct snd_kcontrol_new max9877_controls[] = ;
int max9877_add_controls(struct snd_soc_codec *codec)
EXPORT_SYMBOL_GPL(max9877_add_controls);
static int __devinit max9877_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static __devexit int max9877_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id max9877_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, max9877_i2c_id);
static struct i2c_driver max9877_i2c_driver = ;
static int __init max9877_init(void)
module_init(max9877_init);
static void __exit max9877_exit(void)
module_exit(max9877_exit);
MODULE_DESCRIPTION("ASoC MAX9877 amp driver");
MODULE_AUTHOR("Joonyoung Shim <jy0922.shim@samsung.com>");
MODULE_LICENSE("GPL");
