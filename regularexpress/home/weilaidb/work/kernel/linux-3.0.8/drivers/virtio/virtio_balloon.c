struct virtio_balloon
;
static struct virtio_device_id id_table[] = ;
static u32 page_to_balloon_pfn(struct page *page)
static void balloon_ack(struct virtqueue *vq)
static void tell_host(struct virtio_balloon *vb, struct virtqueue *vq)
static void fill_balloon(struct virtio_balloon *vb, size_t num)
static void release_pages_by_pfn(const u32 pfns[], unsigned int num)
static void leak_balloon(struct virtio_balloon *vb, size_t num)
static inline void update_stat(struct virtio_balloon *vb, int idx,
u16 tag, u64 val)
#define pages_to_bytes(x) ((u64)(x) << PAGE_SHIFT)
static void update_balloon_stats(struct virtio_balloon *vb)
static void stats_request(struct virtqueue *vq)
static void stats_handle_request(struct virtio_balloon *vb)
static void virtballoon_changed(struct virtio_device *vdev)
static inline s64 towards_target(struct virtio_balloon *vb)
static void update_balloon_size(struct virtio_balloon *vb)
static int balloon(void *_vballoon)
static int virtballoon_probe(struct virtio_device *vdev)
static void __devexit virtballoon_remove(struct virtio_device *vdev)
static unsigned int features[] = ;
static struct virtio_driver virtio_balloon_driver = ;
static int __init init(void)
static void __exit fini(void)
module_init(init);
module_exit(fini);
MODULE_DEVICE_TABLE(virtio, id_table);
MODULE_DESCRIPTION("Virtio balloon driver");
MODULE_LICENSE("GPL");
