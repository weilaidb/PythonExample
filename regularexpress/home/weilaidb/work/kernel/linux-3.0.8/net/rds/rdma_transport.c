static struct rdma_cm_id *rds_rdma_listen_id;
static char *rds_cm_event_strings[] = ;
static char *rds_cm_event_str(enum rdma_cm_event_type type)
;
int rds_rdma_cm_event_handler(struct rdma_cm_id *cm_id,
struct rdma_cm_event *event)
static int rds_rdma_listen_init(void)
static void rds_rdma_listen_stop(void)
static int rds_rdma_init(void)
module_init(rds_rdma_init);
static void rds_rdma_exit(void)
module_exit(rds_rdma_exit);
MODULE_AUTHOR("Oracle Corporation <rds-devel@oss.oracle.com>");
MODULE_DESCRIPTION("RDS: IB/iWARP transport");
MODULE_LICENSE("Dual BSD/GPL");
