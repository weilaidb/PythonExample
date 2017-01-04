static void __bam_init_meta __P((DB *, BTMETA *, db_pgno_t, DB_LSN *));
int
__bam_open(dbp, ip, txn, name, base_pgno, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name;
db_pgno_t base_pgno;
u_int32_t flags;
int
__bam_metachk(dbp, name, btm)
DB *dbp;
const char *name;
BTMETA *btm;
int
__bam_read_root(dbp, ip, txn, base_pgno, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
db_pgno_t base_pgno;
u_int32_t flags;
static void
__bam_init_meta(dbp, meta, pgno, lsnp)
DB *dbp;
BTMETA *meta;
db_pgno_t pgno;
DB_LSN *lsnp;
int
__bam_new_file(dbp, ip, txn, fhp, name)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_FH *fhp;
const char *name;
int
__bam_new_subdb(mdbp, dbp, ip, txn)
DB *mdbp, *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
