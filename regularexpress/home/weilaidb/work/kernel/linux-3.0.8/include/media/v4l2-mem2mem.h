#define _MEDIA_V4L2_MEM2MEM_H
struct v4l2_m2m_ops ;
struct v4l2_m2m_dev;
struct v4l2_m2m_queue_ctx ;
struct v4l2_m2m_ctx ;
struct v4l2_m2m_buffer ;
void *v4l2_m2m_get_curr_priv(struct v4l2_m2m_dev *m2m_dev);
struct vb2_queue *v4l2_m2m_get_vq(struct v4l2_m2m_ctx *m2m_ctx,
enum v4l2_buf_type type);
void v4l2_m2m_job_finish(struct v4l2_m2m_dev *m2m_dev,
struct v4l2_m2m_ctx *m2m_ctx);
static inline void
v4l2_m2m_buf_done(struct vb2_buffer *buf, enum vb2_buffer_state state)
int v4l2_m2m_reqbufs(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct v4l2_requestbuffers *reqbufs);
int v4l2_m2m_querybuf(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct v4l2_buffer *buf);
int v4l2_m2m_qbuf(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct v4l2_buffer *buf);
int v4l2_m2m_dqbuf(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct v4l2_buffer *buf);
int v4l2_m2m_streamon(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
enum v4l2_buf_type type);
int v4l2_m2m_streamoff(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
enum v4l2_buf_type type);
unsigned int v4l2_m2m_poll(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct poll_table_struct *wait);
int v4l2_m2m_mmap(struct file *file, struct v4l2_m2m_ctx *m2m_ctx,
struct vm_area_struct *vma);
struct v4l2_m2m_dev *v4l2_m2m_init(struct v4l2_m2m_ops *m2m_ops);
void v4l2_m2m_release(struct v4l2_m2m_dev *m2m_dev);
struct v4l2_m2m_ctx *v4l2_m2m_ctx_init(struct v4l2_m2m_dev *m2m_dev,
void *drv_priv,
int (*queue_init)(void *priv, struct vb2_queue *src_vq, struct vb2_queue *dst_vq));
void v4l2_m2m_ctx_release(struct v4l2_m2m_ctx *m2m_ctx);
void v4l2_m2m_buf_queue(struct v4l2_m2m_ctx *m2m_ctx, struct vb2_buffer *vb);
static inline
unsigned int v4l2_m2m_num_src_bufs_ready(struct v4l2_m2m_ctx *m2m_ctx)
static inline
unsigned int v4l2_m2m_num_dst_bufs_ready(struct v4l2_m2m_ctx *m2m_ctx)
void *v4l2_m2m_next_buf(struct v4l2_m2m_queue_ctx *q_ctx);
static inline void *v4l2_m2m_next_src_buf(struct v4l2_m2m_ctx *m2m_ctx)
static inline void *v4l2_m2m_next_dst_buf(struct v4l2_m2m_ctx *m2m_ctx)
static inline
struct vb2_queue *v4l2_m2m_get_src_vq(struct v4l2_m2m_ctx *m2m_ctx)
static inline
struct vb2_queue *v4l2_m2m_get_dst_vq(struct v4l2_m2m_ctx *m2m_ctx)
void *v4l2_m2m_buf_remove(struct v4l2_m2m_queue_ctx *q_ctx);
static inline void *v4l2_m2m_src_buf_remove(struct v4l2_m2m_ctx *m2m_ctx)
static inline void *v4l2_m2m_dst_buf_remove(struct v4l2_m2m_ctx *m2m_ctx)
