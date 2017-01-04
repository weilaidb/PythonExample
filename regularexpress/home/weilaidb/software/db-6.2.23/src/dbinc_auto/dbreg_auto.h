#define	__dbreg_AUTO_H
#define	DB___dbreg_register_42	2
typedef struct ___dbreg_register_42_args  __dbreg_register_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __dbreg_register_42_desc[];
static inline int __dbreg_register_42_read(ENV *env,
void *data, __dbreg_register_42_args **arg)
#define	DB___dbreg_register	2
typedef struct ___dbreg_register_args  __dbreg_register_args;
extern __DB_IMPORT DB_LOG_RECSPEC __dbreg_register_desc[];
static inline int
__dbreg_register_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t opcode, const DBT *name, const DBT *uid, int32_t fileid, DBTYPE ftype,
db_pgno_t meta_pgno, u_int32_t id, u_int32_t blob_fid_lo, u_int32_t blob_fid_hi)
static inline int __dbreg_register_read(ENV *env,
void *data, __dbreg_register_args **arg)
