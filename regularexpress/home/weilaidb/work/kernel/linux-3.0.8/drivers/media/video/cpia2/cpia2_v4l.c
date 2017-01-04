static int video_nr = -1;
module_param(video_nr, int, 0);
MODULE_PARM_DESC(video_nr,"video device to register (0=/dev/video0, etc)");
static int buffer_size = 68*1024;
module_param(buffer_size, int, 0);
MODULE_PARM_DESC(buffer_size, "Size for each frame buffer in bytes (default 68k)");
static int num_buffers = 3;
module_param(num_buffers, int, 0);
MODULE_PARM_DESC(num_buffers, "Number of frame buffers (1-"
__stringify(VIDEO_MAX_FRAME) ", default 3)");
static int alternate = DEFAULT_ALT;
module_param(alternate, int, 0);
MODULE_PARM_DESC(alternate, "USB Alternate (" __stringify(USBIF_ISO_1) "-"
__stringify(USBIF_ISO_6) ", default "
__stringify(DEFAULT_ALT) ")");
static int flicker_freq = 60;
module_param(flicker_freq, int, 0);
MODULE_PARM_DESC(flicker_freq, "Flicker frequency (" __stringify(50) "or"
__stringify(60) ", default "
__stringify(60) ")");
static int flicker_mode = NEVER_FLICKER;
module_param(flicker_mode, int, 0);
MODULE_PARM_DESC(flicker_mode,
"Flicker supression (" __stringify(NEVER_FLICKER) "or"
__stringify(ANTI_FLICKER_ON) ", default "
__stringify(NEVER_FLICKER) ")");
MODULE_AUTHOR("Steve Miller (STMicroelectronics) <steve.miller@st.com>");
MODULE_DESCRIPTION("V4L-driver for STMicroelectronics CPiA2 based cameras");
MODULE_SUPPORTED_DEVICE("video");
MODULE_LICENSE("GPL");
#define ABOUT "V4L-Driver for Vision CPiA2 based cameras"
struct control_menu_info ;
static struct control_menu_info framerate_controls[] =
;
#define NUM_FRAMERATE_CONTROLS (ARRAY_SIZE(framerate_controls))
static struct control_menu_info flicker_controls[] =
;
#define NUM_FLICKER_CONTROLS (ARRAY_SIZE(flicker_controls))
static struct control_menu_info lights_controls[] =
;
#define NUM_LIGHTS_CONTROLS (ARRAY_SIZE(lights_controls))
#define GPIO_LIGHTS_MASK 192
static struct v4l2_queryctrl controls[] = ;
#define NUM_CONTROLS (ARRAY_SIZE(controls))
static int cpia2_open(struct file *file)
static int cpia2_close(struct file *file)
static ssize_t cpia2_v4l_read(struct file *file, char __user *buf, size_t count,
loff_t *off)
static unsigned int cpia2_v4l_poll(struct file *filp, struct poll_table_struct *wait)
static int sync(struct camera_data *cam, int frame_nr)
static long cpia2_default(struct file *file, void *fh, bool valid_prio,
int cmd, void *arg)
static int cpia2_querycap(struct file *file, void *fh, struct v4l2_capability *vc)
static int cpia2_enum_input(struct file *file, void *fh, struct v4l2_input *i)
static int cpia2_g_input(struct file *file, void *fh, unsigned int *i)
static int cpia2_s_input(struct file *file, void *fh, unsigned int i)
static int cpia2_enum_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_fmtdesc *f)
static int cpia2_try_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_format *f)
static int cpia2_s_fmt_vid_cap(struct file *file, void *_fh,
struct v4l2_format *f)
static int cpia2_g_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_format *f)
static int cpia2_cropcap(struct file *file, void *fh, struct v4l2_cropcap *c)
static int cpia2_queryctrl(struct file *file, void *fh, struct v4l2_queryctrl *c)
static int cpia2_querymenu(struct file *file, void *fh, struct v4l2_querymenu *m)
static int cpia2_g_ctrl(struct file *file, void *fh, struct v4l2_control *c)
static int cpia2_s_ctrl(struct file *file, void *fh, struct v4l2_control *c)
static int cpia2_g_jpegcomp(struct file *file, void *fh, struct v4l2_jpegcompression *parms)
static int cpia2_s_jpegcomp(struct file *file, void *fh, struct v4l2_jpegcompression *parms)
static int cpia2_reqbufs(struct file *file, void *fh, struct v4l2_requestbuffers *req)
static int cpia2_querybuf(struct file *file, void *fh, struct v4l2_buffer *buf)
static int cpia2_qbuf(struct file *file, void *fh, struct v4l2_buffer *buf)
static int find_earliest_filled_buffer(struct camera_data *cam)
static int cpia2_dqbuf(struct file *file, void *fh, struct v4l2_buffer *buf)
static int cpia2_g_priority(struct file *file, void *_fh, enum v4l2_priority *p)
static int cpia2_s_priority(struct file *file, void *_fh, enum v4l2_priority prio)
static int cpia2_streamon(struct file *file, void *fh, enum v4l2_buf_type type)
static int cpia2_streamoff(struct file *file, void *fh, enum v4l2_buf_type type)
static int cpia2_mmap(struct file *file, struct vm_area_struct *area)
static void reset_camera_struct_v4l(struct camera_data *cam)
static const struct v4l2_ioctl_ops cpia2_ioctl_ops = ;
static const struct v4l2_file_operations cpia2_fops = ;
static struct video_device cpia2_template = ;
int cpia2_register_camera(struct camera_data *cam)
void cpia2_unregister_camera(struct camera_data *cam)
static void __init check_parameters(void)
static int __init cpia2_init(void)
static void __exit cpia2_exit(void)
module_init(cpia2_init);
module_exit(cpia2_exit);
