#define DRIVER_AUTHOR					\
"Joerg Heckenbach <joerg@heckenbach-aw.de>, "	\
"Dwaine Garden <DwaineGarden@rogers.com>"
#define DRIVER_NAME "usbvision"
#define DRIVER_ALIAS "USBVision"
#define DRIVER_DESC "USBVision USB Video Device Driver for Linux"
#define DRIVER_LICENSE "GPL"
#define USBVISION_DRIVER_VERSION_MAJOR 0
#define USBVISION_DRIVER_VERSION_MINOR 9
#define USBVISION_DRIVER_VERSION_PATCHLEVEL 10
#define USBVISION_DRIVER_VERSION KERNEL_VERSION(USBVISION_DRIVER_VERSION_MAJOR,\
USBVISION_DRIVER_VERSION_MINOR,\
USBVISION_DRIVER_VERSION_PATCHLEVEL)
#define USBVISION_VERSION_STRING __stringify(USBVISION_DRIVER_VERSION_MAJOR) \
"." __stringify(USBVISION_DRIVER_VERSION_MINOR) \
"." __stringify(USBVISION_DRIVER_VERSION_PATCHLEVEL)
#define	ENABLE_HEXDUMP	0
#define PDEBUG(level, fmt, args...)
#define PDEBUG(level, fmt, args...) do  while (0)
#define DBG_IO		(1 << 1)
#define DBG_PROBE	(1 << 2)
#define DBG_MMAP	(1 << 3)
#define rmspace(str)	while (*str == ' ') str++;
#define goto2next(str)	while (*str != ' ') str++; while (*str == ' ') str++;
static int usbvision_nr;
static struct usbvision_v4l2_format_st usbvision_v4l2_format[] = ;
static void usbvision_release(struct usb_usbvision *usbvision);
static int isoc_mode = ISOC_MODE_COMPRESS;
static int video_debug;
static int power_on_at_open = 1;
static int video_nr = -1;
static int radio_nr = -1;
module_param(isoc_mode, int, 0444);
module_param(video_debug, int, 0444);
module_param(power_on_at_open, int, 0444);
module_param(video_nr, int, 0444);
module_param(radio_nr, int, 0444);
MODULE_PARM_DESC(isoc_mode, " Set the default format for ISOC endpoint.  Default: 0x60 (Compression On)");
MODULE_PARM_DESC(video_debug, " Set the default Debug Mode of the device driver.  Default: 0 (Off)");
MODULE_PARM_DESC(power_on_at_open, " Set the default device to power on when device is opened.  Default: 1 (On)");
MODULE_PARM_DESC(video_nr, "Set video device number (/dev/videoX).  Default: -1 (autodetect)");
MODULE_PARM_DESC(radio_nr, "Set radio device number (/dev/radioX).  Default: -1 (autodetect)");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);
MODULE_VERSION(USBVISION_VERSION_STRING);
MODULE_ALIAS(DRIVER_ALIAS);
#define YES_NO(x) ((x) ? "Yes" : "No")
static inline struct usb_usbvision *cd_to_usbvision(struct device *cd)
static ssize_t show_version(struct device *cd,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(version, S_IRUGO, show_version, NULL);
static ssize_t show_model(struct device *cd,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(model, S_IRUGO, show_model, NULL);
static ssize_t show_hue(struct device *cd,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(hue, S_IRUGO, show_hue, NULL);
static ssize_t show_contrast(struct device *cd,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(contrast, S_IRUGO, show_contrast, NULL);
static ssize_t show_brightness(struct device *cd,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(brightness, S_IRUGO, show_brightness, NULL);
static ssize_t show_saturation(struct device *cd,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(saturation, S_IRUGO, show_saturation, NULL);
static ssize_t show_streaming(struct device *cd,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(streaming, S_IRUGO, show_streaming, NULL);
static ssize_t show_compression(struct device *cd,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(compression, S_IRUGO, show_compression, NULL);
static ssize_t show_device_bridge(struct device *cd,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(bridge, S_IRUGO, show_device_bridge, NULL);
static void usbvision_create_sysfs(struct video_device *vdev)
static void usbvision_remove_sysfs(struct video_device *vdev)
static int usbvision_v4l2_open(struct file *file)
static int usbvision_v4l2_close(struct file *file)
static int vidioc_g_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int vidioc_s_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *vc)
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *vi)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *input)
static int vidioc_s_input(struct file *file, void *priv, unsigned int input)
static int vidioc_s_std(struct file *file, void *priv, v4l2_std_id *id)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *vt)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *vt)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *freq)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *freq)
static int vidioc_g_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *fh,
struct v4l2_audio *a)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *ctrl)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_reqbufs(struct file *file,
void *priv, struct v4l2_requestbuffers *vr)
static int vidioc_querybuf(struct file *file,
void *priv, struct v4l2_buffer *vb)
static int vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *vb)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *vb)
static int vidioc_streamon(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file,
void *priv, enum v4l2_buf_type type)
static int vidioc_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *vfd)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *vf)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *vf)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *vf)
static ssize_t usbvision_v4l2_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static int usbvision_v4l2_mmap(struct file *file, struct vm_area_struct *vma)
static int usbvision_radio_open(struct file *file)
static int usbvision_radio_close(struct file *file)
static const struct v4l2_file_operations usbvision_fops = ;
static const struct v4l2_ioctl_ops usbvision_ioctl_ops = ;
static struct video_device usbvision_video_template = ;
static const struct v4l2_file_operations usbvision_radio_fops = ;
static const struct v4l2_ioctl_ops usbvision_radio_ioctl_ops = ;
static struct video_device usbvision_radio_template = ;
static struct video_device *usbvision_vdev_init(struct usb_usbvision *usbvision,
struct video_device *vdev_template,
char *name)
static void usbvision_unregister_video(struct usb_usbvision *usbvision)
static int __devinit usbvision_register_video(struct usb_usbvision *usbvision)
static struct usb_usbvision *usbvision_alloc(struct usb_device *dev,
struct usb_interface *intf)
static void usbvision_release(struct usb_usbvision *usbvision)
static void usbvision_configure_video(struct usb_usbvision *usbvision)
static int __devinit usbvision_probe(struct usb_interface *intf,
const struct usb_device_id *devid)
static void __devexit usbvision_disconnect(struct usb_interface *intf)
static struct usb_driver usbvision_driver = ;
static int __init usbvision_init(void)
static void __exit usbvision_exit(void)
module_init(usbvision_init);
module_exit(usbvision_exit);
