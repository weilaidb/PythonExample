#define MODULE_NAME "zc3xx"
MODULE_AUTHOR("Jean-Francois Moine <http:
"Serge A. Suchkov <Serge.A.S@tochka.ru>");
MODULE_DESCRIPTION("GSPCA ZC03xx/VC3xx USB Camera Driver");
MODULE_LICENSE("GPL");
static int force_sensor = -1;
#define QUANT_VAL 1
enum e_ctrl ;
#define AUTOGAIN_DEF 1
struct sd ;
enum bridges ;
enum sensors ;
static void setcontrast(struct gspca_dev *gspca_dev);
static void setexposure(struct gspca_dev *gspca_dev);
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val);
static void setlightfreq(struct gspca_dev *gspca_dev);
static void setsharpness(struct gspca_dev *gspca_dev);
static const struct ctrl sd_ctrls[NCTRLS] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static const struct v4l2_pix_format broken_vga_mode[] = ;
static const struct v4l2_pix_format sif_mode[] = ;
struct usb_action ;
static const struct usb_action adcm2700_Initial[] = ;
static const struct usb_action adcm2700_InitialScale[] = ;
static const struct usb_action adcm2700_50HZ[] = ;
static const struct usb_action adcm2700_60HZ[] = ;
static const struct usb_action adcm2700_NoFliker[] = ;
static const struct usb_action cs2102_InitialScale[] = ;
static const struct usb_action cs2102_Initial[] = ;
static const struct usb_action cs2102_50HZScale[] = ;
static const struct usb_action cs2102_50HZ[] = ;
static const struct usb_action cs2102_60HZScale[] = ;
static const struct usb_action cs2102_60HZ[] = ;
static const struct usb_action cs2102_NoFlikerScale[] = ;
static const struct usb_action cs2102_NoFliker[] = ;
static const struct usb_action cs2102K_InitialScale[] = ;
static const struct usb_action cs2102K_Initial[] = ;
static const struct usb_action gc0305_Initial[] = ;
static const struct usb_action gc0305_InitialScale[] = ;
static const struct usb_action gc0305_50HZ[] = ;
static const struct usb_action gc0305_60HZ[] = ;
static const struct usb_action gc0305_NoFliker[] = ;
static const struct usb_action hdcs2020_InitialScale[] = ;
static const struct usb_action hdcs2020_Initial[] = ;
static const struct usb_action hdcs2020_50HZ[] = ;
static const struct usb_action hdcs2020_60HZ[] = ;
static const struct usb_action hdcs2020_NoFliker[] = ;
static const struct usb_action hv7131b_InitialScale[] = ;
static const struct usb_action hv7131b_Initial[] = ;
static const struct usb_action hv7131b_50HZ[] = ;
static const struct usb_action hv7131b_50HZScale[] = ;
static const struct usb_action hv7131b_60HZ[] = ;
static const struct usb_action hv7131b_60HZScale[] = ;
static const struct usb_action hv7131b_NoFliker[] = ;
static const struct usb_action hv7131b_NoFlikerScale[] = ;
static const struct usb_action hv7131r_InitialScale[] = ;
static const struct usb_action hv7131r_Initial[] = ;
static const struct usb_action hv7131r_50HZ[] = ;
static const struct usb_action hv7131r_50HZScale[] = ;
static const struct usb_action hv7131r_60HZ[] = ;
static const struct usb_action hv7131r_60HZScale[] = ;
static const struct usb_action hv7131r_NoFliker[] = ;
static const struct usb_action hv7131r_NoFlikerScale[] = ;
static const struct usb_action icm105a_InitialScale[] = ;
static const struct usb_action icm105a_Initial[] = ;
static const struct usb_action icm105a_50HZScale[] = ;
static const struct usb_action icm105a_50HZ[] = ;
static const struct usb_action icm105a_60HZScale[] = ;
static const struct usb_action icm105a_60HZ[] = ;
static const struct usb_action icm105a_NoFlikerScale[] = ;
static const struct usb_action icm105a_NoFliker[] = ;
static const struct usb_action mc501cb_Initial[] = ;
static const struct usb_action mc501cb_InitialScale[] = ;
static const struct usb_action mc501cb_50HZ[] = ;
static const struct usb_action mc501cb_50HZScale[] = ;
static const struct usb_action mc501cb_60HZ[] = ;
static const struct usb_action mc501cb_60HZScale[] = ;
static const struct usb_action mc501cb_NoFliker[] = ;
static const struct usb_action mc501cb_NoFlikerScale[] = ;
static const struct usb_action ov7620_Initial[] = ;
static const struct usb_action ov7620_InitialScale[] = ;
static const struct usb_action ov7620_50HZ[] = ;
static const struct usb_action ov7620_60HZ[] = ;
static const struct usb_action ov7620_NoFliker[] = ;
static const struct usb_action ov7630c_InitialScale[] = ;
static const struct usb_action ov7630c_Initial[] = ;
static const struct usb_action pas106b_Initial_com[] = ;
static const struct usb_action pas106b_InitialScale[] = ;
static const struct usb_action pas106b_Initial[] = ;
static const struct usb_action pas106b_50HZ[] = ;
static const struct usb_action pas106b_60HZ[] = ;
static const struct usb_action pas106b_NoFliker[] = ;
static const struct usb_action pas202b_Initial[] = ;
static const struct usb_action pas202b_InitialScale[] = ;
static const struct usb_action pas202b_50HZ[] = ;
static const struct usb_action pas202b_50HZScale[] = ;
static const struct usb_action pas202b_60HZ[] = ;
static const struct usb_action pas202b_60HZScale[] = ;
static const struct usb_action pas202b_NoFliker[] = ;
static const struct usb_action pas202b_NoFlikerScale[] = ;
static const struct usb_action mt9v111_1_Initial[] = ;
static const struct usb_action mt9v111_1_InitialScale[] = ;
static const struct usb_action mt9v111_1_AE50HZ[] = ;
static const struct usb_action mt9v111_1_AE50HZScale[] = ;
static const struct usb_action mt9v111_1_AE60HZ[] = ;
static const struct usb_action mt9v111_1_AE60HZScale[] = ;
static const struct usb_action mt9v111_1_AENoFliker[] = ;
static const struct usb_action mt9v111_1_AENoFlikerScale[] = ;
static const struct usb_action mt9v111_3_Initial[] = ;
static const struct usb_action mt9v111_3_InitialScale[] = ;
static const struct usb_action mt9v111_3_AE50HZ[] = ;
static const struct usb_action mt9v111_3_AE50HZScale[] = ;
static const struct usb_action mt9v111_3_AE60HZ[] = ;
static const struct usb_action mt9v111_3_AE60HZScale[] = ;
static const struct usb_action mt9v111_3_AENoFliker[] = ;
static const struct usb_action mt9v111_3_AENoFlikerScale[] = ;
static const struct usb_action pb0330_Initial[] = ;
static const struct usb_action pb0330_InitialScale[] = ;
static const struct usb_action pb0330_50HZ[] = ;
static const struct usb_action pb0330_50HZScale[] = ;
static const struct usb_action pb0330_60HZ[] = ;
static const struct usb_action pb0330_60HZScale[] = ;
static const struct usb_action pb0330_NoFliker[] = ;
static const struct usb_action pb0330_NoFlikerScale[] = ;
static const struct usb_action po2030_Initial[] = ;
static const struct usb_action po2030_InitialScale[] = ;
static const struct usb_action po2030_50HZ[] = ;
static const struct usb_action po2030_60HZ[] = ;
static const struct usb_action po2030_NoFliker[] = ;
static const struct usb_action tas5130c_InitialScale[] = ;
static const struct usb_action tas5130c_Initial[] = ;
static const struct usb_action tas5130c_50HZ[] = ;
static const struct usb_action tas5130c_50HZScale[] = ;
static const struct usb_action tas5130c_60HZ[] = ;
static const struct usb_action tas5130c_60HZScale[] = ;
static const struct usb_action tas5130c_NoFliker[] = ;
static const struct usb_action tas5130c_NoFlikerScale[] = ;
static const struct usb_action gc0303_InitialScale[] = ;
static const struct usb_action gc0303_Initial[] = ;
static const struct usb_action gc0303_50HZScale[] = ;
static const struct usb_action gc0303_50HZ[] = ;
static const struct usb_action gc0303_60HZScale[] = ;
static const struct usb_action gc0303_60HZ[] = ;
static const struct usb_action gc0303_NoFlikerScale[] = ;
static const struct usb_action gc0303_NoFliker[] = ;
static u8 reg_r_i(struct gspca_dev *gspca_dev,
u16 index)
static u8 reg_r(struct gspca_dev *gspca_dev,
u16 index)
static void reg_w_i(struct gspca_dev *gspca_dev,
u8 value,
u16 index)
static void reg_w(struct gspca_dev *gspca_dev,
u8 value,
u16 index)
static u16 i2c_read(struct gspca_dev *gspca_dev,
u8 reg)
static u8 i2c_write(struct gspca_dev *gspca_dev,
u8 reg,
u8 valL,
u8 valH)
static void usb_exchange(struct gspca_dev *gspca_dev,
const struct usb_action *action)
static void setmatrix(struct gspca_dev *gspca_dev)
static void setsharpness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void getexposure(struct gspca_dev *gspca_dev)
static void setexposure(struct gspca_dev *gspca_dev)
static void setquality(struct gspca_dev *gspca_dev)
static void setlightfreq(struct gspca_dev *gspca_dev)
static void setautogain(struct gspca_dev *gspca_dev)
static void send_unknown(struct gspca_dev *gspca_dev, int sensor)
static void start_2wr_probe(struct gspca_dev *gspca_dev, int sensor)
static int sif_probe(struct gspca_dev *gspca_dev)
static int vga_2wr_probe(struct gspca_dev *gspca_dev)
struct sensor_by_chipset_revision ;
static const struct sensor_by_chipset_revision chipset_revision_sensor[] = ;
static int vga_3wr_probe(struct gspca_dev *gspca_dev)
static int zcxx_probeSensor(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stop0(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_querymenu(struct gspca_dev *gspca_dev,
struct v4l2_querymenu *menu)
static int sd_set_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
static int sd_get_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
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
module_param(force_sensor, int, 0644);
MODULE_PARM_DESC(force_sensor,
"Force sensor. Only for experts!!!");
