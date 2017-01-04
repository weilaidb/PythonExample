#define MODULE_NAME "t613"
#define V4L2_CID_EFFECTS (V4L2_CID_PRIVATE_BASE + 0)
MODULE_AUTHOR("Leandro Costantino <le_costantino@pixartargentina.com.ar>");
MODULE_DESCRIPTION("GSPCA/T613 (JPEG Compliance) USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
enum sensors ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setlowlight(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getlowlight(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setgamma(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getgamma(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setsharpness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getsharpness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setfreq(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getfreq(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setawb(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getawb(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setblue_gain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getblue_gain(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setred_gain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getred_gain(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setmirror(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getmirror(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_seteffect(struct gspca_dev *gspca_dev, __s32 val);
static int sd_geteffect(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode_t16[] = ;
struct additional_sensor_data ;
static const u8 n4_om6802[] = ;
static const u8 n4_other[] = ;
static const u8 n4_tas5130a[] = ;
static const u8 n4_lt168g[] = ;
static const struct additional_sensor_data sensor_data[] = ;
#define MAX_EFFECTS 7
static char *effects_control[MAX_EFFECTS] = ;
static const u8 effects_table[MAX_EFFECTS][6] = ;
static const u8 gamma_table[GAMMA_MAX][17] = ;
static const u8 tas5130a_sensor_init[][8] = ;
static u8 sensor_reset[] = ;
static u8 reg_r(struct gspca_dev *gspca_dev,
u16 index)
static void reg_w(struct gspca_dev *gspca_dev,
u16 index)
static void reg_w_buf(struct gspca_dev *gspca_dev,
const u8 *buffer, u16 len)
static void reg_w_ixbuf(struct gspca_dev *gspca_dev,
u8 reg,
const u8 *buffer, u16 len)
static void om6802_sensor_init(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void setgamma(struct gspca_dev *gspca_dev)
static void setRGB(struct gspca_dev *gspca_dev)
static void setawb(struct gspca_dev *gspca_dev)
static void init_gains(struct gspca_dev *gspca_dev)
static void setsharpness(struct gspca_dev *gspca_dev)
static void setfreq(struct gspca_dev *gspca_dev)
static int sd_init(struct gspca_dev *gspca_dev)
static void setmirror(struct gspca_dev *gspca_dev)
static void seteffect(struct gspca_dev *gspca_dev)
static void poll_sensor(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setblue_gain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getblue_gain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setred_gain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getred_gain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setawb(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getawb(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setmirror(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getmirror(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_seteffect(struct gspca_dev *gspca_dev, __s32 val)
static int sd_geteffect(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setgamma(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getgamma(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setfreq(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getfreq(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setsharpness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getsharpness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setlowlight(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getlowlight(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_querymenu(struct gspca_dev *gspca_dev,
struct v4l2_querymenu *menu)
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
