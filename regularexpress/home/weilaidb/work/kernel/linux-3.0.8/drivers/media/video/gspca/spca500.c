#define MODULE_NAME "spca500"
MODULE_AUTHOR("Michel Xhaard <mxhaard@users.sourceforge.net>");
MODULE_DESCRIPTION("GSPCA/SPCA500 USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static const struct v4l2_pix_format sif_mode[] = ;
#define SPCA500_OFFSET_PADDINGLB 2
#define SPCA500_OFFSET_PADDINGHB 3
#define SPCA500_OFFSET_MODE      4
#define SPCA500_OFFSET_IMGWIDTH  5
#define SPCA500_OFFSET_IMGHEIGHT 6
#define SPCA500_OFFSET_IMGMODE   7
#define SPCA500_OFFSET_QTBLINDEX 8
#define SPCA500_OFFSET_FRAMSEQ   9
#define SPCA500_OFFSET_CDSPINFO  10
#define SPCA500_OFFSET_GPIO      11
#define SPCA500_OFFSET_AUGPIO    12
#define SPCA500_OFFSET_DATA      16
static const __u16 spca500_visual_defaults[][3] = ;
static const __u16 Clicksmart510_defaults[][3] = ;
static const __u8 qtable_creative_pccam[2][64] = ;
static const __u8 qtable_kodak_ez200[2][64] = ;
static const __u8 qtable_pocketdv[2][64] = ;
static void reg_r(struct gspca_dev *gspca_dev,
__u16 index,
__u16 length)
static int reg_w(struct gspca_dev *gspca_dev,
__u16 req, __u16 index, __u16 value)
static int reg_r_12(struct gspca_dev *gspca_dev,
__u16 req,
__u16 index,
__u16 length)
static int reg_r_wait(struct gspca_dev *gspca_dev,
__u16 reg, __u16 index, __u16 value)
static int write_vector(struct gspca_dev *gspca_dev,
const __u16 data[][3])
static int spca50x_setup_qtable(struct gspca_dev *gspca_dev,
unsigned int request,
unsigned int ybase,
unsigned int cbase,
const __u8 qtable[2][64])
static void spca500_ping310(struct gspca_dev *gspca_dev)
static void spca500_clksmart310_init(struct gspca_dev *gspca_dev)
static void spca500_setmode(struct gspca_dev *gspca_dev,
__u8 xmult, __u8 ymult)
static int spca500_full_reset(struct gspca_dev *gspca_dev)
static int spca500_synch310(struct gspca_dev *gspca_dev)
static void spca500_reinit(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val)
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
