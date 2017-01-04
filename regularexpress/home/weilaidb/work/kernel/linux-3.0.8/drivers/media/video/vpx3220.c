MODULE_DESCRIPTION("vpx3220a/vpx3216b/vpx3214c video decoder driver");
MODULE_AUTHOR("Laurent Pinchart");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
#define VPX_TIMEOUT_COUNT  10
struct vpx3220 ;
static inline struct vpx3220 *to_vpx3220(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static char *inputs[] = ;
static inline int vpx3220_write(struct v4l2_subdev *sd, u8 reg, u8 value)
static inline int vpx3220_read(struct v4l2_subdev *sd, u8 reg)
static int vpx3220_fp_status(struct v4l2_subdev *sd)
static int vpx3220_fp_write(struct v4l2_subdev *sd, u8 fpaddr, u16 data)
static u16 vpx3220_fp_read(struct v4l2_subdev *sd, u16 fpaddr)
static int vpx3220_write_block(struct v4l2_subdev *sd, const u8 *data, unsigned int len)
static int vpx3220_write_fp_block(struct v4l2_subdev *sd,
const u16 *data, unsigned int len)
static const unsigned short init_ntsc[] = ;
static const unsigned short init_pal[] = ;
static const unsigned short init_secam[] = ;
static const unsigned char init_common[] = ;
static const unsigned short init_fp[] = ;
static int vpx3220_init(struct v4l2_subdev *sd, u32 val)
static int vpx3220_status(struct v4l2_subdev *sd, u32 *pstatus, v4l2_std_id *pstd)
static int vpx3220_querystd(struct v4l2_subdev *sd, v4l2_std_id *std)
static int vpx3220_g_input_status(struct v4l2_subdev *sd, u32 *status)
static int vpx3220_s_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int vpx3220_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int vpx3220_s_stream(struct v4l2_subdev *sd, int enable)
static int vpx3220_s_ctrl(struct v4l2_ctrl *ctrl)
static int vpx3220_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_ctrl_ops vpx3220_ctrl_ops = ;
static const struct v4l2_subdev_core_ops vpx3220_core_ops = ;
static const struct v4l2_subdev_video_ops vpx3220_video_ops = ;
static const struct v4l2_subdev_ops vpx3220_ops = ;
static int vpx3220_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int vpx3220_remove(struct i2c_client *client)
static const struct i2c_device_id vpx3220_id[] = ;
MODULE_DEVICE_TABLE(i2c, vpx3220_id);
static struct i2c_driver vpx3220_driver = ;
static __init int init_vpx3220(void)
static __exit void exit_vpx3220(void)
module_init(init_vpx3220);
module_exit(exit_vpx3220);
