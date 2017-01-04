static unsigned int fmr_pool_size = RDS_FMR_POOL_SIZE;
unsigned int fmr_message_size = RDS_FMR_SIZE + 1;
unsigned int rds_ib_retry_count = RDS_IB_DEFAULT_RETRY_COUNT;
module_param(fmr_pool_size, int, 0444);
MODULE_PARM_DESC(fmr_pool_size, " Max number of fmr per HCA");
module_param(fmr_message_size, int, 0444);
MODULE_PARM_DESC(fmr_message_size, " Max size of a RDMA transfer");
module_param(rds_ib_retry_count, int, 0444);
MODULE_PARM_DESC(rds_ib_retry_count, " Number of hw retries before reporting an error");
DECLARE_RWSEM(rds_ib_devices_lock);
struct list_head rds_ib_devices;
DEFINE_SPINLOCK(ib_nodev_conns_lock);
LIST_HEAD(ib_nodev_conns);
static void rds_ib_nodev_connect(void)
static void rds_ib_dev_shutdown(struct rds_ib_device *rds_ibdev)
static void rds_ib_dev_free(struct work_struct *work)
void rds_ib_dev_put(struct rds_ib_device *rds_ibdev)
static void rds_ib_add_one(struct ib_device *device)
struct rds_ib_device *rds_ib_get_client_data(struct ib_device *device)
static void rds_ib_remove_one(struct ib_device *device)
struct ib_client rds_ib_client = ;
static int rds_ib_conn_info_visitor(struct rds_connection *conn,
void *buffer)
static void rds_ib_ic_info(struct socket *sock, unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens)
static int rds_ib_laddr_check(__be32 addr)
static void rds_ib_unregister_client(void)
void rds_ib_exit(void)
struct rds_transport rds_ib_transport = ;
int rds_ib_init(void)
MODULE_LICENSE("GPL");
