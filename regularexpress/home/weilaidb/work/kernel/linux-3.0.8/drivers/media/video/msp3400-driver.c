MODULE_DESCRIPTION("device driver for msp34xx TV sound processor");
MODULE_AUTHOR("Gerd Knorr");
MODULE_LICENSE("GPL");
static int opmode   = OPMODE_AUTO;
int msp_debug;
int msp_once;
int msp_amsound;
int msp_standard = 1;
int msp_dolby;
int msp_stereo_thresh = 0x190;
module_param(opmode,           int, 0444);
module_param_named(once, msp_once,                      bool, 0644);
module_param_named(debug, msp_debug,                    int,  0644);
module_param_named(stereo_threshold, msp_stereo_thresh, int,  0644);
module_param_named(standard, msp_standard,              int,  0644);
module_param_named(amsound, msp_amsound,                bool, 0644);
module_param_named(dolby, msp_dolby,                    bool, 0644);
MODULE_PARM_DESC(opmode, "Forces a MSP3400 opmode. 0=Manual, 1=Autodetect, 2=Autodetect and autoselect");
MODULE_PARM_DESC(once, "No continuous stereo monitoring");
MODULE_PARM_DESC(debug, "Enable debug messages [0-3]");
MODULE_PARM_DESC(stereo_threshold, "Sets signal threshold to activate stereo");
MODULE_PARM_DESC(standard, "Specify audio standard: 32 = NTSC, 64 = radio, Default: Autodetect");
MODULE_PARM_DESC(amsound, "Hardwire AM sound at 6.5Hz (France), FM can autoscan");
MODULE_PARM_DESC(dolby, "Activates Dolby processing");
#define I2C_MSP_CONTROL 0x00
#define I2C_MSP_DEM     0x10
#define I2C_MSP_DSP     0x12
int msp_reset(struct i2c_client *client)
static int msp_read(struct i2c_client *client, int dev, int addr)
int msp_read_dem(struct i2c_client *client, int addr)
int msp_read_dsp(struct i2c_client *client, int addr)
static int msp_write(struct i2c_client *client, int dev, int addr, int val)
int msp_write_dem(struct i2c_client *client, int addr, int val)
int msp_write_dsp(struct i2c_client *client, int addr, int val)
static int scarts[3][9] = ;
static char *scart_names[] = ;
void msp_set_scart(struct i2c_client *client, int in, int out)
static void msp_wake_thread(struct i2c_client *client)
int msp_sleep(struct msp_state *state, int timeout)
static int msp_s_ctrl(struct v4l2_ctrl *ctrl)
void msp_update_volume(struct msp_state *state)
static int msp_s_radio(struct v4l2_subdev *sd)
static int msp_s_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *freq)
static int msp_s_std(struct v4l2_subdev *sd, v4l2_std_id id)
static int msp_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int msp_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int msp_s_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int msp_s_i2s_clock_freq(struct v4l2_subdev *sd, u32 freq)
static int msp_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int msp_log_status(struct v4l2_subdev *sd)
static int msp_suspend(struct i2c_client *client, pm_message_t state)
static int msp_resume(struct i2c_client *client)
static const struct v4l2_ctrl_ops msp_ctrl_ops = ;
static const struct v4l2_subdev_core_ops msp_core_ops = ;
static const struct v4l2_subdev_tuner_ops msp_tuner_ops = ;
static const struct v4l2_subdev_audio_ops msp_audio_ops = ;
static const struct v4l2_subdev_ops msp_ops = ;
static int msp_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int msp_remove(struct i2c_client *client)
static const struct i2c_device_id msp_id[] = ;
MODULE_DEVICE_TABLE(i2c, msp_id);
static struct i2c_driver msp_driver = ;
static __init int init_msp(void)
static __exit void exit_msp(void)
module_init(init_msp);
module_exit(exit_msp);
