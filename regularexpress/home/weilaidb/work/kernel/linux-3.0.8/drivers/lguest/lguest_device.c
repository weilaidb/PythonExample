static void *lguest_devices;
static inline void *lguest_map(unsigned long phys_addr, unsigned long pages)
static inline void lguest_unmap(void *addr)
struct lguest_device ;
#define to_lgdev(vd) container_of(vd, struct lguest_device, vdev)
static struct lguest_vqconfig *lg_vq(const struct lguest_device_desc *desc)
static u8 *lg_features(const struct lguest_device_desc *desc)
static u8 *lg_config(const struct lguest_device_desc *desc)
static unsigned desc_size(const struct lguest_device_desc *desc)
static u32 lg_get_features(struct virtio_device *vdev)
static void lg_finalize_features(struct virtio_device *vdev)
static void lg_get(struct virtio_device *vdev, unsigned int offset,
void *buf, unsigned len)
static void lg_set(struct virtio_device *vdev, unsigned int offset,
const void *buf, unsigned len)
static u8 lg_get_status(struct virtio_device *vdev)
static void set_status(struct virtio_device *vdev, u8 status)
static void lg_set_status(struct virtio_device *vdev, u8 status)
static void lg_reset(struct virtio_device *vdev)
struct lguest_vq_info ;
static void lg_notify(struct virtqueue *vq)
extern void lguest_setup_irq(unsigned int irq);
static struct virtqueue *lg_find_vq(struct virtio_device *vdev,
unsigned index,
void (*callback)(struct virtqueue *vq),
const char *name)
static void lg_del_vq(struct virtqueue *vq)
static void lg_del_vqs(struct virtio_device *vdev)
static int lg_find_vqs(struct virtio_device *vdev, unsigned nvqs,
struct virtqueue *vqs[],
vq_callback_t *callbacks[],
const char *names[])
static struct virtio_config_ops lguest_config_ops = ;
static struct device *lguest_root;
static void add_lguest_device(struct lguest_device_desc *d,
unsigned int offset)
static void scan_devices(void)
static int __init lguest_devices_init(void)
postcore_initcall(lguest_devices_init);
