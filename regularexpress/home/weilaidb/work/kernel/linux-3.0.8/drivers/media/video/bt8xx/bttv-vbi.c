#define VBI_OFFSET 244
#define VBI_BPL 2048
#define VBI_DEFLINES 16
static unsigned int vbibufs = 4;
static unsigned int vbi_debug;
module_param(vbibufs,   int, 0444);
module_param(vbi_debug, int, 0644);
MODULE_PARM_DESC(vbibufs,"number of vbi buffers, range 2-32, default 4");
MODULE_PARM_DESC(vbi_debug,"vbi code debug messages, default is 0 (no)");
# undef dprintk
#define dprintk(fmt, arg...)	if (vbi_debug) \
printk(KERN_DEBUG "bttv%d/vbi: " fmt, btv->c.nr , ## arg)
#define IMAGE_SIZE(fmt) \
(((fmt)->count[0] + (fmt)->count[1]) * (fmt)->samples_per_line)
static int vbi_buffer_setup(struct videobuf_queue *q,
unsigned int *count, unsigned int *size)
static int vbi_buffer_prepare(struct videobuf_queue *q,
struct videobuf_buffer *vb,
enum v4l2_field field)
static void
vbi_buffer_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void vbi_buffer_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
struct videobuf_queue_ops bttv_vbi_qops = ;
static int try_fmt(struct v4l2_vbi_format *f, const struct bttv_tvnorm *tvnorm,
__s32 crop_start)
int bttv_try_fmt_vbi_cap(struct file *file, void *f, struct v4l2_format *frt)
int bttv_s_fmt_vbi_cap(struct file *file, void *f, struct v4l2_format *frt)
int bttv_g_fmt_vbi_cap(struct file *file, void *f, struct v4l2_format *frt)
void bttv_vbi_fmt_reset(struct bttv_vbi_fmt *f, unsigned int norm)
