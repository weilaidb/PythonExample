static int pm_video_suspend(struct poseidon *pd);
static int pm_video_resume(struct poseidon *pd);
static void iso_bubble_handler(struct work_struct *w);
static int usb_transfer_mode;
module_param(usb_transfer_mode, int, 0644);
MODULE_PARM_DESC(usb_transfer_mode, "0 = Bulk, 1 = Isochronous");
static const struct poseidon_format poseidon_formats[] = ;
static const struct poseidon_tvnorm poseidon_tvnorms[] = ;
static const unsigned int POSEIDON_TVNORMS = ARRAY_SIZE(poseidon_tvnorms);
struct pd_audio_mode ;
static const struct pd_audio_mode pd_audio_modes[] = ;
static const unsigned int POSEIDON_AUDIOMODS = ARRAY_SIZE(pd_audio_modes);
struct pd_input ;
static const struct pd_input pd_inputs[] = ;
static const unsigned int POSEIDON_INPUTS = ARRAY_SIZE(pd_inputs);
struct poseidon_control ;
static struct poseidon_control controls[] = ;
struct video_std_to_audio_std ;
static const struct video_std_to_audio_std video_to_audio_map[] = ;
static const unsigned int map_size = ARRAY_SIZE(video_to_audio_map);
static int get_audio_std(v4l2_std_id v4l2_std)
static int vidioc_querycap(struct file *file, void *fh,
struct v4l2_capability *cap)
static void init_copy(struct video_data *video, bool index)
static bool get_frame(struct front_face *front, int *need_init)
static bool get_video_frame(struct front_face *front, struct video_data *video)
static void submit_frame(struct front_face *front)
static void end_field(struct video_data *video)
static void copy_video_data(struct video_data *video, char *src,
unsigned int count)
static void check_trailer(struct video_data *video, char *src, int count)
static inline void copy_vbi_data(struct vbi_data *vbi,
char *src, unsigned int count)
static inline void copy_vbi_video_data(struct video_data *video,
char *src, unsigned int count)
static void urb_complete_bulk(struct urb *urb)
#define GET_SUCCESS		(0)
#define GET_TRAILER		(1)
#define GET_TOO_MUCH_BUBBLE	(2)
#define GET_NONE		(3)
static int get_chunk(int start, struct urb *urb,
int *head, int *tail, int *bubble_err)
static void urb_complete_iso(struct urb *urb)
static int prepare_iso_urb(struct video_data *video)
int alloc_bulk_urbs_generic(struct urb **urb_array, int num,
struct usb_device *udev, u8 ep_addr,
int buf_size, gfp_t gfp_flags,
usb_complete_t complete_fn, void *context)
void free_all_urb_generic(struct urb **urb_array, int num)
static int prepare_bulk_urb(struct video_data *video)
static void free_all_urb(struct video_data *video)
static void pd_buf_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void pd_buf_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static int pd_buf_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
static int fire_all_urb(struct video_data *video)
static int start_video_stream(struct poseidon *pd)
static int pd_buf_setup(struct videobuf_queue *q, unsigned int *count,
unsigned int *size)
static struct videobuf_queue_ops pd_video_qops = ;
static int vidioc_enum_fmt(struct file *file, void *fh,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt(struct file *file, void *fh, struct v4l2_format *f)
static int vidioc_try_fmt(struct file *file, void *fh,
struct v4l2_format *f)
static int pd_vidioc_s_fmt(struct poseidon *pd, struct v4l2_pix_format *pix)
static int vidioc_s_fmt(struct file *file, void *fh, struct v4l2_format *f)
static int vidioc_g_fmt_vbi(struct file *file, void *fh,
struct v4l2_format *v4l2_f)
static int set_std(struct poseidon *pd, v4l2_std_id *norm)
static int vidioc_s_std(struct file *file, void *fh, v4l2_std_id *norm)
static int vidioc_enum_input(struct file *file, void *fh, struct v4l2_input *in)
static int vidioc_g_input(struct file *file, void *fh, unsigned int *i)
static int vidioc_s_input(struct file *file, void *fh, unsigned int i)
static struct poseidon_control *check_control_id(__u32 id)
static int vidioc_queryctrl(struct file *file, void *fh,
struct v4l2_queryctrl *a)
static int vidioc_g_ctrl(struct file *file, void *fh, struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *fh, struct v4l2_control *a)
static int vidioc_enumaudio(struct file *file, void *fh, struct v4l2_audio *a)
static int vidioc_g_audio(struct file *file, void *fh, struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *fh, struct v4l2_audio *a)
static int vidioc_g_tuner(struct file *file, void *fh, struct v4l2_tuner *tuner)
static int pd_vidioc_s_tuner(struct poseidon *pd, int index)
static int vidioc_s_tuner(struct file *file, void *fh, struct v4l2_tuner *a)
static int vidioc_g_frequency(struct file *file, void *fh,
struct v4l2_frequency *freq)
static int set_frequency(struct poseidon *pd, __u32 frequency)
static int vidioc_s_frequency(struct file *file, void *fh,
struct v4l2_frequency *freq)
static int vidioc_reqbufs(struct file *file, void *fh,
struct v4l2_requestbuffers *b)
static int vidioc_querybuf(struct file *file, void *fh, struct v4l2_buffer *b)
static int vidioc_qbuf(struct file *file, void *fh, struct v4l2_buffer *b)
static int vidioc_dqbuf(struct file *file, void *fh, struct v4l2_buffer *b)
static int usb_transfer_stop(struct video_data *video)
int stop_all_video_stream(struct poseidon *pd)
static void iso_bubble_handler(struct work_struct *w)
static int vidioc_streamon(struct file *file, void *fh,
enum v4l2_buf_type type)
static int vidioc_streamoff(struct file *file, void *fh,
enum v4l2_buf_type type)
static int pd_video_checkmode(struct poseidon *pd)
static int pm_video_suspend(struct poseidon *pd)
static int restore_v4l2_context(struct poseidon *pd,
struct running_context *context)
static int pm_video_resume(struct poseidon *pd)
void set_debug_mode(struct video_device *vfd, int debug_mode)
static void init_video_context(struct running_context *context)
static int pd_video_open(struct file *file)
static int pd_video_release(struct file *file)
static int pd_video_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned int pd_video_poll(struct file *file, poll_table *table)
static ssize_t pd_video_read(struct file *file, char __user *buffer,
size_t count, loff_t *ppos)
static const struct v4l2_file_operations pd_video_fops = ;
static const struct v4l2_ioctl_ops pd_video_ioctl_ops = ;
static struct video_device pd_video_template = ;
struct video_device *vdev_init(struct poseidon *pd, struct video_device *tmp)
void destroy_video_device(struct video_device **v_dev)
void pd_video_exit(struct poseidon *pd)
int pd_video_init(struct poseidon *pd)
