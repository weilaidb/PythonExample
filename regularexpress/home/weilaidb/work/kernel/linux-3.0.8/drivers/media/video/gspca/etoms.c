#define MODULE_NAME "etoms"
MODULE_AUTHOR("Michel Xhaard <mxhaard@users.sourceforge.net>");
MODULE_DESCRIPTION("Etoms USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getautogain(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static const struct v4l2_pix_format sif_mode[] = ;
#define ETOMS_ALT_SIZE_1000   12
#define ET_GPIO_DIR_CTRL 0x04
#define ET_GPIO_OUT 0x05
#define ET_GPIO_IN 0x06
#define ET_RESET_ALL 0x03
#define ET_ClCK 0x01
#define ET_CTRL 0x02
#define ET_COMP 0x12
#define ET_MAXQt 0x13
#define ET_MINQt 0x14
#define ET_COMP_VAL0 0x02
#define ET_COMP_VAL1 0x03
#define ET_REG1d 0x1d
#define ET_REG1e 0x1e
#define ET_REG1f 0x1f
#define ET_REG20 0x20
#define ET_REG21 0x21
#define ET_REG22 0x22
#define ET_REG23 0x23
#define ET_REG24 0x24
#define ET_REG25 0x25
#define ET_LUMA_CENTER 0x39
#define ET_G_RED 0x4d
#define ET_G_GREEN1 0x4e
#define ET_G_BLUE 0x4f
#define ET_G_GREEN2 0x50
#define ET_G_GR_H 0x51
#define ET_G_GB_H 0x52
#define ET_O_RED 0x34
#define ET_O_GREEN1 0x35
#define ET_O_BLUE 0x36
#define ET_O_GREEN2 0x37
#define ET_SYNCHRO 0x68
#define ET_STARTX 0x69
#define ET_STARTY 0x6a
#define ET_WIDTH_LOW 0x6b
#define ET_HEIGTH_LOW 0x6c
#define ET_W_H_HEIGTH 0x6d
#define ET_REG6e 0x6e
#define ET_REG6f 0x6f
#define ET_REG70 0x70
#define ET_REG71 0x71
#define ET_REG72 0x72
#define ET_REG73 0x73
#define ET_REG74 0x74
#define ET_REG75 0x75
#define ET_I2C_CLK 0x8c
#define ET_PXL_CLK 0x60
#define ET_I2C_BASE 0x89
#define ET_I2C_COUNT 0x8a
#define ET_I2C_PREFETCH 0x8b
#define ET_I2C_REG 0x88
#define ET_I2C_DATA7 0x87
#define ET_I2C_DATA6 0x86
#define ET_I2C_DATA5 0x85
#define ET_I2C_DATA4 0x84
#define ET_I2C_DATA3 0x83
#define ET_I2C_DATA2 0x82
#define ET_I2C_DATA1 0x81
#define ET_I2C_DATA0 0x80
#define PAS106_REG2 0x02
#define PAS106_REG3 0x03
#define PAS106_REG4 0x04
#define PAS106_REG5 0x05
#define PAS106_REG6 0x06
#define PAS106_REG7 0x07
#define PAS106_REG9 0x09
#define PAS106_REG0e 0x0e
#define PAS106_REG13 0x13
static const __u8 GainRGBG[] = ;
static const __u8 I2c2[] = ;
static const __u8 I2c3[] = ;
static const __u8 I2c4[] = ;
static void reg_r(struct gspca_dev *gspca_dev,
__u16 index,
__u16 len)
static void reg_w_val(struct gspca_dev *gspca_dev,
__u16 index,
__u8 val)
static void reg_w(struct gspca_dev *gspca_dev,
__u16 index,
const __u8 *buffer,
__u16 len)
static int i2c_w(struct gspca_dev *gspca_dev,
__u8 reg,
const __u8 *buffer,
int len, __u8 mode)
static int i2c_r(struct gspca_dev *gspca_dev,
__u8 reg)
static int Et_WaitStatus(struct gspca_dev *gspca_dev)
static int et_video(struct gspca_dev *gspca_dev,
int on)
static void Et_init2(struct gspca_dev *gspca_dev)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void getcolors(struct gspca_dev *gspca_dev)
static void setautogain(struct gspca_dev *gspca_dev)
static void Et_init1(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static __u8 Et_getgainG(struct gspca_dev *gspca_dev)
static void Et_setgainG(struct gspca_dev *gspca_dev, __u8 gain)
#define BLIMIT(bright) \
(u8)((bright > 0x1f) ? 0x1f : ((bright < 4) ? 3 : bright))
#define LIMIT(color) \
(u8)((color > 0xff) ? 0xff : ((color < 0) ? 0 : color))
static void do_autogain(struct gspca_dev *gspca_dev)
#undef BLIMIT
#undef LIMIT
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getautogain(struct gspca_dev *gspca_dev, __s32 *val)
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
