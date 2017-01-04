static int hflip = 1;
module_param(hflip, bool, 0444);
MODULE_PARM_DESC(hflip, "Horizontal image flip (mirror). Defaults to 1");
static int vflip = 1;
module_param(vflip, bool, 0444);
MODULE_PARM_DESC(vflip, "Vertical image flip. Defaults to 1");
static int debug;
module_param(debug, int, 0444);
MODULE_PARM_DESC(debug, "Debug v4l ioctls. Defaults to 0");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jaime Velasco Juan <jsagarribay@gmail.com> and Nicolas VIVIEN");
MODULE_DESCRIPTION("Syntek DC1125 webcam driver");
static struct usb_device_id stkwebcam_table[] = ;
MODULE_DEVICE_TABLE(usb, stkwebcam_table);
int stk_camera_write_reg(struct stk_camera *dev, u16 index, u8 value)
int stk_camera_read_reg(struct stk_camera *dev, u16 index, int *value)
static int stk_start_stream(struct stk_camera *dev)
static int stk_stop_stream(struct stk_camera *dev)
static struct regval stk1125_initvals[] = ;
static int stk_initialise(struct stk_camera *dev)
static void stk_isoc_handler(struct urb *urb)
static int stk_prepare_iso(struct stk_camera *dev)
static void stk_clean_iso(struct stk_camera *dev)
static int stk_setup_siobuf(struct stk_camera *dev, int index)
static int stk_free_sio_buffers(struct stk_camera *dev)
static int stk_prepare_sio_buffers(struct stk_camera *dev, unsigned n_sbufs)
static int stk_allocate_buffers(struct stk_camera *dev, unsigned n_sbufs)
static void stk_free_buffers(struct stk_camera *dev)
static int v4l_stk_open(struct file *fp)
static int v4l_stk_release(struct file *fp)
static ssize_t v4l_stk_read(struct file *fp, char __user *buf,
size_t count, loff_t *f_pos)
static unsigned int v4l_stk_poll(struct file *fp, poll_table *wait)
static void stk_v4l_vm_open(struct vm_area_struct *vma)
static void stk_v4l_vm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct stk_v4l_vm_ops = ;
static int v4l_stk_mmap(struct file *fp, struct vm_area_struct *vma)
static int stk_vidioc_querycap(struct file *filp,
void *priv, struct v4l2_capability *cap)
static int stk_vidioc_enum_input(struct file *filp,
void *priv, struct v4l2_input *input)
static int stk_vidioc_g_input(struct file *filp, void *priv, unsigned int *i)
static int stk_vidioc_s_input(struct file *filp, void *priv, unsigned int i)
static int stk_vidioc_s_std(struct file *filp, void *priv, v4l2_std_id *a)
static struct v4l2_queryctrl stk_controls[] = ;
static int stk_vidioc_queryctrl(struct file *filp,
void *priv, struct v4l2_queryctrl *c)
static int stk_vidioc_g_ctrl(struct file *filp,
void *priv, struct v4l2_control *c)
static int stk_vidioc_s_ctrl(struct file *filp,
void *priv, struct v4l2_control *c)
static int stk_vidioc_enum_fmt_vid_cap(struct file *filp,
void *priv, struct v4l2_fmtdesc *fmtd)
static struct stk_size  stk_sizes[] = ;
static int stk_vidioc_g_fmt_vid_cap(struct file *filp,
void *priv, struct v4l2_format *f)
static int stk_vidioc_try_fmt_vid_cap(struct file *filp,
void *priv, struct v4l2_format *fmtd)
static int stk_setup_format(struct stk_camera *dev)
static int stk_vidioc_s_fmt_vid_cap(struct file *filp,
void *priv, struct v4l2_format *fmtd)
static int stk_vidioc_reqbufs(struct file *filp,
void *priv, struct v4l2_requestbuffers *rb)
static int stk_vidioc_querybuf(struct file *filp,
void *priv, struct v4l2_buffer *buf)
static int stk_vidioc_qbuf(struct file *filp,
void *priv, struct v4l2_buffer *buf)
static int stk_vidioc_dqbuf(struct file *filp,
void *priv, struct v4l2_buffer *buf)
static int stk_vidioc_streamon(struct file *filp,
void *priv, enum v4l2_buf_type type)
static int stk_vidioc_streamoff(struct file *filp,
void *priv, enum v4l2_buf_type type)
static int stk_vidioc_g_parm(struct file *filp,
void *priv, struct v4l2_streamparm *sp)
static int stk_vidioc_enum_framesizes(struct file *filp,
void *priv, struct v4l2_frmsizeenum *frms)
static struct v4l2_file_operations v4l_stk_fops = ;
static const struct v4l2_ioctl_ops v4l_stk_ioctl_ops = ;
static void stk_v4l_dev_release(struct video_device *vd)
static struct video_device stk_v4l_data = ;
static int stk_register_video_device(struct stk_camera *dev)
static int stk_camera_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void stk_camera_disconnect(struct usb_interface *interface)
static int stk_camera_suspend(struct usb_interface *intf, pm_message_t message)
static int stk_camera_resume(struct usb_interface *intf)
static struct usb_driver stk_camera_driver = ;
static int __init stk_camera_init(void)
static void __exit stk_camera_exit(void)
module_init(stk_camera_init);
module_exit(stk_camera_exit);
