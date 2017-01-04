static void save_error __P((const DB_ENV *, const char *, const char *));
static int backup_read_log_dir __P((DB_ENV *, const char *, int *, u_int32_t));
static int backup_read_data_dir
__P((DB_ENV *, DB_THREAD_INFO *, const char *, const char *, u_int32_t));
static int backup_dir_clean
__P((DB_ENV *, const char *, const char *, int *, u_int32_t));
static int backup_lgconf_chk __P((DB_ENV *));
static int __db_backup
__P((DB_ENV *, const char *, DB_THREAD_INFO *, int, u_int32_t));
int
__db_dbbackup_pp(dbenv, dbfile, target, flags)
DB_ENV *dbenv;
const char *dbfile, *target;
u_int32_t flags;
int
__db_dbbackup(dbenv, ip, dbfile, target, flags, oflags, full_path)
DB_ENV *dbenv;
DB_THREAD_INFO *ip;
const char *dbfile, *target;
u_int32_t flags;
u_int32_t oflags;
const char *full_path;
static int
backup_dir_clean(dbenv, backup_dir, log_dir, remove_maxp, flags)
DB_ENV *dbenv;
const char *backup_dir, *log_dir;
int *remove_maxp;
u_int32_t flags;
int
backup_data_copy(dbenv, file, from_dir, to_dir, log)
DB_ENV *dbenv;
const char *file, *from_dir, *to_dir;
int log;
static void save_error(dbenv, prefix, errstr)
const DB_ENV *dbenv;
const char *prefix;
const char *errstr;
static int
backup_read_data_dir(dbenv, ip, dir, backup_dir, flags)
DB_ENV *dbenv;
DB_THREAD_INFO *ip;
const char *dir, *backup_dir;
u_int32_t flags;
static int
backup_read_log_dir(dbenv, backup_dir, copy_minp, flags)
DB_ENV *dbenv;
const char *backup_dir;
int *copy_minp;
u_int32_t flags;
int
__db_backup_pp(dbenv, target, flags)
DB_ENV *dbenv;
const char *target;
u_int32_t flags;
static int
__db_backup(dbenv, target, ip, remove_max, flags)
DB_ENV *dbenv;
const char *target;
DB_THREAD_INFO *ip;
int remove_max;
u_int32_t flags;
static int
backup_lgconf_chk(dbenv)
DB_ENV *dbenv;
