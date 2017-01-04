MODULE_AUTHOR("Olivier Lorin <o.lorin@laposte.net>");
MODULE_DESCRIPTION("Genesys Logic USB PC Camera Driver");
MODULE_LICENSE("GPL");
static void (*dev_init_settings)(struct gspca_dev *gspca_dev);
static int  sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id);
static int  sd_init(struct gspca_dev *gspca_dev);
static int  sd_isoc_init(struct gspca_dev *gspca_dev);
static int  sd_start(struct gspca_dev *gspca_dev);
static void sd_stop0(struct gspca_dev *gspca_dev);
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data, int len);
static void sd_callback(struct gspca_dev *gspca_dev);
static int gl860_guess_sensor(struct gspca_dev *gspca_dev,
u16 vendor_id, u16 product_id);
static s32 AC50Hz = 0xff;
module_param(AC50Hz, int, 0644);
MODULE_PARM_DESC(AC50Hz, " Does AC power frequency is 50Hz? (0/1)");
static char sensor[7];
module_param_string(sensor, sensor, sizeof(sensor), 0644);
MODULE_PARM_DESC(sensor,
" Driver sensor ('MI1320'/'MI2020'/'OV9655'/'OV2640')");
#define SD_SETGET(thename) \
static int sd_set_##thename(struct gspca_dev *gspca_dev, s32 val)\
\
static int sd_get_##thename(struct gspca_dev *gspca_dev, s32 *val)\
SD_SETGET(mirror)
SD_SETGET(flip)
SD_SETGET(AC50Hz)
SD_SETGET(backlight)
SD_SETGET(brightness)
SD_SETGET(gamma)
SD_SETGET(hue)
SD_SETGET(saturation)
SD_SETGET(sharpness)
SD_SETGET(whitebal)
SD_SETGET(contrast)
#define GL860_NCTRLS 11
static struct ctrl sd_ctrls_mi1320[GL860_NCTRLS];
static struct ctrl sd_ctrls_mi2020[GL860_NCTRLS];
static struct ctrl sd_ctrls_ov2640[GL860_NCTRLS];
static struct ctrl sd_ctrls_ov9655[GL860_NCTRLS];
#define SET_MY_CTRL(theid, \
thetype, thelabel, thename) \
if (sd->vmax.thename != 0)
static int gl860_build_control_table(struct gspca_dev *gspca_dev)
static const struct sd_desc sd_desc_mi1320 = ;
static const struct sd_desc sd_desc_mi2020 = ;
static const struct sd_desc sd_desc_ov2640 = ;
static const struct sd_desc sd_desc_ov9655 = ;
static struct v4l2_pix_format mi2020_mode[] = ;
static struct v4l2_pix_format ov2640_mode[] = ;
static struct v4l2_pix_format mi1320_mode[] = ;
static struct v4l2_pix_format ov9655_mode[] = ;
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_isoc_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stop0(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data, int len)
static void sd_callback(struct gspca_dev *gspca_dev)
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void sd_disconnect(struct usb_interface *intf)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
int gl860_RTx(struct gspca_dev *gspca_dev,
unsigned char pref, u32 req, u16 val, u16 index,
s32 len, void *pdata)
int fetch_validx(struct gspca_dev *gspca_dev, struct validx *tbl, int len)
int keep_on_fetching_validx(struct gspca_dev *gspca_dev, struct validx *tbl,
int len, int n)
void fetch_idxdata(struct gspca_dev *gspca_dev, struct idxdata *tbl, int len)
static int gl860_guess_sensor(struct gspca_dev *gspca_dev,
u16 vendor_id, u16 product_id)
