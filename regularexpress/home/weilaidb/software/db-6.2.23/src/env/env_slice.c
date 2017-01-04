static int __env_get_slice_fileids __P((DB_ENV *, DB *, const char *));
int
__env_slice_db_home(dbenv, db_home)
DB_ENV *dbenv;
const char *db_home;
int
__env_slice_open(dbenv, db_home, flags, mode)
DB_ENV *dbenv;
const char *db_home;
u_int32_t flags;
int mode;
int
__env_slice_close_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__env_slice_txn_checkpoint_pp(dbenv, kbyte, min, flags)
DB_ENV *dbenv;
u_int32_t kbyte;
u_int32_t min;
u_int32_t flags;
int
__env_slice_lsn_reset_pp(dbenv, name, flags)
DB_ENV *dbenv;
const char *name;
u_int32_t flags;
int
__env_slice_fileid_reset_pp(dbenv, name, flags)
DB_ENV *dbenv;
const char *name;
u_int32_t flags;
static int
__env_get_slice_fileids(dbenv, dbp, name)
DB_ENV *dbenv;
DB *dbp;
const char *name;
int
__env_get_slice_count(dbenv, countp)
DB_ENV *dbenv;
u_int32_t *countp;
int
__env_get_slices(dbenv, retp)
DB_ENV *dbenv;
DB_ENV ***retp;
int
__env_slice_configure(container, slice)
const DB_ENV *container;
DB_ENV *slice;
int
__env_set_slice_count(dbenv, count)
DB_ENV *dbenv;
u_int32_t count;
DB_ENV *
__slice_iterate(dbenv, pos)
DB_ENV *dbenv;
int *pos;
int
__env_slice_dbremove(env, name, subdb, flags)
ENV *env;
const char *name;
const char *subdb;
u_int32_t flags;
int
__env_no_slices(env)
ENV *env;
int
__env_get_slice_count(dbenv, countp)
DB_ENV *dbenv;
u_int32_t *countp;
int
__env_get_slices(dbenv, retp)
DB_ENV *dbenv;
DB_ENV ***retp;
int
__env_set_slice_count(dbenv, count)
DB_ENV *dbenv;
u_int32_t count;
int
__env_not_sliced(env)
ENV *env;
