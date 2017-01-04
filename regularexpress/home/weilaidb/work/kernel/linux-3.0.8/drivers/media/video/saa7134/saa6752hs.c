#define MPEG_VIDEO_TARGET_BITRATE_MAX  27000
#define MPEG_VIDEO_MAX_BITRATE_MAX     27000
#define MPEG_TOTAL_TARGET_BITRATE_MAX  27000
#define MPEG_PID_MAX ((1 << 14) - 1)
MODULE_DESCRIPTION("device driver for saa6752hs MPEG2 encoder");
MODULE_AUTHOR("Andrew de Quincey");
MODULE_LICENSE("GPL");
enum saa6752hs_videoformat ;
struct saa6752hs_mpeg_params ;
static const struct v4l2_format v4l2_format_table[] =
;
struct saa6752hs_state ;
enum saa6752hs_command ;
static inline struct saa6752hs_state *to_state(struct v4l2_subdev *sd)
static u8 PAT[] = ;
static u8 PMT[] = ;
static u8 PMT_AC3[] = ;
static struct saa6752hs_mpeg_params param_defaults =
;
static int saa6752hs_chip_command(struct i2c_client *client,
enum saa6752hs_command command)
static inline void set_reg8(struct i2c_client *client, uint8_t reg, uint8_t val)
static inline void set_reg16(struct i2c_client *client, uint8_t reg, uint16_t val)
static int saa6752hs_set_bitrate(struct i2c_client *client,
struct saa6752hs_state *h)
static int get_ctrl(int has_ac3, struct saa6752hs_mpeg_params *params,
struct v4l2_ext_control *ctrl)
static int handle_ctrl(int has_ac3, struct saa6752hs_mpeg_params *params,
struct v4l2_ext_control *ctrl, int set)
static int saa6752hs_queryctrl(struct v4l2_subdev *sd, struct v4l2_queryctrl *qctrl)
static int saa6752hs_querymenu(struct v4l2_subdev *sd, struct v4l2_querymenu *qmenu)
static int saa6752hs_init(struct v4l2_subdev *sd, u32 leading_null_bytes)
static int saa6752hs_do_ext_ctrls(struct v4l2_subdev *sd, struct v4l2_ext_controls *ctrls, int set)
static int saa6752hs_s_ext_ctrls(struct v4l2_subdev *sd, struct v4l2_ext_controls *ctrls)
static int saa6752hs_try_ext_ctrls(struct v4l2_subdev *sd, struct v4l2_ext_controls *ctrls)
static int saa6752hs_g_ext_ctrls(struct v4l2_subdev *sd, struct v4l2_ext_controls *ctrls)
static int saa6752hs_g_mbus_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *f)
static int saa6752hs_s_mbus_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *f)
static int saa6752hs_s_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int saa6752hs_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops saa6752hs_core_ops = ;
static const struct v4l2_subdev_video_ops saa6752hs_video_ops = ;
static const struct v4l2_subdev_ops saa6752hs_ops = ;
static int saa6752hs_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int saa6752hs_remove(struct i2c_client *client)
static const struct i2c_device_id saa6752hs_id[] = ;
MODULE_DEVICE_TABLE(i2c, saa6752hs_id);
static struct i2c_driver saa6752hs_driver = ;
static __init int init_saa6752hs(void)
static __exit void exit_saa6752hs(void)
module_init(init_saa6752hs);
module_exit(exit_saa6752hs);
