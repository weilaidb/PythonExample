static void __heap_init_meta __P((DB *, HEAPMETA *, db_pgno_t, DB_LSN*));
int
__heap_open(dbp, ip, txn, name, base_pgno, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name;
db_pgno_t base_pgno;
u_int32_t flags;
int
__heap_metachk(dbp, name, hm)
DB *dbp;
const char *name;
HEAPMETA *hm;
int
__heap_read_meta(dbp, ip, txn, meta_pgno, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
db_pgno_t meta_pgno;
u_int32_t flags;
int
__heap_new_file(dbp, ip, txn, fhp, name)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_FH *fhp;
const char *name;
int
__heap_create_region(dbc, pgno)
DBC *dbc;
db_pgno_t pgno;
static void
__heap_init_meta(dbp, meta, pgno, lsnp)
DB *dbp;
HEAPMETA *meta;
db_pgno_t pgno;
DB_LSN *lsnp;
