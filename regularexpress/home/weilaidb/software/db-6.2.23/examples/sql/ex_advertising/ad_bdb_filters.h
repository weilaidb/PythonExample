#define __AD_BDB_FILTERS_H
#define NUM_FILTERS 1
struct __bdb_evt_filter;	typedef struct __bdb_evt_filter BDB_EVT_FILTER;
struct __bdb_evt_filters;	typedef struct __bdb_evt_filters BDB_EVT_FILTERS;
struct __bdb_evt_filter ;
struct __bdb_evt_filters ;
int receive_events(BDB_EVT_FILTERS *filters);
int advertise_setup(BDB_EVT_FILTER *bdb_filter);
void advertise_teardown(BDB_EVT_FILTER *bdb_filter);
