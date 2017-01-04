#define SEC_IN_A_HOUR 3600
#define HEAVY_TRAFFIC_THRESHOLD 1800
static int traffic_filter __P((BDB_EVT_FILTER *, DB_ENV *, DB *, DBT *));
static int traffic_filter(bdb_filter, evt_queue_env, evt_queue, evt)
BDB_EVT_FILTER *bdb_filter;
DB_ENV *evt_queue_env;
DB *evt_queue;
DBT *evt;
int traffic_setup(bdb_filter)
BDB_EVT_FILTER *bdb_filter;
void traffic_teardown(bdb_filter)
BDB_EVT_FILTER *bdb_filter;
