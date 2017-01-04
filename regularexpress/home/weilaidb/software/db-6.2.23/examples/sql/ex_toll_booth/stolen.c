static int stolen_filter __P((BDB_EVT_FILTER *, DB_ENV *, DB *, DBT *));
static int stolen_filter(bdb_filter, evt_queue_env, evt_queue, evt)
BDB_EVT_FILTER *bdb_filter;
DB_ENV *evt_queue_env;
DB *evt_queue;
DBT *evt;
int stolen_setup(bdb_filter)
BDB_EVT_FILTER *bdb_filter;
void stolen_teardown(bdb_filter)
BDB_EVT_FILTER *bdb_filter;
