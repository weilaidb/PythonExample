static int __db_disassociate __P((DB *));
static int __db_disassociate_foreign __P ((DB *));
static int __db_makecopy __P((ENV *, const char *, const char *));
static int __qam_testdocopy __P((DB *, const char *));
int
__db_master_open(subdbp, ip, txn, name, flags, mode, dbpp)
DB *subdbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name;
u_int32_t flags;
int mode;
DB **dbpp;
int
__db_master_update(mdbp, sdbp, ip, txn, subdb, type, action, newname, flags)
DB *mdbp, *sdbp;
DB_TXN *txn;
DB_THREAD_INFO *ip;
const char *subdb;
DBTYPE type;
mu_action action;
const char *newname;
u_int32_t flags;
int
__env_dbreg_setup(dbp, txn, fname, dname, id)
DB *dbp;
DB_TXN *txn;
const char *fname, *dname;
u_int32_t id;
int
__env_setup(dbp, txn, fname, dname, id, flags)
DB *dbp;
DB_TXN *txn;
const char *fname, *dname;
u_int32_t id, flags;
int
__env_mpool(dbp, fname, flags)
DB *dbp;
const char *fname;
u_int32_t flags;
int
__db_close(dbp, txn, flags)
DB *dbp;
DB_TXN *txn;
u_int32_t flags;
int
__db_refresh(dbp, txn, flags, deferred_closep, reuse)
DB *dbp;
DB_TXN *txn;
u_int32_t flags;
int *deferred_closep, reuse;
static int
__db_disassociate(sdbp)
DB *sdbp;
static int
__db_disassociate_foreign(sdbp)
DB *sdbp;
int
__db_log_page(dbp, txn, lsn, pgno, page)
DB *dbp;
DB_TXN *txn;
DB_LSN *lsn;
db_pgno_t pgno;
PAGE *page;
int
__db_walk_cursors(dbp, my_dbc, func, countp, pgno, indx, args)
DB *dbp;
DBC *my_dbc;
int (*func)__P((DBC *, DBC *,
u_int32_t *, db_pgno_t, u_int32_t, void *));
u_int32_t *countp;
db_pgno_t pgno;
u_int32_t indx;
void *args;
void
__db_copy_config(source, dest, nparts)
const DB *source;
DB *dest;
u_int32_t nparts;
#undef	BACKUP_PREFIX
#define	BACKUP_PREFIX	"__db."
#undef	MAX_INT_TO_HEX
#define	MAX_INT_TO_HEX	8
int
__db_backup_name(env, name, txn, backup)
ENV *env;
const char *name;
DB_TXN *txn;
char **backup;
int
__db_testcopy(env, dbp, name)
ENV *env;
DB *dbp;
const char *name;
static int
__qam_testdocopy(dbp, name)
DB *dbp;
const char *name;
int
__db_testdocopy(env, name)
ENV *env;
const char *name;
static int
__db_makecopy(env, src, dest)
ENV *env;
const char *src, *dest;
