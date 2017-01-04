static int __db_join_close_pp __P((DBC *));
static int __db_join_cmp __P((const void *, const void *));
static int __db_join_del __P((DBC *, u_int32_t));
static int __db_join_get __P((DBC *, DBT *, DBT *, u_int32_t));
static int __db_join_get_pp __P((DBC *, DBT *, DBT *, u_int32_t));
static int __db_join_getnext __P((DBC *, DBT *, DBT *, u_int32_t, u_int32_t));
static int __db_join_primget __P((DB *, DB_THREAD_INFO *,
DB_TXN *, DB_LOCKER *, DBT *, DBT *, u_int32_t));
static int __db_join_put __P((DBC *, DBT *, DBT *, u_int32_t));
#define	SORTED_SET(jc, n)   ((jc)->j_curslist[(n)]->dbp->dup_compare != NULL)
int
__db_join(primary, curslist, dbcp, flags)
DB *primary;
DBC **curslist, **dbcp;
u_int32_t flags;
static int
__db_join_close_pp(dbc)
DBC *dbc;
static int
__db_join_put(dbc, key, data, flags)
DBC *dbc;
DBT *key;
DBT *data;
u_int32_t flags;
static int
__db_join_del(dbc, flags)
DBC *dbc;
u_int32_t flags;
static int
__db_join_get_pp(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
static int
__db_join_get(dbc, key_arg, data_arg, flags)
DBC *dbc;
DBT *key_arg, *data_arg;
u_int32_t flags;
int
__db_join_close(dbc)
DBC *dbc;
static int
__db_join_getnext(dbc, key, data, exhausted, opmods)
DBC *dbc;
DBT *key, *data;
u_int32_t exhausted, opmods;
static int
__db_join_cmp(a, b)
const void *a, *b;
static int
__db_join_primget(dbp, ip, txn, locker, key, data, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_LOCKER  *locker;
DBT *key, *data;
u_int32_t flags;
int
__db_secondary_corrupt(dbp)
DB *dbp;
