int receive_msgs(dbenv, msg_queue, filters)
DB_ENV *dbenv;
DB *msg_queue;
BDB_MSG_FILTERS *filters;
int receive_messages(filters)
BDB_MSG_FILTERS *filters;
