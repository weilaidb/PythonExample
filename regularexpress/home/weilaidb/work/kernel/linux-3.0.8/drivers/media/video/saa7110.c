MODULE_DESCRIPTION("Philips SAA7110 video decoder driver");
MODULE_AUTHOR("Pauline Middelink");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
#define SAA7110_MAX_INPUT	9
#define SAA7110_MAX_OUTPUT	1
#define SAA7110_NR_REG		0x35
struct saa7110 ;
static inline struct saa7110 *to_saa7110(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static int saa7110_write(struct v4l2_subdev *sd, u8 reg, u8 value)
static int saa7110_write_block(struct v4l2_subdev *sd, const u8 *data, unsigned int len)
static inline int saa7110_read(struct v4l2_subdev *sd)
#define FRESP_06H_COMPST 0x03
#define FRESP_06H_SVIDEO 0x83
static int saa7110_selmux(struct v4l2_subdev *sd, int chan)
static const unsigned char initseq[1 + SAA7110_NR_REG] = ;
static v4l2_std_id determine_norm(struct v4l2_subdev *sd)
static int saa7110_g_input_status(struct v4l2_subdev *sd, u32 *pstatus)
static int saa7110_querystd(struct v4l2_subdev *sd, v4l2_std_id *std)
static int saa7110_s_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int saa7110_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int saa7110_s_stream(struct v4l2_subdev *sd, int enable)
static int saa7110_s_ctrl(struct v4l2_ctrl *ctrl)
static int saa7110_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_ctrl_ops saa7110_ctrl_ops = ;
static const struct v4l2_subdev_core_ops saa7110_core_ops = ;
static const struct v4l2_subdev_video_ops saa7110_video_ops = ;
static const struct v4l2_subdev_ops saa7110_ops = ;
static int saa7110_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int saa7110_remove(struct i2c_client *client)
static const struct i2c_device_id saa7110_id[] = ;
MODULE_DEVICE_TABLE(i2c, saa7110_id);
static struct i2c_driver saa7110_driver = ;
static __init int init_saa7110(void)
static __exit void exit_saa7110(void)
module_init(init_saa7110);
module_exit(exit_saa7110);
