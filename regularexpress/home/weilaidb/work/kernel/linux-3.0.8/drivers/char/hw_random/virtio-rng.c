static struct virtqueue *vq;
static unsigned int data_avail;
static DECLARE_COMPLETION(have_data);
static bool busy;
static void random_recv_done(struct virtqueue *vq)
static void register_buffer(u8 *buf, size_t size)
static int virtio_read(struct hwrng *rng, void *buf, size_t size, bool wait)
static void virtio_cleanup(struct hwrng *rng)
static struct hwrng virtio_hwrng = ;
static int virtrng_probe(struct virtio_device *vdev)
static void __devexit virtrng_remove(struct virtio_device *vdev)
static struct virtio_device_id id_table[] = ;
static struct virtio_driver virtio_rng_driver = ;
static int __init init(void)
static void __exit fini(void)
module_init(init);
module_exit(fini);
MODULE_DEVICE_TABLE(virtio, id_table);
MODULE_DESCRIPTION("Virtio random number driver");
MODULE_LICENSE("GPL");
