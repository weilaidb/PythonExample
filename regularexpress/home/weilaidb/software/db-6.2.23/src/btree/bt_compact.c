static int __bam_compact_dups __P((DBC *,
PAGE **, u_int32_t, int, DB_COMPACT *, int *));
static int __bam_compact_isdone __P((DBC *, DBT *, PAGE *, int *));
static int __bam_csearch __P((DBC *, DBT *, u_int32_t, int));
static int __bam_lock_tree __P((DBC *, EPG *, EPG *csp, u_int32_t, u_int32_t));
static int __bam_lock_subtree __P((DBC *, PAGE *, u_int32_t, u_int32_t));
static int __bam_merge __P((DBC *,
DBC *,  u_int32_t, DBT *, DB_COMPACT *, int *, int *));
static int __bam_merge_internal __P((DBC *,
DBC *, int, DB_COMPACT *, int *, int *));
static int __bam_merge_pages __P((DBC *, DBC *, DB_COMPACT *));
static int __bam_merge_records __P((DBC *,
DBC *,  u_int32_t, DB_COMPACT *, int *));
static int __bam_truncate_internal_overflow __P((DBC *,
PAGE *, DB_COMPACT *, int *));
static int __bam_truncate_root_page __P((DBC *,
PAGE *, u_int32_t, DB_COMPACT *, int *));
static int __bam_savekey __P((DBC *, int, DBT *));
#define	CS_READ	0
#define	CS_PARENT	1
#define	CS_NEXT		2
#define	CS_NEXT_WRITE	3
#define	CS_DEL		4
#define	CS_START	5
#define	CS_NEXT_BOTH	6
#define	CS_GETRECNO     0x80
static int
__bam_csearch(dbc, start, sflag, level)
DBC *dbc;
DBT *start;
u_int32_t sflag;
int level;
int
__bam_compact_int(dbc, start, stop, factor, spanp, c_data, isdonep)
DBC *dbc;
DBT *start, *stop;
u_int32_t factor;
int *spanp;
DB_COMPACT *c_data;
int *isdonep;
static int
__bam_merge(dbc, ndbc, factor, stop, c_data, isdonep, pgs_donep)
DBC *dbc, *ndbc;
u_int32_t factor;
DBT *stop;
DB_COMPACT *c_data;
int *isdonep;
int *pgs_donep;
static int
__bam_merge_records(dbc, ndbc, factor, c_data, pgs_donep)
DBC *dbc, *ndbc;
u_int32_t factor;
DB_COMPACT *c_data;
int *pgs_donep;
static int
__bam_merge_pages(dbc, ndbc, c_data)
DBC *dbc, *ndbc;
DB_COMPACT *c_data;
static int
__bam_merge_internal(dbc, ndbc, level, c_data, merged, pgs_donep)
DBC *dbc, *ndbc;
int level;
DB_COMPACT *c_data;
int *merged;
int *pgs_donep;
static int
__bam_compact_dups(dbc, ppg, factor, have_lock, c_data, pgs_donep)
DBC *dbc;
PAGE **ppg;
u_int32_t factor;
int have_lock;
DB_COMPACT *c_data;
int *pgs_donep;
int
__bam_compact_opd(dbc, root_pgno, ppg, factor, c_data, pgs_donep)
DBC *dbc;
db_pgno_t root_pgno;
PAGE **ppg;
u_int32_t factor;
DB_COMPACT *c_data;
int *pgs_donep;
static int
__bam_truncate_root_page(dbc, pg, indx, c_data, pgs_donep)
DBC *dbc;
PAGE *pg;
u_int32_t indx;
DB_COMPACT *c_data;
int *pgs_donep;
static int
__bam_truncate_internal_overflow(dbc, page, c_data, pgs_donep)
DBC *dbc;
PAGE *page;
DB_COMPACT *c_data;
int *pgs_donep;
static int
__bam_compact_isdone(dbc, stop, pg, isdone)
DBC *dbc;
DBT *stop;
PAGE *pg;
int *isdone;
static int
__bam_lock_tree(dbc, sp, csp, start, stop)
DBC *dbc;
EPG *sp, *csp;
u_int32_t start, stop;
static int
__bam_lock_subtree(dbc, page, indx, stop)
DBC *dbc;
PAGE *page;
u_int32_t indx, stop;
static int
__bam_savekey(dbc, next, start)
DBC *dbc;
int next;
DBT *start;
int
__bam_truncate_ipages(dbp, ip, txn, c_data, pgs_donep)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_COMPACT *c_data;
int *pgs_donep;
