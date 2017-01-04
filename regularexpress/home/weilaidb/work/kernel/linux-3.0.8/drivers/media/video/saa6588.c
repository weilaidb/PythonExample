static unsigned int debug;
static unsigned int xtal;
static unsigned int mmbs;
static unsigned int plvl;
static unsigned int bufblocks = 100;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debug messages");
module_param(xtal, int, 0);
MODULE_PARM_DESC(xtal, "select oscillator frequency (0..3), default 0");
module_param(mmbs, int, 0);
MODULE_PARM_DESC(mmbs, "enable MMBS mode: 0=off (default), 1=on");
module_param(plvl, int, 0);
MODULE_PARM_DESC(plvl, "select pause level (0..3), default 0");
module_param(bufblocks, int, 0);
MODULE_PARM_DESC(bufblocks, "number of buffered blocks, default 100");
MODULE_DESCRIPTION("v4l2 driver module for SAA6588 RDS decoder");
MODULE_AUTHOR("Hans J. Koch <koch@hjk-az.de>");
MODULE_LICENSE("GPL");
#define UNSET       (-1U)
#define PREFIX      "saa6588: "
#define dprintk     if (debug) printk
struct saa6588 ;
static inline struct saa6588 *to_saa6588(struct v4l2_subdev *sd)
#define cModeStandard           0x00
#define cModeFastPI             0x01
#define cModeReducedRequest     0x02
#define cModeInvalid            0x03
#define cProcessingModeRDS      0x00
#define cProcessingModeRBDS     0x04
#define cErrCorrectionNone      0x00
#define cErrCorrection2Bits     0x08
#define cErrCorrection5Bits     0x10
#define cErrCorrectionNoneRBDS  0x18
#define cSyncNormal             0x00
#define cSyncRestart            0x20
#define cSigQualityDetectOFF    0x00
#define cSigQualityDetectON     0x40
#define cSigQualityTriggered    0x00
#define cSigQualityContinous    0x80
#define cFlywheelMaxBlocksMask  0x3F
#define cFlywheelDefault        0x20
#define cPauseLevel_11mV	0x00
#define cPauseLevel_17mV        0x40
#define cPauseLevel_27mV        0x80
#define cPauseLevel_43mV        0xC0
#define cQualityDetectSensMask  0x1F
#define cQualityDetectDefault   0x0F
#define cSelectOscFreqOFF	0x00
#define cSelectOscFreqON	0x20
#define cOscFreq_4332kHz	0x00
#define cOscFreq_8664kHz	0x40
#define cOscFreq_12996kHz	0x80
#define cOscFreq_17328kHz	0xC0
static int block_to_user_buf(struct saa6588 *s, unsigned char __user *user_buf)
static void read_from_buf(struct saa6588 *s, struct saa6588_command *a)
static void block_to_buf(struct saa6588 *s, unsigned char *blockbuf)
static void saa6588_i2c_poll(struct saa6588 *s)
static void saa6588_work(struct work_struct *work)
static void saa6588_configure(struct saa6588 *s)
static long saa6588_ioctl(struct v4l2_subdev *sd, unsigned int cmd, void *arg)
static int saa6588_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int saa6588_s_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int saa6588_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops saa6588_core_ops = ;
static const struct v4l2_subdev_tuner_ops saa6588_tuner_ops = ;
static const struct v4l2_subdev_ops saa6588_ops = ;
static int saa6588_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int saa6588_remove(struct i2c_client *client)
static const struct i2c_device_id saa6588_id[] = ;
MODULE_DEVICE_TABLE(i2c, saa6588_id);
static struct i2c_driver saa6588_driver = ;
static __init int init_saa6588(void)
static __exit void exit_saa6588(void)
module_init(init_saa6588);
module_exit(exit_saa6588);
