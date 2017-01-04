static int  __ham_bulk __P((DBC *, DBT *, u_int32_t));
static int  __hamc_close __P((DBC *, db_pgno_t, int *));
static int  __hamc_del __P((DBC *, u_int32_t));
static int  __hamc_destroy __P((DBC *));
static int  __hamc_get __P((DBC *, DBT *, DBT *, u_int32_t, db_pgno_t *));
static int  __hamc_put __P((DBC *, DBT *, DBT *, u_int32_t, db_pgno_t *));
static int  __hamc_writelock __P((DBC *));
static int  __ham_dup_return __P((DBC *, DBT *, u_int32_t));
static int  __ham_expand_table __P((DBC *));
static int __hamc_update_getorder
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __hamc_update_setorder
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __ham_get_clist_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
int
__ham_quick_delete(dbc)
DBC *dbc;
int
__hamc_init(dbc)
DBC *dbc;
static int
__hamc_close(dbc, root_pgno, rmroot)
DBC *dbc;
db_pgno_t root_pgno;
int *rmroot;
static int
__hamc_destroy(dbc)
DBC *dbc;
int
__hamc_count(dbc, recnop)
DBC *dbc;
db_recno_t *recnop;
int
__hamc_cmp(dbc, other_dbc, result)
DBC *dbc, *other_dbc;
int *result;
static int
__hamc_del(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__hamc_dup(orig_dbc, new_dbc)
DBC *orig_dbc, *new_dbc;
static int
__hamc_get(dbc, key, data, flags, pgnop)
DBC *dbc;
DBT *key;
DBT *data;
u_int32_t flags;
db_pgno_t *pgnop;
static int
__ham_bulk(dbc, data, flags)
DBC *dbc;
DBT *data;
u_int32_t flags;
static int
__hamc_put(dbc, key, data, flags, pgnop)
DBC *dbc;
DBT *key;
DBT *data;
u_int32_t flags;
db_pgno_t *pgnop;
int
__ham_contract_table(dbc, c_data)
DBC *dbc;
DB_COMPACT *c_data;
static int
__ham_expand_table(dbc)
DBC *dbc;
u_int32_t
__ham_call_hash(dbc, k, len)
DBC *dbc;
u_int8_t *k;
u_int32_t len;
static int
__ham_dup_return(dbc, val, flags)
DBC *dbc;
DBT *val;
u_int32_t flags;
int
__ham_overwrite(dbc, nval, flags)
DBC *dbc;
DBT *nval;
u_int32_t flags;
int
__ham_lookup(dbc, key, sought, mode, pgnop)
DBC *dbc;
const DBT *key;
u_int32_t sought;
db_lockmode_t mode;
db_pgno_t *pgnop;
int
__ham_init_dbt(env, dbt, size, bufp, sizep)
ENV *env;
DBT *dbt;
u_int32_t size;
void **bufp;
u_int32_t *sizep;
static int
__hamc_update_getorder(cp, dbc, orderp, pgno, is_dup, args)
DBC *dbc, *cp;
u_int32_t *orderp;
db_pgno_t pgno;
u_int32_t is_dup;
void *args;
struct __hamc_update_setorder_args ;
static int
__hamc_update_setorder(cp, dbc, foundp, pgno, is_dup, vargs)
DBC *dbc, *cp;
u_int32_t *foundp;
db_pgno_t pgno;
u_int32_t is_dup;
void *vargs;
int
__hamc_update(dbc, len, operation, is_dup)
DBC *dbc;
u_int32_t len;
db_ham_curadj operation;
int is_dup;
struct __ham_get_clist_args ;
static int
__ham_get_clist_func(dbc, my_dbc, countp, pgno, indx, vargs)
DBC *dbc, *my_dbc;
u_int32_t *countp;
db_pgno_t pgno;
u_int32_t indx;
void *vargs;
int
__ham_get_clist(dbp, pgno, indx, listp)
DB *dbp;
db_pgno_t pgno;
u_int32_t indx;
DBC ***listp;
static int
__hamc_writelock(dbc)
DBC *dbc;
