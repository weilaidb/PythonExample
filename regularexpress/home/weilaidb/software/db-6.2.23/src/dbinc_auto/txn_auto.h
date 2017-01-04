#define	__txn_AUTO_H
#define	DB___txn_regop_42	10
typedef struct ___txn_regop_42_args  __txn_regop_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __txn_regop_42_desc[];
static inline int __txn_regop_42_read(ENV *env,
void *data, __txn_regop_42_args **arg)
#define	DB___txn_regop	10
typedef struct ___txn_regop_args  __txn_regop_args;
extern __DB_IMPORT DB_LOG_RECSPEC __txn_regop_desc[];
static inline int
__txn_regop_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t opcode, int32_t timestamp, u_int32_t envid, const DBT *locks)
static inline int __txn_regop_read(ENV *env,
void *data, __txn_regop_args **arg)
#define	DB___txn_ckp_42	11
typedef struct ___txn_ckp_42_args  __txn_ckp_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __txn_ckp_42_desc[];
static inline int __txn_ckp_42_read(ENV *env,
void *data, __txn_ckp_42_args **arg)
#define	DB___txn_ckp	11
typedef struct ___txn_ckp_args  __txn_ckp_args;
extern __DB_IMPORT DB_LOG_RECSPEC __txn_ckp_desc[];
static inline int
__txn_ckp_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
DB_LSN * ckp_lsn, DB_LSN * last_ckp, int32_t timestamp, u_int32_t envid, u_int32_t spare)
static inline int __txn_ckp_read(ENV *env,
void *data, __txn_ckp_args **arg)
#define	DB___txn_child	12
typedef struct ___txn_child_args  __txn_child_args;
extern __DB_IMPORT DB_LOG_RECSPEC __txn_child_desc[];
static inline int
__txn_child_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t child, DB_LSN * c_lsn)
static inline int __txn_child_read(ENV *env,
void *data, __txn_child_args **arg)
#define	DB___txn_xa_regop_42	13
typedef struct ___txn_xa_regop_42_args  __txn_xa_regop_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __txn_xa_regop_42_desc[];
static inline int __txn_xa_regop_42_read(ENV *env,
void *data, __txn_xa_regop_42_args **arg)
#define	DB___txn_prepare	13
typedef struct ___txn_prepare_args  __txn_prepare_args;
extern __DB_IMPORT DB_LOG_RECSPEC __txn_prepare_desc[];
static inline int
__txn_prepare_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t opcode, const DBT *gid, DB_LSN * begin_lsn, const DBT *locks)
static inline int __txn_prepare_read(ENV *env,
void *data, __txn_prepare_args **arg)
#define	DB___txn_recycle	14
typedef struct ___txn_recycle_args  __txn_recycle_args;
extern __DB_IMPORT DB_LOG_RECSPEC __txn_recycle_desc[];
static inline int
__txn_recycle_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t min, u_int32_t max)
static inline int __txn_recycle_read(ENV *env,
void *data, __txn_recycle_args **arg)
