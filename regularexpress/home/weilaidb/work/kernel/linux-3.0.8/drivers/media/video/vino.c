#define VINO_MODULE_VERSION "0.0.6"
#define VINO_VERSION_CODE KERNEL_VERSION(0, 0, 6)
MODULE_DESCRIPTION("SGI VINO Video4Linux2 driver");
MODULE_VERSION(VINO_MODULE_VERSION);
MODULE_AUTHOR("Mikael Nousiainen <tmnousia@cc.hut.fi>");
MODULE_LICENSE("GPL");
#define dprintk(x...) printk("VINO: " x);
#define dprintk(x...)
#define VINO_NO_CHANNEL			0
#define VINO_CHANNEL_A			1
#define VINO_CHANNEL_B			2
#define VINO_PAL_WIDTH			768
#define VINO_PAL_HEIGHT			576
#define VINO_NTSC_WIDTH			640
#define VINO_NTSC_HEIGHT		480
#define VINO_MIN_WIDTH			32
#define VINO_MIN_HEIGHT			32
#define VINO_CLIPPING_START_ODD_D1	1
#define VINO_CLIPPING_START_ODD_PAL	15
#define VINO_CLIPPING_START_ODD_NTSC	12
#define VINO_CLIPPING_START_EVEN_D1	2
#define VINO_CLIPPING_START_EVEN_PAL	15
#define VINO_CLIPPING_START_EVEN_NTSC	12
#define VINO_INPUT_CHANNEL_COUNT	3
#define VINO_INPUT_NONE			-1
#define VINO_INPUT_COMPOSITE		0
#define VINO_INPUT_SVIDEO		1
#define VINO_INPUT_D1			2
#define VINO_PAGE_RATIO			(PAGE_SIZE / VINO_PAGE_SIZE)
#define VINO_FIFO_THRESHOLD_DEFAULT	16
#define VINO_FRAMEBUFFER_SIZE		((VINO_PAL_WIDTH \
* VINO_PAL_HEIGHT * 4 \
+ 3 * PAGE_SIZE) & ~(PAGE_SIZE - 1))
#define VINO_FRAMEBUFFER_COUNT_MAX	8
#define VINO_FRAMEBUFFER_UNUSED		0
#define VINO_FRAMEBUFFER_IN_USE		1
#define VINO_FRAMEBUFFER_READY		2
#define VINO_QUEUE_ERROR		-1
#define VINO_QUEUE_MAGIC		0x20050125
#define VINO_MEMORY_NONE		0
#define VINO_MEMORY_MMAP		1
#define VINO_MEMORY_USERPTR		2
#define VINO_DUMMY_DESC_COUNT		4
#define VINO_DESC_FETCH_DELAY		5
#define VINO_MAX_FRAME_SKIP_COUNT	128
#define VINO_DATA_FMT_NONE		-1
#define VINO_DATA_FMT_GREY		0
#define VINO_DATA_FMT_RGB332		1
#define VINO_DATA_FMT_RGB32		2
#define VINO_DATA_FMT_YUV		3
#define VINO_DATA_FMT_COUNT		4
#define VINO_DATA_NORM_NONE		-1
#define VINO_DATA_NORM_NTSC		0
#define VINO_DATA_NORM_PAL		1
#define VINO_DATA_NORM_SECAM		2
#define VINO_DATA_NORM_D1		3
#define VINO_DATA_NORM_COUNT		4
#define SGI_I2C_FORCE_IDLE		(0 << 0)
#define SGI_I2C_NOT_IDLE		(1 << 0)
#define SGI_I2C_WRITE			(0 << 1)
#define SGI_I2C_READ			(1 << 1)
#define SGI_I2C_RELEASE_BUS		(0 << 2)
#define SGI_I2C_HOLD_BUS		(1 << 2)
#define SGI_I2C_XFER_DONE		(0 << 4)
#define SGI_I2C_XFER_BUSY		(1 << 4)
#define SGI_I2C_ACK			(0 << 5)
#define SGI_I2C_NACK			(1 << 5)
#define SGI_I2C_BUS_OK			(0 << 7)
#define SGI_I2C_BUS_ERR			(1 << 7)
struct vino_input ;
struct vino_clipping ;
struct vino_data_format ;
struct vino_data_norm ;
struct vino_descriptor_table ;
struct vino_framebuffer ;
struct vino_framebuffer_fifo ;
struct vino_framebuffer_queue ;
struct vino_interrupt_data ;
struct vino_channel_settings ;
struct vino_settings ;
static int vino_pixel_conversion;
module_param_named(pixelconv, vino_pixel_conversion, int, 0);
MODULE_PARM_DESC(pixelconv,
"enable pixel conversion (non-zero value enables)");
static struct sgi_vino *vino;
static struct vino_settings *vino_drvdata;
#define camera_call(o, f, args...) \
v4l2_subdev_call(vino_drvdata->camera, o, f, ##args)
#define decoder_call(o, f, args...) \
v4l2_subdev_call(vino_drvdata->decoder, o, f, ##args)
static const char *vino_driver_name = "vino";
static const char *vino_driver_description = "SGI VINO";
static const char *vino_bus_name = "GIO64 bus";
static const char *vino_vdev_name_a = "SGI VINO Channel A";
static const char *vino_vdev_name_b = "SGI VINO Channel B";
static void vino_capture_tasklet(unsigned long channel);
DECLARE_TASKLET(vino_tasklet_a, vino_capture_tasklet, VINO_CHANNEL_A);
DECLARE_TASKLET(vino_tasklet_b, vino_capture_tasklet, VINO_CHANNEL_B);
static const struct vino_input vino_inputs[] = ;
static const struct vino_data_format vino_data_formats[] = ;
static const struct vino_data_norm vino_data_norms[] = ;
#define VINO_INDYCAM_V4L2_CONTROL_COUNT		9
struct v4l2_queryctrl vino_indycam_v4l2_controls[] = ;
#define VINO_SAA7191_V4L2_CONTROL_COUNT		9
struct v4l2_queryctrl vino_saa7191_v4l2_controls[] = ;
static void vino_free_buffer_with_count(struct vino_framebuffer *fb,
unsigned int count)
static void vino_free_buffer(struct vino_framebuffer *fb)
static int vino_allocate_buffer(struct vino_framebuffer *fb,
unsigned int size)
static void vino_sync_buffer(struct vino_framebuffer *fb)
static inline void vino_fifo_init(struct vino_framebuffer_fifo *f,
unsigned int length)
static inline int vino_fifo_has_id(struct vino_framebuffer_fifo *f,
unsigned int id)
static inline unsigned int vino_fifo_get_used(struct vino_framebuffer_fifo *f)
static int vino_fifo_enqueue(struct vino_framebuffer_fifo *f, unsigned int id)
static int vino_fifo_peek(struct vino_framebuffer_fifo *f, unsigned int *id)
static int vino_fifo_dequeue(struct vino_framebuffer_fifo *f, unsigned int *id)
static void vino_queue_free_with_count(struct vino_framebuffer_queue *q,
unsigned int length)
static void vino_queue_free(struct vino_framebuffer_queue *q)
static int vino_queue_init(struct vino_framebuffer_queue *q,
unsigned int *length)
static struct vino_framebuffer *vino_queue_add(struct
vino_framebuffer_queue *q,
unsigned int id)
static struct vino_framebuffer *vino_queue_transfer(struct
vino_framebuffer_queue *q)
static int vino_queue_incoming_contains(struct vino_framebuffer_queue *q,
unsigned int id)
static int vino_queue_outgoing_contains(struct vino_framebuffer_queue *q,
unsigned int id)
static int vino_queue_get_incoming(struct vino_framebuffer_queue *q,
unsigned int *used)
static int vino_queue_get_outgoing(struct vino_framebuffer_queue *q,
unsigned int *used)
static struct vino_framebuffer *vino_queue_peek(struct
vino_framebuffer_queue *q,
unsigned int *id)
static struct vino_framebuffer *vino_queue_remove(struct
vino_framebuffer_queue *q,
unsigned int *id)
static struct
vino_framebuffer *vino_queue_get_buffer(struct vino_framebuffer_queue *q,
unsigned int id)
static unsigned int vino_queue_get_length(struct vino_framebuffer_queue *q)
static int vino_queue_has_mapped_buffers(struct vino_framebuffer_queue *q)
static void vino_update_line_size(struct vino_channel_settings *vcs)
static void vino_set_clipping(struct vino_channel_settings *vcs,
unsigned int x, unsigned int y,
unsigned int w, unsigned int h)
static inline void vino_set_default_clipping(struct vino_channel_settings *vcs)
static void vino_set_scaling(struct vino_channel_settings *vcs,
unsigned int w, unsigned int h)
static inline void vino_set_default_scaling(struct vino_channel_settings *vcs)
static void vino_set_framerate(struct vino_channel_settings *vcs,
unsigned int fps)
static inline void vino_set_default_framerate(struct
vino_channel_settings *vcs)
struct i2c_algo_sgi_data ;
static int wait_xfer_done(struct i2c_algo_sgi_data *adap)
static int wait_ack(struct i2c_algo_sgi_data *adap)
static int force_idle(struct i2c_algo_sgi_data *adap)
static int do_address(struct i2c_algo_sgi_data *adap, unsigned int addr,
int rd)
static int i2c_read(struct i2c_algo_sgi_data *adap, unsigned char *buf,
unsigned int len)
static int i2c_write(struct i2c_algo_sgi_data *adap, unsigned char *buf,
unsigned int len)
static int sgi_xfer(struct i2c_adapter *i2c_adap, struct i2c_msg *msgs,
int num)
static u32 sgi_func(struct i2c_adapter *adap)
static const struct i2c_algorithm sgi_algo = ;
static unsigned i2c_vino_getctrl(void *data)
static void i2c_vino_setctrl(void *data, unsigned val)
static unsigned i2c_vino_rdata(void *data)
static void i2c_vino_wdata(void *data, unsigned val)
static struct i2c_algo_sgi_data i2c_sgi_vino_data = ;
static struct i2c_adapter vino_i2c_adapter = ;
static int vino_dma_setup(struct vino_channel_settings *vcs,
struct vino_framebuffer *fb)
static inline void vino_dma_start(struct vino_channel_settings *vcs)
static inline void vino_dma_stop(struct vino_channel_settings *vcs)
static void vino_clear_interrupt(struct vino_channel_settings *vcs)
static int vino_capture(struct vino_channel_settings *vcs,
struct vino_framebuffer *fb)
static
struct vino_framebuffer *vino_capture_enqueue(struct
vino_channel_settings *vcs,
unsigned int index)
static int vino_capture_next(struct vino_channel_settings *vcs, int start)
static inline int vino_is_capturing(struct vino_channel_settings *vcs)
static int vino_wait_for_frame(struct vino_channel_settings *vcs)
static void vino_convert_to_rgba(struct vino_framebuffer *fb)
static int vino_check_buffer(struct vino_channel_settings *vcs,
struct vino_framebuffer *fb)
static void vino_capture_stop(struct vino_channel_settings *vcs)
static void vino_skip_frame(struct vino_channel_settings *vcs)
static void vino_frame_done(struct vino_channel_settings *vcs)
static void vino_capture_tasklet(unsigned long channel)
static irqreturn_t vino_interrupt(int irq, void *dev_id)
static int vino_get_saa7191_input(int input)
static int vino_is_input_owner(struct vino_channel_settings *vcs)
static int vino_acquire_input(struct vino_channel_settings *vcs)
static int vino_set_input(struct vino_channel_settings *vcs, int input)
static void vino_release_input(struct vino_channel_settings *vcs)
static int vino_set_data_norm(struct vino_channel_settings *vcs,
unsigned int data_norm,
unsigned long *flags)
static int vino_find_data_format(__u32 pixelformat)
static int vino_int_enum_input(struct vino_channel_settings *vcs, __u32 index)
static __u32 vino_find_input_index(struct vino_channel_settings *vcs)
static int vino_querycap(struct file *file, void *__fh,
struct v4l2_capability *cap)
static int vino_enum_input(struct file *file, void *__fh,
struct v4l2_input *i)
static int vino_g_input(struct file *file, void *__fh,
unsigned int *i)
static int vino_s_input(struct file *file, void *__fh,
unsigned int i)
static int vino_querystd(struct file *file, void *__fh,
v4l2_std_id *std)
static int vino_g_std(struct file *file, void *__fh,
v4l2_std_id *std)
static int vino_s_std(struct file *file, void *__fh,
v4l2_std_id *std)
static int vino_enum_fmt_vid_cap(struct file *file, void *__fh,
struct v4l2_fmtdesc *fd)
static int vino_try_fmt_vid_cap(struct file *file, void *__fh,
struct v4l2_format *f)
static int vino_g_fmt_vid_cap(struct file *file, void *__fh,
struct v4l2_format *f)
static int vino_s_fmt_vid_cap(struct file *file, void *__fh,
struct v4l2_format *f)
static int vino_cropcap(struct file *file, void *__fh,
struct v4l2_cropcap *ccap)
static int vino_g_crop(struct file *file, void *__fh,
struct v4l2_crop *c)
static int vino_s_crop(struct file *file, void *__fh,
struct v4l2_crop *c)
static int vino_g_parm(struct file *file, void *__fh,
struct v4l2_streamparm *sp)
static int vino_s_parm(struct file *file, void *__fh,
struct v4l2_streamparm *sp)
static int vino_reqbufs(struct file *file, void *__fh,
struct v4l2_requestbuffers *rb)
static void vino_v4l2_get_buffer_status(struct vino_channel_settings *vcs,
struct vino_framebuffer *fb,
struct v4l2_buffer *b)
static int vino_querybuf(struct file *file, void *__fh,
struct v4l2_buffer *b)
static int vino_qbuf(struct file *file, void *__fh,
struct v4l2_buffer *b)
static int vino_dqbuf(struct file *file, void *__fh,
struct v4l2_buffer *b)
static int vino_streamon(struct file *file, void *__fh,
enum v4l2_buf_type i)
static int vino_streamoff(struct file *file, void *__fh,
enum v4l2_buf_type i)
static int vino_queryctrl(struct file *file, void *__fh,
struct v4l2_queryctrl *queryctrl)
static int vino_g_ctrl(struct file *file, void *__fh,
struct v4l2_control *control)
static int vino_s_ctrl(struct file *file, void *__fh,
struct v4l2_control *control)
static int vino_open(struct file *file)
static int vino_close(struct file *file)
static void vino_vm_open(struct vm_area_struct *vma)
static void vino_vm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct vino_vm_ops = ;
static int vino_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned int vino_poll(struct file *file, poll_table *pt)
static long vino_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int vino_init_stage;
const struct v4l2_ioctl_ops vino_ioctl_ops = ;
static const struct v4l2_file_operations vino_fops = ;
static struct video_device vdev_template = ;
static void vino_module_cleanup(int stage)
static int vino_probe(void)
static int vino_init(void)
static int vino_init_channel_settings(struct vino_channel_settings *vcs,
unsigned int channel, const char *name)
static int __init vino_module_init(void)
static void __exit vino_module_exit(void)
module_init(vino_module_init);
module_exit(vino_module_exit);
