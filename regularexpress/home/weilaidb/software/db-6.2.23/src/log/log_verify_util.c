#define	BDBOP(op)	do  while (0)
#define	BDBOP2(dbenv, op, funct)	do  while (0)
#define	BDBOP3(dbenv, op, excpt, funct)	do  while (0)
typedef int (*btcmp_funct)(DB *, const DBT *, const DBT *, size_t *);
typedef int (*dupcmp_funct)(DB *, const DBT *, const DBT *, size_t *);
static int __lv_add_recycle_handler __P((
DB_LOG_VRFY_INFO *, VRFY_TXN_INFO *, void *));
static int __lv_add_recycle_lsn __P((VRFY_TXN_INFO *, const DB_LSN *));
static size_t __lv_dbt_arrsz __P((const DBT *, u_int32_t));
static int __lv_fidpgno_cmp __P((DB *, const DBT *, const DBT *, size_t *));
static int __lv_i32_cmp __P((DB *, const DBT *, const DBT *, size_t *));
static int __lv_lsn_cmp __P((DB *, const DBT *, const DBT *, size_t *));
static void __lv_on_bdbop_err __P((int));
static int __lv_open_db __P((DB_ENV *, DB **, DB_THREAD_INFO *,
const char *, int, btcmp_funct, u_int32_t, dupcmp_funct));
static int __lv_pack_filereg __P((const VRFY_FILEREG_INFO *, DBT *));
static int __lv_pack_txn_vrfy_info __P((
const VRFY_TXN_INFO *, DBT *, DBT *data));
static int __lv_seccbk_fname __P((DB *, const DBT *, const DBT *, DBT *));
static int __lv_seccbk_lsn __P((DB *, const DBT *, const DBT *, DBT *));
static int __lv_seccbk_txnpg __P((DB *, const DBT *, const DBT *, DBT *));
static void __lv_setup_logtype_names __P((DB_LOG_VRFY_INFO *lvinfo));
static int __lv_txnrgns_lsn_cmp __P((DB *, const DBT *, const DBT *, size_t *));
static int __lv_ui32_cmp __P((DB *, const DBT *, const DBT *, size_t *));
static int __lv_unpack_txn_vrfy_info __P((VRFY_TXN_INFO **, const DBT *));
static int __lv_unpack_filereg __P((const DBT *, VRFY_FILEREG_INFO **));
static void __lv_on_bdbop_err(ret)
int ret;
int
__create_log_vrfy_info(cfg, lvinfopp, ip)
const DB_LOG_VERIFY_CONFIG *cfg;
DB_LOG_VRFY_INFO **lvinfopp;
DB_THREAD_INFO *ip;
int
__destroy_log_vrfy_info(lvinfop)
DB_LOG_VRFY_INFO *lvinfop;
static int
__lv_seccbk_fname(secdb, key, data, result)
DB *secdb;
const DBT *key;
const DBT *data;
DBT *result;
static int
__lv_seccbk_txnpg(secdb, key, data, result)
DB *secdb;
const DBT *key;
const DBT *data;
DBT *result;
static int
__lv_seccbk_lsn(secdb, key, data, result)
DB *secdb;
const DBT *key;
const DBT *data;
DBT *result;
static int
__lv_open_db(dbenv, dbpp, ip, name, inmem, cmpf, sflags, dupcmpf)
DB_ENV *dbenv;
DB **dbpp;
const char *name;
int inmem;
btcmp_funct cmpf;
u_int32_t sflags;
dupcmp_funct dupcmpf;
DB_THREAD_INFO *ip;
static int
__lv_fidpgno_cmp(db, dbt1, dbt2, locp)
DB *db;
const DBT *dbt1;
const DBT *dbt2;
size_t * locp;
static int
__lv_i32_cmp(db, dbt1, dbt2, locp)
DB *db;
const DBT *dbt1;
const DBT *dbt2;
size_t *locp;
static int
__lv_ui32_cmp(db, dbt1, dbt2, locp)
DB *db;
const DBT *dbt1;
const DBT *dbt2;
size_t *locp;
static int
__lv_lsn_cmp(db, dbt1, dbt2, locp)
DB *db;
const DBT *dbt1;
const DBT *dbt2;
size_t *locp;
int
__put_txn_vrfy_info (lvinfo, txninfop)
const DB_LOG_VRFY_INFO *lvinfo;
const VRFY_TXN_INFO *txninfop;
static int
__lv_pack_txn_vrfy_info(txninfop, key, data)
const VRFY_TXN_INFO *txninfop;
DBT *key, *data;
static size_t
__lv_dbt_arrsz(arr, arrlen)
const DBT *arr;
u_int32_t arrlen;
int
__get_txn_vrfy_info (lvinfo, txnid, txninfopp)
const DB_LOG_VRFY_INFO *lvinfo;
u_int32_t txnid;
VRFY_TXN_INFO **txninfopp;
static int
__lv_unpack_txn_vrfy_info(txninfopp, data)
VRFY_TXN_INFO **txninfopp;
const DBT *data;
static int
__lv_add_recycle_lsn (txninfop, lsn)
VRFY_TXN_INFO *txninfop;
const DB_LSN *lsn;
int
__add_recycle_lsn_range(lvinfo, lsn, min, max)
DB_LOG_VRFY_INFO *lvinfo;
const DB_LSN *lsn;
u_int32_t min, max;
int
__iterate_txninfo(lvinfo, min, max, handler, param)
DB_LOG_VRFY_INFO *lvinfo;
u_int32_t min, max;
TXNINFO_HANDLER handler;
void *param;
static int
__lv_add_recycle_handler(lvinfo, txninfop, params)
DB_LOG_VRFY_INFO *lvinfo;
VRFY_TXN_INFO *txninfop;
void *params;
int
__rem_last_recycle_lsn(txninfop)
VRFY_TXN_INFO *txninfop;
int
__add_file_updated (txninfop, fileid, dbregid)
VRFY_TXN_INFO *txninfop;
const DBT *fileid;
int32_t dbregid;
int
__del_file_updated (txninfop, fileid)
VRFY_TXN_INFO *txninfop;
const DBT *fileid;
int
__clear_fileups(txninfop)
VRFY_TXN_INFO *txninfop;
int
__free_txninfo_stack (p)
VRFY_TXN_INFO *p;
int
__free_txninfo(p)
VRFY_TXN_INFO *p;
static int
__lv_pack_filereg(freginfo, data)
const VRFY_FILEREG_INFO *freginfo;
DBT *data;
int __put_filereg_info (lvinfo, freginfo)
const DB_LOG_VRFY_INFO *lvinfo;
const VRFY_FILEREG_INFO *freginfo;
int
__del_filelife(lvinfo, dbregid)
const DB_LOG_VRFY_INFO *lvinfo;
int32_t dbregid;
int
__put_filelife (lvinfo, pflife)
const DB_LOG_VRFY_INFO *lvinfo;
VRFY_FILELIFE *pflife;
int
__get_filelife (lvinfo, dbregid, flifepp)
const DB_LOG_VRFY_INFO *lvinfo;
int32_t dbregid;
VRFY_FILELIFE **flifepp;
int
__get_filereg_by_dbregid(lvinfo, dbregid, freginfopp)
const DB_LOG_VRFY_INFO *lvinfo;
int32_t dbregid;
VRFY_FILEREG_INFO **freginfopp;
int
__add_dbregid(lvh, freg, dbregid, opcode, lsn, dbtype, meta_pgno, addp)
DB_LOG_VRFY_INFO *lvh;
VRFY_FILEREG_INFO *freg;
int32_t dbregid;
u_int32_t opcode;
DB_LSN lsn;
DBTYPE dbtype;
db_pgno_t meta_pgno;
int *addp;
int
__get_filereg_info (lvinfo, fuid, freginfopp)
const DB_LOG_VRFY_INFO *lvinfo;
const DBT *fuid;
VRFY_FILEREG_INFO **freginfopp;
static int
__lv_unpack_filereg(data, freginfopp)
const DBT *data;
VRFY_FILEREG_INFO **freginfopp;
int
__free_filereg_info(p)
VRFY_FILEREG_INFO *p;
int
__get_ckp_info (lvinfo, lsn, ckpinfopp)
const DB_LOG_VRFY_INFO *lvinfo;
DB_LSN lsn;
VRFY_CKP_INFO **ckpinfopp;
int
__get_last_ckp_info (lvinfo, ckpinfopp)
const DB_LOG_VRFY_INFO *lvinfo;
VRFY_CKP_INFO **ckpinfopp;
int __put_ckp_info (lvinfo, ckpinfo)
const DB_LOG_VRFY_INFO *lvinfo;
const VRFY_CKP_INFO *ckpinfo;
int __get_timestamp_info (lvinfo, lsn, tsinfopp)
const DB_LOG_VRFY_INFO *lvinfo;
DB_LSN lsn;
VRFY_TIMESTAMP_INFO **tsinfopp;
int __get_latest_timestamp_info(lvinfo, lsn, tsinfopp)
const DB_LOG_VRFY_INFO *lvinfo;
DB_LSN lsn;
VRFY_TIMESTAMP_INFO **tsinfopp;
int __put_timestamp_info (lvinfo, tsinfo)
const DB_LOG_VRFY_INFO *lvinfo;
const VRFY_TIMESTAMP_INFO *tsinfo;
static int
__lv_txnrgns_lsn_cmp (db, d1, d2, locp)
DB *db;
const DBT *d1, *d2;
size_t *locp;
int
__find_lsnrg_by_timerg(lvinfo, begin, end, startlsn, endlsn)
DB_LOG_VRFY_INFO *lvinfo;
time_t begin, end;
DB_LSN *startlsn, *endlsn;
int __add_txnrange (lvinfo, txnid, lsn, when, ishead)
DB_LOG_VRFY_INFO *lvinfo;
u_int32_t txnid;
DB_LSN lsn;
int32_t when;
int ishead;
int
__get_aborttxn(lvinfo, lsn)
DB_LOG_VRFY_INFO *lvinfo;
DB_LSN lsn;
int
__txn_started(lvinfo, lsn, txnid, res)
DB_LOG_VRFY_INFO *lvinfo;
DB_LSN lsn;
u_int32_t txnid;
int *res;
int
__set_logvrfy_dbfuid(lvinfo)
DB_LOG_VRFY_INFO *lvinfo;
int
__add_page_to_txn (lvinfo, dbregid, pgno, txnid, otxn, result)
DB_LOG_VRFY_INFO *lvinfo;
int32_t dbregid;
db_pgno_t pgno;
u_int32_t txnid, *otxn;
int *result;
int
__del_txn_pages(lvinfo, txnid)
DB_LOG_VRFY_INFO *lvinfo;
u_int32_t txnid;
int
__is_ancestor_txn (lvinfo, ptxnid, txnid, lsn, res)
DB_LOG_VRFY_INFO *lvinfo;
u_int32_t ptxnid, txnid;
DB_LSN lsn;
int *res;
int __return_txn_pages(lvh, ctxn, ptxn)
DB_LOG_VRFY_INFO *lvh;
u_int32_t ctxn, ptxn;
#define	ADD_ITEM(lvh, logtype) ((lvh)->logtype_names[(logtype)] = (#logtype))
static void
__lv_setup_logtype_names(lvinfo)
DB_LOG_VRFY_INFO *lvinfo;
