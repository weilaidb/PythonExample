static int firewall_filter __P((BDB_MSG_FILTER *, DB_ENV *, DB *, DBT *));
static int blocked_count;
static int firewall_filter(bdb_filter, msg_queue_env, msg_queue, msg)
BDB_MSG_FILTER *bdb_filter;
DB_ENV *msg_queue_env;
DB *msg_queue;
DBT *msg;
static int open_blocked_sites_db(dbenv, db, db_name)
DB_ENV *dbenv;
DB **db;
const char *db_name;
int main()
