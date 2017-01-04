static int __db_novrfy __P((ENV *));
static int
__db_novrfy(env)
ENV *env;
int
__db_verify_pp(dbp, file, database, outfile, flags)
DB *dbp;
const char *file, *database;
FILE *outfile;
u_int32_t flags;
int
__db_verify_internal(dbp, name, subdb, handle, callback, flags)
DB *dbp;
const char *name, *subdb;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
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
