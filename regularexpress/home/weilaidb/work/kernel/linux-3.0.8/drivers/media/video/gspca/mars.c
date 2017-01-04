#define MODULE_NAME "mars"
MODULE_AUTHOR("Michel Xhaard <mxhaard@users.sourceforge.net>");
MODULE_DESCRIPTION("GSPCA/Mars USB Camera Driver");
MODULE_LICENSE("GPL");
enum e_ctrl ;
struct sd ;
static void setbrightness(struct gspca_dev *gspca_dev);
static void setcolors(struct gspca_dev *gspca_dev);
static void setgamma(struct gspca_dev *gspca_dev);
static void setsharpness(struct gspca_dev *gspca_dev);
static int sd_setilluminator1(struct gspca_dev *gspca_dev, __s32 val);
static int sd_setilluminator2(struct gspca_dev *gspca_dev, __s32 val);
static const struct ctrl sd_ctrls[NCTRLS] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static const __u8 mi_data[0x20] = ;
static void reg_w(struct gspca_dev *gspca_dev,
int len)
static void mi_w(struct gspca_dev *gspca_dev,
u8 addr,
u8 value)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void setgamma(struct gspca_dev *gspca_dev)
static void setsharpness(struct gspca_dev *gspca_dev)
static void setilluminators(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setilluminator1(struct gspca_dev *gspca_dev, __s32 val)
static int sd_setilluminator2(struct gspca_dev *gspca_dev, __s32 val)
static int sd_set_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
static int sd_get_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
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
