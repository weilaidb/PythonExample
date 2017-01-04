#define MODULE_NAME "sq905c"
MODULE_AUTHOR("Theodore Kilgore <kilgota@auburn.edu>");
MODULE_DESCRIPTION("GSPCA/SQ905C USB Camera Driver");
MODULE_LICENSE("GPL");
#define SQ905C_CMD_TIMEOUT 500
#define SQ905C_DATA_TIMEOUT 1000
#define SQ905C_MAX_TRANSFER 0x8000
#define FRAME_HEADER_LEN 0x50
#define SQ905C_CLEAR   0xa0
#define SQ905C_GET_ID  0x14f4
#define SQ905C_CAPTURE_LOW 0xa040
#define SQ905C_CAPTURE_MED 0x1440
#define SQ905C_CAPTURE_HI 0x2840
#define SQ905C_CAPTURE_INDEX 0x110f
struct sd ;
static struct v4l2_pix_format sq905c_mode[] = ;
static int sq905c_command(struct gspca_dev *gspca_dev, u16 command, u16 index)
static int sq905c_read(struct gspca_dev *gspca_dev, u16 command, u16 index,
int size)
static void sq905c_dostream(struct work_struct *work)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static void sd_stop0(struct gspca_dev *gspca_dev)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static const struct sd_desc sd_desc = ;
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
