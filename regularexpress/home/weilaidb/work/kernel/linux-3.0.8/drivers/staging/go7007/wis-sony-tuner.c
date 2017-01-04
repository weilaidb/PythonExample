#define IF_I2C_ADDR	0x43
#define MPX_I2C_ADDR	0x44
static v4l2_std_id force_band;
static char force_band_str[] = "-";
module_param_string(force_band, force_band_str, sizeof(force_band_str), 0644);
static int force_mpx_mode = -1;
module_param(force_mpx_mode, int, 0644);
struct sony_tunertype ;
static struct sony_tunertype sony_tuners[] = ;
struct wis_sony_tuner ;
static int set_freq(struct i2c_client *client, int freq)
static int mpx_write(struct i2c_client *client, int dev, int addr, int val)
static struct  mpx_audio_modes[] = ;
#define MPX_NUM_MODES	ARRAY_SIZE(mpx_audio_modes)
static int mpx_setup(struct i2c_client *client)
static int set_if(struct i2c_client *client)
static int tuner_command(struct i2c_client *client, unsigned int cmd, void *arg)
return 0;
}
static int wis_sony_tuner_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int wis_sony_tuner_remove(struct i2c_client *client)
static const struct i2c_device_id wis_sony_tuner_id[] = ;
MODULE_DEVICE_TABLE(i2c, wis_sony_tuner_id);
static struct i2c_driver wis_sony_tuner_driver = ;
static int __init wis_sony_tuner_init(void)
static void __exit wis_sony_tuner_cleanup(void)
module_init(wis_sony_tuner_init);
module_exit(wis_sony_tuner_cleanup);
MODULE_LICENSE("GPL v2");
