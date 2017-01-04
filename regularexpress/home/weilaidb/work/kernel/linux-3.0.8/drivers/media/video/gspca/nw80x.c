#define MODULE_NAME "nw80x"
MODULE_AUTHOR("Jean-Francois Moine <http:
MODULE_DESCRIPTION("NW80x USB Camera Driver");
MODULE_LICENSE("GPL");
static int webcam;
enum e_ctrl ;
#define AUTOGAIN_DEF 1
struct sd ;
enum bridges ;
enum webcams ;
static const u8 webcam_chip[NWEBCAMS] = ;
static const struct v4l2_pix_format cif_mode[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
#define I2C0 0xff
static const u8 nw800_init[] = ;
static const u8 nw800_start[] = ;
static const u8 nw801_start_1[] = ;
static const u8 nw801_start_qvga[] = ;
static const u8 nw801_start_vga[] = ;
static const u8 nw801_start_2[] = ;
static const u8 nw802_start[] = ;
static const u8 spacecam_init[] = ;
static const u8 spacecam_start[] = ;
static const u8 spacecam2_start[] = ;
static const u8 cvideopro_start[] = ;
static const u8 dlink_start[] = ;
static const u8 ds3303_start[] = ;
static const u8 kr651_start_1[] = ;
static const u8 kr651_start_qvga[] = ;
static const u8 kr651_start_vga[] = ;
static const u8 kr651_start_2[] = ;
static const u8 kritter_start[] = ;
static const u8 mustek_start[] = ;
static const u8 proscope_init[] = ;
static const u8 proscope_start_1[] = ;
static const u8 proscope_start_qvga[] = ;
static const u8 proscope_start_vga[] = ;
static const u8 proscope_start_2[] = ;
static const u8 twinkle_start[] = ;
static const u8 dvcv6_start[] = ;
static const u8 *webcam_start[] = ;
static void reg_w(struct gspca_dev *gspca_dev,
u16 index,
const u8 *data,
int len)
static void reg_r(struct gspca_dev *gspca_dev,
u16 index,
int len)
static void i2c_w(struct gspca_dev *gspca_dev,
u8 i2c_addr,
const u8 *data,
int len)
static void reg_w_buf(struct gspca_dev *gspca_dev,
const u8 *cmd)
static int swap_bits(int v)
static void setgain(struct gspca_dev *gspca_dev)
static void setexposure(struct gspca_dev *gspca_dev)
static void setautogain(struct gspca_dev *gspca_dev)
static int nw802_test_reg(struct gspca_dev *gspca_dev,
u16 index,
u8 value)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val)
static void do_autogain(struct gspca_dev *gspca_dev)
static const struct ctrl sd_ctrls[NCTRLS] = ;
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
module_param(webcam, int, 0644);
MODULE_PARM_DESC(webcam,
"Webcam type\n"
"0: generic\n"
"1: Trust 120 SpaceCam\n"
"2: other Trust 120 SpaceCam\n"
"3: Conceptronic Video Pro\n"
"4: D-link dru-350c\n"
"5: Plustek Opticam 500U\n"
"6: Panasonic GP-KR651US\n"
"7: iRez Kritter\n"
"8: Mustek Wcam 300 mini\n"
"9: Scalar USB Microscope M2 (Proscope)\n"
"10: Divio Chicony TwinkleCam\n"
"11: DVC-V6\n");
