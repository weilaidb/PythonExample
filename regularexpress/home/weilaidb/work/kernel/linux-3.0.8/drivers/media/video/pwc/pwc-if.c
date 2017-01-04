static const struct usb_device_id pwc_device_table [] = ;
MODULE_DEVICE_TABLE(usb, pwc_device_table);
static int usb_pwc_probe(struct usb_interface *intf, const struct usb_device_id *id);
static void usb_pwc_disconnect(struct usb_interface *intf);
static struct usb_driver pwc_driver = ;
#define MAX_DEV_HINTS	20
#define MAX_ISOC_ERRORS	20
static int default_size = PSZ_QCIF;
static int default_fps = 10;
static int default_fbufs = 3;
int pwc_mbufs = 2;
int pwc_trace = PWC_DEBUG_LEVEL;
static int power_save;
static int led_on = 100, led_off;
static int pwc_preferred_compression = 1;
static struct  device_hint[MAX_DEV_HINTS];
static int pwc_video_open(struct file *file);
static int pwc_video_close(struct file *file);
static ssize_t pwc_video_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos);
static unsigned int pwc_video_poll(struct file *file, poll_table *wait);
static int  pwc_video_mmap(struct file *file, struct vm_area_struct *vma);
static void pwc_video_release(struct video_device *vfd);
static const struct v4l2_file_operations pwc_fops = ;
static struct video_device pwc_template = ;
static void *pwc_rvmalloc(unsigned long size)
static void pwc_rvfree(void * mem, unsigned long size)
static int pwc_allocate_buffers(struct pwc_device *pdev)
static void pwc_free_buffers(struct pwc_device *pdev)
static int pwc_next_fill_frame(struct pwc_device *pdev)
static void pwc_reset_buffers(struct pwc_device *pdev)
int pwc_handle_frame(struct pwc_device *pdev)
void pwc_next_image(struct pwc_device *pdev)
static void pwc_frame_dumped(struct pwc_device *pdev)
static void pwc_snapshot_button(struct pwc_device *pdev, int down)
static int pwc_rcv_short_packet(struct pwc_device *pdev, const struct pwc_frame_buf *fbuf)
static void pwc_isoc_handler(struct urb *urb)
int pwc_isoc_init(struct pwc_device *pdev)
static void pwc_iso_stop(struct pwc_device *pdev)
static void pwc_iso_free(struct pwc_device *pdev)
void pwc_isoc_cleanup(struct pwc_device *pdev)
static struct pwc_device *cd_to_pwc(struct device *cd)
static ssize_t show_pan_tilt(struct device *class_dev,
struct device_attribute *attr, char *buf)
static ssize_t store_pan_tilt(struct device *class_dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(pan_tilt, S_IRUGO | S_IWUSR, show_pan_tilt,
store_pan_tilt);
static ssize_t show_snapshot_button_status(struct device *class_dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(button, S_IRUGO | S_IWUSR, show_snapshot_button_status,
NULL);
static int pwc_create_sysfs_files(struct pwc_device *pdev)
static void pwc_remove_sysfs_files(struct pwc_device *pdev)
static const char *pwc_sensor_type_to_string(unsigned int sensor_type)
static int pwc_video_open(struct file *file)
static void pwc_video_release(struct video_device *vfd)
static int pwc_video_close(struct file *file)
static ssize_t pwc_video_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static unsigned int pwc_video_poll(struct file *file, poll_table *wait)
static int pwc_video_mmap(struct file *file, struct vm_area_struct *vma)
static int usb_pwc_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void usb_pwc_disconnect(struct usb_interface *intf)
static char *size;
static int fps;
static int fbufs;
static int mbufs;
static int compression = -1;
static int leds[2] = ;
static unsigned int leds_nargs;
static char *dev_hint[MAX_DEV_HINTS];
static unsigned int dev_hint_nargs;
module_param(size, charp, 0444);
module_param(fps, int, 0444);
module_param(fbufs, int, 0444);
module_param(mbufs, int, 0444);
module_param_named(trace, pwc_trace, int, 0644);
module_param(power_save, int, 0444);
module_param(compression, int, 0444);
module_param_array(leds, int, &leds_nargs, 0444);
module_param_array(dev_hint, charp, &dev_hint_nargs, 0444);
MODULE_PARM_DESC(size, "Initial image size. One of sqcif, qsif, qcif, sif, cif, vga");
MODULE_PARM_DESC(fps, "Initial frames per second. Varies with model, useful range 5-30");
MODULE_PARM_DESC(fbufs, "Number of internal frame buffers to reserve");
MODULE_PARM_DESC(mbufs, "Number of external (mmap()ed) image buffers");
MODULE_PARM_DESC(trace, "For debugging purposes");
MODULE_PARM_DESC(power_save, "Turn power save feature in camera on or off");
MODULE_PARM_DESC(compression, "Preferred compression quality. Range 0 (uncompressed) to 3 (high compression)");
MODULE_PARM_DESC(leds, "LED on,off time in milliseconds");
MODULE_PARM_DESC(dev_hint, "Device node hints");
MODULE_DESCRIPTION("Philips & OEM USB webcam driver");
MODULE_AUTHOR("Luc Saillard <luc@saillard.org>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("pwcx");
MODULE_VERSION( PWC_VERSION );
static int __init usb_pwc_init(void)
static void __exit usb_pwc_exit(void)
module_init(usb_pwc_init);
module_exit(usb_pwc_exit);
