static int __db_free_freelist __P((DB *, DB_THREAD_INFO *, DB_TXN *));
static int __db_setup_freelist __P((DB *, db_pglist_t *, u_int32_t));
#define	SAVE_START							\
do  while (0)
#define	RESTORE_START							\
do  while (0)
int
__db_compact_int(dbp, ip, txn, start, stop, c_data, flags, end)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DBT *start, *stop;
DB_COMPACT *c_data;
u_int32_t flags;
DBT *end;
static int
__db_setup_freelist(dbp, list, nelems)
DB *dbp;
db_pglist_t *list;
u_int32_t nelems;
static int
__db_free_freelist(dbp, ip, txn)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
int
__db_exchange_page(dbc, pgp, opg, newpgno, flags, pgs_donep)
DBC *dbc;
PAGE **pgp, *opg;
db_pgno_t newpgno;
int flags;
int *pgs_donep;
int
__db_truncate_overflow(dbc, pgno, ppg, c_data, pgs_donep)
DBC *dbc;
db_pgno_t pgno;
PAGE **ppg;
DB_COMPACT *c_data;
int *pgs_donep;
int
__db_truncate_root(dbc, ppg, indx, pgnop, tlen, pgs_donep)
DBC *dbc;
PAGE *ppg;
u_int32_t indx;
db_pgno_t *pgnop;
u_int32_t tlen;
int *pgs_donep;
int
__db_find_free(dbc, type, size, bstart, freep)
DBC *dbc;
u_int32_t type;
u_int32_t size;
db_pgno_t bstart, *freep;
int
__db_relink(dbc, pagep, otherp, new_pgno)
DBC *dbc;
PAGE *pagep, *otherp;
db_pgno_t new_pgno;
int
__db_move_metadata(dbc, metap, c_data, pgs_donep)
DBC *dbc;
DBMETA **metap;
DB_COMPACT *c_data;
int *pgs_donep;
