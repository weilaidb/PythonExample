static int __log_printf_int __P((ENV *, DB_TXN *, const char *, va_list));
int
__log_printf_capi(DB_ENV *dbenv, DB_TXN *txnid, const char *fmt, ...)
int
__log_printf_pp(dbenv, txnid, fmt, ap)
DB_ENV *dbenv;
DB_TXN *txnid;
const char *fmt;
va_list ap;
int
__log_printf(ENV *env, DB_TXN *txnid, const char *fmt, ...)
static int
__log_printf_int(env, txnid, fmt, ap)
ENV *env;
DB_TXN *txnid;
const char *fmt;
va_list ap;
