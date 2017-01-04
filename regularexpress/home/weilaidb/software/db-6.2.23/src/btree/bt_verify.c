static int __bam_safe_getdata __P((DB *, DB_THREAD_INFO *,
PAGE *, u_int32_t, int, DBT *, int *));
static int __bam_vrfy_inp __P((DB *, VRFY_DBINFO *, PAGE *, db_pgno_t,
db_indx_t *, u_int32_t));
static int __bam_vrfy_treeorder __P((DB *, DB_THREAD_INFO *, PAGE *,
BINTERNAL *, BINTERNAL *,
int (*)(DB *, const DBT *, const DBT *, size_t *), u_int32_t));
static int __ram_vrfy_inp __P((DB *, VRFY_DBINFO *, PAGE *, db_pgno_t,
db_indx_t *, u_int32_t));
int
__bam_vrfy_meta(dbp, vdp, meta, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
BTMETA *meta;
db_pgno_t pgno;
u_int32_t flags;
int
__ram_vrfy_leaf(dbp, vdp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
db_pgno_t pgno;
u_int32_t flags;
int
__bam_vrfy(dbp, vdp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
db_pgno_t pgno;
u_int32_t flags;
static int
__ram_vrfy_inp(dbp, vdp, h, pgno, nentriesp, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
db_pgno_t pgno;
db_indx_t *nentriesp;
u_int32_t flags;
typedef enum  VRFY_ITEM;
static int
__bam_vrfy_inp(dbp, vdp, h, pgno, nentriesp, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
db_pgno_t pgno;
db_indx_t *nentriesp;
u_int32_t flags;
int
__bam_vrfy_itemorder(dbp, vdp, ip, h, pgno, nentries, ovflok, hasdups, flags)
DB *dbp;
VRFY_DBINFO *vdp;
DB_THREAD_INFO *ip;
PAGE *h;
db_pgno_t pgno;
u_int32_t nentries;
int ovflok, hasdups;
u_int32_t flags;
int
__bam_vrfy_structure(dbp, vdp, meta_pgno, lp, rp, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t meta_pgno;
void *lp, *rp;
u_int32_t flags;
int
__bam_vrfy_subtree(dbp, vdp, pgno, l, r, flags, levelp, nrecsp, relenp)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
void *l, *r;
u_int32_t flags, *levelp, *nrecsp, *relenp;
static int
__bam_vrfy_treeorder(dbp, ip, h, lp, rp, func, flags)
DB *dbp;
DB_THREAD_INFO *ip;
PAGE *h;
BINTERNAL *lp, *rp;
int (*func) __P((DB *, const DBT *, const DBT *, size_t *));
u_int32_t flags;
int
__bam_salvage(dbp, vdp, pgno, pgtype, h, handle, callback, key, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
u_int32_t pgtype;
PAGE *h;
void *handle;
int (*callback) __P((void *, const void *));
DBT *key;
u_int32_t flags;
int
__bam_salvage_walkdupint(dbp, vdp, h, key, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
DBT *key;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
int
__bam_meta2pgset(dbp, vdp, btmeta, flags, pgset)
DB *dbp;
VRFY_DBINFO *vdp;
BTMETA *btmeta;
u_int32_t flags;
DB *pgset;
static int
__bam_safe_getdata(dbp, ip, h, i, ovflok, dbt, freedbtp)
DB *dbp;
DB_THREAD_INFO *ip;
PAGE *h;
u_int32_t i;
int ovflok;
DBT *dbt;
int *freedbtp;
