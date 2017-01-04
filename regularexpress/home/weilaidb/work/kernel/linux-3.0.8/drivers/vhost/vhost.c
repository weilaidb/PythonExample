enum ;
#define vhost_used_event(vq) ((u16 __user *)&vq->avail->ring[vq->num])
#define vhost_avail_event(vq) ((u16 __user *)&vq->used->ring[vq->num])
static void vhost_poll_func(struct file *file, wait_queue_head_t *wqh,
poll_table *pt)
static int vhost_poll_wakeup(wait_queue_t *wait, unsigned mode, int sync,
void *key)
static void vhost_work_init(struct vhost_work *work, vhost_work_fn_t fn)
void vhost_poll_init(struct vhost_poll *poll, vhost_work_fn_t fn,
unsigned long mask, struct vhost_dev *dev)
void vhost_poll_start(struct vhost_poll *poll, struct file *file)
void vhost_poll_stop(struct vhost_poll *poll)
static bool vhost_work_seq_done(struct vhost_dev *dev, struct vhost_work *work,
unsigned seq)
static void vhost_work_flush(struct vhost_dev *dev, struct vhost_work *work)
void vhost_poll_flush(struct vhost_poll *poll)
static inline void vhost_work_queue(struct vhost_dev *dev,
struct vhost_work *work)
void vhost_poll_queue(struct vhost_poll *poll)
static void vhost_vq_reset(struct vhost_dev *dev,
struct vhost_virtqueue *vq)
static int vhost_worker(void *data)
static long vhost_dev_alloc_iovecs(struct vhost_dev *dev)
static void vhost_dev_free_iovecs(struct vhost_dev *dev)
long vhost_dev_init(struct vhost_dev *dev,
struct vhost_virtqueue *vqs, int nvqs)
long vhost_dev_check_owner(struct vhost_dev *dev)
struct vhost_attach_cgroups_struct ;
static void vhost_attach_cgroups_work(struct vhost_work *work)
static int vhost_attach_cgroups(struct vhost_dev *dev)
static long vhost_dev_set_owner(struct vhost_dev *dev)
long vhost_dev_reset_owner(struct vhost_dev *dev)
void vhost_dev_cleanup(struct vhost_dev *dev)
static int log_access_ok(void __user *log_base, u64 addr, unsigned long sz)
static int vq_memory_access_ok(void __user *log_base, struct vhost_memory *mem,
int log_all)
static int memory_access_ok(struct vhost_dev *d, struct vhost_memory *mem,
int log_all)
static int vq_access_ok(struct vhost_dev *d, unsigned int num,
struct vring_desc __user *desc,
struct vring_avail __user *avail,
struct vring_used __user *used)
int vhost_log_access_ok(struct vhost_dev *dev)
static int vq_log_access_ok(struct vhost_dev *d, struct vhost_virtqueue *vq,
void __user *log_base)
int vhost_vq_access_ok(struct vhost_virtqueue *vq)
static long vhost_set_memory(struct vhost_dev *d, struct vhost_memory __user *m)
static int init_used(struct vhost_virtqueue *vq,
struct vring_used __user *used)
static long vhost_set_vring(struct vhost_dev *d, int ioctl, void __user *argp)
long vhost_dev_ioctl(struct vhost_dev *d, unsigned int ioctl, unsigned long arg)
static const struct vhost_memory_region *find_region(struct vhost_memory *mem,
__u64 addr, __u32 len)
static int set_bit_to_user(int nr, void __user *addr)
static int log_write(void __user *log_base,
u64 write_address, u64 write_length)
int vhost_log_write(struct vhost_virtqueue *vq, struct vhost_log *log,
unsigned int log_num, u64 len)
static int translate_desc(struct vhost_dev *dev, u64 addr, u32 len,
struct iovec iov[], int iov_size)
static unsigned next_desc(struct vring_desc *desc)
static int get_indirect(struct vhost_dev *dev, struct vhost_virtqueue *vq,
struct iovec iov[], unsigned int iov_size,
unsigned int *out_num, unsigned int *in_num,
struct vhost_log *log, unsigned int *log_num,
struct vring_desc *indirect)
int vhost_get_vq_desc(struct vhost_dev *dev, struct vhost_virtqueue *vq,
struct iovec iov[], unsigned int iov_size,
unsigned int *out_num, unsigned int *in_num,
struct vhost_log *log, unsigned int *log_num)
void vhost_discard_vq_desc(struct vhost_virtqueue *vq, int n)
int vhost_add_used(struct vhost_virtqueue *vq, unsigned int head, int len)
static int __vhost_add_used_n(struct vhost_virtqueue *vq,
struct vring_used_elem *heads,
unsigned count)
int vhost_add_used_n(struct vhost_virtqueue *vq, struct vring_used_elem *heads,
unsigned count)
static bool vhost_notify(struct vhost_dev *dev, struct vhost_virtqueue *vq)
void vhost_signal(struct vhost_dev *dev, struct vhost_virtqueue *vq)
void vhost_add_used_and_signal(struct vhost_dev *dev,
struct vhost_virtqueue *vq,
unsigned int head, int len)
void vhost_add_used_and_signal_n(struct vhost_dev *dev,
struct vhost_virtqueue *vq,
struct vring_used_elem *heads, unsigned count)
bool vhost_enable_notify(struct vhost_dev *dev, struct vhost_virtqueue *vq)
void vhost_disable_notify(struct vhost_dev *dev, struct vhost_virtqueue *vq)
