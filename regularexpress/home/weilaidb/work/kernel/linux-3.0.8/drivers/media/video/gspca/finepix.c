#define MODULE_NAME "finepix"
MODULE_AUTHOR("Frank Zago <frank@zago.net>");
MODULE_DESCRIPTION("Fujifilm FinePix USB V4L2 driver");
MODULE_LICENSE("GPL");
#define FPIX_TIMEOUT 250
#define FPIX_MAX_TRANSFER 0x2000
struct usb_fpix ;
#define NEXT_FRAME_DELAY 35
static const struct v4l2_pix_format fpix_mode[1] = ;
static int command(struct gspca_dev *gspca_dev,
int order)
static void dostream(struct work_struct *work)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stop0(struct gspca_dev *gspca_dev)
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
