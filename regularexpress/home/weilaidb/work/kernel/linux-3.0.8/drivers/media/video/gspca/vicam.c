#define MODULE_NAME "vicam"
#define HEADER_SIZE 64
MODULE_AUTHOR("Hans de Goede <hdegoede@redhat.com>");
MODULE_DESCRIPTION("GSPCA ViCam USB Camera Driver");
MODULE_LICENSE("GPL");
enum e_ctrl ;
struct sd ;
static struct v4l2_pix_format vicam_mode[] = ;
static const struct ctrl sd_ctrls[] = ;
static int vicam_control_msg(struct gspca_dev *gspca_dev, u8 request,
u16 value, u16 index, u8 *data, u16 len)
static int vicam_set_camera_power(struct gspca_dev *gspca_dev, int state)
static int vicam_read_frame(struct gspca_dev *gspca_dev, u8 *data, int size)
static void vicam_dostream(struct work_struct *work)
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
