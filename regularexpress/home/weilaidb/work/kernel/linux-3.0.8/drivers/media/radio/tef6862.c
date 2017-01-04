#define DRIVER_NAME "tef6862"
#define FREQ_MUL 16000
#define TEF6862_LO_FREQ (875 * FREQ_MUL / 10)
#define TEF6862_HI_FREQ (108 * FREQ_MUL)
#define WM_SUB_BANDWIDTH	0x0
#define WM_SUB_PLLM		0x1
#define WM_SUB_PLLL		0x2
#define WM_SUB_DAA		0x3
#define WM_SUB_AGC		0x4
#define WM_SUB_BAND		0x5
#define WM_SUB_CONTROL		0x6
#define WM_SUB_LEVEL		0x7
#define WM_SUB_IFCF		0x8
#define WM_SUB_IFCAP		0x9
#define WM_SUB_ACD		0xA
#define WM_SUB_TEST		0xF
#define MODE_BUFFER		0x0
#define MODE_PRESET		0x1
#define MODE_SEARCH		0x2
#define MODE_AF_UPDATE		0x3
#define MODE_JUMP		0x4
#define MODE_CHECK		0x5
#define MODE_LOAD		0x6
#define MODE_END		0x7
#define MODE_SHIFT		5
struct tef6862_state ;
static inline struct tef6862_state *to_state(struct v4l2_subdev *sd)
static u16 tef6862_sigstr(struct i2c_client *client)
static int tef6862_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *v)
static int tef6862_s_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *v)
static int tef6862_s_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *f)
static int tef6862_g_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *f)
static int tef6862_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_tuner_ops tef6862_tuner_ops = ;
static const struct v4l2_subdev_core_ops tef6862_core_ops = ;
static const struct v4l2_subdev_ops tef6862_ops = ;
static int __devinit tef6862_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit tef6862_remove(struct i2c_client *client)
static const struct i2c_device_id tef6862_id[] = ;
MODULE_DEVICE_TABLE(i2c, tef6862_id);
static struct i2c_driver tef6862_driver = ;
static __init int tef6862_init(void)
static __exit void tef6862_exit(void)
module_init(tef6862_init);
module_exit(tef6862_exit);
MODULE_DESCRIPTION("TEF6862 Car Radio Enhanced Selectivity Tuner");
MODULE_AUTHOR("Mocean Laboratories");
MODULE_LICENSE("GPL v2");
