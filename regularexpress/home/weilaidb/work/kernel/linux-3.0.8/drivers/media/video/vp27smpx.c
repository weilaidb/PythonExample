MODULE_DESCRIPTION("vp27smpx driver");
MODULE_AUTHOR("Hans Verkuil");
MODULE_LICENSE("GPL");
struct vp27smpx_state ;
static inline struct vp27smpx_state *to_state(struct v4l2_subdev *sd)
static void vp27smpx_set_audmode(struct v4l2_subdev *sd, u32 audmode)
static int vp27smpx_s_radio(struct v4l2_subdev *sd)
static int vp27smpx_s_std(struct v4l2_subdev *sd, v4l2_std_id norm)
static int vp27smpx_s_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int vp27smpx_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int vp27smpx_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int vp27smpx_log_status(struct v4l2_subdev *sd)
static const struct v4l2_subdev_core_ops vp27smpx_core_ops = ;
static const struct v4l2_subdev_tuner_ops vp27smpx_tuner_ops = ;
static const struct v4l2_subdev_ops vp27smpx_ops = ;
static int vp27smpx_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int vp27smpx_remove(struct i2c_client *client)
static const struct i2c_device_id vp27smpx_id[] = ;
MODULE_DEVICE_TABLE(i2c, vp27smpx_id);
static struct i2c_driver vp27smpx_driver = ;
static __init int init_vp27smpx(void)
static __exit void exit_vp27smpx(void)
module_init(init_vp27smpx);
module_exit(exit_vp27smpx);
