enum ;
static DEFINE_SPINLOCK(catas_lock);
static LIST_HEAD(catas_list);
static struct workqueue_struct *catas_wq;
static struct work_struct catas_work;
static int catas_reset_disable;
module_param_named(catas_reset_disable, catas_reset_disable, int, 0644);
MODULE_PARM_DESC(catas_reset_disable, "disable reset on catastrophic event if nonzero");
static void catas_reset(struct work_struct *work)
static void handle_catas(struct mthca_dev *dev)
static void poll_catas(unsigned long dev_ptr)
void mthca_start_catas_poll(struct mthca_dev *dev)
void mthca_stop_catas_poll(struct mthca_dev *dev)
int __init mthca_catas_init(void)
void mthca_catas_cleanup(void)
