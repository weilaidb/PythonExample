#define __FIREWALL_BDB_FILTERS_H
struct __bdb_msg_filter;	typedef struct __bdb_msg_filter BDB_MSG_FILTER;
struct __bdb_msg_filters;	typedef struct __bdb_msg_filters BDB_MSG_FILTERS;
struct __bdb_msg_filter ;
struct __bdb_msg_filters ;
int receive_messages(BDB_MSG_FILTERS *filters);
