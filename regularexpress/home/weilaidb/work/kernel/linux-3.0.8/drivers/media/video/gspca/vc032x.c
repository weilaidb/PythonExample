#define MODULE_NAME "vc032x"
MODULE_AUTHOR("Jean-François Moine <http:
MODULE_DESCRIPTION("GSPCA/VC032X USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
enum bridges ;
enum sensors ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcolors(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcolors(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_sethflip(struct gspca_dev *gspca_dev, __s32 val);
static int sd_gethflip(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setvflip(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getvflip(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setfreq(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getfreq(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setsharpness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getsharpness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setexposure(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getexposure(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getautogain(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setbacklight(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbacklight(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static u32 ctrl_dis[NSENSORS] = ;
static const struct v4l2_pix_format vc0321_mode[] = ;
static const struct v4l2_pix_format vc0323_mode[] = ;
static const struct v4l2_pix_format bi_mode[] = ;
static const struct v4l2_pix_format svga_mode[] = ;
#define OV7660_REG_MVFP 0x1e
#define OV7660_MVFP_MIRROR	0x20
#define OV7660_MVFP_VFLIP	0x10
static const u8 mi0360_matrix[9] = ;
static const u8 mi0360_initVGA_JPG[][4] = ;
static const u8 mi0360_initQVGA_JPG[][4] = ;
static const u8 mi1310_socinitVGA_JPG[][4] = ;
static const u8 mi1310_socinitQVGA_JPG[][4] = ;
static const u8 mi1310_soc_InitSXGA_JPG[][4] = ;
static const u8 mi1320_gamma[17] = ;
static const u8 mi1320_matrix[9] = ;
static const u8 mi1320_initVGA_data[][4] = ;
static const u8 mi1320_initQVGA_data[][4] = ;
static const u8 mi1320_soc_InitVGA[][4] = ;
static const u8 mi1320_soc_InitQVGA[][4] = ;
static const u8 mi1320_soc_InitSXGA[][4] = ;
static const u8 po3130_gamma[17] = ;
static const u8 po3130_matrix[9] = ;
static const u8 po3130_initVGA_data[][4] = ;
static const u8 po3130_rundata[][4] = ;
static const u8 po3130_initQVGA_data[][4] = ;
static const u8 hv7131r_gamma[17] = ;
static const u8 hv7131r_matrix[9] = ;
static const u8 hv7131r_initVGA_data[][4] = ;
static const u8 hv7131r_initQVGA_data[][4] = ;
static const u8 ov7660_gamma[17] = ;
static const u8 ov7660_matrix[9] = ;
static const u8 ov7660_initVGA_data[][4] = ;
static const u8 ov7660_initQVGA_data[][4] = ;
static const u8 ov7660_50HZ[][4] = ;
static const u8 ov7660_60HZ[][4] = ;
static const u8 ov7660_NoFliker[][4] = ;
static const u8 ov7670_InitVGA[][4] = ;
static const u8 ov7670_InitQVGA[][4] = ;
static const u8 po1200_gamma[17] = ;
static const u8 po1200_matrix[9] = ;
static const u8 po1200_initVGA_data[][4] = ;
static const u8 poxxxx_init_common[][4] = ;
static const u8 poxxxx_gamma[][4] = ;
static const u8 poxxxx_init_start_3[][4] = ;
static const u8 poxxxx_initVGA[][4] = ;
static const u8 poxxxx_initQVGA[][4] = ;
static const u8 poxxxx_init_end_1[][4] = ;
static const u8 poxxxx_init_end_2[][4] = ;
struct sensor_info ;
static const struct sensor_info vc0321_probe_data[] = ;
static const struct sensor_info vc0323_probe_data[] = ;
static void reg_r_i(struct gspca_dev *gspca_dev,
u16 req,
u16 index,
u16 len)
static void reg_r(struct gspca_dev *gspca_dev,
u16 req,
u16 index,
u16 len)
static void reg_w_i(struct gspca_dev *gspca_dev,
u16 req,
u16 value,
u16 index)
static void reg_w(struct gspca_dev *gspca_dev,
u16 req,
u16 value,
u16 index)
static u16 read_sensor_register(struct gspca_dev *gspca_dev,
u16 address)
static int vc032x_probe_sensor(struct gspca_dev *gspca_dev)
static void i2c_write(struct gspca_dev *gspca_dev,
u8 reg, const u8 *val,
u8 size)
static void put_tab_to_reg(struct gspca_dev *gspca_dev,
const u8 *tab, u8 tabsize, u16 addr)
static void usb_exchange(struct gspca_dev *gspca_dev,
const u8 data[][4])
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void sethvflip(struct gspca_dev *gspca_dev)
static void setlightfreq(struct gspca_dev *gspca_dev)
static void setsharpness(struct gspca_dev *gspca_dev)
static void setgain(struct gspca_dev *gspca_dev)
static void setexposure(struct gspca_dev *gspca_dev)
static void setautogain(struct gspca_dev *gspca_dev)
static void setgamma(struct gspca_dev *gspca_dev)
static void setbacklight(struct gspca_dev *gspca_dev)
static void setwb(struct gspca_dev *gspca_dev)
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
static int sd_sethflip(struct gspca_dev *gspca_dev, __s32 val)
static int sd_gethflip(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setvflip(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getvflip(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setfreq(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getfreq(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setsharpness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getsharpness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setexposure(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getexposure(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getautogain(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setbacklight(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbacklight(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_querymenu(struct gspca_dev *gspca_dev,
struct v4l2_querymenu *menu)
static const struct sd_desc sd_desc = ;
#define BF(bridge, flags) \
.driver_info = (BRIDGE_ ## bridge << 8) \
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
