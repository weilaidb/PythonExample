#define MODULE_NAME "spca508"
MODULE_AUTHOR("Michel Xhaard <mxhaard@users.sourceforge.net>");
MODULE_DESCRIPTION("GSPCA/SPCA508 USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format sif_mode[] = ;
#define SPCA508_OFFSET_DATA 37
static const u16 spca508_init_data[][2] = ;
static const u16 spca508cs110_init_data[][2] = ;
static const u16 spca508_sightcam_init_data[][2] = ;
static const u16 spca508_sightcam2_init_data[][2] = ;
static const u16 spca508_vista_init_data[][2] = ;
static int reg_write(struct usb_device *dev,
u16 index, u16 value)
static int reg_read(struct gspca_dev *gspca_dev,
u16 index)
static int ssi_w(struct gspca_dev *gspca_dev,
u16 reg, u16 val)
static int write_vector(struct gspca_dev *gspca_dev,
const u16 (*data)[2])
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static void setbrightness(struct gspca_dev *gspca_dev)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
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
