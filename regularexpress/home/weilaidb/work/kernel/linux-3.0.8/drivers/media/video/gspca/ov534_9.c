#define MODULE_NAME "ov534_9"
#define OV534_REG_ADDRESS	0xf1
#define OV534_REG_SUBADDR	0xf2
#define OV534_REG_WRITE		0xf3
#define OV534_REG_READ		0xf4
#define OV534_REG_OPERATION	0xf5
#define OV534_REG_STATUS	0xf6
#define OV534_OP_WRITE_3	0x37
#define OV534_OP_WRITE_2	0x33
#define OV534_OP_READ_2		0xf9
#define CTRL_TIMEOUT 500
MODULE_AUTHOR("Jean-Francois Moine <moinejf@free.fr>");
MODULE_DESCRIPTION("GSPCA/OV534_9 USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getautogain(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setexposure(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getexposure(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setsharpness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getsharpness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setsatur(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getsatur(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setfreq(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getfreq(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format ov965x_mode[] = ;
static const u8 bridge_init[][2] = ;
static const u8 sensor_init[][2] = ;
static const u8 bridge_init_2[][2] = ;
static const u8 sensor_init_2[][2] = ;
static const u8 sensor_start_1_vga[][2] = ;
static const u8 sensor_start_1_svga[][2] = ;
static const u8 sensor_start_1_xga[][2] = ;
static const u8 sensor_start_1_sxga[][2] = ;
static const u8 bridge_start_qvga[][2] = ;
static const u8 bridge_start_vga[][2] = ;
static const u8 bridge_start_svga[][2] = ;
static const u8 bridge_start_xga[][2] = ;
static const u8 bridge_start_sxga[][2] = ;
static const u8 sensor_start_2_qvga[][2] = ;
static const u8 sensor_start_2_vga[][2] = ;
static const u8 sensor_start_2_svga[][2] = ;
static const u8 sensor_start_2_sxga[][2] = ;
static void reg_w_i(struct gspca_dev *gspca_dev, u16 reg, u8 val)
static void reg_w(struct gspca_dev *gspca_dev, u16 reg, u8 val)
static u8 reg_r(struct gspca_dev *gspca_dev, u16 reg)
static int sccb_check_status(struct gspca_dev *gspca_dev)
static void sccb_write(struct gspca_dev *gspca_dev, u8 reg, u8 val)
static u8 sccb_read(struct gspca_dev *gspca_dev, u16 reg)
static void reg_w_array(struct gspca_dev *gspca_dev,
const u8 (*data)[2], int len)
static void sccb_w_array(struct gspca_dev *gspca_dev,
const u8 (*data)[2], int len)
static void set_led(struct gspca_dev *gspca_dev, int status)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setautogain(struct gspca_dev *gspca_dev)
static void setexposure(struct gspca_dev *gspca_dev)
static void setsharpness(struct gspca_dev *gspca_dev)
static void setsatur(struct gspca_dev *gspca_dev)
static void setfreq(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
#define UVC_STREAM_EOH	(1 << 7)
#define UVC_STREAM_ERR	(1 << 6)
#define UVC_STREAM_STI	(1 << 5)
#define UVC_STREAM_RES	(1 << 4)
#define UVC_STREAM_SCR	(1 << 3)
#define UVC_STREAM_PTS	(1 << 2)
#define UVC_STREAM_EOF	(1 << 1)
#define UVC_STREAM_FID	(1 << 0)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data, int len)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getautogain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setexposure(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getexposure(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setsharpness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getsharpness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setsatur(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getsatur(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setfreq(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getfreq(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_querymenu(struct gspca_dev *gspca_dev,
struct v4l2_querymenu *menu)
static const struct sd_desc sd_desc = ;
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf, const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
