#define MODULE_NAME "kinect"
#define CTRL_TIMEOUT 500
MODULE_AUTHOR("Antonio Ospite <ospite@studenti.unina.it>");
MODULE_DESCRIPTION("GSPCA/Kinect Sensor Device USB Camera Driver");
MODULE_LICENSE("GPL");
int gspca_debug = D_ERR | D_PROBE | D_CONF | D_STREAM | D_FRAM | D_PACK |
D_USBI | D_USBO | D_V4L2;
struct pkt_hdr ;
struct cam_hdr ;
struct sd ;
static const struct ctrl sd_ctrls[] = ;
#define MODE_640x480   0x0001
#define MODE_640x488   0x0002
#define MODE_1280x1024 0x0004
#define FORMAT_BAYER   0x0010
#define FORMAT_UYVY    0x0020
#define FORMAT_Y10B    0x0040
#define FPS_HIGH       0x0100
static const struct v4l2_pix_format video_camera_mode[] = ;
static int kinect_write(struct usb_device *udev, uint8_t *data,
uint16_t wLength)
static int kinect_read(struct usb_device *udev, uint8_t *data, uint16_t wLength)
static int send_cmd(struct gspca_dev *gspca_dev, uint16_t cmd, void *cmdbuf,
unsigned int cmd_len, void *replybuf, unsigned int reply_len)
static int write_register(struct gspca_dev *gspca_dev, uint16_t reg,
uint16_t data)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev, u8 *__data, int len)
static const struct sd_desc sd_desc = ;
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf, const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
