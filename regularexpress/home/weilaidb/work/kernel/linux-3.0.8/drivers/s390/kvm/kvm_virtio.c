#define VIRTIO_SUBCODE_64 0x0D00
static void *kvm_devices;
struct work_struct hotplug_work;
struct kvm_device ;
#define to_kvmdev(vd) container_of(vd, struct kvm_device, vdev)
static struct kvm_vqconfig *kvm_vq_config(const struct kvm_device_desc *desc)
static u8 *kvm_vq_features(const struct kvm_device_desc *desc)
static u8 *kvm_vq_configspace(const struct kvm_device_desc *desc)
static unsigned desc_size(const struct kvm_device_desc *desc)
static u32 kvm_get_features(struct virtio_device *vdev)
static void kvm_finalize_features(struct virtio_device *vdev)
static void kvm_get(struct virtio_device *vdev, unsigned int offset,
void *buf, unsigned len)
static void kvm_set(struct virtio_device *vdev, unsigned int offset,
const void *buf, unsigned len)
static u8 kvm_get_status(struct virtio_device *vdev)
static void kvm_set_status(struct virtio_device *vdev, u8 status)
static void kvm_reset(struct virtio_device *vdev)
static void kvm_notify(struct virtqueue *vq)
static struct virtqueue *kvm_find_vq(struct virtio_device *vdev,
unsigned index,
void (*callback)(struct virtqueue *vq),
const char *name)
static void kvm_del_vq(struct virtqueue *vq)
static void kvm_del_vqs(struct virtio_device *vdev)
static int kvm_find_vqs(struct virtio_device *vdev, unsigned nvqs,
struct virtqueue *vqs[],
vq_callback_t *callbacks[],
const char *names[])
static struct virtio_config_ops kvm_vq_configspace_ops = ;
static struct device *kvm_root;
static void add_kvm_device(struct kvm_device_desc *d, unsigned int offset)
static void scan_devices(void)
static int match_desc(struct device *dev, void *data)
static void hotplug_devices(struct work_struct *dummy)
static void kvm_extint_handler(unsigned int ext_int_code,
unsigned int param32, unsigned long param64)
static int __init kvm_devices_init(void)
static __init int early_put_chars(u32 vtermno, const char *buf, int count)
static int __init s390_virtio_console_init(void)
console_initcall(s390_virtio_console_init);
postcore_initcall(kvm_devices_init);
