static int __qam_init_meta __P((DB *, QMETA *));
int
__qam_open(dbp, ip, txn, name, base_pgno, mode, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name;
db_pgno_t base_pgno;
int mode;
u_int32_t flags;
int
__qam_set_ext_data(dbp, name)
DB *dbp;
const char *name;
int
__qam_metachk(dbp, name, qmeta)
DB *dbp;
const char *name;
QMETA *qmeta;
static int
__qam_init_meta(dbp, meta)
DB *dbp;
QMETA *meta;
int
__qam_new_file(dbp, ip, txn, fhp, name)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_FH *fhp;
const char *name;
