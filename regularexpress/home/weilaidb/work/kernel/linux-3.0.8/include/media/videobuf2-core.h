#define _MEDIA_VIDEOBUF2_CORE_H
struct vb2_alloc_ctx;
struct vb2_fileio_data;
struct vb2_mem_ops ;
struct vb2_plane ;
enum vb2_io_modes ;
enum vb2_fileio_flags ;
enum vb2_buffer_state ;
struct vb2_queue;
struct vb2_buffer ;
struct vb2_ops ;
struct vb2_queue ;
void *vb2_plane_vaddr(struct vb2_buffer *vb, unsigned int plane_no);
void *vb2_plane_cookie(struct vb2_buffer *vb, unsigned int plane_no);
void vb2_buffer_done(struct vb2_buffer *vb, enum vb2_buffer_state state);
int vb2_wait_for_all_buffers(struct vb2_queue *q);
int vb2_querybuf(struct vb2_queue *q, struct v4l2_buffer *b);
int vb2_reqbufs(struct vb2_queue *q, struct v4l2_requestbuffers *req);
int vb2_queue_init(struct vb2_queue *q);
void vb2_queue_release(struct vb2_queue *q);
int vb2_qbuf(struct vb2_queue *q, struct v4l2_buffer *b);
int vb2_dqbuf(struct vb2_queue *q, struct v4l2_buffer *b, bool nonblocking);
int vb2_streamon(struct vb2_queue *q, enum v4l2_buf_type type);
int vb2_streamoff(struct vb2_queue *q, enum v4l2_buf_type type);
int vb2_mmap(struct vb2_queue *q, struct vm_area_struct *vma);
unsigned int vb2_poll(struct vb2_queue *q, struct file *file, poll_table *wait);
size_t vb2_read(struct vb2_queue *q, char __user *data, size_t count,
loff_t *ppos, int nonblock);
size_t vb2_write(struct vb2_queue *q, char __user *data, size_t count,
loff_t *ppos, int nonblock);
static inline bool vb2_is_streaming(struct vb2_queue *q)
static inline bool vb2_is_busy(struct vb2_queue *q)
static inline void *vb2_get_drv_priv(struct vb2_queue *q)
static inline void vb2_set_plane_payload(struct vb2_buffer *vb,
unsigned int plane_no, unsigned long size)
static inline unsigned long vb2_get_plane_payload(struct vb2_buffer *vb,
unsigned int plane_no)
static inline unsigned long
vb2_plane_size(struct vb2_buffer *vb, unsigned int plane_no)
