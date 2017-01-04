static void *alloc_fn(gfp_t gfp_mask, void *arg)
static void free_fn(void *element, void *arg)
int ceph_msgpool_init(struct ceph_msgpool *pool,
int front_len, int size, bool blocking, const char *name)
void ceph_msgpool_destroy(struct ceph_msgpool *pool)
struct ceph_msg *ceph_msgpool_get(struct ceph_msgpool *pool,
int front_len)
void ceph_msgpool_put(struct ceph_msgpool *pool, struct ceph_msg *msg)
