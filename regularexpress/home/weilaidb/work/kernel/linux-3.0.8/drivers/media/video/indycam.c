#define INDYCAM_MODULE_VERSION "0.0.5"
MODULE_DESCRIPTION("SGI IndyCam driver");
MODULE_VERSION(INDYCAM_MODULE_VERSION);
MODULE_AUTHOR("Mikael Nousiainen <tmnousia@cc.hut.fi>");
MODULE_LICENSE("GPL");
#define dprintk(x...) printk("IndyCam: " x);
#define indycam_regdump(client) indycam_regdump_debug(client)
#define dprintk(x...)
#define indycam_regdump(client)
struct indycam ;
static inline struct indycam *to_indycam(struct v4l2_subdev *sd)
static const u8 initseq[] = ;
static int indycam_read_reg(struct v4l2_subdev *sd, u8 reg, u8 *value)
static int indycam_write_reg(struct v4l2_subdev *sd, u8 reg, u8 value)
static int indycam_write_block(struct v4l2_subdev *sd, u8 reg,
u8 length, u8 *data)
static void indycam_regdump_debug(struct v4l2_subdev *sd)
static int indycam_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int indycam_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int indycam_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops indycam_core_ops = ;
static const struct v4l2_subdev_ops indycam_ops = ;
static int indycam_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int indycam_remove(struct i2c_client *client)
static const struct i2c_device_id indycam_id[] = ;
MODULE_DEVICE_TABLE(i2c, indycam_id);
static struct i2c_driver indycam_driver = ;
static __init int init_indycam(void)
static __exit void exit_indycam(void)
module_init(init_indycam);
module_exit(exit_indycam);
