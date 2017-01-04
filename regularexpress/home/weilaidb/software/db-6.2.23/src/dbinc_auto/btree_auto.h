#define	__bam_AUTO_H
#define	DB___bam_split	62
typedef struct ___bam_split_args  __bam_split_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_split_desc[];
static inline int
__bam_split_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, u_int32_t opflags, db_pgno_t left, DB_LSN * llsn, db_pgno_t right,
DB_LSN * rlsn, u_int32_t indx, db_pgno_t npgno, DB_LSN * nlsn, db_pgno_t ppgno,
DB_LSN * plsn, u_int32_t pindx, const DBT *pg, const DBT *pentry, const DBT *rentry)
static inline int __bam_split_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_split_args **arg)
#define	DB___bam_split_48	62
typedef struct ___bam_split_48_args  __bam_split_48_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_split_48_desc[];
static inline int __bam_split_48_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_split_48_args **arg)
#define	DB___bam_split_42	62
typedef struct ___bam_split_42_args  __bam_split_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_split_42_desc[];
static inline int __bam_split_42_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_split_42_args **arg)
#define	DB___bam_rsplit	63
typedef struct ___bam_rsplit_args  __bam_rsplit_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_rsplit_desc[];
static inline int
__bam_rsplit_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, const DBT *pgdbt, db_pgno_t root_pgno, db_pgno_t nrec,
const DBT *rootent, DB_LSN * rootlsn)
static inline int __bam_rsplit_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_rsplit_args **arg)
#define	DB___bam_adj	55
typedef struct ___bam_adj_args  __bam_adj_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_adj_desc[];
static inline int
__bam_adj_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, DB_LSN * lsn, u_int32_t indx, u_int32_t indx_copy,
u_int32_t is_insert)
static inline int __bam_adj_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_adj_args **arg)
#define	DB___bam_cadjust	56
typedef struct ___bam_cadjust_args  __bam_cadjust_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_cadjust_desc[];
static inline int
__bam_cadjust_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, DB_LSN * lsn, u_int32_t indx, int32_t adjust,
u_int32_t opflags)
static inline int __bam_cadjust_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_cadjust_args **arg)
#define	DB___bam_cdel	57
typedef struct ___bam_cdel_args  __bam_cdel_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_cdel_desc[];
static inline int
__bam_cdel_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, DB_LSN * lsn, u_int32_t indx)
static inline int __bam_cdel_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_cdel_args **arg)
#define	DB___bam_repl	58
typedef struct ___bam_repl_args  __bam_repl_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_repl_desc[];
static inline int
__bam_repl_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, DB_LSN * lsn, u_int32_t indx, u_int32_t isdeleted,
const DBT *orig, const DBT *repl, u_int32_t prefix, u_int32_t suffix)
static inline int __bam_repl_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_repl_args **arg)
#define	DB___bam_irep	67
typedef struct ___bam_irep_args  __bam_irep_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_irep_desc[];
static inline int
__bam_irep_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, DB_LSN * lsn, u_int32_t indx, u_int32_t ptype,
const DBT *hdr, const DBT *data, const DBT *old)
static inline int __bam_irep_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_irep_args **arg)
#define	DB___bam_root	59
typedef struct ___bam_root_args  __bam_root_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_root_desc[];
static inline int
__bam_root_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t meta_pgno, db_pgno_t root_pgno, DB_LSN * meta_lsn)
static inline int __bam_root_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_root_args **arg)
#define	DB___bam_curadj	64
typedef struct ___bam_curadj_args  __bam_curadj_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_curadj_desc[];
static inline int
__bam_curadj_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_ca_mode mode, db_pgno_t from_pgno, db_pgno_t to_pgno, db_pgno_t left_pgno,
u_int32_t first_indx, u_int32_t from_indx, u_int32_t to_indx)
static inline int __bam_curadj_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_curadj_args **arg)
#define	DB___bam_rcuradj	65
typedef struct ___bam_rcuradj_args  __bam_rcuradj_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_rcuradj_desc[];
static inline int
__bam_rcuradj_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, ca_recno_arg mode, db_pgno_t root, db_recno_t recno, u_int32_t order)
static inline int __bam_rcuradj_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_rcuradj_args **arg)
#define	DB___bam_relink_43	147
typedef struct ___bam_relink_43_args  __bam_relink_43_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_relink_43_desc[];
static inline int __bam_relink_43_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_relink_43_args **arg)
#define	DB___bam_merge_44	148
typedef struct ___bam_merge_44_args  __bam_merge_44_args;
extern __DB_IMPORT DB_LOG_RECSPEC __bam_merge_44_desc[];
static inline int __bam_merge_44_read(ENV *env,
DB **dbpp, void *td, void *data, __bam_merge_44_args **arg)
