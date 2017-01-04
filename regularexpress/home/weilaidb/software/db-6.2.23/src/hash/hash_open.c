static db_pgno_t __ham_init_meta __P((DB *, HMETA *, db_pgno_t, DB_LSN *));
int
__ham_open(dbp, ip, txn, name, base_pgno, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name;
db_pgno_t base_pgno;
u_int32_t flags;
int
__ham_metachk(dbp, name, hashm)
DB *dbp;
const char *name;
HMETA *hashm;
static db_pgno_t
__ham_init_meta(dbp, meta, pgno, lsnp)
DB *dbp;
HMETA *meta;
db_pgno_t pgno;
DB_LSN *lsnp;
int
__ham_new_file(dbp, ip, txn, fhp, name)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_FH *fhp;
const char *name;
int
__ham_new_subdb(mdbp, dbp, ip, txn)
DB *mdbp, *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
