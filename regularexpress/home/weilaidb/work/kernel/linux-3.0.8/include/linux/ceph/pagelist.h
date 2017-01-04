#define __FS_CEPH_PAGELIST_H
struct ceph_pagelist ;
struct ceph_pagelist_cursor ;
static inline void ceph_pagelist_init(struct ceph_pagelist *pl)
extern int ceph_pagelist_release(struct ceph_pagelist *pl);
extern int ceph_pagelist_append(struct ceph_pagelist *pl, const void *d, size_t l);
extern int ceph_pagelist_reserve(struct ceph_pagelist *pl, size_t space);
extern int ceph_pagelist_free_reserve(struct ceph_pagelist *pl);
extern void ceph_pagelist_set_cursor(struct ceph_pagelist *pl,
struct ceph_pagelist_cursor *c);
extern int ceph_pagelist_truncate(struct ceph_pagelist *pl,
struct ceph_pagelist_cursor *c);
static inline int ceph_pagelist_encode_64(struct ceph_pagelist *pl, u64 v)
static inline int ceph_pagelist_encode_32(struct ceph_pagelist *pl, u32 v)
static inline int ceph_pagelist_encode_16(struct ceph_pagelist *pl, u16 v)
static inline int ceph_pagelist_encode_8(struct ceph_pagelist *pl, u8 v)
static inline int ceph_pagelist_encode_string(struct ceph_pagelist *pl,
char *s, size_t len)
