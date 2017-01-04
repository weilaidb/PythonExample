static struct i2c_client *tpa6130a2_client;
struct tpa6130a2_data ;
static int tpa6130a2_i2c_read(int reg)
static int tpa6130a2_i2c_write(int reg, u8 value)
static u8 tpa6130a2_read(int reg)
static int tpa6130a2_initialize(void)
static int tpa6130a2_power(u8 power)
static int tpa6130a2_get_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tpa6130a2_put_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const unsigned int tpa6130_tlv[] = ;
static const struct snd_kcontrol_new tpa6130a2_controls[] = ;
static const unsigned int tpa6140_tlv[] = ;
static const struct snd_kcontrol_new tpa6140a2_controls[] = ;
static void tpa6130a2_channel_enable(u8 channel, int enable)
int tpa6130a2_stereo_enable(struct snd_soc_codec *codec, int enable)
EXPORT_SYMBOL_GPL(tpa6130a2_stereo_enable);
int tpa6130a2_add_controls(struct snd_soc_codec *codec)
EXPORT_SYMBOL_GPL(tpa6130a2_add_controls);
static int __devinit tpa6130a2_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit tpa6130a2_remove(struct i2c_client *client)
static const struct i2c_device_id tpa6130a2_id[] = ;
MODULE_DEVICE_TABLE(i2c, tpa6130a2_id);
static struct i2c_driver tpa6130a2_i2c_driver = ;
static int __init tpa6130a2_init(void)
static void __exit tpa6130a2_exit(void)
MODULE_AUTHOR("Peter Ujfalusi <peter.ujfalusi@ti.com>");
MODULE_DESCRIPTION("TPA6130A2 Headphone amplifier driver");
MODULE_LICENSE("GPL");
module_init(tpa6130a2_init);
module_exit(tpa6130a2_exit);
