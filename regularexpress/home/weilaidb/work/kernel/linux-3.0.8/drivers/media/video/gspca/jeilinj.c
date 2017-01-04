#define MODULE_NAME "jeilinj"
MODULE_AUTHOR("Theodore Kilgore <kilgota@auburn.edu>");
MODULE_DESCRIPTION("GSPCA/JEILINJ USB Camera Driver");
MODULE_LICENSE("GPL");
#define JEILINJ_CMD_TIMEOUT 500
#define JEILINJ_CMD_DELAY 160
#define JEILINJ_DATA_TIMEOUT 1000
#define JEILINJ_MAX_TRANSFER 0x200
#define FRAME_HEADER_LEN 0x10
#define FRAME_START 0xFFFFFFFF
enum ;
#define CAMQUALITY_MIN 0
#define CAMQUALITY_MAX 97
enum e_ctrl ;
struct sd ;
struct jlj_command ;
static struct v4l2_pix_format jlj_mode[] = ;
static void jlj_write2(struct gspca_dev *gspca_dev, unsigned char *command)
static void jlj_read1(struct gspca_dev *gspca_dev, unsigned char response)
static void setfreq(struct gspca_dev *gspca_dev)
static void setcamquality(struct gspca_dev *gspca_dev)
static void setautogain(struct gspca_dev *gspca_dev)
static void setred(struct gspca_dev *gspca_dev)
static void setgreen(struct gspca_dev *gspca_dev)
static void setblue(struct gspca_dev *gspca_dev)
static const struct ctrl sd_ctrls[NCTRLS] = ;
static int jlj_start(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data, int len)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static void sd_stopN(struct gspca_dev *gspca_dev)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_querymenu(struct gspca_dev *gspca_dev,
struct v4l2_querymenu *menu)
static int sd_set_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
static int sd_get_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
static const struct sd_desc sd_desc_sakar_57379 = ;
static const struct sd_desc sd_desc_sportscam_dv15 = ;
static const struct sd_desc *sd_desc[2] = ;
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
