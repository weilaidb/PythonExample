#define	QAM_EXNAME(Q, I, B, L)						\
snprintf((B), (L),						\
QUEUE_EXTENT, (Q)->dir, PATH_SEPARATOR[0], (Q)->name, (I))
int
__qam_fprobe(dbc, pgno, addrp, mode, priority, flags)
DBC *dbc;
db_pgno_t pgno;
void *addrp;
qam_probe_mode mode;
DB_CACHE_PRIORITY priority;
u_int32_t flags;
int
__qam_fclose(dbp, pgnoaddr)
DB *dbp;
db_pgno_t pgnoaddr;
int
__qam_fremove(dbp, pgnoaddr)
DB *dbp;
db_pgno_t pgnoaddr;
int
__qam_sync(dbp)
DB *dbp;
int
__qam_gen_filelist(dbp, ip, filelistp)
DB *dbp;
DB_THREAD_INFO *ip;
QUEUE_FILELIST **filelistp;
int
__qam_extent_names(env, name, namelistp)
ENV *env;
char *name;
char ***namelistp;
void
__qam_exid(dbp, fidp, exnum)
DB *dbp;
u_int8_t *fidp;
u_int32_t exnum;
int
__qam_nameop(dbp, txn, newname, op)
DB *dbp;
DB_TXN *txn;
const char *newname;
qam_name_op op;
int
__qam_lsn_reset(dbp, ip)
DB *dbp;
DB_THREAD_INFO *ip;
int
__qam_backup_extents(dbp, ip, target, flags)
DB *dbp;
DB_THREAD_INFO *ip;
const char *target;
u_int32_t flags;
