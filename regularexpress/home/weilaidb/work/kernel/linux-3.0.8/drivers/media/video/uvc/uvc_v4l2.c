static int uvc_ioctl_ctrl_map(struct uvc_video_chain *chain,
struct uvc_xu_control_mapping *xmap, int old)
static __u32 uvc_try_frame_interval(struct uvc_frame *frame, __u32 interval)
static int uvc_v4l2_try_format(struct uvc_streaming *stream,
struct v4l2_format *fmt, struct uvc_streaming_control *probe,
struct uvc_format **uvc_format, struct uvc_frame **uvc_frame)
static int uvc_v4l2_get_format(struct uvc_streaming *stream,
struct v4l2_format *fmt)
static int uvc_v4l2_set_format(struct uvc_streaming *stream,
struct v4l2_format *fmt)
static int uvc_v4l2_get_streamparm(struct uvc_streaming *stream,
struct v4l2_streamparm *parm)
static int uvc_v4l2_set_streamparm(struct uvc_streaming *stream,
struct v4l2_streamparm *parm)
static int uvc_acquire_privileges(struct uvc_fh *handle)
static void uvc_dismiss_privileges(struct uvc_fh *handle)
static int uvc_has_privileges(struct uvc_fh *handle)
static int uvc_v4l2_open(struct file *file)
static int uvc_v4l2_release(struct file *file)
static void uvc_v4l2_ioctl_warn(void)
static long uvc_v4l2_do_ioctl(struct file *file, unsigned int cmd, void *arg)
static long uvc_v4l2_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static ssize_t uvc_v4l2_read(struct file *file, char __user *data,
size_t count, loff_t *ppos)
static int uvc_v4l2_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned int uvc_v4l2_poll(struct file *file, poll_table *wait)
static unsigned long uvc_v4l2_get_unmapped_area(struct file *file,
unsigned long addr, unsigned long len, unsigned long pgoff,
unsigned long flags)
const struct v4l2_file_operations uvc_fops = ;
