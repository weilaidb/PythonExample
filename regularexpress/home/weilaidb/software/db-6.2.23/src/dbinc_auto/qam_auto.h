#define	__qam_AUTO_H
#define	DB___qam_incfirst	84
typedef struct ___qam_incfirst_args  __qam_incfirst_args;
extern __DB_IMPORT DB_LOG_RECSPEC __qam_incfirst_desc[];
static inline int
__qam_incfirst_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_recno_t recno, db_pgno_t meta_pgno)
static inline int __qam_incfirst_read(ENV *env,
DB **dbpp, void *td, void *data, __qam_incfirst_args **arg)
#define	DB___qam_mvptr	85
typedef struct ___qam_mvptr_args  __qam_mvptr_args;
extern __DB_IMPORT DB_LOG_RECSPEC __qam_mvptr_desc[];
static inline int
__qam_mvptr_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t opcode, db_recno_t old_first, db_recno_t new_first, db_recno_t old_cur,
db_recno_t new_cur, DB_LSN * metalsn, db_pgno_t meta_pgno)
static inline int __qam_mvptr_read(ENV *env,
DB **dbpp, void *td, void *data, __qam_mvptr_args **arg)
#define	DB___qam_del	79
typedef struct ___qam_del_args  __qam_del_args;
extern __DB_IMPORT DB_LOG_RECSPEC __qam_del_desc[];
static inline int
__qam_del_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, DB_LSN * lsn, db_pgno_t pgno, u_int32_t indx, db_recno_t recno)
static inline int __qam_del_read(ENV *env,
DB **dbpp, void *td, void *data, __qam_del_args **arg)
#define	DB___qam_add	80
typedef struct ___qam_add_args  __qam_add_args;
extern __DB_IMPORT DB_LOG_RECSPEC __qam_add_desc[];
static inline int
__qam_add_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, DB_LSN * lsn, db_pgno_t pgno, u_int32_t indx, db_recno_t recno,
const DBT *data, u_int32_t vflag, const DBT *olddata)
static inline int __qam_add_read(ENV *env,
DB **dbpp, void *td, void *data, __qam_add_args **arg)
#define	DB___qam_delext	83
typedef struct ___qam_delext_args  __qam_delext_args;
extern __DB_IMPORT DB_LOG_RECSPEC __qam_delext_desc[];
static inline int
__qam_delext_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, DB_LSN * lsn, db_pgno_t pgno, u_int32_t indx, db_recno_t recno,
const DBT *data)
static inline int __qam_delext_read(ENV *env,
DB **dbpp, void *td, void *data, __qam_delext_args **arg)
