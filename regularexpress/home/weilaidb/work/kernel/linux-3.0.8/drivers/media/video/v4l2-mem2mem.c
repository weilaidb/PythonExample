MODULE_DESCRIPTION("Mem to mem device framework for videobuf");
MODULE_AUTHOR("Pawel Osciak, <pawel@osciak.com>");
MODULE_LICENSE("GPL");
static bool debug;
module_param(debug, bool, 0644);
#define dprintk(fmt, arg...)						\
do  while (0)
#define TRANS_QUEUED		(1 << 0)
#define TRANS_RUNNING		(1 << 1)
#define DST_QUEUE_OFF_BASE	(1 << 30)
struct v4l2_m2m_dev ;
static struct v4l2_m2m_queue_ctx *get_queue_ctx(struct v4l2_m2m_ctx *m2m_ctx,
enum v4l2_buf_type type)
struct vb2_queue *v4l2_m2m_get_vq(struct v4l2_m2m_ctx *m2m_ctx,
enum v4l2_buf_type type)
EXPORT_SYMBOL(v4l2_m2m_get_vq);
void *v4l2_m2m_next_buf(struct v4l2_m2m_queue_ctx *q_ctx)
EXPORT_SYMBOL_GPL(v4l2_m2m_next_buf);
void *v4l2_m2m_buf_remove(struct v4l2_m2m_queue_ctx *q_ctx)
EXPORT_SYMBOL_GPL(v4l2_m2m_buf_remove);
void *v4l2_m2m_get_curr_priv(struct v4l2_m2m_dev *m2m_dev)
EXPORT_SYMBOL(v4l2_m2m_get_curr_priv);
static void v4l2_m2m_try_run(struct v4l2_m2m_dev *m2m_dev)
static void v4l2_m2m_try_schedule(struct v4l2_m2m_ctx *m2m_ctx)
void v4l2_m2m_job_finish(struct v4l2_m2m_dev *m2m_dev,
struct v4l2_m2m_ctx *m2m_ctx)
EXPORT_SYMBOL(v4l2_m2m_job_finish);
int v4l2_m2m_reqbufs(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct v4l2_requestbuffers *reqbufs)
EXPORT_SYMBOL_GPL(v4l2_m2m_reqbufs);
int v4l2_m2m_querybuf(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct v4l2_buffer *buf)
EXPORT_SYMBOL_GPL(v4l2_m2m_querybuf);
int v4l2_m2m_qbuf(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct v4l2_buffer *buf)
EXPORT_SYMBOL_GPL(v4l2_m2m_qbuf);
int v4l2_m2m_dqbuf(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct v4l2_buffer *buf)
EXPORT_SYMBOL_GPL(v4l2_m2m_dqbuf);
int v4l2_m2m_streamon(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
enum v4l2_buf_type type)
EXPORT_SYMBOL_GPL(v4l2_m2m_streamon);
int v4l2_m2m_streamoff(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
enum v4l2_buf_type type)
EXPORT_SYMBOL_GPL(v4l2_m2m_streamoff);
unsigned int v4l2_m2m_poll(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct poll_table_struct *wait)
EXPORT_SYMBOL_GPL(v4l2_m2m_poll);
int v4l2_m2m_mmap(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct vm_area_struct *vma)
EXPORT_SYMBOL(v4l2_m2m_mmap);
struct v4l2_m2m_dev *v4l2_m2m_init(struct v4l2_m2m_ops *m2m_ops)
EXPORT_SYMBOL_GPL(v4l2_m2m_init);
void v4l2_m2m_release(struct v4l2_m2m_dev *m2m_dev)
EXPORT_SYMBOL_GPL(v4l2_m2m_release);
struct v4l2_m2m_ctx *v4l2_m2m_ctx_init(struct v4l2_m2m_dev *m2m_dev,
void *drv_priv,
int (*queue_init)(void *priv, struct vb2_queue *src_vq, struct vb2_queue *dst_vq))
EXPORT_SYMBOL_GPL(v4l2_m2m_ctx_init);
void v4l2_m2m_ctx_release(struct v4l2_m2m_ctx *m2m_ctx)
EXPORT_SYMBOL_GPL(v4l2_m2m_ctx_release);
void v4l2_m2m_buf_queue(struct v4l2_m2m_ctx *m2m_ctx, struct vb2_buffer *vb)
EXPORT_SYMBOL_GPL(v4l2_m2m_buf_queue);
