MODULE_DESCRIPTION("tlv320aic23b driver");
MODULE_AUTHOR("Scott Alfter, Ulf Eklund, Hans Verkuil");
MODULE_LICENSE("GPL");
struct tlv320aic23b_state ;
static inline struct tlv320aic23b_state *to_state(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static int tlv320aic23b_write(struct v4l2_subdev *sd, int reg, u16 val)
static int tlv320aic23b_s_clock_freq(struct v4l2_subdev *sd, u32 freq)
static int tlv320aic23b_s_ctrl(struct v4l2_ctrl *ctrl)
static int tlv320aic23b_log_status(struct v4l2_subdev *sd)
static const struct v4l2_ctrl_ops tlv320aic23b_ctrl_ops = ;
static const struct v4l2_subdev_core_ops tlv320aic23b_core_ops = ;
static const struct v4l2_subdev_audio_ops tlv320aic23b_audio_ops = ;
static const struct v4l2_subdev_ops tlv320aic23b_ops = ;
static int tlv320aic23b_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int tlv320aic23b_remove(struct i2c_client *client)
static const struct i2c_device_id tlv320aic23b_id[] = ;
MODULE_DEVICE_TABLE(i2c, tlv320aic23b_id);
static struct i2c_driver tlv320aic23b_driver = ;
static __init int init_tlv320aic23b(void)
static __exit void exit_tlv320aic23b(void)
module_init(init_tlv320aic23b);
module_exit(exit_tlv320aic23b);
