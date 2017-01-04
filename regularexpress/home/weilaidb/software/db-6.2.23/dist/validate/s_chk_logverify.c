static int put_get_cmp_ckp __P((DB_LOG_VRFY_INFO *, VRFY_CKP_INFO *,
DB_LSN));
static int put_get_cmp_ts __P((DB_LOG_VRFY_INFO *, VRFY_TIMESTAMP_INFO *,
DB_LSN));
static int put_get_cmp_freg __P((DB_LOG_VRFY_INFO *, VRFY_FILEREG_INFO *,
const DBT *));
static int put_get_cmp __P((DB_LOG_VRFY_INFO *, VRFY_TXN_INFO *, u_int32_t));
static int dbt_cmp __P((const DBT *, const DBT *));
static int dbtarr_cmp __P((const DBT *, const DBT *, u_int32_t));
int
main(argc, argv)
int argc;
char **argv;
static int
put_get_cmp_ckp(lvinfop, ckp, lsn)
DB_LOG_VRFY_INFO *lvinfop;
VRFY_CKP_INFO *ckp;
DB_LSN lsn;
static int
put_get_cmp_ts(lvinfop, ts, lsn)
DB_LOG_VRFY_INFO *lvinfop;
VRFY_TIMESTAMP_INFO *ts;
DB_LSN lsn;
static int
put_get_cmp_freg(lvinfop, freg, fid)
DB_LOG_VRFY_INFO *lvinfop;
VRFY_FILEREG_INFO *freg;
const DBT *fid;
static int
dbt_cmp(d1, d2)
const DBT *d1;
const DBT *d2;
static int
dbtarr_cmp(a1, a2, len)
const DBT *a1;
const DBT *a2;
u_int32_t len;
static int
put_get_cmp(lvinfop, txninfo, tid)
DB_LOG_VRFY_INFO *lvinfop;
VRFY_TXN_INFO *txninfo;
u_int32_t tid;
