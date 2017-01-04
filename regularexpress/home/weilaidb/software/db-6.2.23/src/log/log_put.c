static int __log_encrypt_record __P((ENV *, DBT *, HDR *, u_int32_t));
static int __log_file __P((ENV *, const DB_LSN *, char *, size_t));
static int __log_fill __P((DB_LOG *, DB_LSN *, void *, u_int32_t));
static int __log_flush_commit __P((ENV *, const DB_LSN *, u_int32_t));
static int __log_newfh __P((DB_LOG *, int));
static int __log_put_next __P((ENV *,
DB_LSN *, const DBT *, HDR *, DB_LSN *));
static int __log_put_record_int __P((ENV *, DB *, DB_TXN *, DB_LSN *,
u_int32_t, u_int32_t, u_int32_t, u_int32_t, DB_LOG_RECSPEC *, va_list));
static int __log_putr __P((DB_LOG *,
DB_LSN *, const DBT *, u_int32_t, HDR *));
static int __log_write __P((DB_LOG *, void *, u_int32_t));
int
__log_put_pp(dbenv, lsnp, udbt, flags)
DB_ENV *dbenv;
DB_LSN *lsnp;
const DBT *udbt;
u_int32_t flags;
int
__log_put(env, lsnp, udbt, flags)
ENV *env;
DB_LSN *lsnp;
const DBT *udbt;
u_int32_t flags;
int
__log_current_lsn_int(env, lsnp, mbytesp, bytesp)
ENV *env;
DB_LSN *lsnp;
u_int32_t *mbytesp, *bytesp;
int
__log_current_lsn(env, lsnp, mbytesp, bytesp)
ENV *env;
DB_LSN *lsnp;
u_int32_t *mbytesp, *bytesp;
static int
__log_put_next(env, lsn, dbt, hdr, old_lsnp)
ENV *env;
DB_LSN *lsn;
const DBT *dbt;
HDR *hdr;
DB_LSN *old_lsnp;
static int
__log_flush_commit(env, lsnp, flags)
ENV *env;
const DB_LSN *lsnp;
u_int32_t flags;
int
__log_newfile(dblp, lsnp, logfile, version)
DB_LOG *dblp;
DB_LSN *lsnp;
u_int32_t logfile;
u_int32_t version;
static int
__log_putr(dblp, lsn, dbt, prev, h)
DB_LOG *dblp;
DB_LSN *lsn;
const DBT *dbt;
u_int32_t prev;
HDR *h;
int
__log_flush_pp(dbenv, lsn)
DB_ENV *dbenv;
const DB_LSN *lsn;
#define	ALREADY_FLUSHED(lp, lsnp)					\
(((lp)->s_lsn.file > (lsnp)->file) ||				\
((lp)->s_lsn.file == (lsnp)->file &&				\
(lp)->s_lsn.offset > (lsnp)->offset))
int
__log_flush(env, lsn)
ENV *env;
const DB_LSN *lsn;
int
__log_flush_int(dblp, lsnp, release)
DB_LOG *dblp;
const DB_LSN *lsnp;
int release;
static int
__log_fill(dblp, lsn, addr, len)
DB_LOG *dblp;
DB_LSN *lsn;
void *addr;
u_int32_t len;
static int
__log_write(dblp, addr, len)
DB_LOG *dblp;
void *addr;
u_int32_t len;
{
ENV *env;
LOG *lp;
size_t nw;
int ret;
env = dblp->env;
lp = dblp->reginfo.primary;
DB_ASSERT(env, !lp->db_log_inmemory);
if (dblp->lfhp == NULL || dblp->lfname != lp->lsn.file ||
dblp->lf_timestamp != lp->timestamp)
if ((ret = __log_newfh(dblp, lp->w_off == 0)) != 0)
return (ret);
if (lp->w_off == 0 && !__os_fs_notzero())
int
__log_file_pp(dbenv, lsn, namep, len)
DB_ENV *dbenv;
const DB_LSN *lsn;
char *namep;
size_t len;
static int
__log_file(env, lsn, namep, len)
ENV *env;
const DB_LSN *lsn;
char *namep;
size_t len;
static int
__log_newfh(dblp, create)
DB_LOG *dblp;
int create;
int
__log_name(dblp, filenumber, namep, fhpp, flags)
DB_LOG *dblp;
u_int32_t filenumber, flags;
char **namep;
DB_FH **fhpp;
int
__log_rep_put(env, lsnp, rec, flags)
ENV *env;
DB_LSN *lsnp;
const DBT *rec;
u_int32_t flags;
int
__log_rep_write(env)
ENV *env;
static int
__log_encrypt_record(env, dbt, hdr, orig)
ENV *env;
DBT *dbt;
HDR *hdr;
u_int32_t orig;
int
__log_put_record_pp(DB_ENV *dbenv, DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp,
u_int32_t flags, u_int32_t rectype, u_int32_t has_data, u_int32_t size,
DB_LOG_RECSPEC *spec, ...)
int
__log_put_record(ENV *env, DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp,
u_int32_t flags, u_int32_t rectype, u_int32_t has_data, u_int32_t size,
DB_LOG_RECSPEC *spec, ...)
static int
__log_put_record_int(ENV *env, DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp,
u_int32_t flags, u_int32_t rectype, u_int32_t has_data, u_int32_t size,
DB_LOG_RECSPEC *spec, va_list argp)
