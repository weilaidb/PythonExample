#define MODULE_NAME "stv0680"
MODULE_AUTHOR("Hans de Goede <hdegoede@redhat.com>");
MODULE_DESCRIPTION("STV0680 USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static const struct ctrl sd_ctrls[] = ;
static int stv_sndctrl(struct gspca_dev *gspca_dev, int set, u8 req, u16 val,
int size)
static int stv0680_handle_error(struct gspca_dev *gspca_dev, int ret)
static int stv0680_get_video_mode(struct gspca_dev *gspca_dev)
static int stv0680_set_video_mode(struct gspca_dev *gspca_dev, u8 mode)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_stop0(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
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
