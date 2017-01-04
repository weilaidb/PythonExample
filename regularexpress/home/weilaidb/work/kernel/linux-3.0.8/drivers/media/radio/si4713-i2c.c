static int debug;
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug level (0 - 2)");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Eduardo Valentin <eduardo.valentin@nokia.com>");
MODULE_DESCRIPTION("I2C driver for Si4713 FM Radio Transmitter");
MODULE_VERSION("0.0.1");
static const char *si4713_supply_names[SI4713_NUM_SUPPLIES] = ;
#define DEFAULT_RDS_PI			0x00
#define DEFAULT_RDS_PTY			0x00
#define DEFAULT_RDS_PS_NAME		""
#define DEFAULT_RDS_RADIO_TEXT		DEFAULT_RDS_PS_NAME
#define DEFAULT_RDS_DEVIATION		0x00C8
#define DEFAULT_RDS_PS_REPEAT_COUNT	0x0003
#define DEFAULT_LIMITER_RTIME		0x1392
#define DEFAULT_LIMITER_DEV		0x102CA
#define DEFAULT_PILOT_FREQUENCY 	0x4A38
#define DEFAULT_PILOT_DEVIATION		0x1A5E
#define DEFAULT_ACOMP_ATIME		0x0000
#define DEFAULT_ACOMP_RTIME		0xF4240L
#define DEFAULT_ACOMP_GAIN		0x0F
#define DEFAULT_ACOMP_THRESHOLD 	(-0x28)
#define DEFAULT_MUTE			0x01
#define DEFAULT_POWER_LEVEL		88
#define DEFAULT_FREQUENCY		8800
#define DEFAULT_PREEMPHASIS		FMPE_EU
#define DEFAULT_TUNE_RNL		0xFF
#define to_si4713_device(sd)	container_of(sd, struct si4713_device, sd)
#define FREQDEV_UNIT	100000
#define FREQV4L2_MULTI	625
#define si4713_to_v4l2(f)	((f * FREQDEV_UNIT) / FREQV4L2_MULTI)
#define v4l2_to_si4713(f)	((f * FREQV4L2_MULTI) / FREQDEV_UNIT)
#define FREQ_RANGE_LOW			7600
#define FREQ_RANGE_HIGH			10800
#define MAX_ARGS 7
#define RDS_BLOCK			8
#define RDS_BLOCK_CLEAR			0x03
#define RDS_BLOCK_LOAD			0x04
#define RDS_RADIOTEXT_2A		0x20
#define RDS_RADIOTEXT_BLK_SIZE		4
#define RDS_RADIOTEXT_INDEX_MAX		0x0F
#define RDS_CARRIAGE_RETURN		0x0D
#define rds_ps_nblocks(len)	((len / RDS_BLOCK) + (len % RDS_BLOCK ? 1 : 0))
#define get_status_bit(p, b, m)	(((p) & (m)) >> (b))
#define set_bits(p, v, b, m)	(((p) & ~(m)) | ((v) << (b)))
#define ATTACK_TIME_UNIT	500
#define POWER_OFF			0x00
#define POWER_ON			0x01
#define msb(x)                  ((u8)((u16) x >> 8))
#define lsb(x)                  ((u8)((u16) x &  0x00FF))
#define compose_u16(msb, lsb)	(((u16)msb << 8) | lsb)
#define check_command_failed(status)	(!(status & SI4713_CTS) || \
(status & SI4713_ERR))
#define set_mute(p)	((p & 1) | ((p & 1) << 1));
#define get_mute(p)	(p & 0x01)
#define DBG_BUFFER(device, message, buffer, size)			\
#define DBG_BUFFER(device, message, buffer, size)
static long limiter_times[] = ;
static unsigned long acomp_rtimes[] = ;
static unsigned long preemphasis_values[] = ;
static int usecs_to_dev(unsigned long usecs, unsigned long const array[],
int size)
static unsigned long dev_to_usecs(int value, unsigned long const array[],
int size)
static irqreturn_t si4713_handler(int irq, void *dev)
static int si4713_send_command(struct si4713_device *sdev, const u8 command,
const u8 args[], const int argn,
u8 response[], const int respn, const int usecs)
static int si4713_read_property(struct si4713_device *sdev, u16 prop, u32 *pv)
static int si4713_write_property(struct si4713_device *sdev, u16 prop, u16 val)
static int si4713_powerup(struct si4713_device *sdev)
static int si4713_powerdown(struct si4713_device *sdev)
static int si4713_checkrev(struct si4713_device *sdev)
static int si4713_wait_stc(struct si4713_device *sdev, const int usecs)
static int si4713_tx_tune_freq(struct si4713_device *sdev, u16 frequency)
static int si4713_tx_tune_power(struct si4713_device *sdev, u8 power,
u8 antcap)
static int si4713_tx_tune_measure(struct si4713_device *sdev, u16 frequency,
u8 antcap)
static int si4713_tx_tune_status(struct si4713_device *sdev, u8 intack,
u16 *frequency,	u8 *power,
u8 *antcap, u8 *noise)
static int si4713_tx_rds_buff(struct si4713_device *sdev, u8 mode, u16 rdsb,
u16 rdsc, u16 rdsd, s8 *cbleft)
static int si4713_tx_rds_ps(struct si4713_device *sdev, u8 psid,
unsigned char *pschar)
static int si4713_set_power_state(struct si4713_device *sdev, u8 value)
static int si4713_set_mute(struct si4713_device *sdev, u16 mute)
static int si4713_set_rds_ps_name(struct si4713_device *sdev, char *ps_name)
static int si4713_set_rds_radio_text(struct si4713_device *sdev, char *rt)
static int si4713_choose_econtrol_action(struct si4713_device *sdev, u32 id,
u32 **shadow, s32 *bit, s32 *mask, u16 *property, int *mul,
unsigned long **table, int *size)
static int si4713_queryctrl(struct v4l2_subdev *sd, struct v4l2_queryctrl *qc);
static int si4713_write_econtrol_string(struct si4713_device *sdev,
struct v4l2_ext_control *control)
static int validate_range(struct v4l2_subdev *sd,
struct v4l2_ext_control *control)
static int si4713_write_econtrol_tune(struct si4713_device *sdev,
struct v4l2_ext_control *control)
static int si4713_write_econtrol_integers(struct si4713_device *sdev,
struct v4l2_ext_control *control)
static int si4713_s_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *f);
static int si4713_s_modulator(struct v4l2_subdev *sd, struct v4l2_modulator *);
static int si4713_setup(struct si4713_device *sdev)
static int si4713_initialize(struct si4713_device *sdev)
static int si4713_read_econtrol_string(struct si4713_device *sdev,
struct v4l2_ext_control *control)
static int si4713_update_tune_status(struct si4713_device *sdev)
static int si4713_read_econtrol_tune(struct si4713_device *sdev,
struct v4l2_ext_control *control)
static int si4713_read_econtrol_integers(struct si4713_device *sdev,
struct v4l2_ext_control *control)
static int si4713_s_ext_ctrls(struct v4l2_subdev *sd,
struct v4l2_ext_controls *ctrls)
static int si4713_g_ext_ctrls(struct v4l2_subdev *sd,
struct v4l2_ext_controls *ctrls)
static int si4713_queryctrl(struct v4l2_subdev *sd, struct v4l2_queryctrl *qc)
static int si4713_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int si4713_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
long si4713_ioctl(struct v4l2_subdev *sd, unsigned int cmd, void *arg)
static const struct v4l2_subdev_core_ops si4713_subdev_core_ops = ;
static int si4713_g_modulator(struct v4l2_subdev *sd, struct v4l2_modulator *vm)
static int si4713_s_modulator(struct v4l2_subdev *sd, struct v4l2_modulator *vm)
static int si4713_g_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *f)
static int si4713_s_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *f)
static const struct v4l2_subdev_tuner_ops si4713_subdev_tuner_ops = ;
static const struct v4l2_subdev_ops si4713_subdev_ops = ;
static int si4713_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int si4713_remove(struct i2c_client *client)
static const struct i2c_device_id si4713_id[] = ;
MODULE_DEVICE_TABLE(i2c, si4713_id);
static struct i2c_driver si4713_i2c_driver = ;
static int __init si4713_module_init(void)
static void __exit si4713_module_exit(void)
module_init(si4713_module_init);
module_exit(si4713_module_exit);
