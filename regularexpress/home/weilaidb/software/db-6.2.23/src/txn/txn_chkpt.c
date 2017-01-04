int
__txn_checkpoint_pp(dbenv, kbytes, minutes, flags)
DB_ENV *dbenv;
u_int32_t kbytes, minutes, flags;
int
__txn_checkpoint(env, kbytes, minutes, flags)
ENV *env;
u_int32_t kbytes, minutes, flags;
int
__txn_getactive(env, lsnp)
ENV *env;
DB_LSN *lsnp;
int
__txn_getckp(env, lsnp)
ENV *env;
DB_LSN *lsnp;
int
__txn_updateckp(env, lsnp)
ENV *env;
DB_LSN *lsnp;
