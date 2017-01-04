#define MODULE_NAME "sonixb"
MODULE_AUTHOR("Jean-François Moine <http:
MODULE_DESCRIPTION("GSPCA/SN9C102 USB Camera Driver");
MODULE_LICENSE("GPL");
enum e_ctrl ;
struct sd ;
typedef const __u8 sensor_init_t[8];
struct sensor_data ;
#define F_GAIN 0x01
#define F_SIF  0x02
#define F_COARSE_EXPO 0x04
#define MODE_RAW 0x10
#define MODE_REDUCED_SIF 0x20
#define NO_EXPO ((1 << EXPOSURE) | (1 << AUTOGAIN))
#define NO_FREQ (1 << FREQ)
#define NO_BRIGHTNESS (1 << BRIGHTNESS)
#define COMP 0xc7
#define SYS_CLK 0x04
#define SENS(bridge, sensor, _flags, _ctrl_dis, _sensor_addr) \
#define AUTOGAIN_IGNORE_FRAMES 1
static void setbrightness(struct gspca_dev *gspca_dev);
static void setgain(struct gspca_dev *gspca_dev);
static void setexposure(struct gspca_dev *gspca_dev);
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val);
static void setfreq(struct gspca_dev *gspca_dev);
static const struct ctrl sd_ctrls[NCTRLS] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static const struct v4l2_pix_format sif_mode[] = ;
static const __u8 initHv7131d[] = ;
static const __u8 hv7131d_sensor_init[][8] = ;
static const __u8 initHv7131r[] = ;
static const __u8 hv7131r_sensor_init[][8] = ;
static const __u8 initOv6650[] = ;
static const __u8 ov6650_sensor_init[][8] = ;
static const __u8 initOv7630[] = ;
static const __u8 ov7630_sensor_init[][8] = ;
static const __u8 initPas106[] = ;
static const __u8 pas106_sensor_init[][8] = ;
static const __u8 initPas202[] = ;
static const __u8 pas202_sensor_init[][8] = ;
static const __u8 initTas5110c[] = ;
static const __u8 initTas5110d[] = ;
static const __u8 tas5110c_sensor_init[][8] = ;
static const __u8 tas5110d_sensor_init[][8] = ;
static const __u8 initTas5130[] = ;
static const __u8 tas5130_sensor_init[][8] = ;
static const struct sensor_data sensor_data[] = ;
static void reg_r(struct gspca_dev *gspca_dev,
__u16 value)
static void reg_w(struct gspca_dev *gspca_dev,
__u16 value,
const __u8 *buffer,
int len)
static int i2c_w(struct gspca_dev *gspca_dev, const __u8 *buffer)
static void i2c_w_vector(struct gspca_dev *gspca_dev,
const __u8 buffer[][8], int len)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setsensorgain(struct gspca_dev *gspca_dev)
static void setgain(struct gspca_dev *gspca_dev)
static void setexposure(struct gspca_dev *gspca_dev)
static void setfreq(struct gspca_dev *gspca_dev)
static void do_autogain(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static u8* find_sof(struct gspca_dev *gspca_dev, u8 *data, int len)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_querymenu(struct gspca_dev *gspca_dev,
struct v4l2_querymenu *menu)
#if defined(CONFIG_INPUT) || defined(CONFIG_INPUT_MODULE)
static int sd_int_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static const struct sd_desc sd_desc = ;
#define SB(sensor, bridge) \
.driver_info = (SENSOR_ ## sensor << 8) | BRIDGE_ ## bridge
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
