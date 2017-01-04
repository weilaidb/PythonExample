#define MODULE_NAME "spca561"
MODULE_AUTHOR("Michel Xhaard <mxhaard@users.sourceforge.net>");
MODULE_DESCRIPTION("GSPCA/SPCA561 USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static const struct v4l2_pix_format sif_012a_mode[] = ;
static const struct v4l2_pix_format sif_072a_mode[] = ;
#define SPCA561_OFFSET_SNAP 1
#define SPCA561_OFFSET_TYPE 2
#define SPCA561_OFFSET_COMPRESS 3
#define SPCA561_OFFSET_FRAMSEQ   4
#define SPCA561_OFFSET_GPIO 5
#define SPCA561_OFFSET_USBBUFF 6
#define SPCA561_OFFSET_WIN2GRAVE 7
#define SPCA561_OFFSET_WIN2RAVE 8
#define SPCA561_OFFSET_WIN2BAVE 9
#define SPCA561_OFFSET_WIN2GBAVE 10
#define SPCA561_OFFSET_WIN1GRAVE 11
#define SPCA561_OFFSET_WIN1RAVE 12
#define SPCA561_OFFSET_WIN1BAVE 13
#define SPCA561_OFFSET_WIN1GBAVE 14
#define SPCA561_OFFSET_FREQ 15
#define SPCA561_OFFSET_VSYNC 16
#define SPCA561_INDEX_I2C_BASE 0x8800
#define SPCA561_SNAPBIT 0x20
#define SPCA561_SNAPCTRL 0x40
static const u16 rev72a_reset[][2] = ;
static const __u16 rev72a_init_data1[][2] = ;
static const u16 rev72a_init_sensor1[][2] = ;
static const __u16 rev72a_init_data2[][2] = ;
static const u16 rev72a_init_sensor2[][2] = ;
static const __u16 Pb100_1map8300[][2] = ;
static const __u16 Pb100_2map8300[][2] = ;
static const __u16 spca561_161rev12A_data1[][2] = ;
static const __u16 spca561_161rev12A_data2[][2] = ;
static void reg_w_val(struct usb_device *dev, __u16 index, __u8 value)
static void write_vector(struct gspca_dev *gspca_dev,
const __u16 data[][2])
static void reg_r(struct gspca_dev *gspca_dev,
__u16 index, __u16 length)
static void reg_w_buf(struct gspca_dev *gspca_dev,
__u16 index, __u16 len)
static void i2c_write(struct gspca_dev *gspca_dev, __u16 value, __u16 reg)
static int i2c_read(struct gspca_dev *gspca_dev, __u16 reg, __u8 mode)
static void sensor_mapwrite(struct gspca_dev *gspca_dev,
const __u16 (*sensormap)[2])
static void write_sensor_72a(struct gspca_dev *gspca_dev,
const __u16 (*sensor)[2])
static void init_161rev12A(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init_12a(struct gspca_dev *gspca_dev)
static int sd_init_72a(struct gspca_dev *gspca_dev)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setwhite(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setexposure(struct gspca_dev *gspca_dev)
static void setgain(struct gspca_dev *gspca_dev)
static void setautogain(struct gspca_dev *gspca_dev)
static int sd_start_12a(struct gspca_dev *gspca_dev)
static int sd_start_72a(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void do_autogain(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getautogain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setwhite(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getwhite(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setexposure(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getexposure(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val)
static const struct ctrl sd_ctrls_12a[] = ;
static const struct ctrl sd_ctrls_72a[] = ;
static const struct sd_desc sd_desc_12a = ;
static const struct sd_desc sd_desc_72a = ;
static const struct sd_desc *sd_desc[2] = ;
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
