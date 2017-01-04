int m5mols_debug;
module_param(m5mols_debug, int, 0644);
#define MODULE_NAME		"M5MOLS"
#define M5MOLS_I2C_CHECK_RETRY	500
static struct regulator_bulk_data supplies[] = ;
static struct v4l2_mbus_framefmt m5mols_default_ffmt[M5MOLS_RESTYPE_MAX] = ;
#define SIZE_DEFAULT_FFMT	ARRAY_SIZE(m5mols_default_ffmt)
static const struct m5mols_resolution m5mols_reg_res[] = ;
static u32 m5mols_swap_byte(u8 *data, u8 length)
static int m5mols_read(struct v4l2_subdev *sd, u32 size, u32 reg, u32 *val)
int m5mols_read_u8(struct v4l2_subdev *sd, u32 reg, u8 *val)
int m5mols_read_u16(struct v4l2_subdev *sd, u32 reg, u16 *val)
int m5mols_read_u32(struct v4l2_subdev *sd, u32 reg, u32 *val)
int m5mols_write(struct v4l2_subdev *sd, u32 reg, u32 val)
int m5mols_busy(struct v4l2_subdev *sd, u8 category, u8 cmd, u8 mask)
int m5mols_enable_interrupt(struct v4l2_subdev *sd, u8 reg)
static int m5mols_reg_mode(struct v4l2_subdev *sd, u8 mode)
int m5mols_mode(struct m5mols_info *info, u8 mode)
static int m5mols_get_version(struct v4l2_subdev *sd)
static enum m5mols_restype __find_restype(enum v4l2_mbus_pixelcode code)
static int __find_resolution(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf,
enum m5mols_restype *type,
u32 *resolution)
static struct v4l2_mbus_framefmt *__find_format(struct m5mols_info *info,
struct v4l2_subdev_fh *fh,
enum v4l2_subdev_format_whence which,
enum m5mols_restype type)
static int m5mols_get_fmt(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int m5mols_set_fmt(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int m5mols_enum_mbus_code(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_mbus_code_enum *code)
static struct v4l2_subdev_pad_ops m5mols_pad_ops = ;
int m5mols_sync_controls(struct m5mols_info *info)
static int m5mols_start_monitor(struct m5mols_info *info)
static int m5mols_s_stream(struct v4l2_subdev *sd, int enable)
static const struct v4l2_subdev_video_ops m5mols_video_ops = ;
static int m5mols_s_ctrl(struct v4l2_ctrl *ctrl)
static const struct v4l2_ctrl_ops m5mols_ctrl_ops = ;
static int m5mols_sensor_power(struct m5mols_info *info, bool enable)
int __attribute__ ((weak)) m5mols_update_fw(struct v4l2_subdev *sd,
int (*set_power)(struct m5mols_info *, bool))
static int m5mols_sensor_armboot(struct v4l2_subdev *sd)
static int m5mols_init_controls(struct m5mols_info *info)
static int m5mols_s_power(struct v4l2_subdev *sd, int on)
static int m5mols_log_status(struct v4l2_subdev *sd)
static const struct v4l2_subdev_core_ops m5mols_core_ops = ;
static const struct v4l2_subdev_ops m5mols_ops = ;
static void m5mols_irq_work(struct work_struct *work)
static irqreturn_t m5mols_irq_handler(int irq, void *data)
static int __devinit m5mols_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit m5mols_remove(struct i2c_client *client)
static const struct i2c_device_id m5mols_id[] = ;
MODULE_DEVICE_TABLE(i2c, m5mols_id);
static struct i2c_driver m5mols_i2c_driver = ;
static int __init m5mols_mod_init(void)
static void __exit m5mols_mod_exit(void)
module_init(m5mols_mod_init);
module_exit(m5mols_mod_exit);
MODULE_AUTHOR("HeungJun Kim <riverful.kim@samsung.com>");
MODULE_AUTHOR("Dongsoo Kim <dongsoo45.kim@samsung.com>");
MODULE_DESCRIPTION("Fujitsu M-5MOLS 8M Pixel camera driver");
MODULE_LICENSE("GPL");
