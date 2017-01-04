#define	FILE_CTX_INMEM_ONLY	0x01
typedef struct  FILE_LIST_CTX;
#define	FIRST_FILE_PTR(buf)	((buf) + __REP_UPDATE_SIZE)
#define	BLOB_DONE           0x01
#define	BLOB_DELETE         0x02
#define	BLOB_CHUNK_FAIL     0x04
#define	BLOB_REREQ          0x08
#define	BLOB_ID_SIZE	    sizeof(db_seq_t)
#define	BLOB_KEY_SIZE	    (2 * BLOB_ID_SIZE)
typedef int (FILE_WALK_FN) __P((ENV *, __rep_fileinfo_args *, void *));
static int __rep_add_files_to_list __P((
ENV *, const char *, const char *, FILE_LIST_CTX *, const char **, int));
static int __rep_blob_chunk_gap __P((
ENV *, int, DB_THREAD_INFO *, REP *, int *, db_seq_t, int, u_int32_t));
static int __rep_blob_cleanup __P((ENV *, REP *));
static int __rep_blobdone
__P((ENV *, int, DB_THREAD_INFO *, REP *, db_seq_t, int, u_int32_t));
static int __rep_blob_find_files __P((ENV *, DB_THREAD_INFO *, const char *,
db_seq_t *, db_seq_t, db_seq_t, db_seq_t *, DBT *, size_t *, u_int32_t *));
static int __rep_blob_sort_dirs __P((ENV *,
int (*)(const char *), char **, int, char ***, int *));
static FILE_WALK_FN __rep_check_uid;
static int __rep_clean_interrupted __P((ENV *));
static FILE_WALK_FN __rep_cleanup_nimdbs;
static int __rep_filedone __P((ENV *, DB_THREAD_INFO *ip, int,
REP *, __rep_fileinfo_args *, u_int32_t));
static int __rep_find_dbs __P((ENV *, FILE_LIST_CTX *));
static FILE_WALK_FN __rep_find_inmem;
static int __rep_get_fileinfo __P((ENV *, const char *,
const char *, __rep_fileinfo_args *, u_int8_t *));
static int __rep_get_file_list __P((ENV *,
DB_FH *, u_int32_t *, DBT *));
static int __rep_init_file_list_context __P((ENV *,
u_int32_t, u_int32_t, int, FILE_LIST_CTX *));
static int __rep_is_replicated_db __P((const char *, const char *));
static int __rep_log_setup __P((ENV *,
REP *, u_int32_t, u_int32_t, DB_LSN *));
static int __rep_mpf_open __P((ENV *, DB_MPOOLFILE **,
__rep_fileinfo_args *, u_int32_t));
static int __rep_nextfile __P((ENV *, int, REP *));
static int __rep_page_gap __P((ENV *,
REP *, __rep_fileinfo_args *, u_int32_t));
static int __rep_page_sendpages __P((ENV *, DB_THREAD_INFO *, int,
__rep_control_args *, __rep_fileinfo_args *, DB_MPOOLFILE *, DB *));
static int __rep_queue_filedone __P((ENV *,
DB_THREAD_INFO *, REP *, __rep_fileinfo_args *));
static int __rep_remove_all __P((ENV *, u_int32_t, DBT *));
static FILE_WALK_FN __rep_remove_by_list;
static int __rep_remove_by_prefix __P((ENV *, const char *, const char *,
size_t, APPNAME));
static FILE_WALK_FN __rep_remove_file;
static int __rep_remove_logs __P((ENV *));
static int __rep_remove_nimdbs __P((ENV *));
static int __rep_rollback __P((ENV *, DB_LSN *));
static int __rep_select_blob_file __P((const char *));
static int __rep_select_blob_sdb __P((const char *));
static int __rep_unlink_by_list __P((ENV *, u_int32_t,
u_int8_t *, u_int32_t, u_int32_t));
static FILE_WALK_FN __rep_unlink_file;
static int __rep_walk_blob_dir __P((ENV *, FILE_LIST_CTX*));
static int __rep_walk_filelist __P((ENV *, u_int32_t, u_int8_t *,
u_int32_t, u_int32_t, FILE_WALK_FN *, void *));
static int __rep_walk_dir __P((ENV *, const char *, const char *,
FILE_LIST_CTX*));
static int __rep_write_page __P((ENV *,
DB_THREAD_INFO *, REP *, __rep_fileinfo_args *));
int
__rep_update_req(env, rp)
ENV *env;
__rep_control_args *rp;
static int
__rep_select_blob_file(file)
const char *file;
static int
__rep_select_blob_sdb(file)
const char *file;
static int
__rep_blob_sort_dirs(env, select_fn, dirs, dirs_cnt, sorted, sorted_cnt)
ENV *env;
int (*select_fn) __P((const char *));
char **dirs;
int dirs_cnt;
char ***sorted;
int *sorted_cnt;
#define	BLOB_THROTTLE_DEFAULT	(10 * MEGABYTE)
int
__rep_blob_update_req(env, eid, ip, rec)
ENV *env;
int eid;
DB_THREAD_INFO *ip;
DBT *rec;
static int
__rep_blob_find_files(
env, ip, dir, blob_id, blob_sid, blob_fid, highest, buf, sent, num)
ENV *env;
DB_THREAD_INFO *ip;
const char *dir;
db_seq_t *blob_id;
db_seq_t blob_sid;
db_seq_t blob_fid;
db_seq_t *highest;
DBT *buf;
size_t *sent;
u_int32_t *num;
static int
__rep_find_dbs(env, context)
ENV *env;
FILE_LIST_CTX *context;
static int
__rep_walk_blob_dir(env, context)
ENV *env;
FILE_LIST_CTX *context;
static int
__rep_walk_dir(env, dir, datadir, context)
ENV *env;
const char *dir, *datadir;
FILE_LIST_CTX *context;
static int
__rep_add_files_to_list(env, dir, datadir, context, names, cnt)
ENV *env;
const char *dir, *datadir;
FILE_LIST_CTX *context;
const char **names;
int cnt;
static int
__rep_is_replicated_db(name, dir)
const char *name, *dir;
static int
__rep_check_uid(env, rfp, uid)
ENV *env;
__rep_fileinfo_args *rfp;
void *uid;
static int
__rep_get_fileinfo(env, file, subdb, rfp, uid)
ENV *env;
const char *file, *subdb;
__rep_fileinfo_args *rfp;
u_int8_t *uid;
int
__rep_page_req(env, ip, eid, rp, rec)
ENV *env;
DB_THREAD_INFO *ip;
int eid;
__rep_control_args *rp;
DBT *rec;
static int
__rep_page_sendpages(env, ip, eid, rp, msgfp, mpf, dbp)
ENV *env;
DB_THREAD_INFO *ip;
int eid;
__rep_control_args *rp;
__rep_fileinfo_args *msgfp;
DB_MPOOLFILE *mpf;
DB *dbp;
int
__rep_update_setup(env, eid, rp, rec, savetime, lsn)
ENV *env;
int eid;
__rep_control_args *rp;
DBT *rec;
time_t savetime;
DB_LSN *lsn;
int
__rep_blob_update(env, eid, ip, rec)
ENV *env;
int eid;
DB_THREAD_INFO *ip;
DBT *rec;
int
__rep_blob_allreq(env, eid, rec)
ENV *env;
int eid;
DBT *rec;
static int
__rep_find_inmem(env, rfp, unused)
ENV *env;
__rep_fileinfo_args *rfp;
void *unused;
static int
__rep_remove_nimdbs(env)
ENV *env;
static int
__rep_remove_all(env, msg_version, rec)
ENV *env;
u_int32_t msg_version;
DBT *rec;
static int
__rep_remove_logs(env)
ENV *env;
static int
__rep_remove_file(env, rfp, unused)
ENV *env;
__rep_fileinfo_args *rfp;
void *unused;
int
__rep_bulk_page(env, ip, eid, rp, rec)
ENV *env;
DB_THREAD_INFO *ip;
int eid;
__rep_control_args *rp;
DBT *rec;
int
__rep_page(env, ip, eid, rp, rec)
ENV *env;
DB_THREAD_INFO *ip;
int eid;
__rep_control_args *rp;
DBT *rec;
int
__rep_blob_chunk(env, eid, ip, rec)
ENV *env;
int eid;
DB_THREAD_INFO *ip;
DBT *rec;
static int
__rep_write_page(env, ip, rep, msgfp)
ENV *env;
DB_THREAD_INFO *ip;
REP *rep;
__rep_fileinfo_args *msgfp;
static int
__rep_page_gap(env, rep, msgfp, type)
ENV *env;
REP *rep;
__rep_fileinfo_args *msgfp;
u_int32_t type;
static int
__rep_blob_cleanup(env, rep)
ENV *env;
REP *rep;
int
__rep_init_cleanup(env, rep, force)
ENV *env;
REP *rep;
int force;
static int
__rep_cleanup_nimdbs(env, rfp, unused)
ENV *env;
__rep_fileinfo_args *rfp;
void *unused;
static int
__rep_clean_interrupted(env)
ENV *env;
static int
__rep_filedone(env, ip, eid, rep, msgfp, type)
ENV *env;
DB_THREAD_INFO *ip;
int eid;
REP *rep;
__rep_fileinfo_args *msgfp;
u_int32_t type;
static int
__rep_blobdone(env, eid, ip, rep, blob_fid, force, gapflags)
ENV *env;
int eid;
DB_THREAD_INFO *ip;
REP *rep;
db_seq_t blob_fid;
int force;
u_int32_t gapflags;
static int
__rep_blob_chunk_gap(env, eid, ip, rep, done, blob_fid, force, gapflags)
ENV *env;
int eid;
DB_THREAD_INFO *ip;
REP *rep;
int *done;
db_seq_t blob_fid;
int force;
u_int32_t gapflags;
int
__rep_blob_chunk_req(env, eid, rec)
ENV *env;
int eid;
DBT *rec;
static int
__rep_nextfile(env, eid, rep)
ENV *env;
int eid;
REP *rep;
static int
__rep_rollback(env, lsnp)
ENV *env;
DB_LSN *lsnp;
static int
__rep_mpf_open(env, mpfp, rfp, flags)
ENV *env;
DB_MPOOLFILE **mpfp;
__rep_fileinfo_args *rfp;
u_int32_t flags;
int
__rep_pggap_req(env, rep, reqfp, gapflags)
ENV *env;
REP *rep;
__rep_fileinfo_args *reqfp;
u_int32_t gapflags;
int
__rep_blob_rereq(env, rep, gapflags)
ENV *env;
REP *rep;
u_int32_t gapflags;
int
__rep_finfo_alloc(env, rfpsrc, rfpp)
ENV *env;
__rep_fileinfo_args *rfpsrc, **rfpp;
static int
__rep_log_setup(env, rep, file, version, lsnp)
ENV *env;
REP *rep;
u_int32_t file;
u_int32_t version;
DB_LSN *lsnp;
static int
__rep_queue_filedone(env, ip, rep, rfp)
ENV *env;
DB_THREAD_INFO *ip;
REP *rep;
__rep_fileinfo_args *rfp;
int
__rep_remove_init_file(env)
ENV *env;
int
__rep_reset_init(env)
ENV *env;
static int
__rep_get_file_list(env, fhp, dbtvers, dbt)
ENV *env;
DB_FH *fhp;
u_int32_t *dbtvers;
DBT *dbt;
static int
__rep_remove_by_prefix(env, dir, prefix, pref_len, appname)
ENV *env;
const char *dir;
const char *prefix;
size_t pref_len;
APPNAME appname;
static int
__rep_unlink_by_list(env, version, files, size, count)
ENV *env;
u_int32_t version;
u_int8_t *files;
u_int32_t size;
u_int32_t count;
static int
__rep_unlink_file(env, rfp, unused)
ENV *env;
__rep_fileinfo_args *rfp;
void *unused;
static int
__rep_remove_by_list(env, rfp, unused)
ENV *env;
__rep_fileinfo_args *rfp;
void *unused;
static int
__rep_walk_filelist(env, version, files, size, count, fn, arg)
ENV *env;
u_int32_t version;
u_int8_t *files;
u_int32_t size;
u_int32_t count;
FILE_WALK_FN *fn;
void *arg;
static int
__rep_init_file_list_context(env, version, flags, update_space, context)
ENV *env;
u_int32_t version;
u_int32_t flags;
int update_space;
FILE_LIST_CTX *context;
