#define DRIVER_AUTHOR "Alexey Klimov <klimov.linux@gmail.com>"
#define DRIVER_DESC "AverMedia MR 800 USB FM radio driver"
#define DRIVER_VERSION "0.11"
#define RADIO_VERSION KERNEL_VERSION(0, 1, 1)
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define USB_AMRADIO_VENDOR 0x07ca
#define USB_AMRADIO_PRODUCT 0xb800
#define MR800_DRIVER_NAME "radio-mr800"
#define amradio_dev_warn(dev, fmt, arg...)				\
dev_warn(dev, MR800_DRIVER_NAME " - " fmt, ##arg)
#define amradio_dev_err(dev, fmt, arg...) \
dev_err(dev, MR800_DRIVER_NAME " - " fmt, ##arg)
#define BUFFER_LENGTH 8
#define USB_TIMEOUT 500
#define FREQ_MIN  87.5
#define FREQ_MAX 108.0
#define FREQ_MUL 16000
#define AMRADIO_SET_FREQ	0xa4
#define AMRADIO_SET_MUTE	0xab
#define AMRADIO_SET_MONO	0xae
#define AMRADIO_START		0x00
#define AMRADIO_STOP		0x01
#define WANT_STEREO		0x00
#define WANT_MONO		0x01
static int radio_nr = -1;
module_param(radio_nr, int, 0);
MODULE_PARM_DESC(radio_nr, "Radio Nr");
static int usb_amradio_probe(struct usb_interface *intf,
const struct usb_device_id *id);
static void usb_amradio_disconnect(struct usb_interface *intf);
static int usb_amradio_open(struct file *file);
static int usb_amradio_close(struct file *file);
static int usb_amradio_suspend(struct usb_interface *intf,
pm_message_t message);
static int usb_amradio_resume(struct usb_interface *intf);
struct amradio_device ;
static inline struct amradio_device *to_amradio_dev(struct v4l2_device *v4l2_dev)
static struct usb_device_id usb_amradio_device_table[] = ;
MODULE_DEVICE_TABLE(usb, usb_amradio_device_table);
static struct usb_driver usb_amradio_driver = ;
static int amradio_set_mute(struct amradio_device *radio, char argument)
static int amradio_setfreq(struct amradio_device *radio, int freq)
static int amradio_set_stereo(struct amradio_device *radio, char argument)
static void usb_amradio_disconnect(struct usb_interface *intf)
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
static int vidioc_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int vidioc_g_input(struct file *filp, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *filp, void *priv, unsigned int i)
static int usb_amradio_init(struct amradio_device *radio)
static int usb_amradio_open(struct file *file)
static int usb_amradio_close(struct file *file)
static int usb_amradio_suspend(struct usb_interface *intf, pm_message_t message)
static int usb_amradio_resume(struct usb_interface *intf)
static const struct v4l2_file_operations usb_amradio_fops = ;
static const struct v4l2_ioctl_ops usb_amradio_ioctl_ops = ;
static void usb_amradio_video_device_release(struct video_device *videodev)
static int usb_amradio_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static int __init amradio_init(void)
static void __exit amradio_exit(void)
module_init(amradio_init);
module_exit(amradio_exit);
