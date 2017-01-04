static int usage __P((void));
static int b_txn_write_send __P((DB_ENV *,
const DBT *, const DBT *, const DB_LSN *, int, u_int32_t));
static int
b_txn_write_send(dbenv, control, rec, lsn, eid, flags)
DB_ENV *dbenv;
const DBT *control, *rec;
const DB_LSN *lsn;
int eid;
u_int32_t flags;
int
b_txn_write(int argc, char *argv[])
static int
usage()
