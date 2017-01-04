typedef struct __txn_event TXN_EVENT;
struct __txn_event ;
#define	TXN_TOP_PARENT(txn) do  while (0)
static void __clear_fe_watermark __P((DB_TXN *, DB *));
int
__txn_closeevent(env, txn, dbp)
ENV *env;
DB_TXN *txn;
DB *dbp;
int
__txn_remevent(env, txn, name, fileid, inmem)
ENV *env;
DB_TXN *txn;
const char *name;
u_int8_t *fileid;
int inmem;
void
__txn_remrem(env, txn, name)
ENV *env;
DB_TXN *txn;
const char *name;
int
__txn_lockevent(env, txn, dbp, lock, locker)
ENV *env;
DB_TXN *txn;
DB *dbp;
DB_LOCK *lock;
DB_LOCKER *locker;
void
__txn_remlock(env, txn, lock, locker)
ENV *env;
DB_TXN *txn;
DB_LOCK *lock;
DB_LOCKER *locker;
#define	DO_TRADE do  while (0)
int
__txn_doevents(env, txn, opcode, preprocess)
ENV *env;
DB_TXN *txn;
int opcode, preprocess;
int
__txn_record_fname(env, txn, fname)
ENV *env;
DB_TXN *txn;
FNAME *fname;
int
__txn_dref_fname(env, txn)
ENV *env;
DB_TXN *txn;
static void
__clear_fe_watermark(txn, db)
DB_TXN *txn;
DB *db;
void
__txn_reset_fe_watermarks(txn)
DB_TXN *txn;
void
__txn_remove_fe_watermark(txn, db)
DB_TXN *txn;
DB *db;
void
__txn_add_fe_watermark(txn, db, pgno)
DB_TXN *txn;
DB *db;
db_pgno_t pgno;
int
__txn_flush_fe_files(txn)
DB_TXN *txn;
int
__txn_pg_above_fe_watermark(txn, mpf, pgno)
DB_TXN *txn;
MPOOLFILE *mpf;
db_pgno_t pgno;
