MODULE_DESCRIPTION("v4l2 driver module for cx2388x based TV cards");
MODULE_AUTHOR("Gerd Knorr <kraxel@bytesex.org> [SuSE Labs]");
MODULE_LICENSE("GPL");
static unsigned int video_nr[] = ;
static unsigned int vbi_nr[]   = ;
static unsigned int radio_nr[] = ;
module_param_array(video_nr, int, NULL, 0444);
module_param_array(vbi_nr,   int, NULL, 0444);
module_param_array(radio_nr, int, NULL, 0444);
MODULE_PARM_DESC(video_nr,"video device numbers");
MODULE_PARM_DESC(vbi_nr,"vbi device numbers");
MODULE_PARM_DESC(radio_nr,"radio device numbers");
static unsigned int video_debug;
module_param(video_debug,int,0644);
MODULE_PARM_DESC(video_debug,"enable debug messages [video]");
static unsigned int irq_debug;
module_param(irq_debug,int,0644);
MODULE_PARM_DESC(irq_debug,"enable debug messages [IRQ handler]");
static unsigned int vid_limit = 16;
module_param(vid_limit,int,0644);
MODULE_PARM_DESC(vid_limit,"capture memory limit in megabytes");
#define dprintk(level,fmt, arg...)	if (video_debug >= level) \
printk(KERN_DEBUG "%s/0: " fmt, core->name , ## arg)
static const struct cx8800_fmt formats[] = ;
static const struct cx8800_fmt* format_by_fourcc(unsigned int fourcc)
static const struct v4l2_queryctrl no_ctl = ;
static const struct cx88_ctrl cx8800_ctls[] = ;
enum ;
const u32 cx88_user_ctrls[] = ;
EXPORT_SYMBOL(cx88_user_ctrls);
static const u32 * const ctrl_classes[] = ;
int cx8800_ctrl_query(struct cx88_core *core, struct v4l2_queryctrl *qctrl)
EXPORT_SYMBOL(cx8800_ctrl_query);
static int res_get(struct cx8800_dev *dev, struct cx8800_fh *fh, unsigned int bit)
static
int res_check(struct cx8800_fh *fh, unsigned int bit)
static
int res_locked(struct cx8800_dev *dev, unsigned int bit)
static
void res_free(struct cx8800_dev *dev, struct cx8800_fh *fh, unsigned int bits)
int cx88_video_mux(struct cx88_core *core, unsigned int input)
EXPORT_SYMBOL(cx88_video_mux);
static int start_video_dma(struct cx8800_dev    *dev,
struct cx88_dmaqueue *q,
struct cx88_buffer   *buf)
static int stop_video_dma(struct cx8800_dev    *dev)
static int restart_video_queue(struct cx8800_dev    *dev,
struct cx88_dmaqueue *q)
static int
buffer_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
static int
buffer_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
static const struct videobuf_queue_ops cx8800_video_qops = ;
static struct videobuf_queue* get_queue(struct cx8800_fh *fh)
static int get_ressource(struct cx8800_fh *fh)
static int video_open(struct file *file)
static ssize_t
video_read(struct file *file, char __user *data, size_t count, loff_t *ppos)
static unsigned int
video_poll(struct file *file, struct poll_table_struct *wait)
static int video_release(struct file *file)
static int
video_mmap(struct file *file, struct vm_area_struct * vma)
int cx88_get_control (struct cx88_core  *core, struct v4l2_control *ctl)
EXPORT_SYMBOL(cx88_get_control);
int cx88_set_control(struct cx88_core *core, struct v4l2_control *ctl)
EXPORT_SYMBOL(cx88_set_control);
static void init_controls(struct cx88_core *core)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_querycap (struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap (struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int vidioc_reqbufs (struct file *file, void *priv, struct v4l2_requestbuffers *p)
static int vidioc_querybuf (struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_qbuf (struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_dqbuf (struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_streamon(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_s_std (struct file *file, void *priv, v4l2_std_id *tvnorms)
int cx88_enum_input (struct cx88_core  *core,struct v4l2_input *i)
EXPORT_SYMBOL(cx88_enum_input);
static int vidioc_enum_input (struct file *file, void *priv,
struct v4l2_input *i)
static int vidioc_g_input (struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input (struct file *file, void *priv, unsigned int i)
static int vidioc_queryctrl (struct file *file, void *priv,
struct v4l2_queryctrl *qctrl)
static int vidioc_g_ctrl (struct file *file, void *priv,
struct v4l2_control *ctl)
static int vidioc_s_ctrl (struct file *file, void *priv,
struct v4l2_control *ctl)
static int vidioc_g_tuner (struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_s_tuner (struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_g_frequency (struct file *file, void *priv,
struct v4l2_frequency *f)
int cx88_set_freq (struct cx88_core  *core,
struct v4l2_frequency *f)
EXPORT_SYMBOL(cx88_set_freq);
static int vidioc_s_frequency (struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_g_register (struct file *file, void *fh,
struct v4l2_dbg_register *reg)
static int vidioc_s_register (struct file *file, void *fh,
struct v4l2_dbg_register *reg)
static int radio_querycap (struct file *file, void  *priv,
struct v4l2_capability *cap)
static int radio_g_tuner (struct file *file, void *priv,
struct v4l2_tuner *t)
static int radio_enum_input (struct file *file, void *priv,
struct v4l2_input *i)
static int radio_g_audio (struct file *file, void *priv, struct v4l2_audio *a)
static int radio_s_tuner (struct file *file, void *priv,
struct v4l2_tuner *t)
static int radio_s_audio (struct file *file, void *fh,
struct v4l2_audio *a)
static int radio_s_input (struct file *file, void *fh, unsigned int i)
static int radio_queryctrl (struct file *file, void *priv,
struct v4l2_queryctrl *c)
static void cx8800_vid_timeout(unsigned long data)
static const char *cx88_vid_irqs[32] = ;
static void cx8800_vid_irq(struct cx8800_dev *dev)
static irqreturn_t cx8800_irq(int irq, void *dev_id)
static const struct v4l2_file_operations video_fops =
;
static const struct v4l2_ioctl_ops video_ioctl_ops = ;
static struct video_device cx8800_vbi_template;
static const struct video_device cx8800_video_template = ;
static const struct v4l2_file_operations radio_fops =
;
static const struct v4l2_ioctl_ops radio_ioctl_ops = ;
static const struct video_device cx8800_radio_template = ;
static void cx8800_unregister_video(struct cx8800_dev *dev)
static int __devinit cx8800_initdev(struct pci_dev *pci_dev,
const struct pci_device_id *pci_id)
static void __devexit cx8800_finidev(struct pci_dev *pci_dev)
static int cx8800_suspend(struct pci_dev *pci_dev, pm_message_t state)
static int cx8800_resume(struct pci_dev *pci_dev)
static const struct pci_device_id cx8800_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, cx8800_pci_tbl);
static struct pci_driver cx8800_pci_driver = ;
static int __init cx8800_init(void)
static void __exit cx8800_fini(void)
module_init(cx8800_init);
module_exit(cx8800_fini);
