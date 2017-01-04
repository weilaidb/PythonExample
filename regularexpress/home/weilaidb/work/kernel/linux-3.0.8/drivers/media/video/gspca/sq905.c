#define MODULE_NAME "sq905"
MODULE_AUTHOR("Adam Baker <linux@baker-net.org.uk>, "
"Theodore Kilgore <kilgota@auburn.edu>");
MODULE_DESCRIPTION("GSPCA/SQ905 USB Camera Driver");
MODULE_LICENSE("GPL");
#define SQ905_CMD_TIMEOUT 500
#define SQ905_DATA_TIMEOUT 1000
#define SQ905_MAX_TRANSFER 0x8000
#define FRAME_HEADER_LEN 64
#define SQ905_BULK_READ	0x03
#define SQ905_COMMAND	0x06
#define SQ905_PING	0x07
#define SQ905_READ_DONE 0xc0
#define SQ905_HIRES_MASK	0x00000300
#define SQ905_ORIENTATION_MASK	0x00000100
#define SQ905_ID      0xf0
#define SQ905_CONFIG  0x20
#define SQ905_DATA    0x30
#define SQ905_CLEAR   0xa0
#define SQ905_CAPTURE_LOW  0x60
#define SQ905_CAPTURE_MED  0x61
#define SQ905_CAPTURE_HIGH 0x62
struct sd ;
static struct v4l2_pix_format sq905_mode[] = ;
static int sq905_command(struct gspca_dev *gspca_dev, u16 index)
static int sq905_ack_frame(struct gspca_dev *gspca_dev)
static int
sq905_read_data(struct gspca_dev *gspca_dev, u8 *data, int size, int need_lock)
static void sq905_dostream(struct work_struct *work)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static void sd_stop0(struct gspca_dev *gspca_dev)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static const struct sd_desc sd_desc = ;
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
