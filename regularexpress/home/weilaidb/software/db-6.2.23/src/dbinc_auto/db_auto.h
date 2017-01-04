#define	__db_AUTO_H
#define	DB___db_addrem	41
typedef struct ___db_addrem_args  __db_addrem_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_addrem_desc[];
static inline int
__db_addrem_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t opcode, db_pgno_t pgno, u_int32_t indx, u_int32_t nbytes,
const DBT *hdr, const DBT *dbt, DB_LSN * pagelsn)
static inline int __db_addrem_read(ENV *env,
DB **dbpp, void *td, void *data, __db_addrem_args **arg)
#define	DB___db_addrem_42	41
typedef struct ___db_addrem_42_args  __db_addrem_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_addrem_42_desc[];
static inline int __db_addrem_42_read(ENV *env,
DB **dbpp, void *td, void *data, __db_addrem_42_args **arg)
#define	DB___db_big	43
typedef struct ___db_big_args  __db_big_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_big_desc[];
static inline int
__db_big_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t opcode, db_pgno_t pgno, db_pgno_t prev_pgno, db_pgno_t next_pgno,
const DBT *dbt, DB_LSN * pagelsn, DB_LSN * prevlsn, DB_LSN * nextlsn)
static inline int __db_big_read(ENV *env,
DB **dbpp, void *td, void *data, __db_big_args **arg)
#define	DB___db_big_42	43
typedef struct ___db_big_42_args  __db_big_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_big_42_desc[];
static inline int __db_big_42_read(ENV *env,
DB **dbpp, void *td, void *data, __db_big_42_args **arg)
#define	DB___db_ovref	44
typedef struct ___db_ovref_args  __db_ovref_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_ovref_desc[];
static inline int
__db_ovref_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, int32_t adjust, DB_LSN * lsn)
static inline int __db_ovref_read(ENV *env,
DB **dbpp, void *td, void *data, __db_ovref_args **arg)
#define	DB___db_relink_42	45
typedef struct ___db_relink_42_args  __db_relink_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_relink_42_desc[];
static inline int __db_relink_42_read(ENV *env,
DB **dbpp, void *td, void *data, __db_relink_42_args **arg)
#define	DB___db_debug	47
typedef struct ___db_debug_args  __db_debug_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_debug_desc[];
static inline int
__db_debug_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
const DBT *op, int32_t fileid, const DBT *key, const DBT *data, u_int32_t arg_flags)
static inline int __db_debug_read(ENV *env,
void *data, __db_debug_args **arg)
#define	DB___db_noop	48
typedef struct ___db_noop_args  __db_noop_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_noop_desc[];
static inline int
__db_noop_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, DB_LSN * prevlsn)
static inline int __db_noop_read(ENV *env,
DB **dbpp, void *td, void *data, __db_noop_args **arg)
#define	DB___db_pg_alloc_42	49
typedef struct ___db_pg_alloc_42_args  __db_pg_alloc_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_pg_alloc_42_desc[];
static inline int __db_pg_alloc_42_read(ENV *env,
DB **dbpp, void *td, void *data, __db_pg_alloc_42_args **arg)
#define	DB___db_pg_alloc	49
typedef struct ___db_pg_alloc_args  __db_pg_alloc_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_pg_alloc_desc[];
static inline int
__db_pg_alloc_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, DB_LSN * meta_lsn, db_pgno_t meta_pgno, DB_LSN * page_lsn, db_pgno_t pgno,
u_int32_t ptype, db_pgno_t next, db_pgno_t last_pgno)
static inline int __db_pg_alloc_read(ENV *env,
DB **dbpp, void *td, void *data, __db_pg_alloc_args **arg)
#define	DB___db_pg_free_42	50
typedef struct ___db_pg_free_42_args  __db_pg_free_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_pg_free_42_desc[];
static inline int __db_pg_free_42_read(ENV *env,
DB **dbpp, void *td, void *data, __db_pg_free_42_args **arg)
#define	DB___db_pg_free	50
typedef struct ___db_pg_free_args  __db_pg_free_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_pg_free_desc[];
static inline int
__db_pg_free_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, DB_LSN * meta_lsn, db_pgno_t meta_pgno, const DBT *header,
db_pgno_t next, db_pgno_t last_pgno)
static inline int __db_pg_free_read(ENV *env,
DB **dbpp, void *td, void *data, __db_pg_free_args **arg)
#define	DB___db_cksum	51
typedef struct ___db_cksum_args  __db_cksum_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_cksum_desc[];
static inline int
__db_cksum_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags)
static inline int __db_cksum_read(ENV *env,
void *data, __db_cksum_args **arg)
#define	DB___db_pg_freedata_42	52
typedef struct ___db_pg_freedata_42_args  __db_pg_freedata_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_pg_freedata_42_desc[];
static inline int __db_pg_freedata_42_read(ENV *env,
DB **dbpp, void *td, void *data, __db_pg_freedata_42_args **arg)
#define	DB___db_pg_freedata	52
typedef struct ___db_pg_freedata_args  __db_pg_freedata_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_pg_freedata_desc[];
static inline int
__db_pg_freedata_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, DB_LSN * meta_lsn, db_pgno_t meta_pgno, const DBT *header,
db_pgno_t next, db_pgno_t last_pgno, const DBT *data)
static inline int __db_pg_freedata_read(ENV *env,
DB **dbpp, void *td, void *data, __db_pg_freedata_args **arg)
#define	DB___db_pg_init	60
typedef struct ___db_pg_init_args  __db_pg_init_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_pg_init_desc[];
static inline int
__db_pg_init_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, const DBT *header, const DBT *data)
static inline int __db_pg_init_read(ENV *env,
DB **dbpp, void *td, void *data, __db_pg_init_args **arg)
#define	DB___db_pg_sort_44	61
typedef struct ___db_pg_sort_44_args  __db_pg_sort_44_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_pg_sort_44_desc[];
static inline int __db_pg_sort_44_read(ENV *env,
DB **dbpp, void *td, void *data, __db_pg_sort_44_args **arg)
#define	DB___db_pg_trunc	66
typedef struct ___db_pg_trunc_args  __db_pg_trunc_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_pg_trunc_desc[];
static inline int
__db_pg_trunc_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t meta, DB_LSN * meta_lsn, db_pgno_t last_free, DB_LSN * last_lsn,
db_pgno_t next_free, db_pgno_t last_pgno, const DBT *list)
static inline int __db_pg_trunc_read(ENV *env,
DB **dbpp, void *td, void *data, __db_pg_trunc_args **arg)
#define	DB___db_realloc	36
typedef struct ___db_realloc_args  __db_realloc_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_realloc_desc[];
static inline int
__db_realloc_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t prev_pgno, DB_LSN * page_lsn, db_pgno_t next_free, u_int32_t ptype,
const DBT *list)
static inline int __db_realloc_read(ENV *env,
DB **dbpp, void *td, void *data, __db_realloc_args **arg)
#define	DB___db_relink	147
typedef struct ___db_relink_args  __db_relink_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_relink_desc[];
static inline int
__db_relink_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, db_pgno_t new_pgno, db_pgno_t prev_pgno, DB_LSN * lsn_prev,
db_pgno_t next_pgno, DB_LSN * lsn_next)
static inline int __db_relink_read(ENV *env,
DB **dbpp, void *td, void *data, __db_relink_args **arg)
#define	DB___db_merge	148
typedef struct ___db_merge_args  __db_merge_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_merge_desc[];
static inline int
__db_merge_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, DB_LSN * lsn, db_pgno_t npgno, DB_LSN * nlsn,
const DBT *hdr, const DBT *data, int32_t pg_copy)
static inline int __db_merge_read(ENV *env,
DB **dbpp, void *td, void *data, __db_merge_args **arg)
#define	DB___db_pgno	149
typedef struct ___db_pgno_args  __db_pgno_args;
extern __DB_IMPORT DB_LOG_RECSPEC __db_pgno_desc[];
static inline int
__db_pgno_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, DB_LSN * lsn, u_int32_t indx, db_pgno_t opgno,
db_pgno_t npgno)
static inline int __db_pgno_read(ENV *env,
DB **dbpp, void *td, void *data, __db_pgno_args **arg)
