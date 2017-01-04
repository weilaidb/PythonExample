static const struct snd_soc_dapm_widget wm1250_ev1_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm1250_ev1_dapm_routes[] = ;
static struct snd_soc_dai_driver wm1250_ev1_dai = ;
static struct snd_soc_codec_driver soc_codec_dev_wm1250_ev1 = ;
static int __devinit wm1250_ev1_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit wm1250_ev1_remove(struct i2c_client *i2c)
static const struct i2c_device_id wm1250_ev1_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm1250_ev1_i2c_id);
static struct i2c_driver wm1250_ev1_i2c_driver = ;
static int __init wm1250_ev1_modinit(void)
module_init(wm1250_ev1_modinit);
static void __exit wm1250_ev1_exit(void)
module_exit(wm1250_ev1_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("WM1250-EV1 audio I/O module driver");
MODULE_LICENSE("GPL");
