static int __rep_collect_txn
__P((ENV *, DB_LSN *, LSN_COLLECTION *, DELAYED_BLOB_LIST **));
static int __rep_remove_delayed_blobs
__P((ENV *, db_seq_t, u_int32_t ,DELAYED_BLOB_LIST **));
static int __rep_do_ckp __P((ENV *, DBT *, __rep_control_args *));
static int __rep_fire_newmaster __P((ENV *, u_int32_t, int));
static int __rep_fire_startupdone __P((ENV *, u_int32_t, int));
static int __rep_getnext __P((ENV *, DB_THREAD_INFO *));
static int __rep_lsn_cmp __P((const void *, const void *));
static int __rep_newfile __P((ENV *, __rep_control_args *, DBT *));
static int __rep_process_rec __P((ENV *, DB_THREAD_INFO *, __rep_control_args *,
DBT *, db_timespec *, DB_LSN *));
static int __rep_remfirst __P((ENV *, DB_THREAD_INFO *, DBT *, DBT *));
static int __rep_skip_msg __P((ENV *, REP *, int, u_int32_t));
#define	MASTER_ONLY(rep, rp) do  while (0)
#define	CLIENT_ONLY(rep, rp) do  while (0)
#define	CLIENT_MASTERCHK do  while (0)
#define	CLIENT_REREQ do  while (0)
#define	RECOVERING_SKIP do  while (0)
#define	RECOVERING_LOG_SKIP do  while (0)
#define	ANYSITE(rep)
int
__rep_process_message_pp(dbenv, control, rec, eid, ret_lsnp)
DB_ENV *dbenv;
DBT *control, *rec;
int eid;
DB_LSN *ret_lsnp;
int
__rep_process_message_int(env, control, rec, eid, ret_lsnp)
ENV *env;
DBT *control, *rec;
int eid;
DB_LSN *ret_lsnp;
int
__rep_apply(env, ip, rp, rec, ret_lsnp, is_dupp, last_lsnp)
ENV *env;
DB_THREAD_INFO *ip;
__rep_control_args *rp;
DBT *rec;
DB_LSN *ret_lsnp;
int *is_dupp;
DB_LSN *last_lsnp;
int
__rep_process_txn(env, rec)
ENV *env;
DBT *rec;
static int
__rep_collect_txn(env, lsnp, lc, dbl)
ENV *env;
DB_LSN *lsnp;
LSN_COLLECTION *lc;
DELAYED_BLOB_LIST **dbl;
static int
__rep_remove_delayed_blobs(env, blob_file_id, child, dbl)
ENV *env;
db_seq_t blob_file_id;
u_int32_t child;
DELAYED_BLOB_LIST **dbl;
static int
__rep_lsn_cmp(lsn1, lsn2)
const void *lsn1, *lsn2;
static int
__rep_newfile(env, rp, rec)
ENV *env;
__rep_control_args *rp;
DBT *rec;
static int
__rep_do_ckp(env, rec, rp)
ENV *env;
DBT *rec;
__rep_control_args *rp;
static int
__rep_remfirst(env, ip, cntrl, rec)
ENV *env;
DB_THREAD_INFO *ip;
DBT *cntrl;
DBT *rec;
static int
__rep_getnext(env, ip)
ENV *env;
DB_THREAD_INFO *ip;
static int
__rep_process_rec(env, ip, rp, rec, ret_tsp, ret_lsnp)
ENV *env;
DB_THREAD_INFO *ip;
__rep_control_args *rp;
DBT *rec;
db_timespec *ret_tsp;
DB_LSN *ret_lsnp;
int
__rep_resend_req(env, rereq)
ENV *env;
int rereq;
int
__rep_check_doreq(env, rep)
ENV *env;
REP *rep;
static int
__rep_skip_msg(env, rep, eid, rectype)
ENV *env;
REP *rep;
int eid;
u_int32_t rectype;
int
__rep_check_missing(env, gen, master_perm_lsn)
ENV *env;
u_int32_t gen;
DB_LSN *master_perm_lsn;
static int
__rep_fire_newmaster(env, gen, master)
ENV *env;
u_int32_t gen;
int master;
static int
__rep_fire_startupdone(env, gen, master)
ENV *env;
u_int32_t gen;
int master;
