int
__fop_create(env, txn, fhpp, name, dirp, appname, mode, flags)
ENV *env;
DB_TXN *txn;
DB_FH **fhpp;
const char *name, **dirp;
APPNAME appname;
int mode;
u_int32_t flags;
int
__fop_remove(env, txn, fileid, name, dirp, appname, flags)
ENV *env;
DB_TXN *txn;
u_int8_t *fileid;
const char *name, **dirp;
APPNAME appname;
u_int32_t flags;
int
__fop_write(env, txn,
name, dirname, appname, fhp, pgsize, pageno, off, buf, size, istmp, flags)
ENV *env;
DB_TXN *txn;
const char *name, *dirname;
APPNAME appname;
DB_FH *fhp;
u_int32_t pgsize;
db_pgno_t pageno;
u_int32_t off;
void *buf;
u_int32_t size, istmp, flags;
#define	LOG_OVERWRITE_MULTIPLIER 0.75
#define	LOG_REDO_MULTIPLIER 0.75
#define	LOG_OVERWRITE_REDO_MULTIPLIER 0.33
int
__fop_write_file(env, txn,
name, dirname, appname, fhp, off, buf, size, flags)
ENV *env;
DB_TXN *txn;
const char *name, *dirname;
APPNAME appname;
DB_FH *fhp;
off_t off;
void *buf;
size_t size;
u_int32_t flags;
int
__fop_rename(env, txn, oldname, newname, dirp, fid, appname, with_undo, flags)
ENV *env;
DB_TXN *txn;
const char *oldname;
const char *newname;
const char **dirp;
u_int8_t *fid;
APPNAME appname;
int with_undo;
u_int32_t flags;
