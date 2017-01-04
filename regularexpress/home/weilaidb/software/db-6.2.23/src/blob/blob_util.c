static int __blob_open_meta_db __P((
DB *, DB_TXN *, DB **, DB_SEQUENCE **, int, int, int));
static int __blob_clean_dir
__P((ENV *, DB_TXN *, const char *, const char *, int));
static int __blob_copy_dir __P((DB *, const char *, const char *));
#define	BLOB_ID_KEY "blob_id"
#define	BLOB_SEQ_DB_NAME "blob_id_seq"
#define	BLOB_DIR_ID_KEY "blob_dir_id"
#define	BLOB_DIR_SEQ_DB_NAME "blob_dir_id_seq"
int
__blob_make_sub_dir(env, blob_sub_dir, file_id, db_id)
ENV *env;
char **blob_sub_dir;
db_seq_t file_id;
db_seq_t db_id;
int
__blob_make_meta_fname(env, dbp, meta_fname)
ENV *env;
DB *dbp;
char **meta_fname;
int
__blob_get_dir(dbp, dirp)
DB *dbp;
char **dirp;
static int
__blob_open_meta_db(dbp, txn, meta_db, seq, file, create, force_txn)
DB *dbp;
DB_TXN *txn;
DB **meta_db;
DB_SEQUENCE **seq;
int file;
int create;
int force_txn;
int
__blob_generate_dir_ids(dbp, txn, id)
DB *dbp;
DB_TXN *txn;
db_seq_t *id;
int
__blob_generate_id(dbp, txn, blob_id)
DB *dbp;
DB_TXN *txn;
db_seq_t *blob_id;
int
__blob_highest_id(dbp, txn, id)
DB *dbp;
DB_TXN *txn;
db_seq_t *id;
void
__blob_calculate_dirs(blob_id, path, len, depth)
db_seq_t blob_id;
char *path;
int *len;
int *depth;
int
__blob_id_to_path(env, blob_sub_dir, blob_id, ppath)
ENV *env;
const char *blob_sub_dir;
db_seq_t blob_id;
char **ppath;
int
__blob_str_to_id(env, path, id)
ENV *env;
const char **path;
db_seq_t *id;
int
__blob_path_to_dir_ids(env, path, file_id, sdb_id)
ENV *env;
const char *path;
db_seq_t *file_id;
db_seq_t *sdb_id;
int
__blob_salvage(env, blob_id, offset, size, file_id, sdb_id, dbt)
ENV *env;
db_seq_t blob_id;
off_t offset;
size_t size;
db_seq_t file_id;
db_seq_t sdb_id;
DBT *dbt;
int
__blob_vrfy(env, blob_id, blob_size, file_id, sdb_id, pgno, flags)
ENV *env;
db_seq_t blob_id;
off_t blob_size;
db_seq_t file_id;
db_seq_t sdb_id;
db_pgno_t pgno;
u_int32_t flags;
int
__blob_del_hierarchy(env)
ENV *env;
int
__blob_del_all(dbp, txn, istruncate)
DB *dbp;
DB_TXN *txn;
int istruncate;
static int
__blob_clean_dir(env, txn, dir, subdir, istruncate)
ENV *env;
DB_TXN *txn;
const char *dir;
const char *subdir;
int istruncate;
int __blob_copy_all(dbp, target, flags)
DB *dbp;
const char *target;
u_int32_t flags;
static int
__blob_copy_dir(dbp, dir, target)
DB *dbp;
const char *dir;
const char *target;
