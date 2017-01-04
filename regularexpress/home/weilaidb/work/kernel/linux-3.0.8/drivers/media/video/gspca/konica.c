#define MODULE_NAME "konica"
MODULE_AUTHOR("Hans de Goede <hdegoede@redhat.com>");
MODULE_DESCRIPTION("Konica chipset USB Camera Driver");
MODULE_LICENSE("GPL");
#define WHITEBAL_REG   0x01
#define BRIGHTNESS_REG 0x02
#define SHARPNESS_REG  0x03
#define CONTRAST_REG   0x04
#define SATURATION_REG 0x05
struct sd ;
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setsaturation(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getsaturation(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setwhitebal(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getwhitebal(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setsharpness(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getsharpness(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format vga_mode[] = ;
static void sd_isoc_irq(struct urb *urb);
static void reg_w(struct gspca_dev *gspca_dev, u16 value, u16 index)
static void reg_r(struct gspca_dev *gspca_dev, u16 value, u16 index)
static void konica_stream_on(struct gspca_dev *gspca_dev)
static void konica_stream_off(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_isoc_irq(struct urb *urb)
static int sd_setbrightness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getbrightness(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setcontrast(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getcontrast(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setsaturation(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getsaturation(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setwhitebal(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getwhitebal(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setsharpness(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getsharpness(struct gspca_dev *gspca_dev, __s32 *val)
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
