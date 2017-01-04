static int __db_vrfy_childinc __P((DBC *, VRFY_CHILDINFO *));
static int __db_vrfy_pageinfo_create __P((ENV *, VRFY_PAGEINFO **));
int
__db_vrfy_dbinfo_create(env, ip, pgsize, vdpp)
ENV *env;
DB_THREAD_INFO *ip;
u_int32_t pgsize;
VRFY_DBINFO **vdpp;
int
__db_vrfy_dbinfo_destroy(env, vdp)
ENV *env;
VRFY_DBINFO *vdp;
int
__db_vrfy_getpageinfo(vdp, pgno, pipp)
VRFY_DBINFO *vdp;
db_pgno_t pgno;
VRFY_PAGEINFO **pipp;
int
__db_vrfy_putpageinfo(env, vdp, pip)
ENV *env;
VRFY_DBINFO *vdp;
VRFY_PAGEINFO *pip;
int
__db_vrfy_pgset(env, ip, pgsize, dbpp)
ENV *env;
DB_THREAD_INFO *ip;
u_int32_t pgsize;
DB **dbpp;
int
__db_vrfy_pgset_get(dbp, ip, txn, pgno, valp)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
db_pgno_t pgno;
int *valp;
int
__db_vrfy_pgset_inc(dbp, ip, txn, pgno)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
db_pgno_t pgno;
int
__db_vrfy_pgset_next(dbc, pgnop)
DBC *dbc;
db_pgno_t *pgnop;
int
__db_vrfy_childcursor(vdp, dbcp)
VRFY_DBINFO *vdp;
DBC **dbcp;
int
__db_vrfy_childput(vdp, pgno, cip)
VRFY_DBINFO *vdp;
db_pgno_t pgno;
VRFY_CHILDINFO *cip;
static int
__db_vrfy_childinc(dbc, cip)
DBC *dbc;
VRFY_CHILDINFO *cip;
int
__db_vrfy_ccset(dbc, pgno, cipp)
DBC *dbc;
db_pgno_t pgno;
VRFY_CHILDINFO **cipp;
int
__db_vrfy_ccnext(dbc, cipp)
DBC *dbc;
VRFY_CHILDINFO **cipp;
int
__db_vrfy_ccclose(dbc)
DBC *dbc;
static int
__db_vrfy_pageinfo_create(env, pipp)
ENV *env;
VRFY_PAGEINFO **pipp;
int
__db_salvage_init(vdp)
VRFY_DBINFO *vdp;
int
__db_salvage_destroy(vdp)
VRFY_DBINFO *vdp;
int
__db_salvage_getnext(vdp, dbcp, pgnop, pgtypep, skip_overflow)
VRFY_DBINFO *vdp;
DBC **dbcp;
db_pgno_t *pgnop;
u_int32_t *pgtypep;
int skip_overflow;
int
__db_salvage_isdone(vdp, pgno)
VRFY_DBINFO *vdp;
db_pgno_t pgno;
int
__db_salvage_markdone(vdp, pgno)
VRFY_DBINFO *vdp;
db_pgno_t pgno;
int
__db_salvage_markneeded(vdp, pgno, pgtype)
VRFY_DBINFO *vdp;
db_pgno_t pgno;
u_int32_t pgtype;
int
__db_vrfy_prdbt(dbtp, checkprint, prefix,
handle, callback, is_recno, is_heap, vdp)
DBT *dbtp;
int checkprint;
const char *prefix;
void *handle;
int (*callback) __P((void *, const void *));
int is_recno;
int is_heap;
VRFY_DBINFO *vdp;
