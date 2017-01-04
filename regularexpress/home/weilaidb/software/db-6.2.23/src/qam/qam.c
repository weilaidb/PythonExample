static int __qam_bulk __P((DBC *, DBT *, u_int32_t));
static int __qamc_close __P((DBC *, db_pgno_t, int *));
static int __qamc_del __P((DBC *, u_int32_t));
static int __qamc_destroy __P((DBC *));
static int __qamc_get __P((DBC *, DBT *, DBT *, u_int32_t, db_pgno_t *));
static int __qamc_put __P((DBC *, DBT *, DBT *, u_int32_t, db_pgno_t *));
static int __qam_consume __P((DBC *, QMETA *, db_recno_t));
static int __qam_getno __P((DB *, const DBT *, db_recno_t *));
#define	DONT_NEED_LOCKS(dbc) ((dbc)->txn == NULL ||			\
F_ISSET(dbc, DBC_READ_COMMITTED | DBC_READ_UNCOMMITTED))
int
__qam_position(dbc, recnop, get_mode, exactp)
DBC *dbc;
db_recno_t *recnop;
u_int32_t get_mode;
int *exactp;
int
__qam_pitem(dbc, pagep, indx, recno, data)
DBC *dbc;
QPAGE *pagep;
u_int32_t indx;
db_recno_t recno;
DBT *data;
static int
__qamc_put(dbc, key, data, flags, pgnop)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
db_pgno_t *pgnop;
int
__qam_append(dbc, key, data)
DBC *dbc;
DBT *key, *data;
static int
__qamc_del(dbc, flags)
DBC *dbc;
u_int32_t flags;
#define	QDEBUG
static int
__qamc_get(dbc, key, data, flags, pgnop)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
db_pgno_t *pgnop;
static int
__qam_consume(dbc, meta, first)
DBC *dbc;
QMETA *meta;
db_recno_t first;
static int
__qam_bulk(dbc, data, flags)
DBC *dbc;
DBT *data;
u_int32_t flags;
static int
__qamc_close(dbc, root_pgno, rmroot)
DBC *dbc;
db_pgno_t root_pgno;
int *rmroot;
int
__qamc_dup(orig_dbc, new_dbc)
DBC *orig_dbc, *new_dbc;
int
__qamc_init(dbc)
DBC *dbc;
static int
__qamc_destroy(dbc)
DBC *dbc;
static int
__qam_getno(dbp, key, rep)
DB *dbp;
const DBT *key;
db_recno_t *rep;
int
__qam_truncate(dbc, countp)
DBC *dbc;
u_int32_t *countp;
int
__qam_delete(dbc, key, flags)
DBC *dbc;
DBT *key;
u_int32_t flags;
