static int __ham_alloc_pages __P((DBC *, __ham_groupalloc_args *, DB_LSN *));
static int __ham_alloc_pages_42
__P((DBC *, __ham_groupalloc_42_args *, DB_LSN *));
static int __ham_chgpg_recover_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
int
__ham_insdel_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_insdel_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_newpage_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_replace_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_replace_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_splitdata_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_copypage_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_metagroup_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_contract_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_groupalloc_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
static int
__ham_alloc_pages(dbc, argp, lsnp)
DBC *dbc;
__ham_groupalloc_args *argp;
DB_LSN *lsnp;
int
__ham_changeslot_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_curadj_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
static int
__ham_chgpg_recover_func(cp, my_dbc, countp, pgno, indx, vargs)
DBC *cp, *my_dbc;
u_int32_t *countp;
db_pgno_t pgno;
u_int32_t indx;
void *vargs;
int
__ham_chgpg_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_metagroup_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_groupalloc_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
static int
__ham_alloc_pages_42(dbc, argp, lsnp)
DBC *dbc;
__ham_groupalloc_42_args *argp;
DB_LSN *lsnp;
