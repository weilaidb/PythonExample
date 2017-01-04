#define _LINUX_VIRTIO_RING_H
#define VRING_DESC_F_NEXT	1
#define VRING_DESC_F_WRITE	2
#define VRING_DESC_F_INDIRECT	4
#define VRING_USED_F_NO_NOTIFY	1
#define VRING_AVAIL_F_NO_INTERRUPT	1
#define VIRTIO_RING_F_INDIRECT_DESC	28
#define VIRTIO_RING_F_EVENT_IDX		29
struct vring_desc ;
struct vring_avail ;
struct vring_used_elem ;
struct vring_used ;
struct vring ;
#define vring_used_event(vr) ((vr)->avail->ring[(vr)->num])
#define vring_avail_event(vr) (*(__u16 *)&(vr)->used->ring[(vr)->num])
static inline void vring_init(struct vring *vr, unsigned int num, void *p,
unsigned long align)
static inline unsigned vring_size(unsigned int num, unsigned long align)
static inline int vring_need_event(__u16 event_idx, __u16 new_idx, __u16 old)
struct virtio_device;
struct virtqueue;
struct virtqueue *vring_new_virtqueue(unsigned int num,
unsigned int vring_align,
struct virtio_device *vdev,
void *pages,
void (*notify)(struct virtqueue *vq),
void (*callback)(struct virtqueue *vq),
const char *name);
void vring_del_virtqueue(struct virtqueue *vq);
void vring_transport_features(struct virtio_device *vdev);
irqreturn_t vring_interrupt(int irq, void *_vq);
