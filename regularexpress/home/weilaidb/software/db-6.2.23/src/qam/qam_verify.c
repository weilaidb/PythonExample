int
__qam_vrfy_meta(dbp, vdp, meta, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
QMETA *meta;
db_pgno_t pgno;
u_int32_t flags;
int
__qam_meta2pgset(dbp, vdp, pgset)
DB *dbp;
VRFY_DBINFO *vdp;
DB *pgset;
int
__qam_vrfy_data(dbp, vdp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
QPAGE *h;
db_pgno_t pgno;
u_int32_t flags;
int
__qam_vrfy_structure(dbp, vdp, flags)
DB *dbp;
VRFY_DBINFO *vdp;
u_int32_t flags;
int
__qam_vrfy_walkqueue(dbp, vdp, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
int
__qam_salvage(dbp, vdp, pgno, h, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
PAGE *h;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
