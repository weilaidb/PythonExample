#define MODULE_NAME "spca501"
MODULE_AUTHOR("Michel Xhaard <mxhaard@users.sourceforge.net>");
MODULE_DESCRIPTION("GSPCA/SPCA501 USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setblue_balance(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getblue_balance(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setred_balance(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getred_balance(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
#define SPCA50X_REG_USB 0x2
#define CCDSP_SET
#define TG_SET
#undef DSPWIN_SET
#undef ALTER_GAMA
#define SPCA501_SNAPBIT 0x80
#define SPCA501_SNAPCTRL 0x10
#define SPCA501_OFFSET_GPIO   1
#define SPCA501_OFFSET_TYPE   2
#define SPCA501_OFFSET_TURN3A 3
#define SPCA501_OFFSET_FRAMSEQ 4
#define SPCA501_OFFSET_COMPRESS 5
#define SPCA501_OFFSET_QUANT 6
#define SPCA501_OFFSET_QUANT2 7
#define SPCA501_OFFSET_DATA 8
#define SPCA501_PROP_COMP_ENABLE(d) ((d) & 1)
#define SPCA501_PROP_SNAP(d) ((d) & 0x40)
#define SPCA501_PROP_SNAP_CTRL(d) ((d) & 0x10)
#define SPCA501_PROP_COMP_THRESH(d) (((d) & 0x0e) >> 1)
#define SPCA501_PROP_COMP_QUANT(d) (((d) & 0x70) >> 4)
#define SPCA501_REG_CCDSP 0x01
#define SPCA501_REG_CTLRL 0x02
#define SPCA501_A11 0x08
#define SPCA501_A12 0x09
#define SPCA501_A13 0x0A
#define SPCA501_A21 0x0B
#define SPCA501_A22 0x0C
#define SPCA501_A23 0x0D
#define SPCA501_A31 0x0E
#define SPCA501_A32 0x0F
#define SPCA501_A33 0x10
static const __u16 spca501_open_data[][3] = ;
static const __u16 spca501_init_data[][3] = ;
static const __u16 spca501_3com_open_data[][3] = ;
static const __u16 spca501c_arowana_open_data[][3] = ;
static const __u16 spca501c_arowana_init_data[][3] = ;
static const __u16 spca501c_mysterious_open_data[][3] = ;
static const __u16 spca501c_mysterious_init_data[][3] = ;
static int reg_write(struct usb_device *dev,
__u16 req, __u16 index, __u16 value)
static int write_vector(struct gspca_dev *gspca_dev,
const __u16 data[][3])
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void setblue_balance(struct gspca_dev *gspca_dev)
static void setred_balance(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_stop0(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setblue_balance(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getblue_balance(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setred_balance(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getred_balance(struct gspca_dev *gspca_dev, __s32 *val)
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
