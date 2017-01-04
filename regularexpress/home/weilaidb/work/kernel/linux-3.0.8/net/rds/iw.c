unsigned int fastreg_pool_size = RDS_FASTREG_POOL_SIZE;
unsigned int fastreg_message_size = RDS_FASTREG_SIZE + 1;
module_param(fastreg_pool_size, int, 0444);
MODULE_PARM_DESC(fastreg_pool_size, " Max number of fastreg MRs per device");
module_param(fastreg_message_size, int, 0444);
MODULE_PARM_DESC(fastreg_message_size, " Max size of a RDMA transfer (fastreg MRs)");
struct list_head rds_iw_devices;
DEFINE_SPINLOCK(iw_nodev_conns_lock);
LIST_HEAD(iw_nodev_conns);
static void rds_iw_add_one(struct ib_device *device)
static void rds_iw_remove_one(struct ib_device *device)
struct ib_client rds_iw_client = ;
static int rds_iw_conn_info_visitor(struct rds_connection *conn,
void *buffer)
static void rds_iw_ic_info(struct socket *sock, unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens)
static int rds_iw_laddr_check(__be32 addr)
void rds_iw_exit(void)
struct rds_transport rds_iw_transport = ;
int rds_iw_init(void)
MODULE_LICENSE("GPL");
