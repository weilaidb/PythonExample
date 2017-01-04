static void ceph_pagelist_unmap_tail(struct ceph_pagelist *pl)
int ceph_pagelist_release(struct ceph_pagelist *pl)
EXPORT_SYMBOL(ceph_pagelist_release);
static int ceph_pagelist_addpage(struct ceph_pagelist *pl)
int ceph_pagelist_append(struct ceph_pagelist *pl, const void *buf, size_t len)
EXPORT_SYMBOL(ceph_pagelist_append);
int ceph_pagelist_reserve(struct ceph_pagelist *pl, size_t space)
EXPORT_SYMBOL(ceph_pagelist_reserve);
int ceph_pagelist_free_reserve(struct ceph_pagelist *pl)
EXPORT_SYMBOL(ceph_pagelist_free_reserve);
void ceph_pagelist_set_cursor(struct ceph_pagelist *pl,
struct ceph_pagelist_cursor *c)
EXPORT_SYMBOL(ceph_pagelist_set_cursor);
int ceph_pagelist_truncate(struct ceph_pagelist *pl,
struct ceph_pagelist_cursor *c)
EXPORT_SYMBOL(ceph_pagelist_truncate);
