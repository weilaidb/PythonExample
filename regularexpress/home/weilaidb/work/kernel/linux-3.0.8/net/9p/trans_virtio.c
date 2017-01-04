#define VIRTQUEUE_NUM	128
static DEFINE_MUTEX(virtio_9p_lock);
static DECLARE_WAIT_QUEUE_HEAD(vp_wq);
static atomic_t vp_pinned = ATOMIC_INIT(0);
struct virtio_chan ;
static struct list_head virtio_chan_list;
static unsigned int rest_of_page(void *data)
static void p9_virtio_close(struct p9_client *client)
static void req_done(struct virtqueue *vq)
static int
pack_sg_list(struct scatterlist *sg, int start, int limit, char *data,
int count)
static int p9_virtio_cancel(struct p9_client *client, struct p9_req_t *req)
static int
pack_sg_list_p(struct scatterlist *sg, int start, int limit, size_t pdata_off,
struct page **pdata, int count)
static int
p9_virtio_request(struct p9_client *client, struct p9_req_t *req)
static ssize_t p9_mount_tag_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(mount_tag, 0444, p9_mount_tag_show, NULL);
static int p9_virtio_probe(struct virtio_device *vdev)
static int
p9_virtio_create(struct p9_client *client, const char *devname, char *args)
static void p9_virtio_remove(struct virtio_device *vdev)
static struct virtio_device_id id_table[] = ;
static unsigned int features[] = ;
static struct virtio_driver p9_virtio_drv = ;
static struct p9_trans_module p9_virtio_trans = ;
static int __init p9_virtio_init(void)
static void __exit p9_virtio_cleanup(void)
module_init(p9_virtio_init);
module_exit(p9_virtio_cleanup);
MODULE_DEVICE_TABLE(virtio, id_table);
MODULE_AUTHOR("Eric Van Hensbergen <ericvh@gmail.com>");
MODULE_DESCRIPTION("Virtio 9p Transport");
MODULE_LICENSE("GPL");
