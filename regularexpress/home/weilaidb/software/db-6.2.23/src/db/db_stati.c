static int __db_print_all __P((DB *, u_int32_t));
static int __db_print_citem __P((DBC *));
static int __db_print_cursor __P((DB *));
static int __db_print_stats __P((DB *, DB_THREAD_INFO *, u_int32_t));
static int __db_stat __P((DB *, DB_THREAD_INFO *, DB_TXN *, void *, u_int32_t));
static int __db_stat_arg __P((DB *, u_int32_t));
int
__db_stat_pp(dbp, txn, spp, flags)
DB *dbp;
DB_TXN *txn;
void *spp;
u_int32_t flags;
static int
__db_stat(dbp, ip, txn, spp, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
void *spp;
u_int32_t flags;
static int
__db_stat_arg(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__db_stat_print_pp(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__db_stat_print(dbp, ip, flags)
DB *dbp;
DB_THREAD_INFO *ip;
u_int32_t flags;
static int
__db_print_stats(dbp, ip, flags)
DB *dbp;
DB_THREAD_INFO *ip;
u_int32_t flags;
static int
__db_print_all(dbp, flags)
DB *dbp;
u_int32_t flags;
static int
__db_print_cursor(dbp)
DB *dbp;
static int
__db_print_citem(dbc)
DBC *dbc;
int
__db_stat_pp(dbp, txn, spp, flags)
DB *dbp;
DB_TXN *txn;
void *spp;
u_int32_t flags;
int
__db_stat_print_pp(dbp, flags)
DB *dbp;
u_int32_t flags;
