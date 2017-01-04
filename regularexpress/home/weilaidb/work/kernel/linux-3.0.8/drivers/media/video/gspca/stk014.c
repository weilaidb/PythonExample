#define MODULE_NAME "stk014"
MODULE_AUTHOR("Jean-Francois Moine <http:
MODULE_DESCRIPTION("Syntek DV4000 (STK014) USB Camera Driver");
MODULE_LICENSE("GPL");
enum e_ctrl ;
struct sd ;
static void setbrightness(struct gspca_dev *gspca_dev);
static void setcontrast(struct gspca_dev *gspca_dev);
static void setcolors(struct gspca_dev *gspca_dev);
static void setlightfreq(struct gspca_dev *gspca_dev);
static const struct ctrl sd_ctrls[NCTRLS] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static u8 reg_r(struct gspca_dev *gspca_dev,
__u16 index)
static void reg_w(struct gspca_dev *gspca_dev,
__u16 index, __u16 value)
static void rcv_val(struct gspca_dev *gspca_dev,
int ads)
static void snd_val(struct gspca_dev *gspca_dev,
int ads,
unsigned int val)
static void set_par(struct gspca_dev *gspca_dev,
int parval)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void setlightfreq(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_querymenu(struct gspca_dev *gspca_dev,
struct v4l2_querymenu *menu)
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
