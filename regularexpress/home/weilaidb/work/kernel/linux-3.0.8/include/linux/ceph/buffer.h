#define __FS_CEPH_BUFFER_H
struct ceph_buffer ;
extern struct ceph_buffer *ceph_buffer_new(size_t len, gfp_t gfp);
extern void ceph_buffer_release(struct kref *kref);
static inline struct ceph_buffer *ceph_buffer_get(struct ceph_buffer *b)
static inline void ceph_buffer_put(struct ceph_buffer *b)
extern int ceph_decode_buffer(struct ceph_buffer **b, void **p, void *end);
