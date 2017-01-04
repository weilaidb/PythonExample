#if defined(HAVE_ERROR_HISTORY)
static void __db_thread_once_func __P((void));
static void __db_deferred_free __P((void *));
int
__db_fchk(env, name, flags, ok_flags)
ENV *env;
const char *name;
u_int32_t flags, ok_flags;
int
__db_fcchk(env, name, flags, flag1, flag2)
ENV *env;
const char *name;
u_int32_t flags, flag1, flag2;
int
__db_ferr(env, name, iscombo)
const ENV *env;
const char *name;
int iscombo;
int
__db_fnl(env, name)
const ENV *env;
const char *name;
int
__db_pgerr(dbp, pgno, errval)
DB *dbp;
db_pgno_t pgno;
int errval;
int
__db_pgfmt(env, pgno)
ENV *env;
db_pgno_t pgno;
void
__db_assert(env, e, file, line)
ENV *env;
const char *e, *file;
int line;
void
__env_panic_event(env, errval)
ENV *env;
int errval;
int
__env_panic_msg(env)
ENV *env;
int
__env_panic(env, errval)
ENV *env;
int errval;
char *
db_strerror(error)
int error;
char *
__db_unknown_error(error)
int error;
void
__db_syserr(const ENV *env, int error, const char *fmt, ...)
void
__db_err(const ENV *env, int error, const char *fmt, ...)
void
__db_errx(const ENV *env, const char *fmt, ...)
void
__db_errcall(dbenv, error, error_set, fmt, ap)
const DB_ENV *dbenv;
int error;
db_error_set_t error_set;
const char *fmt;
va_list ap;
void
__db_errfile(dbenv, error, error_set, fmt, ap)
const DB_ENV *dbenv;
int error;
db_error_set_t error_set;
const char *fmt;
va_list ap;
void
__db_msgadd(const ENV *env, DB_MSGBUF *mbp, const char *fmt, ...)
void
__db_msgadd_ap(env, mbp, fmt, ap)
const ENV *env;
DB_MSGBUF *mbp;
const char *fmt;
va_list ap;
void
__db_msg(const ENV *env, const char *fmt, ...)
void
__db_debug_msg(const ENV *env, const char *fmt, ...)
void
__db_repmsg(const ENV *env, const char *fmt, ...)
void
__db_msgcall(dbenv, fmt, ap)
const DB_ENV *dbenv;
const char *fmt;
va_list ap;
void
__db_msgfile(dbenv, fmt, ap)
const DB_ENV *dbenv;
const char *fmt;
va_list ap;
int
__db_unknown_flag(env, routine, flag)
ENV *env;
char *routine;
u_int32_t flag;
int
__db_unknown_type(env, routine, type)
ENV *env;
char *routine;
DBTYPE type;
int
__db_unknown_path(env, routine)
ENV *env;
char *routine;
int
__db_check_txn(dbp, txn, assoc_locker, read_op)
DB *dbp;
DB_TXN *txn;
DB_LOCKER *assoc_locker;
int read_op;
int
__db_txn_deadlock_err(env, txn)
ENV *env;
DB_TXN *txn;
int
__db_not_txn_env(env)
ENV *env;
int
__db_rec_toobig(env, data_len, fixed_rec_len)
ENV *env;
u_int32_t data_len, fixed_rec_len;
int
__db_rec_repl(env, data_size, data_dlen)
ENV *env;
u_int32_t data_size, data_dlen;
#if defined(DIAGNOSTIC) || defined(DEBUG_ROP)  || defined(DEBUG_WOP)
int
__dbc_logging(dbc)
DBC *dbc;
int
__db_check_lsn(env, lsn, prev)
ENV *env;
DB_LSN *lsn, *prev;
int
__db_rdonly(env, name)
const ENV *env;
const char *name;
int
__db_space_err(dbp)
const DB *dbp;
int
__db_failed(env, msg, pid, tid)
const ENV *env;
const char *msg;
pid_t pid;
db_threadid_t tid;
int
__env_failure_remember(env, reason)
const ENV *env;
const char *reason;
#if defined(HAVE_ERROR_HISTORY)
static void
__db_deferred_free(void *p)
static void
__db_thread_once_func()
void
__db_thread_init()
int
__db_diags(env, err)
const ENV *env;
int err;
DB_MSGBUF *
__db_deferred_get()
void
__db_deferred_discard()
int
__db_remember_context(env, mb, err)
const ENV *env;
DB_MSGBUF *mb;
int err;
char *
__db_ctimespec(timespec, buf)
const db_timespec *timespec;
char *buf;
char *
__db_fmt_quote(dest, destsize, src)
char *dest;
size_t destsize;
const char *src;
