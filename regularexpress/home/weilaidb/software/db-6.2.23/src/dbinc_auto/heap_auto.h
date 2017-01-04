#define	__heap_AUTO_H
#define	DB___heap_addrem	151
typedef struct ___heap_addrem_args  __heap_addrem_args;
extern __DB_IMPORT DB_LOG_RECSPEC __heap_addrem_desc[];
static inline int
__heap_addrem_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t opcode, db_pgno_t pgno, u_int32_t indx, u_int32_t nbytes,
const DBT *hdr, const DBT *dbt, DB_LSN * pagelsn)
static inline int __heap_addrem_read(ENV *env,
DB **dbpp, void *td, void *data, __heap_addrem_args **arg)
#define	DB___heap_addrem_60	151
typedef struct ___heap_addrem_60_args  __heap_addrem_60_args;
extern __DB_IMPORT DB_LOG_RECSPEC __heap_addrem_60_desc[];
static inline int __heap_addrem_60_read(ENV *env,
DB **dbpp, void *td, void *data, __heap_addrem_60_args **arg)
#define	DB___heap_addrem_50	151
typedef struct ___heap_addrem_50_args  __heap_addrem_50_args;
extern __DB_IMPORT DB_LOG_RECSPEC __heap_addrem_50_desc[];
static inline int __heap_addrem_50_read(ENV *env,
DB **dbpp, void *td, void *data, __heap_addrem_50_args **arg)
#define	DB___heap_pg_alloc	152
typedef struct ___heap_pg_alloc_args  __heap_pg_alloc_args;
extern __DB_IMPORT DB_LOG_RECSPEC __heap_pg_alloc_desc[];
static inline int
__heap_pg_alloc_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, DB_LSN * meta_lsn, db_pgno_t meta_pgno, db_pgno_t pgno, u_int32_t ptype,
db_pgno_t last_pgno)
static inline int __heap_pg_alloc_read(ENV *env,
DB **dbpp, void *td, void *data, __heap_pg_alloc_args **arg)
#define	DB___heap_trunc_meta	153
typedef struct ___heap_trunc_meta_args  __heap_trunc_meta_args;
extern __DB_IMPORT DB_LOG_RECSPEC __heap_trunc_meta_desc[];
static inline int
__heap_trunc_meta_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, u_int32_t last_pgno, u_int32_t key_count, u_int32_t record_count,
u_int32_t curregion, u_int32_t nregions, DB_LSN * pagelsn)
static inline int __heap_trunc_meta_read(ENV *env,
DB **dbpp, void *td, void *data, __heap_trunc_meta_args **arg)
#define	DB___heap_trunc_page	154
typedef struct ___heap_trunc_page_args  __heap_trunc_page_args;
extern __DB_IMPORT DB_LOG_RECSPEC __heap_trunc_page_desc[];
static inline int
__heap_trunc_page_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, const DBT *old_data, u_int32_t is_region, DB_LSN * pagelsn)
static inline int __heap_trunc_page_read(ENV *env,
DB **dbpp, void *td, void *data, __heap_trunc_page_args **arg)
