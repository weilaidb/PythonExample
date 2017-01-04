static int __db_cursor_check_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __db_cursor_check __P((DB *));
int
__db_truncate_pp(dbp, txn, countp, flags)
DB *dbp;
DB_TXN *txn;
u_int32_t *countp, flags;
int
__db_truncate(dbp, ip, txn, countp)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
u_int32_t *countp;
static int
__db_cursor_check_func(dbc, my_dbc, foundp, pgno, indx, args)
DBC *dbc, *my_dbc;
u_int32_t *foundp;
db_pgno_t pgno;
u_int32_t indx;
void *args;
static int
__db_cursor_check(dbp)
DB *dbp;
