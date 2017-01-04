static int __db_s_count __P((DB *));
static int __db_wrlock_err __P((ENV *));
static int __dbc_del_foreign __P((DBC *));
static int __dbc_del_oldskey __P((DB *, DBC *, DBT *, DBT *, DBT *));
static int __dbc_del_secondary __P((DBC *));
static int __dbc_pget_recno __P((DBC *, DBT *, DBT *, u_int32_t));
static inline int __dbc_put_append __P((DBC *,
DBT *, DBT *, u_int32_t *, u_int32_t));
static inline int __dbc_put_fixed_len __P((DBC *, DBT *, DBT *));
static inline int __dbc_put_partial __P((DBC *,
DBT *, DBT *, DBT *, DBT *, u_int32_t *, u_int32_t));
static int __dbc_put_primary __P((DBC *, DBT *, DBT *, u_int32_t));
static inline int __dbc_put_resolve_key __P((DBC *,
DBT *, DBT *, u_int32_t *, u_int32_t));
static inline int __dbc_put_secondaries __P((DBC *,
DBT *, DBT *, DBT *, int, DBT *, u_int32_t *));
#define	CDB_LOCKING_INIT(env, dbc)					\								\
if (CDB_LOCKING(env))
#define	CDB_LOCKING_DONE(env, dbc)					\				\
if (F_ISSET(dbc, DBC_WRITECURSOR))				\
(void)__lock_downgrade(					\
env, &(dbc)->mylock, DB_LOCK_IWRITE, 0);
#define	SET_READ_LOCKING_FLAGS(dbc, var) do  while (0)
int
__dbc_close(dbc)
DBC *dbc;
int
__dbc_destroy(dbc)
DBC *dbc;
int
__dbc_cmp(dbc, other_dbc, result)
DBC *dbc, *other_dbc;
int *result;
int
__dbc_count(dbc, recnop)
DBC *dbc;
db_recno_t *recnop;
int
__dbc_del(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__dbc_idel(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__dbc_db_stream(dbc, dbsp, flags)
DBC *dbc;
DB_STREAM **dbsp;
u_int32_t flags;
int
__dbc_get_blob_id(dbc, blob_id)
DBC *dbc;
db_seq_t *blob_id;
int
__dbc_get_blob_size(dbc, size)
DBC *dbc;
off_t *size;
int
__dbc_set_blob_size(dbc, size)
DBC *dbc;
off_t size;
int
__dbc_bulk_del(dbc, key, flags)
DBC *dbc;
DBT *key;
u_int32_t flags;
int
__dbc_dup(dbc_orig, dbcp, flags)
DBC *dbc_orig;
DBC **dbcp;
u_int32_t flags;
int
__dbc_idup(dbc_orig, dbcp, flags)
DBC *dbc_orig, **dbcp;
u_int32_t flags;
int
__dbc_newopd(dbc_parent, root, oldopd, dbcp)
DBC *dbc_parent;
db_pgno_t root;
DBC *oldopd;
DBC **dbcp;
int
__dbc_get(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__dbc_iget(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
#define	DBC_PUT_RMW		0x001
#define	DBC_PUT_NODEL		0x002
#define	DBC_PUT_HAVEREC		0x004
static inline int
__dbc_put_resolve_key(dbc, oldkey, olddata, put_statep, flags)
DBC *dbc;
DBT *oldkey, *olddata;
u_int32_t flags, *put_statep;
static inline int
__dbc_put_append(dbc, key, data, put_statep, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags, *put_statep;
static inline int
__dbc_put_partial(dbc, pkey, data, orig_data, out_data, put_statep, flags)
DBC *dbc;
DBT *pkey, *data, *orig_data, *out_data;
u_int32_t *put_statep, flags;
static inline int
__dbc_put_fixed_len(dbc, data, out_data)
DBC *dbc;
DBT *data, *out_data;
static inline int
__dbc_put_secondaries(dbc,
pkey, data, orig_data, s_count, s_keys_buf, put_statep)
DBC *dbc;
DBT *pkey, *data, *orig_data, *s_keys_buf;
int s_count;
u_int32_t *put_statep;
static int
__dbc_put_primary(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__dbc_put(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__dbc_iput(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
static int
__dbc_del_oldskey(sdbp, dbc, skey, pkey, olddata)
DB *sdbp;
DBC *dbc;
DBT *skey, *pkey, *olddata;
int
__db_duperr(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__dbc_cleanup(dbc, dbc_n, failed)
DBC *dbc, *dbc_n;
int failed;
int
__dbc_secondary_get_pp(dbc, skey, data, flags)
DBC *dbc;
DBT *skey, *data;
u_int32_t flags;
int
__dbc_pget(dbc, skey, pkey, data, flags)
DBC *dbc;
DBT *skey, *pkey, *data;
u_int32_t flags;
static int
__dbc_pget_recno(sdbc, pkey, data, flags)
DBC *sdbc;
DBT *pkey, *data;
u_int32_t flags;
static int
__db_wrlock_err(env)
ENV *env;
static int
__dbc_del_secondary(dbc)
DBC *dbc;
int
__dbc_del_primary(dbc)
DBC *dbc;
static int
__dbc_del_foreign(dbc)
DBC *dbc;
int
__db_s_first(pdbp, sdbpp)
DB *pdbp, **sdbpp;
int
__db_s_next(sdbpp, txn)
DB **sdbpp;
DB_TXN *txn;
int
__db_s_done(sdbp, txn)
DB *sdbp;
DB_TXN *txn;
static int
__db_s_count(pdbp)
DB *pdbp;
int
__db_buildpartial(dbp, oldrec, partial, newrec)
DB *dbp;
DBT *oldrec, *partial, *newrec;
u_int32_t
__db_partsize(nbytes, data)
u_int32_t nbytes;
DBT *data;
void
__db_check_skeyset(sdbp, skeyp)
DB *sdbp;
DBT *skeyp;
int
__dbc_diags(dbc, err)
DBC *dbc;
int err;
