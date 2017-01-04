static int __ham_dups_unsorted __P((DB *, u_int8_t *, u_int32_t));
static int __ham_vrfy_bucket __P((DB *, VRFY_DBINFO *, HMETA *, u_int32_t,
u_int32_t));
static int __ham_vrfy_item __P((DB *,
VRFY_DBINFO *, db_pgno_t, PAGE *, u_int32_t, u_int32_t));
int
__ham_vrfy_meta(dbp, vdp, m, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
HMETA *m;
db_pgno_t pgno;
u_int32_t flags;
int
__ham_vrfy(dbp, vdp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
db_pgno_t pgno;
u_int32_t flags;
static int
__ham_vrfy_item(dbp, vdp, pgno, h, i, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
PAGE *h;
u_int32_t i, flags;
int
__ham_vrfy_structure(dbp, vdp, meta_pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t meta_pgno;
u_int32_t flags;
static int
__ham_vrfy_bucket(dbp, vdp, m, bucket, flags)
DB *dbp;
VRFY_DBINFO *vdp;
HMETA *m;
u_int32_t bucket, flags;
int
__ham_vrfy_hashing(dbc, nentries, m, thisbucket, pgno, flags, hfunc)
DBC *dbc;
u_int32_t nentries;
HMETA *m;
u_int32_t thisbucket;
db_pgno_t pgno;
u_int32_t flags;
u_int32_t (*hfunc) __P((DB *, const void *, u_int32_t));
int
__ham_salvage(dbp, vdp, pgno, h, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
PAGE *h;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
int
__ham_meta2pgset(dbp, vdp, hmeta, flags, pgset)
DB *dbp;
VRFY_DBINFO *vdp;
HMETA *hmeta;
u_int32_t flags;
DB *pgset;
static int
__ham_dups_unsorted(dbp, buf, len)
DB *dbp;
u_int8_t *buf;
u_int32_t len;
