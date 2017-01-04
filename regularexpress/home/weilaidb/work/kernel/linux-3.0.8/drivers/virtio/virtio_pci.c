MODULE_AUTHOR("Anthony Liguori <aliguori@us.ibm.com>");
MODULE_DESCRIPTION("virtio-pci");
MODULE_LICENSE("GPL");
MODULE_VERSION("1");
struct virtio_pci_device
;
enum ;
struct virtio_pci_vq_info
;
static struct pci_device_id virtio_pci_id_table[] = ;
MODULE_DEVICE_TABLE(pci, virtio_pci_id_table);
static struct virtio_pci_device *to_vp_device(struct virtio_device *vdev)
static u32 vp_get_features(struct virtio_device *vdev)
static void vp_finalize_features(struct virtio_device *vdev)
static void vp_get(struct virtio_device *vdev, unsigned offset,
void *buf, unsigned len)
static void vp_set(struct virtio_device *vdev, unsigned offset,
const void *buf, unsigned len)
static u8 vp_get_status(struct virtio_device *vdev)
static void vp_set_status(struct virtio_device *vdev, u8 status)
static void vp_reset(struct virtio_device *vdev)
static void vp_notify(struct virtqueue *vq)
static irqreturn_t vp_config_changed(int irq, void *opaque)
static irqreturn_t vp_vring_interrupt(int irq, void *opaque)
static irqreturn_t vp_interrupt(int irq, void *opaque)
static void vp_free_vectors(struct virtio_device *vdev)
static int vp_request_msix_vectors(struct virtio_device *vdev, int nvectors,
bool per_vq_vectors)
static int vp_request_intx(struct virtio_device *vdev)
static struct virtqueue *setup_vq(struct virtio_device *vdev, unsigned index,
void (*callback)(struct virtqueue *vq),
const char *name,
u16 msix_vec)
static void vp_del_vq(struct virtqueue *vq)
static void vp_del_vqs(struct virtio_device *vdev)
static int vp_try_to_find_vqs(struct virtio_device *vdev, unsigned nvqs,
struct virtqueue *vqs[],
vq_callback_t *callbacks[],
const char *names[],
bool use_msix,
bool per_vq_vectors)
static int vp_find_vqs(struct virtio_device *vdev, unsigned nvqs,
struct virtqueue *vqs[],
vq_callback_t *callbacks[],
const char *names[])
static struct virtio_config_ops virtio_pci_config_ops = ;
static void virtio_pci_release_dev(struct device *_d)
static int __devinit virtio_pci_probe(struct pci_dev *pci_dev,
const struct pci_device_id *id)
static void __devexit virtio_pci_remove(struct pci_dev *pci_dev)
static int virtio_pci_suspend(struct pci_dev *pci_dev, pm_message_t state)
static int virtio_pci_resume(struct pci_dev *pci_dev)
static struct pci_driver virtio_pci_driver = ;
static int __init virtio_pci_init(void)
module_init(virtio_pci_init);
static void __exit virtio_pci_exit(void)
module_exit(virtio_pci_exit);
