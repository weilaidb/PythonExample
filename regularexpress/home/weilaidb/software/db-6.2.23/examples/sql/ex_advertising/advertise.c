#define DATA_LEN 64
#define SQL_LEN 256
static int advertise_filter __P((BDB_EVT_FILTER *, DB_ENV *, DB *, DBT *));
static int advertise_filter(bdb_filter, evt_queue_env, evt_queue, evt)
BDB_EVT_FILTER *bdb_filter;
DB_ENV *evt_queue_env;
DB *evt_queue;
DBT *evt;
int advertise_setup(bdb_filter)
BDB_EVT_FILTER *bdb_filter;
void advertise_teardown(bdb_filter)
BDB_EVT_FILTER *bdb_filter;
