#define ET61X251_MODULE_NAME    "V4L2 driver for ET61X[12]51 "                \
"PC Camera Controllers"
#define ET61X251_MODULE_AUTHOR  "(C) 2006-2007 Luca Risolia"
#define ET61X251_AUTHOR_EMAIL   "<luca.risolia@studio.unibo.it>"
#define ET61X251_MODULE_LICENSE "GPL"
#define ET61X251_MODULE_VERSION "1:1.09"
#define ET61X251_MODULE_VERSION_CODE  KERNEL_VERSION(1, 1, 9)
MODULE_DEVICE_TABLE(usb, et61x251_id_table);
MODULE_AUTHOR(ET61X251_MODULE_AUTHOR " " ET61X251_AUTHOR_EMAIL);
MODULE_DESCRIPTION(ET61X251_MODULE_NAME);
MODULE_VERSION(ET61X251_MODULE_VERSION);
MODULE_LICENSE(ET61X251_MODULE_LICENSE);
static short video_nr[] = ;
module_param_array(video_nr, short, NULL, 0444);
MODULE_PARM_DESC(video_nr,
"\n<-1|n[,...]> Specify V4L2 minor mode number."
"\n -1 = use next available (default)"
"\n  n = use minor number n (integer >= 0)"
"\nYou can specify up to "
__MODULE_STRING(ET61X251_MAX_DEVICES) " cameras this way."
"\nFor example:"
"\nvideo_nr=-1,2,-1 would assign minor number 2 to"
"\nthe second registered camera and use auto for the first"
"\none and for every other camera."
"\n");
static short force_munmap[] = ;
module_param_array(force_munmap, bool, NULL, 0444);
MODULE_PARM_DESC(force_munmap,
"\n<0|1[,...]> Force the application to unmap previously"
"\nmapped buffer memory before calling any VIDIOC_S_CROP or"
"\nVIDIOC_S_FMT ioctl's. Not all the applications support"
"\nthis feature. This parameter is specific for each"
"\ndetected camera."
"\n 0 = do not force memory unmapping"
"\n 1 = force memory unmapping (save memory)"
"\nDefault value is "__MODULE_STRING(ET61X251_FORCE_MUNMAP)"."
"\n");
static unsigned int frame_timeout[] = ;
module_param_array(frame_timeout, uint, NULL, 0644);
MODULE_PARM_DESC(frame_timeout,
"\n<n[,...]> Timeout for a video frame in seconds."
"\nThis parameter is specific for each detected camera."
"\nDefault value is "
__MODULE_STRING(ET61X251_FRAME_TIMEOUT)"."
"\n");
static unsigned short debug = ET61X251_DEBUG_LEVEL;
module_param(debug, ushort, 0644);
MODULE_PARM_DESC(debug,
"\n<n> Debugging information level, from 0 to 3:"
"\n0 = none (use carefully)"
"\n1 = critical errors"
"\n2 = significant informations"
"\n3 = more verbose messages"
"\nLevel 3 is useful for testing only, when only "
"one device is used."
"\nDefault value is "__MODULE_STRING(ET61X251_DEBUG_LEVEL)"."
"\n");
static u32
et61x251_request_buffers(struct et61x251_device* cam, u32 count,
enum et61x251_io_method io)
static void et61x251_release_buffers(struct et61x251_device* cam)
static void et61x251_empty_framequeues(struct et61x251_device* cam)
static void et61x251_requeue_outqueue(struct et61x251_device* cam)
static void et61x251_queue_unusedframes(struct et61x251_device* cam)
int et61x251_write_reg(struct et61x251_device* cam, u8 value, u16 index)
static int et61x251_read_reg(struct et61x251_device* cam, u16 index)
static int
et61x251_i2c_wait(struct et61x251_device* cam,
const struct et61x251_sensor* sensor)
int
et61x251_i2c_raw_write(struct et61x251_device* cam, u8 n, u8 data1, u8 data2,
u8 data3, u8 data4, u8 data5, u8 data6, u8 data7,
u8 data8, u8 address)
static void et61x251_urb_complete(struct urb *urb)
static int et61x251_start_transfer(struct et61x251_device* cam)
static int et61x251_stop_transfer(struct et61x251_device* cam)
static int et61x251_stream_interrupt(struct et61x251_device* cam)
static int et61x251_i2c_try_read(struct et61x251_device* cam,
const struct et61x251_sensor* sensor,
u8 address)
static int et61x251_i2c_try_write(struct et61x251_device* cam,
const struct et61x251_sensor* sensor,
u8 address, u8 value)
static int et61x251_i2c_read(struct et61x251_device* cam, u8 address)
static int et61x251_i2c_write(struct et61x251_device* cam,
u8 address, u8 value)
static u8 et61x251_strtou8(const char* buff, size_t len, ssize_t* count)
static ssize_t et61x251_show_reg(struct device* cd,
struct device_attribute *attr, char* buf)
static ssize_t
et61x251_store_reg(struct device* cd,
struct device_attribute *attr, const char* buf, size_t len)
static ssize_t et61x251_show_val(struct device* cd,
struct device_attribute *attr, char* buf)
static ssize_t
et61x251_store_val(struct device* cd, struct device_attribute *attr,
const char* buf, size_t len)
static ssize_t et61x251_show_i2c_reg(struct device* cd,
struct device_attribute *attr, char* buf)
static ssize_t
et61x251_store_i2c_reg(struct device* cd, struct device_attribute *attr,
const char* buf, size_t len)
static ssize_t et61x251_show_i2c_val(struct device* cd,
struct device_attribute *attr, char* buf)
static ssize_t
et61x251_store_i2c_val(struct device* cd, struct device_attribute *attr,
const char* buf, size_t len)
static DEVICE_ATTR(reg, S_IRUGO | S_IWUSR,
et61x251_show_reg, et61x251_store_reg);
static DEVICE_ATTR(val, S_IRUGO | S_IWUSR,
et61x251_show_val, et61x251_store_val);
static DEVICE_ATTR(i2c_reg, S_IRUGO | S_IWUSR,
et61x251_show_i2c_reg, et61x251_store_i2c_reg);
static DEVICE_ATTR(i2c_val, S_IRUGO | S_IWUSR,
et61x251_show_i2c_val, et61x251_store_i2c_val);
static int et61x251_create_sysfs(struct et61x251_device* cam)
static int
et61x251_set_pix_format(struct et61x251_device* cam,
struct v4l2_pix_format* pix)
static int
et61x251_set_compression(struct et61x251_device* cam,
struct v4l2_jpegcompression* compression)
static int et61x251_set_scale(struct et61x251_device* cam, u8 scale)
static int
et61x251_set_crop(struct et61x251_device* cam, struct v4l2_rect* rect)
static int et61x251_init(struct et61x251_device* cam)
static void et61x251_release_resources(struct kref *kref)
static int et61x251_open(struct file *filp)
static int et61x251_release(struct file *filp)
static ssize_t
et61x251_read(struct file* filp, char __user * buf,
size_t count, loff_t* f_pos)
static unsigned int et61x251_poll(struct file *filp, poll_table *wait)
static void et61x251_vm_open(struct vm_area_struct* vma)
static void et61x251_vm_close(struct vm_area_struct* vma)
static const struct vm_operations_struct et61x251_vm_ops = ;
static int et61x251_mmap(struct file* filp, struct vm_area_struct *vma)
static int
et61x251_vidioc_querycap(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_enuminput(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_g_input(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_s_input(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_query_ctrl(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_g_ctrl(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_s_ctrl(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_cropcap(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_g_crop(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_s_crop(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_enum_framesizes(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_enum_fmt(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_g_fmt(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_try_s_fmt(struct et61x251_device* cam, unsigned int cmd,
void __user * arg)
static int
et61x251_vidioc_g_jpegcomp(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_s_jpegcomp(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_reqbufs(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_querybuf(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_qbuf(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_dqbuf(struct et61x251_device* cam, struct file* filp,
void __user * arg)
static int
et61x251_vidioc_streamon(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_streamoff(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_g_parm(struct et61x251_device* cam, void __user * arg)
static int
et61x251_vidioc_s_parm(struct et61x251_device* cam, void __user * arg)
static long et61x251_ioctl_v4l2(struct file *filp,
unsigned int cmd, void __user *arg)
static long et61x251_ioctl(struct file *filp,
unsigned int cmd, unsigned long arg)
static const struct v4l2_file_operations et61x251_fops = ;
static int
et61x251_usb_probe(struct usb_interface* intf, const struct usb_device_id* id)
static void et61x251_usb_disconnect(struct usb_interface* intf)
static struct usb_driver et61x251_usb_driver = ;
static int __init et61x251_module_init(void)
static void __exit et61x251_module_exit(void)
module_init(et61x251_module_init);
module_exit(et61x251_module_exit);
