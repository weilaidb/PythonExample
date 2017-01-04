static int __qam_adjust_first __P((DB *, DBC *, QMETA *, db_recno_t));
#define	QAM_DIRTY(dbc, pgno, pagep)					\
if ((ret = __qam_dirty((dbc),					\
pgno, pagep, (dbc)->priority)) != 0)
static int
__qam_adjust_first(file_dbp, dbc, meta, recno)
DB *file_dbp;
DBC *dbc;
QMETA *meta;
db_recno_t recno;
int
__qam_incfirst_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__qam_mvptr_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__qam_del_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__qam_delext_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__qam_add_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
