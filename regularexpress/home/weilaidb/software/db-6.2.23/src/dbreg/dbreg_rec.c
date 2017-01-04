static int __dbreg_open_file __P((ENV *,
DB_TXN *, __dbreg_register_args *, void *));
static int __dbreg_register_recover_int
__P((ENV *, DBT *, DB_LSN *, db_recops, void *, __dbreg_register_args *));
int
__dbreg_register_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__dbreg_register_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
static int
__dbreg_register_recover_int(env, dbtp, lsnp, op, info, argp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
__dbreg_register_args *argp;
static int
__dbreg_open_file(env, txn, argp, info)
ENV *env;
DB_TXN *txn;
__dbreg_register_args *argp;
void *info;
