#define MODULE_NAME "xirlink-cit"
MODULE_AUTHOR("Hans de Goede <hdegoede@redhat.com>");
MODULE_DESCRIPTION("Xirlink C-IT");
MODULE_LICENSE("GPL");
static int ibm_netcam_pro;
module_param(ibm_netcam_pro, int, 0);
MODULE_PARM_DESC(ibm_netcam_pro,
"Use IBM Netcamera Pro init sequences for Model 3 cams");
static int rca_input;
module_param(rca_input, int, 0644);
MODULE_PARM_DESC(rca_input,
"Use rca input instead of ccd sensor on Model 3 cams");
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_sethue(struct gspca_dev *gspca_dev, __s32 val);
static int sd_gethue(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setsharpness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getsharpness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setlighting(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getlighting(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_sethflip(struct gspca_dev *gspca_dev, __s32 val);
static int sd_gethflip(struct gspca_dev *gspca_dev, __s32 *val);
static void sd_stop0(struct gspca_dev *gspca_dev);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format cif_yuv_mode[] = ;
static const struct v4l2_pix_format vga_yuv_mode[] = ;
static const struct v4l2_pix_format model0_mode[] = ;
static const struct v4l2_pix_format model2_mode[] = ;
static const u16 rca_initdata[][3] = ;
static const int cit_model1_ntries = 5;
static const int cit_model1_ntries2 = 2;
static int cit_write_reg(struct gspca_dev *gspca_dev, u16 value, u16 index)
static int cit_read_reg(struct gspca_dev *gspca_dev, u16 index, int verbose)
static void cit_send_FF_04_02(struct gspca_dev *gspca_dev)
static void cit_send_00_04_06(struct gspca_dev *gspca_dev)
static void cit_send_x_00(struct gspca_dev *gspca_dev, unsigned short x)
static void cit_send_x_00_05(struct gspca_dev *gspca_dev, unsigned short x)
static void cit_send_x_00_05_02(struct gspca_dev *gspca_dev, unsigned short x)
static void cit_send_x_01_00_05(struct gspca_dev *gspca_dev, u16 x)
static void cit_send_x_00_05_02_01(struct gspca_dev *gspca_dev, u16 x)
static void cit_send_x_00_05_02_08_01(struct gspca_dev *gspca_dev, u16 x)
static void cit_Packet_Format1(struct gspca_dev *gspca_dev, u16 fkey, u16 val)
static void cit_PacketFormat2(struct gspca_dev *gspca_dev, u16 fkey, u16 val)
static void cit_model2_Packet2(struct gspca_dev *gspca_dev)
static void cit_model2_Packet1(struct gspca_dev *gspca_dev, u16 v1, u16 v2)
static void cit_model3_Packet1(struct gspca_dev *gspca_dev, u16 v1, u16 v2)
static void cit_model4_Packet1(struct gspca_dev *gspca_dev, u16 v1, u16 v2)
static void cit_model4_BrightnessPacket(struct gspca_dev *gspca_dev, u16 val)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int cit_init_model0(struct gspca_dev *gspca_dev)
static int cit_init_ibm_netcam_pro(struct gspca_dev *gspca_dev)
static int sd_init(struct gspca_dev *gspca_dev)
static int cit_set_brightness(struct gspca_dev *gspca_dev)
static int cit_set_contrast(struct gspca_dev *gspca_dev)
static int cit_set_hue(struct gspca_dev *gspca_dev)
static int cit_set_sharpness(struct gspca_dev *gspca_dev)
static void cit_set_lighting(struct gspca_dev *gspca_dev)
static void cit_set_hflip(struct gspca_dev *gspca_dev)
static int cit_restart_stream(struct gspca_dev *gspca_dev)
static int cit_get_packet_size(struct gspca_dev *gspca_dev)
static int cit_get_clock_div(struct gspca_dev *gspca_dev)
static int cit_start_model0(struct gspca_dev *gspca_dev)
static int cit_start_model1(struct gspca_dev *gspca_dev)
static int cit_start_model2(struct gspca_dev *gspca_dev)
static int cit_start_model3(struct gspca_dev *gspca_dev)
static int cit_start_model4(struct gspca_dev *gspca_dev)
static int cit_start_ibm_netcam_pro(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static int sd_isoc_init(struct gspca_dev *gspca_dev)
static int sd_isoc_nego(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_stop0(struct gspca_dev *gspca_dev)
static u8 *cit_find_sof(struct gspca_dev *gspca_dev, u8 *data, int len)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data, int len)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_sethue(struct gspca_dev *gspca_dev, __s32 val)
static int sd_gethue(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setsharpness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getsharpness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setlighting(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getlighting(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_sethflip(struct gspca_dev *gspca_dev, __s32 val)
static int sd_gethflip(struct gspca_dev *gspca_dev, __s32 *val)
#if defined(CONFIG_INPUT) || defined(CONFIG_INPUT_MODULE)
static void cit_check_button(struct gspca_dev *gspca_dev)
static const struct sd_desc sd_desc = ;
static const struct sd_desc sd_desc_isoc_nego = ;
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
