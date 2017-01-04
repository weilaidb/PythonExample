#define MODULE_NAME "benq"
MODULE_AUTHOR("Jean-Francois Moine <http:
MODULE_DESCRIPTION("Benq DC E300 USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static void sd_isoc_irq(struct urb *urb);
static void reg_w(struct gspca_dev *gspca_dev,
u16 value, u16 index)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_isoc_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static void sd_isoc_irq(struct urb *urb)
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
