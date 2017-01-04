static void __db_init_meta __P((DB *, void *, db_pgno_t, u_int32_t));
static int  __db_pglistcmp __P((const void *, const void *));
static int  __db_truncate_freelist __P((DBC *, DBMETA *,
PAGE *, db_pgno_t *, u_int32_t, u_int32_t));
static void
__db_init_meta(dbp, p, pgno, pgtype)
DB *dbp;
void *p;
db_pgno_t pgno;
u_int32_t pgtype;
int
__db_new(dbc, type, lockp, pagepp)
DBC *dbc;
u_int32_t type;
DB_LOCK *lockp;
PAGE **pagepp;
int
__db_free(dbc, h, flags)
DBC *dbc;
PAGE *h;
u_int32_t flags;
{
DB *dbp;
DBMETA *meta;
DBT ddbt, ldbt;
DB_LOCK metalock;
DB_LSN *lsnp;
DB_MPOOLFILE *mpf;
PAGE *prev;
db_pgno_t last_pgno, next_pgno, pgno, prev_pgno;
u_int32_t lflag;
int hash, ret, t_ret;
db_pgno_t *list, *lp;
u_int32_t nelem, position, start;
int do_truncate;
dbp = dbc->dbp;
mpf = dbp->mpf;
prev_pgno = PGNO_INVALID;
meta = NULL;
prev = NULL;
LOCK_INIT(metalock);
lp = NULL;
nelem = 0;
do_truncate = 0;
hash = 0;
pgno = PGNO_BASE_MD;
if ((ret = __db_lget(dbc,
LCK_ALWAYS, pgno, DB_LOCK_WRITE, 0, &metalock)) != 0)
goto err;
if (dbp->type == DB_HASH)
if (meta == NULL)
last_pgno = meta->last_pgno;
next_pgno = meta->free;
lsnp = &LSN(meta);
DB_ASSERT(dbp->env, h->pgno != next_pgno);
COMPQUIET(position, 0);
if ((ret = __memp_get_freelist(mpf, &nelem, &list)) != 0)
goto err1;
if (list == NULL)
goto no_sort;
if (h->pgno != last_pgno)  else if (nelem != 0)
no_sort:
if (prev_pgno == PGNO_INVALID)  else
if (DBC_LOGGING(dbc))  else
LSN_NOT_LOGGED(*lsnp);
logged:
if (do_truncate)  else if (h->pgno == last_pgno)  else
void
__db_freelist_pos(pgno, list, nelem, posp)
db_pgno_t pgno;
db_pgno_t *list;
u_int32_t nelem;
u_int32_t *posp;
static int
__db_pglistcmp(a, b)
const void *a, *b;
void
__db_freelist_sort(list, nelems)
db_pglist_t *list;
u_int32_t nelems;
int
__db_pg_truncate(dbc, txn,
list, c_data, nelemp, free_pgno, last_pgno, lsnp, in_recovery)
DBC *dbc;
DB_TXN *txn;
db_pglist_t *list;
DB_COMPACT *c_data;
u_int32_t *nelemp;
db_pgno_t free_pgno, *last_pgno;
DB_LSN *lsnp;
int in_recovery;
int
__db_free_truncate(dbp, ip, txn, flags, c_data, listp, nelemp, last_pgnop)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
u_int32_t flags;
DB_COMPACT *c_data;
db_pglist_t **listp;
u_int32_t *nelemp;
db_pgno_t *last_pgnop;
static int
__db_truncate_freelist(dbc, meta, h, list, start, nelem)
DBC *dbc;
DBMETA *meta;
PAGE *h;
db_pgno_t *list;
u_int32_t start, nelem;
int
__db_lprint(dbc)
DBC *dbc;
int
__db_lget(dbc, action, pgno, mode, lkflags, lockp)
DBC *dbc;
int action;
db_pgno_t pgno;
db_lockmode_t mode;
u_int32_t lkflags;
DB_LOCK *lockp;
int
__db_haslock(env, locker, dbmfp, pgno, mode, type)
ENV *env;
DB_LOCKER *locker;
DB_MPOOLFILE *dbmfp;
db_pgno_t pgno;
db_lockmode_t mode;
u_int32_t type;
int
__db_has_pagelock(env, locker, dbmfp, pagep, mode)
ENV *env;
DB_LOCKER *locker;
DB_MPOOLFILE *dbmfp;
PAGE *pagep;
db_lockmode_t mode;
int
__db_lput(dbc, lockp)
DBC *dbc;
DB_LOCK *lockp;
