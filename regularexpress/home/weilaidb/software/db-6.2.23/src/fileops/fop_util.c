static int __fop_set_pgsize __P((DB *, DB_FH *, const char *));
static int __fop_inmem_create __P((DB *, const char *, DB_TXN *, u_int32_t));
static int __fop_inmem_dummy __P((DB *, DB_TXN *, const char *, u_int8_t *));
static int __fop_inmem_read_meta __P((DB *, DB_TXN *, const char *, u_int32_t,
u_int32_t));
static int __fop_inmem_swap __P((DB *, DB *, DB_TXN *,
const char *, const char *, const char *, DB_LOCKER *));
static int __fop_ondisk_dummy __P((
DB *, DB_TXN *, const char *, u_int8_t *, APPNAME));
static int __fop_ondisk_swap __P((DB *, DB *, DB_TXN *,
const char *, const char *, const char *, DB_LOCKER *, APPNAME));
#define	GET_ENVLOCK(ENV, ID, L) (0)
#define	GET_ENVLOCK(ENV, ID, L) do  while (0)
#define	RESET_MPF(D, F) do  while (0)
#define	CLOSE_HANDLE(D, F)
int
__fop_lock_handle(env, dbp, locker, mode, elockp, flags)
ENV *env;
DB *dbp;
DB_LOCKER *locker;
db_lockmode_t mode;
DB_LOCK *elockp;
u_int32_t flags;
int
__fop_file_setup(dbp, ip, txn, name, mode, flags, retidp)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name;
int mode;
u_int32_t flags, *retidp;
static int
__fop_set_pgsize(dbp, fhp, name)
DB *dbp;
DB_FH *fhp;
const char *name;
int
__fop_subdb_setup(dbp, ip, txn, mname, name, mode, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *mname, *name;
int mode;
u_int32_t flags;
int
__fop_remove_setup(dbp, txn, name, flags)
DB *dbp;
DB_TXN *txn;
const char *name;
u_int32_t flags;
int
__fop_read_meta(env, name, buf, size, fhp, errok, nbytesp)
ENV *env;
const char *name;
u_int8_t *buf;
size_t size;
DB_FH *fhp;
int errok;
size_t *nbytesp;
int
__fop_dummy(dbp, txn, old, new, appname)
DB *dbp;
DB_TXN *txn;
const char *old, *new;
APPNAME appname;
int
__fop_dbrename(dbp, old, new, appname)
DB *dbp;
const char *old, *new;
APPNAME appname;
static int
__fop_inmem_create(dbp, name, txn, flags)
DB *dbp;
const char *name;
DB_TXN *txn;
u_int32_t flags;
static int
__fop_inmem_read_meta(dbp, txn, name, flags, chkflags)
DB *dbp;
DB_TXN *txn;
const char *name;
u_int32_t flags;
u_int32_t chkflags;
static int
__fop_ondisk_dummy(dbp, txn, name, mbuf, appname)
DB *dbp;
DB_TXN *txn;
const char *name;
u_int8_t *mbuf;
APPNAME appname;
static int
__fop_inmem_dummy(dbp, txn, name, mbuf)
DB *dbp;
DB_TXN *txn;
const char *name;
u_int8_t *mbuf;
static int
__fop_ondisk_swap(dbp, tmpdbp, txn, old, new, back, locker, appname)
DB *dbp, *tmpdbp;
DB_TXN *txn;
const char *old, *new, *back;
DB_LOCKER *locker;
APPNAME appname;
static int
__fop_inmem_swap(olddbp, backdbp, txn, old, new, back, locker)
DB *olddbp, *backdbp;
DB_TXN *txn;
const char *old, *new, *back;
DB_LOCKER *locker;
