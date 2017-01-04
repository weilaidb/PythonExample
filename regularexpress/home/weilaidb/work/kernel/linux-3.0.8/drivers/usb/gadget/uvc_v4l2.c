static int
uvc_send_response(struct uvc_device *uvc, struct uvc_request_data *data)
struct uvc_format
;
static struct uvc_format uvc_formats[] = ;
static int
uvc_v4l2_get_format(struct uvc_video *video, struct v4l2_format *fmt)
static int
uvc_v4l2_set_format(struct uvc_video *video, struct v4l2_format *fmt)
static int
uvc_v4l2_open(struct file *file)
static int
uvc_v4l2_release(struct file *file)
static long
uvc_v4l2_do_ioctl(struct file *file, unsigned int cmd, void *arg)
static long
uvc_v4l2_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int
uvc_v4l2_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned int
uvc_v4l2_poll(struct file *file, poll_table *wait)
static struct v4l2_file_operations uvc_v4l2_fops = ;
