static int	 __db_bmeta __P((ENV *, DB *, BTMETA *, u_int32_t));
static int	 __db_heapmeta __P((ENV *, DB *, HEAPMETA *, u_int32_t));
static int	 __db_heapint __P((DB *, HEAPPG *, u_int32_t));
static int	 __db_hmeta __P((ENV *, DB *, HMETA *, u_int32_t));
static void	 __db_meta __P((ENV *, DB *, DBMETA *, FN const *, u_int32_t));
static void	 __db_proff __P((ENV *, DB_MSGBUF *, void *));
static int	 __db_qmeta __P((ENV *, DB *, QMETA *, u_int32_t));
static int	 __db_prblob __P((DBC *, DBT *, DBT *, int, const char *,
void *, int (*callback) __P((void *, const void *)), int, int));
static int	 __db_prblob_id __P((DB *, db_seq_t,
off_t, DBT *, int, const char *, void *,
int (*callback) __P((void *, const void *))));
static void	 __db_prdb __P((DB *, u_int32_t));
static int	 __db_prtree __P((DB *, DB_TXN *,
u_int32_t, db_pgno_t, db_pgno_t));
void
__db_loadme()
int
__db_dumptree(dbp, txn, op, name, first, last)
DB *dbp;
DB_TXN *txn;
char *op, *name;
db_pgno_t first, last;
static const FN __db_flags_fn[] = ;
const FN *
__db_get_flags_fn()
static void
__db_prdb(dbp, flags)
DB *dbp;
u_int32_t flags;
static int
__db_prtree(dbp, txn, flags, first, last)
DB *dbp;
DB_TXN *txn;
u_int32_t flags;
db_pgno_t first, last;
int
__db_prnpage(dbp, txn, pgno)
DB *dbp;
DB_TXN *txn;
db_pgno_t pgno;
int
__db_prpage(dbp, h, flags)
DB *dbp;
PAGE *h;
u_int32_t flags;
const char *
__db_lockmode_to_string(mode)
db_lockmode_t mode;
int
__db_dumptree(dbp, txn, op, name, first, last)
DB *dbp;
DB_TXN *txn;
char *op, *name;
db_pgno_t first, last;
const FN *
__db_get_flags_fn()
static void
__db_meta(env, dbp, dbmeta, fn, flags)
DB *dbp;
ENV *env;
DBMETA *dbmeta;
FN const *fn;
u_int32_t flags;
const FN *
__db_get_bmeta_fn()
const FN *
__db_get_hmeta_fn()
static int
__db_bmeta(env, dbp, h, flags)
ENV *env;
DB *dbp;
BTMETA *h;
u_int32_t flags;
static int
__db_hmeta(env, dbp, h, flags)
ENV *env;
DB *dbp;
HMETA *h;
u_int32_t flags;
static int
__db_qmeta(env, dbp, h, flags)
ENV *env;
DB *dbp;
QMETA *h;
u_int32_t flags;
static int
__db_heapmeta(env, dbp, h, flags)
ENV *env;
DB *dbp;
HEAPMETA *h;
u_int32_t flags;
static int
__db_heapint(dbp, h, flags)
DB *dbp;
HEAPPG *h;
u_int32_t flags;
#define	PR_ENTRY(dbp, h, i, data)				\
(data == NULL ? P_ENTRY(dbp, h, i) :			\
(u_int8_t *)data + P_INP(dbp, h)[i] - HOFFSET(h))
int
__db_prpage_int(env, mbp, dbp, lead, h, pagesize, data, flags)
ENV *env;
DB_MSGBUF *mbp;
DB *dbp;
char *lead;
PAGE *h;
u_int32_t pagesize;
u_int8_t *data;
u_int32_t flags;
void
__db_prbytes(env, mbp, bytes, len)
ENV *env;
DB_MSGBUF *mbp;
u_int8_t *bytes;
u_int32_t len;
static void
__db_proff(env, mbp, vp)
ENV *env;
DB_MSGBUF *mbp;
void *vp;
void
__db_prflags(env, mbp, flags, fn, prefix, suffix)
ENV *env;
DB_MSGBUF *mbp;
u_int32_t flags;
FN const *fn;
const char *prefix, *suffix;
int
__db_name_to_val(strtable, s)
FN const *strtable;
char *s;
const char *
__db_pagetype_to_string(type)
u_int32_t type;
int
__db_dump_pp(dbp, subname, callback, handle, pflag, keyflag)
DB *dbp;
const char *subname;
int (*callback) __P((void *, const void *));
void *handle;
int pflag, keyflag;
int
__db_dump(dbp, subname, callback, handle, pflag, keyflag)
DB *dbp;
const char *subname;
int (*callback) __P((void *, const void *));
void *handle;
int pflag, keyflag;
static int
__db_prblob(dbc, key, data, checkprint,
prefix, handle, callback, is_heap, keyflag)
DBC *dbc;
DBT *key;
DBT *data;
int checkprint;
const char *prefix;
void *handle;
int (*callback) __P((void *, const void *));
int is_heap;
int keyflag;
static int
__db_prblob_id(dbp, blob_id,
blob_size, data, checkprint, prefix, handle, callback)
DB *dbp;
db_seq_t blob_id;
off_t blob_size;
DBT *data;
int checkprint;
const char *prefix;
void *handle;
int (*callback) __P((void *, const void *));
int
__db_prdbt(dbtp, checkprint,
prefix, handle, callback, is_recno, is_heap, no_newline)
DBT *dbtp;
int checkprint;
const char *prefix;
void *handle;
int (*callback) __P((void *, const void *));
int is_recno;
int is_heap;
int no_newline;
int
__db_prheader(dbp, subname, pflag, keyflag, handle, callback, vdp, meta_pgno)
DB *dbp;
const char *subname;
int pflag, keyflag;
void *handle;
int (*callback) __P((void *, const void *));
VRFY_DBINFO *vdp;
db_pgno_t meta_pgno;
int
__db_prfooter(handle, callback)
void *handle;
int (*callback) __P((void *, const void *));
int
__db_pr_callback(handle, str_arg)
void *handle;
const void *str_arg;
const char *
__db_dbtype_to_string(type)
DBTYPE type;
char *
__db_tohex(source, len, dest)
const void *source;
size_t  len;
char *dest;
char *
__db_dbt_print(env, mbp, dbt)
ENV *env;
DB_MSGBUF *mbp;
const DBT *dbt;
int
__db_dbt_printpair(ENV *env, const DBT *key, const DBT *data, const char *fmt, ...)
