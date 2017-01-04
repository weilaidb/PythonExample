#define MODULE_NAME "sn9c2028"
MODULE_AUTHOR("Theodore Kilgore");
MODULE_DESCRIPTION("Sonix SN9C2028 USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
struct init_command ;
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static const struct v4l2_pix_format cif_mode[] = ;
static int sn9c2028_command(struct gspca_dev *gspca_dev, u8 *command)
static int sn9c2028_read1(struct gspca_dev *gspca_dev)
static int sn9c2028_read4(struct gspca_dev *gspca_dev, u8 *reading)
static int sn9c2028_long_command(struct gspca_dev *gspca_dev, u8 *command)
static int sn9c2028_short_command(struct gspca_dev *gspca_dev, u8 *command)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int run_start_commands(struct gspca_dev *gspca_dev,
struct init_command *cam_commands, int n)
static int start_spy_cam(struct gspca_dev *gspca_dev)
static int start_cif_cam(struct gspca_dev *gspca_dev)
static int start_ms350_cam(struct gspca_dev *gspca_dev)
static int start_genius_cam(struct gspca_dev *gspca_dev)
static int start_vivitar_cam(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
__u8 *data,
int len)
static const struct sd_desc sd_desc = ;
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
