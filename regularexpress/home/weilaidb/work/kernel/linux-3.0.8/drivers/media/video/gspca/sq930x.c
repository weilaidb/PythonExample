#define MODULE_NAME "sq930x"
MODULE_AUTHOR("Jean-Francois Moine <http:
"Gerard Klaver <gerard at gkall dot hobby dot nl\n"
"Sam Revitch <samr7@cs.washington.edu>");
MODULE_DESCRIPTION("GSPCA/SQ930x USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
enum sensors ;
static int sd_setexpo(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getexpo(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static struct v4l2_pix_format vga_mode[] = ;
#define SQ930_CTRL_UCBUS_IO	0x0001
#define SQ930_CTRL_I2C_IO	0x0002
#define SQ930_CTRL_GPIO		0x0005
#define SQ930_CTRL_CAP_START	0x0010
#define SQ930_CTRL_CAP_STOP	0x0011
#define SQ930_CTRL_SET_EXPOSURE 0x001d
#define SQ930_CTRL_RESET	0x001e
#define SQ930_CTRL_GET_DEV_INFO 0x001f
#define SQ930_GPIO_DFL_I2C_SDA	0x0001
#define SQ930_GPIO_DFL_I2C_SCL	0x0002
#define SQ930_GPIO_RSTBAR	0x0004
#define SQ930_GPIO_EXTRA1	0x0040
#define SQ930_GPIO_EXTRA2	0x0080
#define SQ930_GPIO_POWER	0x0200
#define SQ930_GPIO_DFL_LED	0x1000
struct ucbus_write_cmd ;
struct i2c_write_cmd ;
static const struct ucbus_write_cmd icx098bq_start_0[] = ;
static const struct ucbus_write_cmd icx098bq_start_1[] = ;
static const struct ucbus_write_cmd icx098bq_start_2[] = ;
static const struct ucbus_write_cmd lz24bp_start_0[] = ;
static const struct ucbus_write_cmd lz24bp_start_1_gen[] = ;
static const struct ucbus_write_cmd lz24bp_start_1_clm[] = ;
static const struct ucbus_write_cmd lz24bp_start_2[] = ;
static const struct ucbus_write_cmd mi0360_start_0[] = ;
static const struct i2c_write_cmd mi0360_init_23[] = ;
static const struct i2c_write_cmd mi0360_init_24[] = ;
static const struct i2c_write_cmd mi0360_init_25[] = ;
static const struct ucbus_write_cmd mi0360_start_1[] = ;
static const struct i2c_write_cmd mi0360_start_2[] = ;
static const struct i2c_write_cmd mi0360_start_3[] = ;
static const struct i2c_write_cmd mi0360_start_4[] = ;
static const struct i2c_write_cmd mt9v111_init_0[] = ;
static const struct i2c_write_cmd mt9v111_init_1[] = ;
static const struct i2c_write_cmd mt9v111_init_2[] = ;
static const struct ucbus_write_cmd mt9v111_start_1[] = ;
static const struct i2c_write_cmd mt9v111_init_3[] = ;
static const struct i2c_write_cmd mt9v111_init_4[] = ;
static const struct ucbus_write_cmd ov7660_start_0[] = ;
static const struct ucbus_write_cmd ov9630_start_0[] = ;
static const struct cap_s  capconfig[4][2] = ;
struct sensor_s ;
static const struct sensor_s sensor_tb[] = ;
static void reg_r(struct gspca_dev *gspca_dev,
u16 value, int len)
static void reg_w(struct gspca_dev *gspca_dev, u16 value, u16 index)
static void reg_wb(struct gspca_dev *gspca_dev, u16 value, u16 index,
const u8 *data, int len)
static void i2c_write(struct sd *sd,
const struct i2c_write_cmd *cmd,
int ncmds)
static void ucbus_write(struct gspca_dev *gspca_dev,
const struct ucbus_write_cmd *cmd,
int ncmds,
int batchsize)
static void gpio_set(struct sd *sd, u16 val, u16 mask)
static void gpio_init(struct sd *sd,
const u8 *gpio)
static void bridge_init(struct sd *sd)
static void cmos_probe(struct gspca_dev *gspca_dev)
static void mt9v111_init(struct gspca_dev *gspca_dev)
static void global_init(struct sd *sd, int first_time)
static void lz24bp_ppl(struct sd *sd, u16 ppl)
static void setexposure(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static void send_start(struct gspca_dev *gspca_dev)
static void send_stop(struct gspca_dev *gspca_dev)
static int sd_isoc_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_dq_callback(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setexpo(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getexpo(struct gspca_dev *gspca_dev, __s32 *val)
static const struct sd_desc sd_desc = ;
#define ST(sensor, type) \
.driver_info = (SENSOR_ ## sensor << 8) \
| (type)
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
