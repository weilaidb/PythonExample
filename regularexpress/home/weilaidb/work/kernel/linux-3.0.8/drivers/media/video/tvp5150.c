MODULE_DESCRIPTION("Texas Instruments TVP5150A video decoder driver");
MODULE_AUTHOR("Mauro Carvalho Chehab");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-2)");
struct tvp5150 ;
static inline struct tvp5150 *to_tvp5150(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static int tvp5150_read(struct v4l2_subdev *sd, unsigned char addr)
static inline void tvp5150_write(struct v4l2_subdev *sd, unsigned char addr,
unsigned char value)
static void dump_reg_range(struct v4l2_subdev *sd, char *s, u8 init,
const u8 end, int max_line)
static int tvp5150_log_status(struct v4l2_subdev *sd)
static inline void tvp5150_selmux(struct v4l2_subdev *sd)
;
struct i2c_reg_value ;
static const struct i2c_reg_value tvp5150_init_default[] = ;
static const struct i2c_reg_value tvp5150_init_enable[] = ;
struct tvp5150_vbi_type ;
struct i2c_vbi_ram_value ;
static struct i2c_vbi_ram_value vbi_ram_default[] =
;
static int tvp5150_write_inittab(struct v4l2_subdev *sd,
const struct i2c_reg_value *regs)
static int tvp5150_vdp_init(struct v4l2_subdev *sd,
const struct i2c_vbi_ram_value *regs)
static int tvp5150_g_sliced_vbi_cap(struct v4l2_subdev *sd,
struct v4l2_sliced_vbi_cap *cap)
static int tvp5150_set_vbi(struct v4l2_subdev *sd,
const struct i2c_vbi_ram_value *regs,
unsigned int type,u8 flags, int line,
const int fields)
static int tvp5150_get_vbi(struct v4l2_subdev *sd,
const struct i2c_vbi_ram_value *regs, int line)
static int tvp5150_set_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int tvp5150_s_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int tvp5150_reset(struct v4l2_subdev *sd, u32 val)
;
static int tvp5150_s_ctrl(struct v4l2_ctrl *ctrl)
static int tvp5150_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int tvp5150_s_raw_fmt(struct v4l2_subdev *sd, struct v4l2_vbi_format *fmt)
static int tvp5150_s_sliced_fmt(struct v4l2_subdev *sd, struct v4l2_sliced_vbi_format *svbi)
static int tvp5150_g_sliced_fmt(struct v4l2_subdev *sd, struct v4l2_sliced_vbi_format *svbi)
static int tvp5150_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static int tvp5150_g_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int tvp5150_s_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int tvp5150_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static const struct v4l2_ctrl_ops tvp5150_ctrl_ops = ;
static const struct v4l2_subdev_core_ops tvp5150_core_ops = ;
static const struct v4l2_subdev_tuner_ops tvp5150_tuner_ops = ;
static const struct v4l2_subdev_video_ops tvp5150_video_ops = ;
static const struct v4l2_subdev_vbi_ops tvp5150_vbi_ops = ;
static const struct v4l2_subdev_ops tvp5150_ops = ;
static int tvp5150_probe(struct i2c_client *c,
const struct i2c_device_id *id)
static int tvp5150_remove(struct i2c_client *c)
static const struct i2c_device_id tvp5150_id[] = ;
MODULE_DEVICE_TABLE(i2c, tvp5150_id);
static struct i2c_driver tvp5150_driver = ;
static __init int init_tvp5150(void)
static __exit void exit_tvp5150(void)
module_init(init_tvp5150);
module_exit(exit_tvp5150);
