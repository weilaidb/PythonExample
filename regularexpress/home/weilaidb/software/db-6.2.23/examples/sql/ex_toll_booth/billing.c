#define TOLL 1.00
#define LOW_FUNDS 5.00
static int billing_filter __P((BDB_EVT_FILTER *, DB_ENV *, DB *, DBT *));
static int billing_filter(bdb_filter, evt_queue_env, evt_queue, evt)
BDB_EVT_FILTER *bdb_filter;
DB_ENV *evt_queue_env;
DB *evt_queue;
DBT *evt;
int billing_setup(bdb_filter)
BDB_EVT_FILTER *bdb_filter;
void billing_teardown(bdb_filter)
BDB_EVT_FILTER *bdb_filter;
