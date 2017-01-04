static int priority_filter __P((BDB_MSG_FILTER *, DB_ENV *, DB *, DBT *));
static int priority_filter(bdb_filter, msg_queue_env, msg_queue, msg)
BDB_MSG_FILTER *bdb_filter;
DB_ENV *msg_queue_env;
DB *msg_queue;
DBT *msg;
int main()
