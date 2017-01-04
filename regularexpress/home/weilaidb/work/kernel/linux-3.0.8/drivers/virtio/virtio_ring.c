#define virtio_mb() smp_mb()
#define virtio_rmb() smp_rmb()
#define virtio_wmb() smp_wmb()
#define virtio_mb() mb()
#define virtio_rmb() rmb()
#define virtio_wmb() wmb()
#define BAD_RING(_vq, fmt, args...)				\
do  while (0)
#define START_USE(_vq)						\
do  while (0)
#define END_USE(_vq) \
do  while(0)
#define BAD_RING(_vq, fmt, args...)				\
do  while (0)
#define START_USE(vq)
#define END_USE(vq)
struct vring_virtqueue
;
#define to_vvq(_vq) container_of(_vq, struct vring_virtqueue, vq)
static int vring_add_indirect(struct vring_virtqueue *vq,
struct scatterlist sg[],
unsigned int out,
unsigned int in,
gfp_t gfp)
int virtqueue_add_buf_gfp(struct virtqueue *_vq,
struct scatterlist sg[],
unsigned int out,
unsigned int in,
void *data,
gfp_t gfp)
EXPORT_SYMBOL_GPL(virtqueue_add_buf_gfp);
void virtqueue_kick(struct virtqueue *_vq)
EXPORT_SYMBOL_GPL(virtqueue_kick);
static void detach_buf(struct vring_virtqueue *vq, unsigned int head)
static inline bool more_used(const struct vring_virtqueue *vq)
void *virtqueue_get_buf(struct virtqueue *_vq, unsigned int *len)
EXPORT_SYMBOL_GPL(virtqueue_get_buf);
void virtqueue_disable_cb(struct virtqueue *_vq)
EXPORT_SYMBOL_GPL(virtqueue_disable_cb);
bool virtqueue_enable_cb(struct virtqueue *_vq)
EXPORT_SYMBOL_GPL(virtqueue_enable_cb);
bool virtqueue_enable_cb_delayed(struct virtqueue *_vq)
EXPORT_SYMBOL_GPL(virtqueue_enable_cb_delayed);
void *virtqueue_detach_unused_buf(struct virtqueue *_vq)
EXPORT_SYMBOL_GPL(virtqueue_detach_unused_buf);
irqreturn_t vring_interrupt(int irq, void *_vq)
EXPORT_SYMBOL_GPL(vring_interrupt);
struct virtqueue *vring_new_virtqueue(unsigned int num,
unsigned int vring_align,
struct virtio_device *vdev,
void *pages,
void (*notify)(struct virtqueue *),
void (*callback)(struct virtqueue *),
const char *name)
EXPORT_SYMBOL_GPL(vring_new_virtqueue);
void vring_del_virtqueue(struct virtqueue *vq)
EXPORT_SYMBOL_GPL(vring_del_virtqueue);
void vring_transport_features(struct virtio_device *vdev)
EXPORT_SYMBOL_GPL(vring_transport_features);
MODULE_LICENSE("GPL");
