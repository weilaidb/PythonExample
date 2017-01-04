static int __dbreg_check_master __P((ENV *, u_int8_t *, char *));
int
__dbreg_add_dbentry(env, dblp, dbp, ndx)
ENV *env;
DB_LOG *dblp;
DB *dbp;
int32_t ndx;
int
__dbreg_rem_dbentry(dblp, ndx)
DB_LOG *dblp;
int32_t ndx;
int
__dbreg_log_files(env, opcode)
ENV *env;
u_int32_t opcode;
int
__dbreg_log_nofiles(env)
ENV *env;
int
__dbreg_close_files(env, do_restored)
ENV *env;
int do_restored;
int
__dbreg_close_file(env, fnp)
ENV *env;
FNAME *fnp;
int
__dbreg_mark_restored(env)
ENV *env;
int
__dbreg_invalidate_files(env, do_restored)
ENV *env;
int do_restored;
int
__dbreg_id_to_db(env, txn, dbpp, ndx, tryopen)
ENV *env;
DB_TXN *txn;
DB **dbpp;
int32_t ndx;
int tryopen;
int
__dbreg_id_to_fname(dblp, id, have_lock, fnamep)
DB_LOG *dblp;
int32_t id;
int have_lock;
FNAME **fnamep;
int
__dbreg_fid_to_fname(dblp, fid, have_lock, fnamep)
DB_LOG *dblp;
u_int8_t *fid;
int have_lock;
FNAME **fnamep;
int
__dbreg_blob_file_to_fname(dblp, blob_file_id, have_lock, fnamep)
DB_LOG *dblp;
db_seq_t blob_file_id;
int have_lock;
FNAME **fnamep;
int
__dbreg_get_name(env, fid, fnamep, dnamep)
ENV *env;
u_int8_t *fid;
char **fnamep, **dnamep;
int
__dbreg_do_open(env, txn,
dblp, uid, name, ftype, ndx, meta_pgno, info, id, opcode, blob_file_id)
ENV *env;
DB_TXN *txn;
DB_LOG *dblp;
u_int8_t *uid;
char *name;
DBTYPE ftype;
int32_t ndx;
db_pgno_t meta_pgno;
void *info;
u_int32_t id, opcode;
db_seq_t blob_file_id;
static int
__dbreg_check_master(env, uid, name)
ENV *env;
u_int8_t *uid;
char *name;
int
__dbreg_lazy_id(dbp)
DB *dbp;
