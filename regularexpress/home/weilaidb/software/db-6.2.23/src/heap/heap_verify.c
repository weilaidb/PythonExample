static	int __heap_safe_gsplit __P((DB *, VRFY_DBINFO *, PAGE *, unsigned,
DBT *));
static	int __heap_verify_offset_cmp __P((const void *, const void *));
int
__heap_vrfy_meta(dbp, vdp, meta, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
HEAPMETA *meta;
db_pgno_t pgno;
u_int32_t flags;
int
__heap_vrfy(dbp, vdp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
db_pgno_t pgno;
u_int32_t flags;
static int
__heap_verify_offset_cmp(off1, off2)
const void *off1;
const void *off2;
int
__heap_vrfy_structure(dbp, vdp, flags)
DB *dbp;
VRFY_DBINFO *vdp;
u_int32_t flags;
int
__heap_salvage(dbp, vdp, pgno, h, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
PAGE *h;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
static int
__heap_safe_gsplit(dbp, vdp, h, i, dbt)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
unsigned i;
DBT *dbt;
int
__heap_meta2pgset(dbp, vdp, heapmeta, pgset)
DB *dbp;
VRFY_DBINFO *vdp;
HEAPMETA *heapmeta;
DB *pgset;
