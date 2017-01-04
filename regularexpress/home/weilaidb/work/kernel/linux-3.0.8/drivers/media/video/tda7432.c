# define VIDEO_AUDIO_BALANCE 32
MODULE_AUTHOR("Eric Sandeen <eric_sandeen@bigfoot.com>");
MODULE_DESCRIPTION("bttv driver for the tda7432 audio processor chip");
MODULE_LICENSE("GPL");
static int maxvol;
static int loudness;
static int debug;
module_param(debug, int, S_IRUGO | S_IWUSR);
module_param(loudness, int, S_IRUGO);
MODULE_PARM_DESC(maxvol,"Set maximium volume to +20db (0), default is 0db(1)");
module_param(maxvol, int, S_IRUGO | S_IWUSR);
struct tda7432 ;
static inline struct tda7432 *to_state(struct v4l2_subdev *sd)
#define TDA7432_IN	0x00
#define TDA7432_VL	0x01
#define TDA7432_TN	0x02
#define TDA7432_LF	0x03
#define TDA7432_LR	0x04
#define TDA7432_RF	0x05
#define TDA7432_RR	0x06
#define TDA7432_LD	0x07
#define TDA7432_STEREO_IN	0
#define TDA7432_MONO_IN		2
#define TDA7432_BASS_SYM	1 << 3
#define TDA7432_BASS_NORM	1 << 4
#define	TDA7432_VOL_0DB		0x20
#define TDA7432_LD_ON		1 << 7
#define TDA7432_TREBLE_0DB		0xf
#define TDA7432_TREBLE			7
#define TDA7432_TREBLE_GAIN		1 << 3
#define TDA7432_BASS_0DB		0xf
#define TDA7432_BASS			7 << 4
#define TDA7432_BASS_GAIN		1 << 7
#define TDA7432_ATTEN_0DB	0x00
#define TDA7432_MUTE        0x1 << 5
static int tda7432_write(struct v4l2_subdev *sd, int subaddr, int val)
static int tda7432_set(struct v4l2_subdev *sd)
static void do_tda7432_init(struct v4l2_subdev *sd)
static int tda7432_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int tda7432_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int tda7432_queryctrl(struct v4l2_subdev *sd, struct v4l2_queryctrl *qc)
static const struct v4l2_subdev_core_ops tda7432_core_ops = ;
static const struct v4l2_subdev_ops tda7432_ops = ;
static int tda7432_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int tda7432_remove(struct i2c_client *client)
static const struct i2c_device_id tda7432_id[] = ;
MODULE_DEVICE_TABLE(i2c, tda7432_id);
static struct i2c_driver tda7432_driver = ;
static __init int init_tda7432(void)
static __exit void exit_tda7432(void)
module_init(init_tda7432);
module_exit(exit_tda7432);
