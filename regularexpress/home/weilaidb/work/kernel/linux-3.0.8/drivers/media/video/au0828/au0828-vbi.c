static unsigned int vbibufs = 5;
module_param(vbibufs, int, 0644);
MODULE_PARM_DESC(vbibufs, "number of vbi buffers, range 2-32");
static void
free_buffer(struct videobuf_queue *vq, struct au0828_buffer *buf)
static int
vbi_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
static int
vbi_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
vbi_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void vbi_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
struct videobuf_queue_ops au0828_vbi_qops = ;
