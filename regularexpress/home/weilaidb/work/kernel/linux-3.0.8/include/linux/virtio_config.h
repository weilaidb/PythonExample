#define _LINUX_VIRTIO_CONFIG_H
#define VIRTIO_CONFIG_S_ACKNOWLEDGE	1
#define VIRTIO_CONFIG_S_DRIVER		2
#define VIRTIO_CONFIG_S_DRIVER_OK	4
#define VIRTIO_CONFIG_S_FAILED		0x80
#define VIRTIO_TRANSPORT_F_START	28
#define VIRTIO_TRANSPORT_F_END		32
#define VIRTIO_F_NOTIFY_ON_EMPTY	24
typedef void vq_callback_t(struct virtqueue *);
struct virtio_config_ops ;
void virtio_check_driver_offered_feature(const struct virtio_device *vdev,
unsigned int fbit);
static inline bool virtio_has_feature(const struct virtio_device *vdev,
unsigned int fbit)
#define virtio_config_val(vdev, fbit, offset, v) \
virtio_config_buf((vdev), (fbit), (offset), (v), sizeof(*v))
static inline int virtio_config_buf(struct virtio_device *vdev,
unsigned int fbit,
unsigned int offset,
void *buf, unsigned len)
static inline
struct virtqueue *virtio_find_single_vq(struct virtio_device *vdev,
vq_callback_t *c, const char *n)
