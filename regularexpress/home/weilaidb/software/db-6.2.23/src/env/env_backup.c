static int __env_backup_alloc __P((DB_ENV *));
static int
__env_backup_alloc(dbenv)
DB_ENV *dbenv;
int
__env_backup_copy(slice, container)
DB_ENV *slice;
const DB_ENV *container;
int
__env_get_backup_config(dbenv, config, valuep)
DB_ENV *dbenv;
DB_BACKUP_CONFIG config;
u_int32_t *valuep;
int
__env_set_backup_config(dbenv, config, value)
DB_ENV *dbenv;
DB_BACKUP_CONFIG config;
u_int32_t value;
int
__env_get_backup_callbacks(dbenv, openp, writep, closep)
DB_ENV *dbenv;
int (**openp)(DB_ENV *, const char *, const char *, void **);
int (**writep)(DB_ENV *,
u_int32_t, u_int32_t, u_int32_t, u_int8_t *, void *);
int (**closep)(DB_ENV *, const char *, void *);
int
__env_set_backup_callbacks(dbenv, open_func, write_func, close_func)
DB_ENV *dbenv;
int (*open_func)(DB_ENV *, const char *, const char *, void **);
int (*write_func)(DB_ENV *,
u_int32_t, u_int32_t, u_int32_t, u_int8_t *, void *);
int (*close_func)(DB_ENV *, const char *, void *);
