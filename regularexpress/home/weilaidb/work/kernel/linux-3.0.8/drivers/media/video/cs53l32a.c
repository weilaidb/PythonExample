MODULE_DESCRIPTION("i2c device driver for cs53l32a Audio ADC");
MODULE_AUTHOR("Martin Vaughan");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Debugging messages, 0=Off (default), 1=On");
struct cs53l32a_state ;
static inline struct cs53l32a_state *to_state(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static int cs53l32a_write(struct v4l2_subdev *sd, u8 reg, u8 value)
static int cs53l32a_read(struct v4l2_subdev *sd, u8 reg)
static int cs53l32a_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int cs53l32a_s_ctrl(struct v4l2_ctrl *ctrl)
static int cs53l32a_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int cs53l32a_log_status(struct v4l2_subdev *sd)
static const struct v4l2_ctrl_ops cs53l32a_ctrl_ops = ;
static const struct v4l2_subdev_core_ops cs53l32a_core_ops = ;
static const struct v4l2_subdev_audio_ops cs53l32a_audio_ops = ;
static const struct v4l2_subdev_ops cs53l32a_ops = ;
static int cs53l32a_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int cs53l32a_remove(struct i2c_client *client)
static const struct i2c_device_id cs53l32a_id[] = ;
MODULE_DEVICE_TABLE(i2c, cs53l32a_id);
static struct i2c_driver cs53l32a_driver = ;
static __init int init_cs53l32a(void)
static __exit void exit_cs53l32a(void)
module_init(init_cs53l32a);
module_exit(exit_cs53l32a);
