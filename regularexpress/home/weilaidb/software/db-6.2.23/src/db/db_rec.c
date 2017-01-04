static int __db_pg_free_recover_int __P((ENV *, DB_THREAD_INFO *,
__db_pg_freedata_args *, DB *, DB_LSN *, DB_MPOOLFILE *, db_recops, int));
int
__db_addrem_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_addrem_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_big_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_big_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_ovref_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_debug_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_noop_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_pg_alloc_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
static int
__db_pg_free_recover_int(env, ip, argp, file_dbp, lsnp, mpf, op, data)
ENV *env;
DB_THREAD_INFO *ip;
__db_pg_freedata_args *argp;
DB *file_dbp;
DB_LSN *lsnp;
DB_MPOOLFILE *mpf;
db_recops op;
int data;
int
__db_pg_free_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_pg_freedata_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_cksum_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_pg_init_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_pg_trunc_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_realloc_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_pg_sort_44_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_relink_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_merge_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__db_pgno_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
void
__db_pglist_swap(size, list)
u_int32_t size;
void *list;
void
__db_pglist_print(env, mbp, list)
ENV *env;
DB_MSGBUF *mbp;
DBT *list;
