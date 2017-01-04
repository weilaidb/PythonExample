static int __env_open_arg __P((DB_ENV *, u_int32_t));
static int __file_handle_cleanup __P((ENV *));
char *
db_version(majverp, minverp, patchp)
int *majverp, *minverp, *patchp;
char *
db_full_version(familyp, releasep, majverp, minverp, patchp)
int *familyp, *releasep, *majverp, *minverp, *patchp;
int
__env_open_pp(dbenv, db_home, flags, mode)
DB_ENV *dbenv;
const char *db_home;
u_int32_t flags;
int mode;
int
__env_open(dbenv, db_home, flags, mode)
DB_ENV *dbenv;
const char *db_home;
u_int32_t flags;
int mode;
static int
__env_open_arg(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__env_remove(dbenv, db_home, flags)
DB_ENV *dbenv;
const char *db_home;
u_int32_t flags;
int
__env_config(dbenv, db_home, flagsp, mode)
DB_ENV *dbenv;
const char *db_home;
u_int32_t *flagsp;
int mode;
int
__env_close_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__env_close(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__env_refresh(dbenv, orig_flags, rep_check)
DB_ENV *dbenv;
u_int32_t orig_flags;
int rep_check;
static int
__file_handle_cleanup(env)
ENV *env;
int
__env_get_open_flags(dbenv, flagsp)
DB_ENV *dbenv;
u_int32_t *flagsp;
int
__env_attach_regions(dbenv, flags, orig_flags, retry_ok)
DB_ENV *dbenv;
u_int32_t flags;
u_int32_t orig_flags;
int retry_ok;
