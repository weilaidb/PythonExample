#define MODULE_NAME "pac7302"
MODULE_AUTHOR("Thomas Kaiser thomas@kaiser-linux.li");
MODULE_DESCRIPTION("Pixart PAC7302");
MODULE_LICENSE("GPL");
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setwhitebalance(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getwhitebalance(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setredbalance(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getredbalance(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setbluebalance(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbluebalance(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getautogain(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_sethflip(struct gspca_dev *gspca_dev, __s32 val);
static int sd_gethflip(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setvflip(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getvflip(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setexposure(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getexposure(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
#define LOAD_PAGE3		255
#define END_OF_SEQUENCE		0
static const __u8 init_7302[] = ;
static const __u8 start_7302[] = ;
#define SKIP		0xaa
static const __u8 page3_7302[] = ;
static void reg_w_buf(struct gspca_dev *gspca_dev,
__u8 index,
const u8 *buffer, int len)
static void reg_w(struct gspca_dev *gspca_dev,
__u8 index,
__u8 value)
static void reg_w_seq(struct gspca_dev *gspca_dev,
const __u8 *seq, int len)
static void reg_w_page(struct gspca_dev *gspca_dev,
const __u8 *page, int len)
static void reg_w_var(struct gspca_dev *gspca_dev,
const __u8 *seq,
const __u8 *page3, unsigned int page3_len)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static void setbrightcont(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void setwhitebalance(struct gspca_dev *gspca_dev)
static void setredbalance(struct gspca_dev *gspca_dev)
static void setbluebalance(struct gspca_dev *gspca_dev)
static void setgain(struct gspca_dev *gspca_dev)
static void setexposure(struct gspca_dev *gspca_dev)
static void sethvflip(struct gspca_dev *gspca_dev)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_stop0(struct gspca_dev *gspca_dev)
static void do_autogain(struct gspca_dev *gspca_dev)
static const unsigned char pac_jpeg_header1[] = ;
static const unsigned char pac_jpeg_header2[] = ;
static void pac_start_frame(struct gspca_dev *gspca_dev,
__u16 lines, __u16 samples_per_line)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setwhitebalance(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getwhitebalance(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setredbalance(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getredbalance(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setbluebalance(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbluebalance(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setexposure(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getexposure(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getautogain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_sethflip(struct gspca_dev *gspca_dev, __s32 val)
static int sd_gethflip(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setvflip(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getvflip(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_dbg_s_register(struct gspca_dev *gspca_dev,
struct v4l2_dbg_register *reg)
static int sd_chip_ident(struct gspca_dev *gspca_dev,
struct v4l2_dbg_chip_ident *chip)
#if defined(CONFIG_INPUT) || defined(CONFIG_INPUT_MODULE)
static int sd_int_pkt_scan(struct gspca_dev *gspca_dev,
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
