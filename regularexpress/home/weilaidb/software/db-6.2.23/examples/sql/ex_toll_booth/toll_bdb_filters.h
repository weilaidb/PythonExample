#define __TOLL_BDB_FILTERS_H
#define NUM_FILTERS 3
struct __bdb_evt_filter;	typedef struct __bdb_evt_filter BDB_EVT_FILTER;
struct __bdb_evt_filters;	typedef struct __bdb_evt_filters BDB_EVT_FILTERS;
struct __bdb_evt_filter ;
struct __bdb_evt_filters ;
int receive_events(BDB_EVT_FILTERS *filters);
int stolen(BDB_EVT_FILTER *bdb_filter, DB_ENV *evt_queue_env, DB *evt_queue, DBT *evt);
int billing(BDB_EVT_FILTER *bdb_filter, DB_ENV *evt_queue_env, DB *evt_queue, DBT *evt);
int traffic(BDB_EVT_FILTER *bdb_filter, DB_ENV *evt_queue_env, DB *evt_queue, DBT *evt);
int stolen_setup(BDB_EVT_FILTER *bdb_filter);
int billing_setup(BDB_EVT_FILTER *bdb_filter);
int traffic_setup(BDB_EVT_FILTER *bdb_filter);
void stolen_teardown(BDB_EVT_FILTER *bdb_filter);
void billing_teardown(BDB_EVT_FILTER *bdb_filter);
void traffic_teardown(BDB_EVT_FILTER *bdb_filter);
