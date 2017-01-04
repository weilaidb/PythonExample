#define MAX_NUMDB	4
static char *db_names[] = ;
static int verbose = 1;
static int verbose = 0;
DB *dbs[MAX_NUMDB];
int sync_clients(int num, int num_clients, int call, int test_num);
int pr_callback(void *handle, const void *str_arg);
int init_xa_server(int num_db, const char *progname, int use_mvcc);
void close_xa_server(int num_db, const char *progname);
int check_data(DB_ENV *dbenv1, const char *name1, DB_ENV *dbenv2,
const char *name2, const char *progname);
