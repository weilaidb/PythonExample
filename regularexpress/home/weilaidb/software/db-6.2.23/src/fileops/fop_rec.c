typedef enum  APPNAME53;
static APPNAME __fop_convert_appname __P((APPNAME53));
static int __fop_create_recover_int __P((ENV *, char *, db_recops, int));
static int __fop_rename_recover_int
__P((ENV *, DBT *, DB_LSN *, db_recops, void *, int));
static int __fop_rename_60_recover_int
__P((ENV *, DBT *, DB_LSN *, db_recops, void *, int));
static int __fop_rename_42_recover_int
__P((ENV *, DBT *, DB_LSN *, db_recops, void *, int));
static int __fop_write_file_recover_int
__P((ENV *, db_recops,
APPNAME, u_int32_t, DBT *, DBT *, DBT *, DBT *, off_t, DB_TXN *));
static APPNAME
__fop_convert_appname(appname)
APPNAME53 appname;
static int
__fop_create_recover_int(env, real_name, op, mode)
ENV *env;
char *real_name;
db_recops op;
int mode;
int
__fop_create_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_create_60_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_create_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_remove_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_remove_60_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_write_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_write_60_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_write_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
static int
__fop_write_file_recover_int(
env, op, appname, flag, dirname, name, new_data, old_data, offset, txn)
ENV *env;
db_recops op;
APPNAME appname;
u_int32_t flag;
DBT *dirname;
DBT *name;
DBT *new_data;
DBT *old_data;
off_t offset;
DB_TXN *txn;
int
__fop_write_file_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_write_file_60_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_rename_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_rename_noundo_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
static int
__fop_rename_recover_int(env, dbtp, lsnp, op, info, undo)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int undo;
int
__fop_rename_60_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_rename_noundo_60_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
static int
__fop_rename_60_recover_int(env, dbtp, lsnp, op, info, undo)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int undo;
int
__fop_rename_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_rename_noundo_46_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
static int
__fop_rename_42_recover_int(env, dbtp, lsnp, op, info, undo)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int undo;
int
__fop_file_remove_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__fop_file_remove_60_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
