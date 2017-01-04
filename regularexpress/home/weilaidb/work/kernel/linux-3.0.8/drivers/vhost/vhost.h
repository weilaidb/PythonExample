#define _VHOST_H
struct vhost_device;
struct vhost_work;
typedef void (*vhost_work_fn_t)(struct vhost_work *work);
struct vhost_work ;
struct vhost_poll ;
void vhost_poll_init(struct vhost_poll *poll, vhost_work_fn_t fn,
unsigned long mask, struct vhost_dev *dev);
void vhost_poll_start(struct vhost_poll *poll, struct file *file);
void vhost_poll_stop(struct vhost_poll *poll);
void vhost_poll_flush(struct vhost_poll *poll);
void vhost_poll_queue(struct vhost_poll *poll);
struct vhost_log ;
struct vhost_virtqueue ;
struct vhost_dev ;
long vhost_dev_init(struct vhost_dev *, struct vhost_virtqueue *vqs, int nvqs);
long vhost_dev_check_owner(struct vhost_dev *);
long vhost_dev_reset_owner(struct vhost_dev *);
void vhost_dev_cleanup(struct vhost_dev *);
long vhost_dev_ioctl(struct vhost_dev *, unsigned int ioctl, unsigned long arg);
int vhost_vq_access_ok(struct vhost_virtqueue *vq);
int vhost_log_access_ok(struct vhost_dev *);
int vhost_get_vq_desc(struct vhost_dev *, struct vhost_virtqueue *,
struct iovec iov[], unsigned int iov_count,
unsigned int *out_num, unsigned int *in_num,
struct vhost_log *log, unsigned int *log_num);
void vhost_discard_vq_desc(struct vhost_virtqueue *, int n);
int vhost_add_used(struct vhost_virtqueue *, unsigned int head, int len);
int vhost_add_used_n(struct vhost_virtqueue *, struct vring_used_elem *heads,
unsigned count);
void vhost_add_used_and_signal(struct vhost_dev *, struct vhost_virtqueue *,
unsigned int id, int len);
void vhost_add_used_and_signal_n(struct vhost_dev *, struct vhost_virtqueue *,
struct vring_used_elem *heads, unsigned count);
void vhost_signal(struct vhost_dev *, struct vhost_virtqueue *);
void vhost_disable_notify(struct vhost_dev *, struct vhost_virtqueue *);
bool vhost_enable_notify(struct vhost_dev *, struct vhost_virtqueue *);
int vhost_log_write(struct vhost_virtqueue *vq, struct vhost_log *log,
unsigned int log_num, u64 len);
#define vq_err(vq, fmt, ...) do  while (0)
enum ;
static inline int vhost_has_feature(struct vhost_dev *dev, int bit)
