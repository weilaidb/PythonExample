struct workqueue_struct *rds_wq;
EXPORT_SYMBOL_GPL(rds_wq);
void rds_connect_complete(struct rds_connection *conn)
EXPORT_SYMBOL_GPL(rds_connect_complete);
void rds_queue_reconnect(struct rds_connection *conn)
void rds_connect_worker(struct work_struct *work)
void rds_send_worker(struct work_struct *work)
void rds_recv_worker(struct work_struct *work)
void rds_shutdown_worker(struct work_struct *work)
void rds_threads_exit(void)
int rds_threads_init(void)
