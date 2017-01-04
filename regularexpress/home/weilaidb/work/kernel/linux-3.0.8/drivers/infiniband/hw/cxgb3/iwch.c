#define DRV_VERSION "1.1"
MODULE_AUTHOR("Boyd Faulkner, Steve Wise");
MODULE_DESCRIPTION("Chelsio T3 RDMA Driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(DRV_VERSION);
static void open_rnic_dev(struct t3cdev *);
static void close_rnic_dev(struct t3cdev *);
static void iwch_event_handler(struct t3cdev *, u32, u32);
struct cxgb3_client t3c_client = ;
static LIST_HEAD(dev_list);
static DEFINE_MUTEX(dev_mutex);
static int disable_qp_db(int id, void *p, void *data)
static int enable_qp_db(int id, void *p, void *data)
static void disable_dbs(struct iwch_dev *rnicp)
static void enable_dbs(struct iwch_dev *rnicp, int ring_db)
static void iwch_db_drop_task(struct work_struct *work)
static void rnic_init(struct iwch_dev *rnicp)
static void open_rnic_dev(struct t3cdev *tdev)
static void close_rnic_dev(struct t3cdev *tdev)
static void iwch_event_handler(struct t3cdev *tdev, u32 evt, u32 port_id)
static int __init iwch_init_module(void)
static void __exit iwch_exit_module(void)
module_init(iwch_init_module);
module_exit(iwch_exit_module);
