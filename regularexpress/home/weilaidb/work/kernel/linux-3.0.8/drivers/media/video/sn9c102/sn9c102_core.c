#define SN9C102_MODULE_NAME     "V4L2 driver for SN9C1xx PC Camera Controllers"
#define SN9C102_MODULE_ALIAS    "sn9c1xx"
#define SN9C102_MODULE_AUTHOR   "(C) 2004-2007 Luca Risolia"
#define SN9C102_AUTHOR_EMAIL    "<luca.risolia@studio.unibo.it>"
#define SN9C102_MODULE_LICENSE  "GPL"
#define SN9C102_MODULE_VERSION  "1:1.47pre49"
#define SN9C102_MODULE_VERSION_CODE  KERNEL_VERSION(1, 1, 47)
MODULE_DEVICE_TABLE(usb, sn9c102_id_table);
MODULE_AUTHOR(SN9C102_MODULE_AUTHOR " " SN9C102_AUTHOR_EMAIL);
MODULE_DESCRIPTION(SN9C102_MODULE_NAME);
MODULE_ALIAS(SN9C102_MODULE_ALIAS);
MODULE_VERSION(SN9C102_MODULE_VERSION);
MODULE_LICENSE(SN9C102_MODULE_LICENSE);
static short video_nr[] = ;
module_param_array(video_nr, short, NULL, 0444);
MODULE_PARM_DESC(video_nr,
" <-1|n[,...]>"
"\nSpecify V4L2 minor mode number."
"\n-1 = use next available (default)"
"\n n = use minor number n (integer >= 0)"
"\nYou can specify up to "__MODULE_STRING(SN9C102_MAX_DEVICES)
" cameras this way."
"\nFor example:"
"\nvideo_nr=-1,2,-1 would assign minor number 2 to"
"\nthe second camera and use auto for the first"
"\none and for every other camera."
"\n");
static short force_munmap[] = ;
module_param_array(force_munmap, bool, NULL, 0444);
MODULE_PARM_DESC(force_munmap,
" <0|1[,...]>"
"\nForce the application to unmap previously"
"\nmapped buffer memory before calling any VIDIOC_S_CROP or"
"\nVIDIOC_S_FMT ioctl's. Not all the applications support"
"\nthis feature. This parameter is specific for each"
"\ndetected camera."
"\n0 = do not force memory unmapping"
"\n1 = force memory unmapping (save memory)"
"\nDefault value is "__MODULE_STRING(SN9C102_FORCE_MUNMAP)"."
"\n");
static unsigned int frame_timeout[] = ;
module_param_array(frame_timeout, uint, NULL, 0644);
MODULE_PARM_DESC(frame_timeout,
" <0|n[,...]>"
"\nTimeout for a video frame in seconds before"
"\nreturning an I/O error; 0 for infinity."
"\nThis parameter is specific for each detected camera."
"\nDefault value is "__MODULE_STRING(SN9C102_FRAME_TIMEOUT)"."
"\n");
static unsigned short debug = SN9C102_DEBUG_LEVEL;
module_param(debug, ushort, 0644);
MODULE_PARM_DESC(debug,
" <n>"
"\nDebugging information level, from 0 to 3:"
"\n0 = none (use carefully)"
"\n1 = critical errors"
"\n2 = significant informations"
"\n3 = more verbose messages"
"\nLevel 3 is useful for testing only."
"\nDefault value is "__MODULE_STRING(SN9C102_DEBUG_LEVEL)"."
"\n");
static int (*sn9c102_sensor_table[])(struct sn9c102_device *) = ;
static u32
sn9c102_request_buffers(struct sn9c102_device* cam, u32 count,
enum sn9c102_io_method io)
static void sn9c102_release_buffers(struct sn9c102_device* cam)
static void sn9c102_empty_framequeues(struct sn9c102_device* cam)
static void sn9c102_requeue_outqueue(struct sn9c102_device* cam)
static void sn9c102_queue_unusedframes(struct sn9c102_device* cam)
int sn9c102_write_regs(struct sn9c102_device* cam, const u8 valreg[][2],
int count)
int sn9c102_write_reg(struct sn9c102_device* cam, u8 value, u16 index)
int sn9c102_read_reg(struct sn9c102_device* cam, u16 index)
int sn9c102_pread_reg(struct sn9c102_device* cam, u16 index)
static int
sn9c102_i2c_wait(struct sn9c102_device* cam,
const struct sn9c102_sensor* sensor)
static int
sn9c102_i2c_detect_read_error(struct sn9c102_device* cam,
const struct sn9c102_sensor* sensor)
static int
sn9c102_i2c_detect_write_error(struct sn9c102_device* cam,
const struct sn9c102_sensor* sensor)
int
sn9c102_i2c_try_raw_read(struct sn9c102_device* cam,
const struct sn9c102_sensor* sensor, u8 data0,
u8 data1, u8 n, u8 buffer[])
int
sn9c102_i2c_try_raw_write(struct sn9c102_device* cam,
const struct sn9c102_sensor* sensor, u8 n, u8 data0,
u8 data1, u8 data2, u8 data3, u8 data4, u8 data5)
int
sn9c102_i2c_try_read(struct sn9c102_device* cam,
const struct sn9c102_sensor* sensor, u8 address)
static int sn9c102_i2c_try_write(struct sn9c102_device* cam,
const struct sn9c102_sensor* sensor,
u8 address, u8 value)
int sn9c102_i2c_read(struct sn9c102_device* cam, u8 address)
int sn9c102_i2c_write(struct sn9c102_device* cam, u8 address, u8 value)
static size_t sn9c102_sof_length(struct sn9c102_device* cam)
static void*
sn9c102_find_sof_header(struct sn9c102_device* cam, void* mem, size_t len)
static void*
sn9c102_find_eof_header(struct sn9c102_device* cam, void* mem, size_t len)
static void
sn9c102_write_jpegheader(struct sn9c102_device* cam, struct sn9c102_frame_t* f)
static void sn9c102_urb_complete(struct urb *urb)
static int sn9c102_start_transfer(struct sn9c102_device* cam)
static int sn9c102_stop_transfer(struct sn9c102_device* cam)
static int sn9c102_stream_interrupt(struct sn9c102_device* cam)
static u16 sn9c102_strtou16(const char* buff, size_t len, ssize_t* count)
static ssize_t sn9c102_show_reg(struct device* cd,
struct device_attribute *attr, char* buf)
static ssize_t
sn9c102_store_reg(struct device* cd, struct device_attribute *attr,
const char* buf, size_t len)
static ssize_t sn9c102_show_val(struct device* cd,
struct device_attribute *attr, char* buf)
static ssize_t
sn9c102_store_val(struct device* cd, struct device_attribute *attr,
const char* buf, size_t len)
static ssize_t sn9c102_show_i2c_reg(struct device* cd,
struct device_attribute *attr, char* buf)
static ssize_t
sn9c102_store_i2c_reg(struct device* cd, struct device_attribute *attr,
const char* buf, size_t len)
static ssize_t sn9c102_show_i2c_val(struct device* cd,
struct device_attribute *attr, char* buf)
static ssize_t
sn9c102_store_i2c_val(struct device* cd, struct device_attribute *attr,
const char* buf, size_t len)
static ssize_t
sn9c102_store_green(struct device* cd, struct device_attribute *attr,
const char* buf, size_t len)
static ssize_t
sn9c102_store_blue(struct device* cd, struct device_attribute *attr,
const char* buf, size_t len)
static ssize_t
sn9c102_store_red(struct device* cd, struct device_attribute *attr,
const char* buf, size_t len)
static ssize_t sn9c102_show_frame_header(struct device* cd,
struct device_attribute *attr,
char* buf)
static DEVICE_ATTR(reg, S_IRUGO | S_IWUSR, sn9c102_show_reg, sn9c102_store_reg);
static DEVICE_ATTR(val, S_IRUGO | S_IWUSR, sn9c102_show_val, sn9c102_store_val);
static DEVICE_ATTR(i2c_reg, S_IRUGO | S_IWUSR,
sn9c102_show_i2c_reg, sn9c102_store_i2c_reg);
static DEVICE_ATTR(i2c_val, S_IRUGO | S_IWUSR,
sn9c102_show_i2c_val, sn9c102_store_i2c_val);
static DEVICE_ATTR(green, S_IWUSR, NULL, sn9c102_store_green);
static DEVICE_ATTR(blue, S_IWUSR, NULL, sn9c102_store_blue);
static DEVICE_ATTR(red, S_IWUSR, NULL, sn9c102_store_red);
static DEVICE_ATTR(frame_header, S_IRUGO, sn9c102_show_frame_header, NULL);
static int sn9c102_create_sysfs(struct sn9c102_device* cam)
static int
sn9c102_set_pix_format(struct sn9c102_device* cam, struct v4l2_pix_format* pix)
static int
sn9c102_set_compression(struct sn9c102_device* cam,
struct v4l2_jpegcompression* compression)
static int sn9c102_set_scale(struct sn9c102_device* cam, u8 scale)
static int sn9c102_set_crop(struct sn9c102_device* cam, struct v4l2_rect* rect)
static int sn9c102_init(struct sn9c102_device* cam)
static void sn9c102_release_resources(struct kref *kref)
static int sn9c102_open(struct file *filp)
static int sn9c102_release(struct file *filp)
static ssize_t
sn9c102_read(struct file* filp, char __user * buf, size_t count, loff_t* f_pos)
static unsigned int sn9c102_poll(struct file *filp, poll_table *wait)
static void sn9c102_vm_open(struct vm_area_struct* vma)
static void sn9c102_vm_close(struct vm_area_struct* vma)
static const struct vm_operations_struct sn9c102_vm_ops = ;
static int sn9c102_mmap(struct file* filp, struct vm_area_struct *vma)
static int
sn9c102_vidioc_querycap(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_enuminput(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_g_input(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_s_input(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_query_ctrl(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_g_ctrl(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_s_ctrl(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_cropcap(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_g_crop(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_s_crop(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_enum_framesizes(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_enum_fmt(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_g_fmt(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_try_s_fmt(struct sn9c102_device* cam, unsigned int cmd,
void __user * arg)
static int
sn9c102_vidioc_g_jpegcomp(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_s_jpegcomp(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_reqbufs(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_querybuf(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_qbuf(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_dqbuf(struct sn9c102_device* cam, struct file* filp,
void __user * arg)
static int
sn9c102_vidioc_streamon(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_streamoff(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_g_parm(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_s_parm(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_enumaudio(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_g_audio(struct sn9c102_device* cam, void __user * arg)
static int
sn9c102_vidioc_s_audio(struct sn9c102_device* cam, void __user * arg)
static long sn9c102_ioctl_v4l2(struct file *filp,
unsigned int cmd, void __user *arg)
static long sn9c102_ioctl(struct file *filp,
unsigned int cmd, unsigned long arg)
static const struct v4l2_file_operations sn9c102_fops = ;
static int
sn9c102_usb_probe(struct usb_interface* intf, const struct usb_device_id* id)
static void sn9c102_usb_disconnect(struct usb_interface* intf)
static struct usb_driver sn9c102_usb_driver = ;
static int __init sn9c102_module_init(void)
static void __exit sn9c102_module_exit(void)
module_init(sn9c102_module_init);
module_exit(sn9c102_module_exit);
