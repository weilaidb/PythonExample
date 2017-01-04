#define	__crdel_AUTO_H
#define	DB___crdel_metasub	142
typedef struct ___crdel_metasub_args  __crdel_metasub_args;
extern __DB_IMPORT DB_LOG_RECSPEC __crdel_metasub_desc[];
static inline int
__crdel_metasub_log(DB *dbp, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags, db_pgno_t pgno, const DBT *page, DB_LSN * lsn)
static inline int __crdel_metasub_read(ENV *env,
DB **dbpp, void *td, void *data, __crdel_metasub_args **arg)
#define	DB___crdel_inmem_create	138
typedef struct ___crdel_inmem_create_args  __crdel_inmem_create_args;
extern __DB_IMPORT DB_LOG_RECSPEC __crdel_inmem_create_desc[];
static inline int
__crdel_inmem_create_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
int32_t fileid, const DBT *name, const DBT *fid, u_int32_t pgsize)
static inline int __crdel_inmem_create_read(ENV *env,
void *data, __crdel_inmem_create_args **arg)
#define	DB___crdel_inmem_rename	139
typedef struct ___crdel_inmem_rename_args  __crdel_inmem_rename_args;
extern __DB_IMPORT DB_LOG_RECSPEC __crdel_inmem_rename_desc[];
static inline int
__crdel_inmem_rename_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
const DBT *oldname, const DBT *newname, const DBT *fid)
static inline int __crdel_inmem_rename_read(ENV *env,
void *data, __crdel_inmem_rename_args **arg)
#define	DB___crdel_inmem_remove	140
typedef struct ___crdel_inmem_remove_args  __crdel_inmem_remove_args;
extern __DB_IMPORT DB_LOG_RECSPEC __crdel_inmem_remove_desc[];
static inline int
__crdel_inmem_remove_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
const DBT *name, const DBT *fid)
static inline int __crdel_inmem_remove_read(ENV *env,
void *data, __crdel_inmem_remove_args **arg)
