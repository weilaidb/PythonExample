#define DRIVER_NAME         "em28xx"
static int tuner = -1;
module_param(tuner, int, 0444);
MODULE_PARM_DESC(tuner, "tuner type");
static unsigned int disable_ir;
module_param(disable_ir, int, 0444);
MODULE_PARM_DESC(disable_ir, "disable infrared remote support");
static unsigned int disable_usb_speed_check;
module_param(disable_usb_speed_check, int, 0444);
MODULE_PARM_DESC(disable_usb_speed_check,
"override min bandwidth requirement of 480M bps");
static unsigned int card[]     = ;
module_param_array(card,  int, NULL, 0444);
MODULE_PARM_DESC(card,     "card type");
static unsigned long em28xx_devused;
struct em28xx_hash_table ;
static struct em28xx_reg_seq default_analog[] = ;
static struct em28xx_reg_seq default_digital[] = ;
static struct em28xx_reg_seq hauppauge_wintv_hvr_900_analog[] = ;
static struct em28xx_reg_seq hauppauge_wintv_hvr_900_digital[] = ;
static struct em28xx_reg_seq hauppauge_wintv_hvr_900R2_digital[] = ;
static struct em28xx_reg_seq em2880_msi_digivox_ad_analog[] = ;
static struct em28xx_reg_seq em2882_kworld_315u_digital[] = ;
static struct em28xx_reg_seq em2882_kworld_315u_tuner_gpio[] = ;
static struct em28xx_reg_seq kworld_330u_analog[] = ;
static struct em28xx_reg_seq kworld_330u_digital[] = ;
static struct em28xx_reg_seq evga_indtube_analog[] = ;
static struct em28xx_reg_seq evga_indtube_digital[] = ;
static struct em28xx_reg_seq kworld_a340_digital[] = ;
static struct em28xx_reg_seq pinnacle_hybrid_pro_analog[] = ;
static struct em28xx_reg_seq pinnacle_hybrid_pro_digital[] = ;
static struct em28xx_reg_seq terratec_cinergy_USB_XS_FR_analog[] = ;
static struct em28xx_reg_seq terratec_cinergy_USB_XS_FR_digital[] = ;
static struct em28xx_reg_seq reddo_dvb_c_usb_box[] = ;
static struct em28xx_reg_seq default_tuner_gpio[] = ;
static struct em28xx_reg_seq compro_unmute_tv_gpio[] = ;
static struct em28xx_reg_seq compro_unmute_svid_gpio[] = ;
static struct em28xx_reg_seq compro_mute_gpio[] = ;
static struct em28xx_reg_seq terratec_av350_mute_gpio[] = ;
static struct em28xx_reg_seq terratec_av350_unmute_gpio[] = ;
static struct em28xx_reg_seq silvercrest_reg_seq[] = ;
static struct em28xx_reg_seq vc211a_enable[] = ;
static struct em28xx_reg_seq dikom_dk300_digital[] = ;
static struct em28xx_reg_seq leadership_digital[] = ;
static struct em28xx_reg_seq leadership_reset[] = ;
static struct em28xx_reg_seq pctv_290e[] = ;
struct em28xx_board em28xx_boards[] = ;
const unsigned int em28xx_bcount = ARRAY_SIZE(em28xx_boards);
struct usb_device_id em28xx_id_table[] = ;
MODULE_DEVICE_TABLE(usb, em28xx_id_table);
static struct em28xx_hash_table em28xx_eeprom_hash[] = ;
static struct em28xx_hash_table em28xx_i2c_hash[] = ;
static unsigned short saa711x_addrs[] = ;
static unsigned short tvp5150_addrs[] = ;
static unsigned short msp3400_addrs[] = ;
int em28xx_tuner_callback(void *ptr, int component, int command, int arg)
EXPORT_SYMBOL_GPL(em28xx_tuner_callback);
static inline void em28xx_set_model(struct em28xx *dev)
static int em28xx_initialize_mt9m111(struct em28xx *dev)
static int em28xx_initialize_mt9m001(struct em28xx *dev)
static int em28xx_hint_sensor(struct em28xx *dev)
void em28xx_pre_card_setup(struct em28xx *dev)
static void em28xx_setup_xc3028(struct em28xx *dev, struct xc2028_ctrl *ctl)
static void em28xx_tuner_setup(struct em28xx *dev)
static int em28xx_hint_board(struct em28xx *dev)
void em28xx_register_i2c_ir(struct em28xx *dev)
void em28xx_card_setup(struct em28xx *dev)
#if defined(CONFIG_MODULES) && defined(MODULE)
static void request_module_async(struct work_struct *work)
static void request_modules(struct em28xx *dev)
static void flush_request_modules(struct em28xx *dev)
#define request_modules(dev)
#define flush_request_modules(dev)
void em28xx_release_resources(struct em28xx *dev)
;
static int em28xx_init_dev(struct em28xx **devhandle, struct usb_device *udev,
struct usb_interface *interface,
int minor)
static int em28xx_usb_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void em28xx_usb_disconnect(struct usb_interface *interface)
static struct usb_driver em28xx_usb_driver = ;
static int __init em28xx_module_init(void)
static void __exit em28xx_module_exit(void)
module_init(em28xx_module_init);
module_exit(em28xx_module_exit);
