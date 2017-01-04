#define MODULE_NAME "ov534"
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
MODULE_AUTHOR("Antonio Ospite <ospite@studenti.unina.it>");
MODULE_DESCRIPTION("GSPCA/OV534 USB Camera Driver");
MODULE_LICENSE("GPL");
enum e_ctrl ;
struct sd ;
enum sensors ;
static void setbrightness(struct gspca_dev *gspca_dev);
static void setcontrast(struct gspca_dev *gspca_dev);
static void setgain(struct gspca_dev *gspca_dev);
static void setexposure(struct gspca_dev *gspca_dev);
static int sd_setagc(struct gspca_dev *gspca_dev, __s32 val);
static void setawb(struct gspca_dev *gspca_dev);
static void setaec(struct gspca_dev *gspca_dev);
static void setsharpness(struct gspca_dev *gspca_dev);
static void sethvflip(struct gspca_dev *gspca_dev);
static void setcolors(struct gspca_dev *gspca_dev);
static void setlightfreq(struct gspca_dev *gspca_dev);
static int sd_start(struct gspca_dev *gspca_dev);
static void sd_stopN(struct gspca_dev *gspca_dev);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format ov772x_mode[] = ;
static const struct v4l2_pix_format ov767x_mode[] = ;
static const u8 qvga_rates[] = ;
static const u8 vga_rates[] = ;
static const struct framerates ov772x_framerates[] = ;
struct reg_array ;
static const u8 bridge_init_767x[][2] = ;
static const u8 sensor_init_767x[][2] = ;
static const u8 bridge_start_vga_767x[][2] = ;
static const u8 sensor_start_vga_767x[][2] = ;
static const u8 bridge_start_qvga_767x[][2] = ;
static const u8 sensor_start_qvga_767x[][2] = ;
static const u8 bridge_init_772x[][2] = ;
static const u8 sensor_init_772x[][2] = ;
static const u8 bridge_start_vga_772x[][2] = ;
static const u8 sensor_start_vga_772x[][2] = ;
static const u8 bridge_start_qvga_772x[][2] = ;
static const u8 sensor_start_qvga_772x[][2] = ;
static void ov534_reg_write(struct gspca_dev *gspca_dev, u16 reg, u8 val)
static u8 ov534_reg_read(struct gspca_dev *gspca_dev, u16 reg)
static void ov534_set_led(struct gspca_dev *gspca_dev, int status)
static int sccb_check_status(struct gspca_dev *gspca_dev)
static void sccb_reg_write(struct gspca_dev *gspca_dev, u8 reg, u8 val)
static u8 sccb_reg_read(struct gspca_dev *gspca_dev, u16 reg)
static void reg_w_array(struct gspca_dev *gspca_dev,
const u8 (*data)[2], int len)
static void sccb_w_array(struct gspca_dev *gspca_dev,
const u8 (*data)[2], int len)
static void set_frame_rate(struct gspca_dev *gspca_dev)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setgain(struct gspca_dev *gspca_dev)
static void setexposure(struct gspca_dev *gspca_dev)
static void setagc(struct gspca_dev *gspca_dev)
static void setawb(struct gspca_dev *gspca_dev)
static void setaec(struct gspca_dev *gspca_dev)
static void setsharpness(struct gspca_dev *gspca_dev)
static void sethvflip(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void setlightfreq(struct gspca_dev *gspca_dev)
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
static int sd_setagc(struct gspca_dev *gspca_dev, __s32 val)
static int sd_querymenu(struct gspca_dev *gspca_dev,
struct v4l2_querymenu *menu)
static void sd_get_streamparm(struct gspca_dev *gspca_dev,
struct v4l2_streamparm *parm)
static void sd_set_streamparm(struct gspca_dev *gspca_dev,
struct v4l2_streamparm *parm)
static const struct sd_desc sd_desc = ;
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf, const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
