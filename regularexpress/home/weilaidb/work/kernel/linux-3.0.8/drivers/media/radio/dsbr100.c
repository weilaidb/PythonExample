#define DRIVER_VERSION "v0.46"
#define RADIO_VERSION KERNEL_VERSION(0, 4, 6)
#define DRIVER_AUTHOR "Markus Demleitner <msdemlei@tucana.harvard.edu>"
#define DRIVER_DESC "D-Link DSB-R100 USB FM radio driver"
#define DSB100_VENDOR 0x04b4
#define DSB100_PRODUCT 0x1002
#define DSB100_TUNE 1
#define DSB100_ONOFF 2
#define TB_LEN 16
#define FREQ_MIN  87.5
#define FREQ_MAX 108.0
#define FREQ_MUL 16000
#define STARTED	0
#define STOPPED	1
#define v4l2_dev_to_radio(d) container_of(d, struct dsbr100_device, v4l2_dev)
static int usb_dsbr100_probe(struct usb_interface *intf,
const struct usb_device_id *id);
static void usb_dsbr100_disconnect(struct usb_interface *intf);
static int usb_dsbr100_suspend(struct usb_interface *intf,
pm_message_t message);
static int usb_dsbr100_resume(struct usb_interface *intf);
static int radio_nr = -1;
module_param(radio_nr, int, 0);
struct dsbr100_device ;
static struct usb_device_id usb_dsbr100_device_table [] = ;
MODULE_DEVICE_TABLE (usb, usb_dsbr100_device_table);
static struct usb_driver usb_dsbr100_driver = ;
static int dsbr100_start(struct dsbr100_device *radio)
static int dsbr100_stop(struct dsbr100_device *radio)
static int dsbr100_setfreq(struct dsbr100_device *radio)
static void dsbr100_getstat(struct dsbr100_device *radio)
static int vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *v)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int vidioc_g_input(struct file *filp, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *filp, void *priv, unsigned int i)
static int vidioc_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static void usb_dsbr100_disconnect(struct usb_interface *intf)
static int usb_dsbr100_suspend(struct usb_interface *intf, pm_message_t message)
static int usb_dsbr100_resume(struct usb_interface *intf)
static void usb_dsbr100_release(struct v4l2_device *v4l2_dev)
static const struct v4l2_file_operations usb_dsbr100_fops = ;
static const struct v4l2_ioctl_ops usb_dsbr100_ioctl_ops = ;
static int usb_dsbr100_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static int __init dsbr100_init(void)
static void __exit dsbr100_exit(void)
module_init (dsbr100_init);
module_exit (dsbr100_exit);
MODULE_AUTHOR( DRIVER_AUTHOR );
MODULE_DESCRIPTION( DRIVER_DESC );
MODULE_LICENSE("GPL");
