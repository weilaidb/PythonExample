#define	__fop_AUTO_H
#define	DB___fop_create_42	143
typedef struct ___fop_create_42_args  __fop_create_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_create_42_desc[];
static inline int __fop_create_42_read(ENV *env,
void *data, __fop_create_42_args **arg)
#define	DB___fop_create_60	143
typedef struct ___fop_create_60_args  __fop_create_60_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_create_60_desc[];
static inline int __fop_create_60_read(ENV *env,
void *data, __fop_create_60_args **arg)
#define	DB___fop_create	143
typedef struct ___fop_create_args  __fop_create_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_create_desc[];
static inline int
__fop_create_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
const DBT *name, const DBT *dirname, u_int32_t appname, u_int32_t mode)
static inline int __fop_create_read(ENV *env,
void *data, __fop_create_args **arg)
#define	DB___fop_remove_60	144
typedef struct ___fop_remove_60_args  __fop_remove_60_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_remove_60_desc[];
static inline int __fop_remove_60_read(ENV *env,
void *data, __fop_remove_60_args **arg)
#define	DB___fop_remove	144
typedef struct ___fop_remove_args  __fop_remove_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_remove_desc[];
static inline int
__fop_remove_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
const DBT *name, const DBT *fid, u_int32_t appname)
static inline int __fop_remove_read(ENV *env,
void *data, __fop_remove_args **arg)
#define	DB___fop_write_42	145
typedef struct ___fop_write_42_args  __fop_write_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_write_42_desc[];
static inline int __fop_write_42_read(ENV *env,
void *data, __fop_write_42_args **arg)
#define	DB___fop_write_60	145
typedef struct ___fop_write_60_args  __fop_write_60_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_write_60_desc[];
static inline int __fop_write_60_read(ENV *env,
void *data, __fop_write_60_args **arg)
#define	DB___fop_write	145
typedef struct ___fop_write_args  __fop_write_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_write_desc[];
static inline int
__fop_write_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
const DBT *name, const DBT *dirname, u_int32_t appname, u_int32_t pgsize, db_pgno_t pageno,
u_int32_t offset, const DBT *page, u_int32_t flag)
static inline int __fop_write_read(ENV *env,
void *data, __fop_write_args **arg)
#define	DB___fop_write_file_60	86
typedef struct ___fop_write_file_60_args  __fop_write_file_60_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_write_file_60_desc[];
static inline int __fop_write_file_60_read(ENV *env,
void *data, __fop_write_file_60_args **arg)
#define	DB___fop_write_file	86
typedef struct ___fop_write_file_args  __fop_write_file_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_write_file_desc[];
static inline int
__fop_write_file_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
const DBT *name, const DBT *dirname, u_int32_t appname, u_int64_t offset, const DBT *old_data,
const DBT *new_data, u_int32_t flag)
static inline int __fop_write_file_read(ENV *env,
void *data, __fop_write_file_args **arg)
#define	DB___fop_rename_42	146
#define	DB___fop_rename_noundo_46	150
typedef struct ___fop_rename_42_args  __fop_rename_42_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_rename_42_desc[];
static inline int __fop_rename_42_read(ENV *env,
void *data, __fop_rename_42_args **arg)
extern __DB_IMPORT DB_LOG_RECSPEC __fop_rename_noundo_46_desc[];
static inline int __fop_rename_noundo_46_read(ENV *env,
void *data, __fop_rename_42_args **arg)
#define	DB___fop_rename_60	146
#define	DB___fop_rename_noundo_60	150
typedef struct ___fop_rename_60_args  __fop_rename_60_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_rename_60_desc[];
static inline int __fop_rename_60_read(ENV *env,
void *data, __fop_rename_60_args **arg)
extern __DB_IMPORT DB_LOG_RECSPEC __fop_rename_noundo_60_desc[];
static inline int __fop_rename_noundo_60_read(ENV *env,
void *data, __fop_rename_60_args **arg)
#define	DB___fop_rename	146
#define	DB___fop_rename_noundo	150
typedef struct ___fop_rename_args  __fop_rename_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_rename_desc[];
static inline int
__fop_rename_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
const DBT *oldname, const DBT *newname, const DBT *dirname, const DBT *fileid, u_int32_t appname)
static inline int __fop_rename_read(ENV *env,
void *data, __fop_rename_args **arg)
extern __DB_IMPORT DB_LOG_RECSPEC __fop_rename_noundo_desc[];
static inline int
__fop_rename_noundo_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
const DBT *oldname, const DBT *newname, const DBT *dirname, const DBT *fileid, u_int32_t appname)
static inline int __fop_rename_noundo_read(ENV *env,
void *data, __fop_rename_args **arg)
#define	DB___fop_file_remove_60	141
typedef struct ___fop_file_remove_60_args  __fop_file_remove_60_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_file_remove_60_desc[];
static inline int __fop_file_remove_60_read(ENV *env,
void *data, __fop_file_remove_60_args **arg)
#define	DB___fop_file_remove	141
typedef struct ___fop_file_remove_args  __fop_file_remove_args;
extern __DB_IMPORT DB_LOG_RECSPEC __fop_file_remove_desc[];
static inline int
__fop_file_remove_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
const DBT *real_fid, const DBT *tmp_fid, const DBT *name, u_int32_t appname, u_int32_t child)
static inline int __fop_file_remove_read(ENV *env,
void *data, __fop_file_remove_args **arg)
