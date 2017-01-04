static int __qam_rr __P((DB *, DB_THREAD_INFO *, DB_TXN *,
const char *, const char *, const char *, qam_name_op));
static int __qam_set_extentsize __P((DB *, u_int32_t));
int
__qam_db_create(dbp)
DB *dbp;
int
__qam_db_close(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__qam_get_extentsize(dbp, q_extentsizep)
DB *dbp;
u_int32_t *q_extentsizep;
static int
__qam_set_extentsize(dbp, extentsize)
DB *dbp;
u_int32_t extentsize;
int
__queue_pageinfo(dbp, firstp, lastp, emptyp, prpage, flags)
DB *dbp;
db_pgno_t *firstp, *lastp;
int *emptyp;
int prpage;
u_int32_t flags;
int
__db_prqueue(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__qam_remove(dbp, ip, txn, name, subdb, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb;
u_int32_t flags;
int
__qam_rename(dbp, ip, txn, name, subdb, newname)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb, *newname;
static int
__qam_rr(dbp, ip, txn, name, subdb, newname, op)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb, *newname;
qam_name_op op;
void
__qam_map_flags(dbp, inflagsp, outflagsp)
DB *dbp;
u_int32_t *inflagsp, *outflagsp;
int
__qam_set_flags(dbp, flagsp)
DB *dbp;
u_int32_t *flagsp;
