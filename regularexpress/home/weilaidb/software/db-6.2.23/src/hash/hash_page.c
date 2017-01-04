static int __hamc_delpg
__P((DBC *, db_pgno_t, db_pgno_t, u_int32_t, db_ham_mode, u_int32_t *));
static int __ham_getindex_sorted
__P((DBC *, PAGE *, const DBT *, u_int32_t, int *, db_indx_t *));
static int __ham_getindex_unsorted
__P((DBC *, PAGE *, const DBT *, int *, db_indx_t *));
static int __hamc_delpg_getorder
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __hamc_delpg_setorder
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
int
__ham_item(dbc, mode, pgnop)
DBC *dbc;
db_lockmode_t mode;
db_pgno_t *pgnop;
int
__ham_item_reset(dbc)
DBC *dbc;
int
__ham_item_init(dbc)
DBC *dbc;
int
__ham_item_last(dbc, mode, pgnop)
DBC *dbc;
db_lockmode_t mode;
db_pgno_t *pgnop;
int
__ham_item_first(dbc, mode, pgnop)
DBC *dbc;
db_lockmode_t mode;
db_pgno_t *pgnop;
int
__ham_item_prev(dbc, mode, pgnop)
DBC *dbc;
db_lockmode_t mode;
db_pgno_t *pgnop;
int
__ham_item_next(dbc, mode, pgnop)
DBC *dbc;
db_lockmode_t mode;
db_pgno_t *pgnop;
int
__ham_insertpair(dbc, p, indxp, key_dbt, data_dbt, key_type, data_type)
DBC *dbc;
PAGE *p;
db_indx_t *indxp;
const DBT *key_dbt, *data_dbt;
u_int32_t key_type, data_type;
int
__ham_getindex(dbc, p, key, key_type, match, indx)
DBC *dbc;
PAGE *p;
const DBT *key;
u_int32_t key_type;
int *match;
db_indx_t *indx;
#undef	min
#define	min(a, b) (((a) < (b)) ? (a) : (b))
static int
__ham_getindex_unsorted(dbc, p, key, match, indx)
DBC *dbc;
PAGE *p;
const DBT *key;
int *match;
db_indx_t *indx;
static int
__ham_getindex_sorted(dbc, p, key, key_type, match, indxp)
DBC *dbc;
PAGE *p;
const DBT *key;
u_int32_t key_type;
int *match;
db_indx_t *indxp;
int
__ham_verify_sorted_page (dbc, p)
DBC *dbc;
PAGE *p;
int
__ham_sort_page_cursor(dbc, page)
DBC *dbc;
PAGE *page;
int
__ham_sort_page(dbc, tmp_buf, page)
DBC *dbc;
PAGE **tmp_buf;
PAGE *page;
int
__ham_del_pair(dbc, flags, ppg)
DBC *dbc;
int flags;
PAGE *ppg;
int
__ham_replpair(dbc, dbt, newtype)
DBC *dbc;
DBT *dbt;
u_int32_t newtype;
void
__ham_onpage_replace(dbp, pagep, ndx, off, change, is_plus, dbt)
DB *dbp;
PAGE *pagep;
u_int32_t ndx;
int32_t off;
u_int32_t change;
int is_plus;
DBT *dbt;
int
__ham_merge_pages(dbc, tobucket, frombucket, c_data)
DBC *dbc;
u_int32_t tobucket, frombucket;
DB_COMPACT *c_data;
int
__ham_split_page(dbc, obucket, nbucket)
DBC *dbc;
u_int32_t obucket, nbucket;
int
__ham_add_el(dbc, key, val, type)
DBC *dbc;
const DBT *key, *val;
u_int32_t type;
int
__ham_copypair(dbc, src_page, src_ndx, dest_page, dest_indx, log)
DBC *dbc;
PAGE *src_page;
u_int32_t src_ndx;
PAGE *dest_page;
db_indx_t *dest_indx;
int log;
int
__ham_add_ovflpage(dbc, pp)
DBC *dbc;
PAGE **pp;
int
__ham_get_cpage(dbc, mode)
DBC *dbc;
db_lockmode_t mode;
int
__ham_next_cpage(dbc, pgno)
DBC *dbc;
db_pgno_t pgno;
int
__ham_lock_bucket(dbc, mode)
DBC *dbc;
db_lockmode_t mode;
void
__ham_dpair(dbp, p, indx)
DB *dbp;
PAGE *p;
u_int32_t indx;
static int
__hamc_delpg_getorder(cp, my_dbc, orderp, new_pgno, indx, args)
DBC *cp, *my_dbc;
u_int32_t *orderp;
db_pgno_t new_pgno;
u_int32_t indx;
void *args;
struct __hamc_delpg_setorder_args ;
static int
__hamc_delpg_setorder(cp, my_dbc, foundp, old_pgno, indx, vargs)
DBC *cp, *my_dbc;
u_int32_t *foundp;
db_pgno_t old_pgno;
u_int32_t indx;
void *vargs;
static int
__hamc_delpg(dbc, old_pgno, new_pgno, num_ent, op, orderp)
DBC *dbc;
db_pgno_t old_pgno, new_pgno;
u_int32_t num_ent;
db_ham_mode op;
u_int32_t *orderp;
