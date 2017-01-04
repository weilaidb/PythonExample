#define _FS_CEPH_MDSMAP_H
struct ceph_mds_info ;
struct ceph_mdsmap ;
static inline struct ceph_entity_addr *
ceph_mdsmap_get_addr(struct ceph_mdsmap *m, int w)
static inline int ceph_mdsmap_get_state(struct ceph_mdsmap *m, int w)
static inline bool ceph_mdsmap_is_laggy(struct ceph_mdsmap *m, int w)
extern int ceph_mdsmap_get_random_mds(struct ceph_mdsmap *m);
extern struct ceph_mdsmap *ceph_mdsmap_decode(void **p, void *end);
extern void ceph_mdsmap_destroy(struct ceph_mdsmap *m);
