static int  __bam_bulk __P((DBC *, DBT *, u_int32_t));
static int  __bamc_close __P((DBC *, db_pgno_t, int *));
static int  __bamc_del __P((DBC *, u_int32_t));
static int  __bamc_destroy __P((DBC *));
static int  __bamc_get __P((DBC *, DBT *, DBT *, u_int32_t, db_pgno_t *));
static int  __bamc_getstack __P((DBC *));
static int  __bamc_next __P((DBC *, int, int));
static int  __bamc_physdel __P((DBC *));
static int  __bamc_prev __P((DBC *));
static int  __bamc_put __P((DBC *, DBT *, DBT *, u_int32_t, db_pgno_t *));
static int  __bamc_search __P((DBC *,
db_pgno_t, const DBT *, u_int32_t, int *));
static int  __bamc_writelock __P((DBC *));
static int  __bam_getboth_finddatum __P((DBC *, DBT *, u_int32_t));
static int  __bam_getbothc __P((DBC *, DBT *));
static int  __bam_get_prev __P((DBC *));
static int  __bam_isopd __P((DBC *, db_pgno_t *));
static int  __bam_getlte __P((DBC *, DBT *, DBT *));
#undef	ACQUIRE
#define	ACQUIRE(dbc, mode, lpgno, lock, fpgno, pagep, flags, ret) do  while (0)
#undef	ACQUIRE_CUR
#define	ACQUIRE_CUR(dbc, mode, p, flags, ret) do  while (0)
#undef	ACQUIRE_WRITE_LOCK
#define	ACQUIRE_WRITE_LOCK(dbc, ret) do  while (0)
#undef	DISCARD_CUR
#define	DISCARD_CUR(dbc, ret) do  while (0)
#undef	IS_DELETED
#define	IS_DELETED(dbp, page, indx)					\
B_DISSET(GET_BKEYDATA(dbp, page,				\
(indx) + (TYPE(page) == P_LBTREE ? O_INDX : 0))->type)
#undef	IS_CUR_DELETED
#define	IS_CUR_DELETED(dbc)						\
IS_DELETED((dbc)->dbp, (dbc)->internal->page, (dbc)->internal->indx)
#undef	IS_DUPLICATE
#define	IS_DUPLICATE(dbc, i1, i2)					\
(P_INP((dbc)->dbp,((PAGE *)(dbc)->internal->page))[i1] ==	\
P_INP((dbc)->dbp,((PAGE *)(dbc)->internal->page))[i2])
#undef	IS_CUR_DUPLICATE
#define	IS_CUR_DUPLICATE(dbc, orig_pgno, orig_indx)			\
(F_ISSET(dbc, DBC_OPD) ||					\
(orig_pgno == (dbc)->internal->pgno &&			\
IS_DUPLICATE(dbc, (dbc)->internal->indx, orig_indx)))
int
__bamc_init(dbc, dbtype)
DBC *dbc;
DBTYPE dbtype;
int
__bamc_refresh(dbc)
DBC *dbc;
static int
__bamc_close(dbc, root_pgno, rmroot)
DBC *dbc;
db_pgno_t root_pgno;
int *rmroot;
int
__bamc_cmp(dbc, other_dbc, result)
DBC *dbc, *other_dbc;
int *result;
static int
__bamc_destroy(dbc)
DBC *dbc;
int
__bamc_count(dbc, recnop)
DBC *dbc;
db_recno_t *recnop;
static int
__bamc_del(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__bamc_dup(orig_dbc, new_dbc, flags)
DBC *orig_dbc, *new_dbc;
u_int32_t flags;
static int
__bamc_get(dbc, key, data, flags, pgnop)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
db_pgno_t *pgnop;
static int
__bam_get_prev(dbc)
DBC *dbc;
static int
__bam_bulk(dbc, data, flags)
DBC *dbc;
DBT *data;
u_int32_t flags;
int
__bam_bulk_overflow(dbc, len, pgno, dp)
DBC *dbc;
u_int32_t len;
db_pgno_t pgno;
u_int8_t *dp;
int
__bam_bulk_duplicates(dbc, pgno, dbuf, keyoff, offpp, dpp, spacep, no_dup)
DBC *dbc;
db_pgno_t pgno;
u_int8_t *dbuf;
int32_t *keyoff, **offpp;
u_int8_t **dpp;
u_int32_t *spacep;
int no_dup;
static int
__bam_getbothc(dbc, data)
DBC *dbc;
DBT *data;
static int
__bam_getlte(dbc, key, data)
DBC *dbc;
DBT *key, *data;
static int
__bam_getboth_finddatum(dbc, data, flags)
DBC *dbc;
DBT *data;
u_int32_t flags;
static int
__bamc_put(dbc, key, data, flags, pgnop)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
db_pgno_t *pgnop;
int
__bamc_rget(dbc, data)
DBC *dbc;
DBT *data;
static int
__bamc_writelock(dbc)
DBC *dbc;
static int
__bamc_next(dbc, initial_move, deleted_okay)
DBC *dbc;
int initial_move, deleted_okay;
static int
__bamc_prev(dbc)
DBC *dbc;
static int
__bamc_search(dbc, root_pgno, key, flags, exactp)
DBC *dbc;
db_pgno_t root_pgno;
const DBT *key;
u_int32_t flags;
int *exactp;
static int
__bamc_physdel(dbc)
DBC *dbc;
static int
__bamc_getstack(dbc)
DBC *dbc;
static int
__bam_isopd(dbc, pgnop)
DBC *dbc;
db_pgno_t *pgnop;
int
__bam_opd_exists(dbc, pgno)
DBC *dbc;
db_pgno_t pgno;
