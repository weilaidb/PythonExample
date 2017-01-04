#define	__ham_AUTO_H
#define	DB___ham_insdel	21
typedef struct ___ham_insdel_args  __ham_insdel_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_insdel_desc[];
static inline int
__ham_insdel_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t opcode, db_pgno_t pgno, u_int32_t ndx, DB_LSN * pagelsn,
u_int32_t keytype, const DBT *key, u_int32_t datatype, const DBT *data)
static inline int __ham_insdel_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_insdel_args **arg)
#define	DB___ham_insdel_42	21
typedef struct ___ham_insdel_42_args  __ham_insdel_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_insdel_42_desc[];
static inline int __ham_insdel_42_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_insdel_42_args **arg)
#define	DB___ham_newpage	22
typedef struct ___ham_newpage_args  __ham_newpage_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_newpage_desc[];
static inline int
__ham_newpage_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t opcode, db_pgno_t prev_pgno, DB_LSN * prevlsn, db_pgno_t new_pgno,
DB_LSN * pagelsn, db_pgno_t next_pgno, DB_LSN * nextlsn)
static inline int __ham_newpage_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_newpage_args **arg)
#define	DB___ham_splitdata	24
typedef struct ___ham_splitdata_args  __ham_splitdata_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_splitdata_desc[];
static inline int
__ham_splitdata_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, u_int32_t opcode, db_pgno_t pgno, const DBT *pageimage, DB_LSN * pagelsn)
static inline int __ham_splitdata_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_splitdata_args **arg)
#define	DB___ham_replace	25
typedef struct ___ham_replace_args  __ham_replace_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_replace_desc[];
static inline int
__ham_replace_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, u_int32_t ndx, DB_LSN * pagelsn, int32_t off,
u_int32_t oldtype, const DBT *olditem, u_int32_t newtype, const DBT *newitem)
static inline int __ham_replace_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_replace_args **arg)
#define	DB___ham_replace_42	25
typedef struct ___ham_replace_42_args  __ham_replace_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_replace_42_desc[];
static inline int __ham_replace_42_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_replace_42_args **arg)
#define	DB___ham_copypage	28
typedef struct ___ham_copypage_args  __ham_copypage_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_copypage_desc[];
static inline int
__ham_copypage_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, DB_LSN * pagelsn, db_pgno_t next_pgno, DB_LSN * nextlsn,
db_pgno_t nnext_pgno, DB_LSN * nnextlsn, const DBT *page)
static inline int __ham_copypage_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_copypage_args **arg)
#define	DB___ham_metagroup_42	29
typedef struct ___ham_metagroup_42_args  __ham_metagroup_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_metagroup_42_desc[];
static inline int __ham_metagroup_42_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_metagroup_42_args **arg)
#define	DB___ham_metagroup	29
typedef struct ___ham_metagroup_args  __ham_metagroup_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_metagroup_desc[];
static inline int
__ham_metagroup_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, u_int32_t bucket, db_pgno_t mmpgno, DB_LSN * mmetalsn, db_pgno_t mpgno,
DB_LSN * metalsn, db_pgno_t pgno, DB_LSN * pagelsn, u_int32_t newalloc, db_pgno_t last_pgno)
static inline int __ham_metagroup_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_metagroup_args **arg)
#define	DB___ham_groupalloc_42	32
typedef struct ___ham_groupalloc_42_args  __ham_groupalloc_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_groupalloc_42_desc[];
static inline int __ham_groupalloc_42_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_groupalloc_42_args **arg)
#define	DB___ham_groupalloc	32
typedef struct ___ham_groupalloc_args  __ham_groupalloc_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_groupalloc_desc[];
static inline int
__ham_groupalloc_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, DB_LSN * meta_lsn, db_pgno_t start_pgno, u_int32_t num, db_pgno_t unused,
db_pgno_t last_pgno)
static inline int __ham_groupalloc_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_groupalloc_args **arg)
#define	DB___ham_changeslot	35
typedef struct ___ham_changeslot_args  __ham_changeslot_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_changeslot_desc[];
static inline int
__ham_changeslot_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, DB_LSN * meta_lsn, u_int32_t slot, db_pgno_t old, db_pgno_t new)
static inline int __ham_changeslot_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_changeslot_args **arg)
#define	DB___ham_contract	37
typedef struct ___ham_contract_args  __ham_contract_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_contract_desc[];
static inline int
__ham_contract_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t meta, DB_LSN * meta_lsn, u_int32_t bucket, db_pgno_t pgno)
static inline int __ham_contract_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_contract_args **arg)
#define	DB___ham_curadj	33
typedef struct ___ham_curadj_args  __ham_curadj_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_curadj_desc[];
static inline int
__ham_curadj_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, u_int32_t indx, u_int32_t len, u_int32_t dup_off,
int add, int is_dup, u_int32_t order)
static inline int __ham_curadj_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_curadj_args **arg)
#define	DB___ham_chgpg	34
typedef struct ___ham_chgpg_args  __ham_chgpg_args;
extern __DB_IMPORT DB_LOG_RECSPEC __ham_chgpg_desc[];
static inline int
__ham_chgpg_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_ham_mode mode, db_pgno_t old_pgno, db_pgno_t new_pgno, u_int32_t old_indx,
u_int32_t new_indx)
static inline int __ham_chgpg_read(ENV *env,
DB **dbpp, void *td, void *data, __ham_chgpg_args **arg)
