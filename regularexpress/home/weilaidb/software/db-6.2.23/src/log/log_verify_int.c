static int __log_vrfy_proc __P((DB_LOG_VRFY_INFO *, DB_LSN, DB_LSN,
u_int32_t, DB_TXN *, int32_t, int *));
static int __lv_ckp_vrfy_handler __P((DB_LOG_VRFY_INFO *,
VRFY_TXN_INFO *, void *));
static const char *__lv_dbreg_str __P((u_int32_t));
static int __lv_dbregid_to_dbtype __P((DB_LOG_VRFY_INFO *, int32_t, DBTYPE *));
static int __lv_dbt_str __P((const DBT *, char **));
static const char *__lv_dbtype_str __P((DBTYPE));
static u_int32_t __lv_first_offset __P((ENV *));
static int __lv_new_logfile_vrfy __P((DB_LOG_VRFY_INFO *, const DB_LSN *));
static int __lv_log_fwdscr_oncmt __P((DB_LOG_VRFY_INFO *, DB_LSN,
u_int32_t, u_int32_t, int32_t));
static int __lv_log_fwdscr_onrec __P((DB_LOG_VRFY_INFO *,
u_int32_t, u_int32_t, DB_LSN, DB_LSN));
static int __lv_log_mismatch __P((DB_LOG_VRFY_INFO *, DB_LSN, DBTYPE, DBTYPE));
static int __lv_on_bam_log __P((DB_LOG_VRFY_INFO *, DB_LSN, int32_t));
static int __lv_on_ham_log __P((DB_LOG_VRFY_INFO *, DB_LSN, int32_t));
static int __lv_on_heap_log __P((DB_LOG_VRFY_INFO *, DB_LSN, int32_t));
static int __lv_on_new_txn __P((DB_LOG_VRFY_INFO *, const DB_LSN *,
const DB_TXN *, u_int32_t, int32_t, const DBT *));
static int __lv_on_nontxn_update __P((DB_LOG_VRFY_INFO *, const DB_LSN *,
u_int32_t, u_int32_t, int32_t));
static int __lv_on_page_update __P((DB_LOG_VRFY_INFO *, DB_LSN, int32_t,
db_pgno_t, DB_TXN *, int *));
static int __lv_on_qam_log __P((DB_LOG_VRFY_INFO *, DB_LSN, int32_t));
static int __lv_on_timestamp __P((DB_LOG_VRFY_INFO *, const DB_LSN *,
int32_t, u_int32_t));
static int __lv_on_txn_aborted __P((DB_LOG_VRFY_INFO *));
static int __lv_on_txn_logrec __P((DB_LOG_VRFY_INFO *, const DB_LSN *,
const DB_LSN *, const DB_TXN *, u_int32_t, int32_t));
static int __lv_vrfy_for_dbfile __P((DB_LOG_VRFY_INFO *, int32_t, int *));
#define	ON_ERROR(lvh, errv) do  while (0)
#define	ON_NOT_SUPPORTED(env, lvh, lsn, ltype) do  while (0)
#define	SKIP_FORWARD_CHK(type) ((type) != DB___txn_regop &&		\
(type) != DB___txn_ckp && (type) != DB___fop_rename &&		\
(type) != DB___txn_child)
#define	NOTCOMMIT(type) ((type) != DB___txn_regop &&			\
(type) != DB___txn_child)
#define	LOG_VRFY_PROC(lvh, lsn, argp, fileid) do  while (0)
#define	ON_PAGE_UPDATE(lvh, lsn, argp, pgno) do  while (0)
static int
__lv_on_page_update(lvh, lsn, fileid, pgno, txnp, step)
DB_LOG_VRFY_INFO *lvh;
DB_LSN lsn;
int32_t fileid;
db_pgno_t pgno;
DB_TXN *txnp;
int *step;
#define	ON_PAGE_UPDATE4
static int
__log_vrfy_proc(lvh, lsn, prev_lsn, type, txnp, fileid, step)
DB_LOG_VRFY_INFO *lvh;
DB_LSN lsn, prev_lsn;
u_int32_t type;
DB_TXN *txnp;
int32_t fileid;
int *step;
static int
__lv_on_bam_log(lvh, lsn, fileid)
DB_LOG_VRFY_INFO *lvh;
DB_LSN lsn;
int32_t fileid;
static int
__lv_on_ham_log(lvh, lsn, fileid)
DB_LOG_VRFY_INFO *lvh;
DB_LSN lsn;
int32_t fileid;
static int
__lv_on_heap_log(lvh, lsn, fileid)
DB_LOG_VRFY_INFO *lvh;
DB_LSN lsn;
int32_t fileid;
static int
__lv_on_qam_log(lvh, lsn, fileid)
DB_LOG_VRFY_INFO *lvh;
DB_LSN lsn;
int32_t fileid;
static int
__lv_log_fwdscr_oncmt(lvinfo, lsn, txnid, ptxnid, timestamp)
DB_LOG_VRFY_INFO *lvinfo;
DB_LSN lsn;
u_int32_t txnid, ptxnid;
int32_t timestamp;
static int
__lv_log_fwdscr_onrec(lvinfo, txnid, lrtype, prevlsn, lsn)
DB_LOG_VRFY_INFO *lvinfo;
u_int32_t txnid, lrtype;
DB_LSN prevlsn, lsn;
static int
__lv_vrfy_for_dbfile(lvh, fileid, dovrfy)
DB_LOG_VRFY_INFO *lvh;
int32_t fileid;
int *dovrfy;
static int
__lv_log_mismatch(lvh, lsn, dbtype, exp_dbtype)
DB_LOG_VRFY_INFO *lvh;
DB_LSN lsn;
DBTYPE dbtype, exp_dbtype;
static int
__lv_dbregid_to_dbtype(lvh, id, ptype)
DB_LOG_VRFY_INFO *lvh;
int32_t id;
DBTYPE *ptype;
void __db_log_verify_global_report (lvinfo)
const DB_LOG_VRFY_INFO *lvinfo;
int
__crdel_metasub_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__crdel_inmem_create_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__crdel_inmem_rename_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__crdel_inmem_remove_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_addrem_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_big_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_ovref_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_relink_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_debug_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_noop_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_pg_alloc_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_pg_alloc_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_pg_free_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_pg_free_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_cksum_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_pg_freedata_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_pg_freedata_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_pg_init_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_pg_sort_44_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_pg_trunc_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_realloc_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_relink_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_merge_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__db_pgno_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
static const char *
__lv_dbreg_str(op)
u_int32_t op;
static int
__lv_dbt_str(dbt, str)
const DBT *dbt;
char **str;
static const char *
__lv_dbtype_str(dbtype)
DBTYPE dbtype;
int
__dbreg_register_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__dbreg_register_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_split_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_split_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_rsplit_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_adj_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_irep_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_cadjust_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_cdel_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_repl_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_root_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_curadj_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_rcuradj_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_relink_43_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__bam_merge_44_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_create_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_create_60_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_create_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_remove_60_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_remove_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_write_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_write_60_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_write_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_write_file_60_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_write_file_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_rename_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_rename_60_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_rename_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_file_remove_60_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__fop_file_remove_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_insdel_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_newpage_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_splitdata_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_replace_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_copypage_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_metagroup_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_metagroup_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_groupalloc_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_groupalloc_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_changeslot_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_contract_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_curadj_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__ham_chgpg_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__heap_addrem_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__heap_addrem_60_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__heap_pg_alloc_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__heap_trunc_meta_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__heap_trunc_page_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__qam_incfirst_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__qam_mvptr_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__qam_del_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__qam_add_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__qam_delext_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__txn_regop_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__txn_regop_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__txn_ckp_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__txn_ckp_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
static int
__lv_ckp_vrfy_handler(lvinfo, txninfop, param)
DB_LOG_VRFY_INFO *lvinfo;
VRFY_TXN_INFO *txninfop;
void *param;
int
__txn_child_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__txn_xa_regop_42_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__txn_prepare_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
int
__txn_recycle_verify(env, dbtp, lsnp, notused2, lvhp)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops notused2;
void *lvhp;
static int
__lv_on_timestamp(lvh, lsn, timestamp, logtype)
DB_LOG_VRFY_INFO *lvh;
const DB_LSN *lsn;
int32_t timestamp;
u_int32_t logtype;
static int
__lv_on_txn_logrec(lvh, lsnp, prev_lsnp, txnp, type, dbregid)
DB_LOG_VRFY_INFO *lvh;
const DB_LSN *lsnp;
const DB_LSN *prev_lsnp;
const DB_TXN *txnp;
u_int32_t type;
int32_t dbregid;
static int
__lv_on_new_txn (lvh, lsnp, txnp, type, dbregid, fid)
DB_LOG_VRFY_INFO *lvh;
const DB_LSN *lsnp;
const DB_TXN *txnp;
u_int32_t type;
int32_t dbregid;
const DBT *fid;
static int
__lv_new_logfile_vrfy(lvh, lsnp)
DB_LOG_VRFY_INFO *lvh;
const DB_LSN *lsnp;
static u_int32_t
__lv_first_offset(env)
ENV *env;
static int
__lv_on_nontxn_update(lvh, lsnp, txnid, logtype, fileid)
DB_LOG_VRFY_INFO *lvh;
const DB_LSN *lsnp;
u_int32_t txnid, logtype;
int32_t fileid;
static int
__lv_on_txn_aborted(lvinfo)
DB_LOG_VRFY_INFO *lvinfo;
