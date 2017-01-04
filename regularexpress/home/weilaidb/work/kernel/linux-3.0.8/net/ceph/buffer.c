struct ceph_buffer *ceph_buffer_new(size_t len, gfp_t gfp)
EXPORT_SYMBOL(ceph_buffer_new);
void ceph_buffer_release(struct kref *kref)
EXPORT_SYMBOL(ceph_buffer_release);
int ceph_decode_buffer(struct ceph_buffer **b, void **p, void *end)
