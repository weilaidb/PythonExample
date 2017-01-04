#define _LINUX_VIRTIO_H
struct virtqueue ;
int virtqueue_add_buf_gfp(struct virtqueue *vq,
struct scatterlist sg[],
unsigned int out_num,
unsigned int in_num,
void *data,
gfp_t gfp);
static inline int virtqueue_add_buf(struct virtqueue *vq,
struct scatterlist sg[],
unsigned int out_num,
unsigned int in_num,
void *data)
void virtqueue_kick(struct virtqueue *vq);
void *virtqueue_get_buf(struct virtqueue *vq, unsigned int *len);
void virtqueue_disable_cb(struct virtqueue *vq);
bool virtqueue_enable_cb(struct virtqueue *vq);
bool virtqueue_enable_cb_delayed(struct virtqueue *vq);
void *virtqueue_detach_unused_buf(struct virtqueue *vq);
struct virtio_device ;
#define dev_to_virtio(dev) container_of(dev, struct virtio_device, dev)
int register_virtio_device(struct virtio_device *dev);
void unregister_virtio_device(struct virtio_device *dev);
struct virtio_driver ;
int register_virtio_driver(struct virtio_driver *drv);
void unregister_virtio_driver(struct virtio_driver *drv);
