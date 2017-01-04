static int __ham_copy_data __P((DBC *, PAGE *, DB_COMPACT *, int *));
static int __ham_truncate_overflow __P((DBC *, u_int32_t, DB_COMPACT *, int *));
int
__ham_compact_int(dbc, start, stop, factor, c_data, donep, flags)
DBC *dbc;
DBT *start, *stop;
u_int32_t factor;
DB_COMPACT *c_data;
int *donep;
u_int32_t flags;
int
__ham_compact_bucket(dbc, c_data, pgs_donep)
DBC *dbc;
DB_COMPACT *c_data;
int *pgs_donep;
static int
__ham_copy_data(dbc, pg, c_data, pgs_donep)
DBC *dbc;
PAGE *pg;
DB_COMPACT *c_data;
int *pgs_donep;
static int
__ham_truncate_overflow(dbc, indx, c_data, pgs_done)
DBC *dbc;
u_int32_t indx;
DB_COMPACT *c_data;
int *pgs_done;
int
__ham_compact_hash(dbp, ip, txn, c_data)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_COMPACT *c_data;
