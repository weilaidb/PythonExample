#define MODULE_NAME "sonixj"
MODULE_AUTHOR("Jean-François Moine <http:
MODULE_DESCRIPTION("GSPCA/SONIX JPEG USB Camera Driver");
MODULE_LICENSE("GPL");
enum e_ctrl ;
struct sd ;
enum sensors ;
static void qual_upd(struct work_struct *work);
#define F_PDN_INV	0x01
#define F_ILLUM		0x02
#define S_PWR_DN	0x01
#define S_PDN_INV	0x02
#define V_TX_EN		0x04
#define LED		0x08
#define SCL_SEL_OD	0x20
#define SYS_SEL_48M	0x40
#define MCK_SIZE_MASK	0x1f
#define SEN_CLK_EN	0x20
#define DEF_EN		0x80
static void setbrightness(struct gspca_dev *gspca_dev);
static void setcontrast(struct gspca_dev *gspca_dev);
static void setcolors(struct gspca_dev *gspca_dev);
static void setredblue(struct gspca_dev *gspca_dev);
static void setgamma(struct gspca_dev *gspca_dev);
static void setautogain(struct gspca_dev *gspca_dev);
static void sethvflip(struct gspca_dev *gspca_dev);
static void setsharpness(struct gspca_dev *gspca_dev);
static void setillum(struct gspca_dev *gspca_dev);
static void setfreq(struct gspca_dev *gspca_dev);
static const struct ctrl sd_ctrls[NCTRLS] = ;
static const __u32 ctrl_dis[] = ;
static const struct v4l2_pix_format cif_mode[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static const u8 sn_adcm1700[0x1c] = ;
static const u8 sn_gc0307[0x1c] = ;
static const u8 sn_hv7131[0x1c] = ;
static const u8 sn_mi0360[0x1c] = ;
static const u8 sn_mi0360b[0x1c] = ;
static const u8 sn_mo4000[0x1c] = ;
static const u8 sn_mt9v111[0x1c] = ;
static const u8 sn_om6802[0x1c] = ;
static const u8 sn_ov7630[0x1c] = ;
static const u8 sn_ov7648[0x1c] = ;
static const u8 sn_ov7660[0x1c] = ;
static const u8 sn_po1030[0x1c] = ;
static const u8 sn_po2030n[0x1c] = ;
static const u8 sn_soi768[0x1c] = ;
static const u8 sn_sp80708[0x1c] = ;
static const u8 *sn_tb[] = ;
static const u8 gamma_def[17] = ;
static const u8 gamma_spec_0[17] = ;
static const u8 gamma_spec_1[17] = ;
static const u8 gamma_spec_2[17] = ;
static const u8 gamma_spec_3[17] = ;
static const u8 reg84[] = ;
#define DELAY	0xdd
static const u8 adcm1700_sensor_init[][8] = ;
static const u8 adcm1700_sensor_param1[][8] = ;
static const u8 gc0307_sensor_init[][8] = ;
static const u8 gc0307_sensor_param1[][8] = ;
static const u8 hv7131r_sensor_init[][8] = ;
static const u8 mi0360_sensor_init[][8] = ;
static const u8 mi0360b_sensor_init[][8] = ;
static const u8 mi0360b_sensor_param1[][8] = ;
static const u8 mo4000_sensor_init[][8] = ;
static const u8 mt9v111_sensor_init[][8] = ;
static const u8 mt9v111_sensor_param1[][8] = ;
static const u8 om6802_init0[2][8] = ;
static const u8 om6802_sensor_init[][8] = ;
static const u8 om6802_sensor_param1[][8] = ;
static const u8 ov7630_sensor_init[][8] = ;
static const u8 ov7630_sensor_param1[][8] = ;
static const u8 ov7648_sensor_init[][8] = ;
static const u8 ov7648_sensor_param1[][8] = ;
static const u8 ov7660_sensor_init[][8] = ;
static const u8 ov7660_sensor_param1[][8] = ;
static const u8 po1030_sensor_init[][8] = ;
static const u8 po1030_sensor_param1[][8] = ;
static const u8 po2030n_sensor_init[][8] = ;
static const u8 po2030n_sensor_param1[][8] = ;
static const u8 soi768_sensor_init[][8] = ;
static const u8 soi768_sensor_param1[][8] = ;
static const u8 sp80708_sensor_init[][8] = ;
static const u8 sp80708_sensor_param1[][8] = ;
static const u8 (*sensor_init[])[8] = ;
static void reg_r(struct gspca_dev *gspca_dev,
u16 value, int len)
static void reg_w1(struct gspca_dev *gspca_dev,
u16 value,
u8 data)
static void reg_w(struct gspca_dev *gspca_dev,
u16 value,
const u8 *buffer,
int len)
static void i2c_w1(struct gspca_dev *gspca_dev, u8 reg, u8 val)
static void i2c_w8(struct gspca_dev *gspca_dev,
const u8 *buffer)
static void i2c_r(struct gspca_dev *gspca_dev, u8 reg, int len)
static void i2c_w_seq(struct gspca_dev *gspca_dev,
const u8 (*data)[8])
static void hv7131r_probe(struct gspca_dev *gspca_dev)
static void mi0360_probe(struct gspca_dev *gspca_dev)
static void ov7630_probe(struct gspca_dev *gspca_dev)
static void ov7648_probe(struct gspca_dev *gspca_dev)
static void po2030n_probe(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static u32 setexposure(struct gspca_dev *gspca_dev,
u32 expo)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void setredblue(struct gspca_dev *gspca_dev)
static void setgamma(struct gspca_dev *gspca_dev)
static void setautogain(struct gspca_dev *gspca_dev)
static void sethvflip(struct gspca_dev *gspca_dev)
static void setsharpness(struct gspca_dev *gspca_dev)
static void setillum(struct gspca_dev *gspca_dev)
static void setfreq(struct gspca_dev *gspca_dev)
static void setjpegqual(struct gspca_dev *gspca_dev)
static void qual_upd(struct work_struct *work)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_stop0(struct gspca_dev *gspca_dev)
static void do_autogain(struct gspca_dev *gspca_dev)
static void set_lum(struct sd *sd,
u8 *data)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_get_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
static int sd_querymenu(struct gspca_dev *gspca_dev,
struct v4l2_querymenu *menu)
#if defined(CONFIG_INPUT) || defined(CONFIG_INPUT_MODULE)
static int sd_int_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static const struct sd_desc sd_desc = ;
#define BS(bridge, sensor) \
.driver_info = (BRIDGE_ ## bridge << 16) \
| (SENSOR_ ## sensor << 8)
#define BSF(bridge, sensor, flags) \
.driver_info = (BRIDGE_ ## bridge << 16) \
| (SENSOR_ ## sensor << 8) \
| (flags)
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
