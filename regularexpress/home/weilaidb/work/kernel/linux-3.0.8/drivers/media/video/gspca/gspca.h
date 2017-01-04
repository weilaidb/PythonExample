#define GSPCAV2_H
extern int gspca_debug;
#define PDEBUG(level, fmt, args...) \
do  while (0)
#define D_ERR  0x01
#define D_PROBE 0x02
#define D_CONF 0x04
#define D_STREAM 0x08
#define D_FRAM 0x10
#define D_PACK 0x20
#define D_USBI 0x00
#define D_USBO 0x00
#define D_V4L2 0x0100
#define PDEBUG(level, fmt, args...)
#undef err
#define err(fmt, args...) \
printk(KERN_ERR MODULE_NAME ": " fmt "\n", ## args)
#undef info
#define info(fmt, args...) \
printk(KERN_INFO MODULE_NAME ": " fmt "\n", ## args)
#undef warn
#define warn(fmt, args...) \
printk(KERN_WARNING MODULE_NAME ": " fmt "\n", ## args)
#define GSPCA_MAX_FRAMES 16
#define MAX_NURBS 4
struct framerates ;
struct gspca_ctrl ;
struct cam ;
struct gspca_dev;
struct gspca_frame;
typedef int (*cam_op) (struct gspca_dev *);
typedef void (*cam_v_op) (struct gspca_dev *);
typedef int (*cam_cf_op) (struct gspca_dev *, const struct usb_device_id *);
typedef int (*cam_jpg_op) (struct gspca_dev *,
struct v4l2_jpegcompression *);
typedef int (*cam_reg_op) (struct gspca_dev *,
struct v4l2_dbg_register *);
typedef int (*cam_ident_op) (struct gspca_dev *,
struct v4l2_dbg_chip_ident *);
typedef void (*cam_streamparm_op) (struct gspca_dev *,
struct v4l2_streamparm *);
typedef int (*cam_qmnu_op) (struct gspca_dev *,
struct v4l2_querymenu *);
typedef void (*cam_pkt_op) (struct gspca_dev *gspca_dev,
u8 *data,
int len);
typedef int (*cam_int_pkt_op) (struct gspca_dev *gspca_dev,
u8 *data,
int len);
struct ctrl ;
struct sd_desc ;
enum gspca_packet_type ;
struct gspca_frame ;
struct gspca_dev ;
int gspca_dev_probe(struct usb_interface *intf,
const struct usb_device_id *id,
const struct sd_desc *sd_desc,
int dev_size,
struct module *module);
int gspca_dev_probe2(struct usb_interface *intf,
const struct usb_device_id *id,
const struct sd_desc *sd_desc,
int dev_size,
struct module *module);
void gspca_disconnect(struct usb_interface *intf);
void gspca_frame_add(struct gspca_dev *gspca_dev,
enum gspca_packet_type packet_type,
const u8 *data,
int len);
int gspca_suspend(struct usb_interface *intf, pm_message_t message);
int gspca_resume(struct usb_interface *intf);
int gspca_auto_gain_n_exposure(struct gspca_dev *gspca_dev, int avg_lum,
int desired_avg_lum, int deadzone, int gain_knee, int exposure_knee);
