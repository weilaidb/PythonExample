enum ;
static DEFINE_SPINLOCK(catas_lock);
static LIST_HEAD(catas_list);
static struct work_struct catas_work;
static int internal_err_reset = 1;
module_param(internal_err_reset, int, 0644);
MODULE_PARM_DESC(internal_err_reset,
"Reset device on internal errors if non-zero (default 1)");
static void dump_err_buf(struct mlx4_dev *dev)
static void poll_catas(unsigned long dev_ptr)
static void catas_reset(struct work_struct *work)
void mlx4_start_catas_poll(struct mlx4_dev *dev)
void mlx4_stop_catas_poll(struct mlx4_dev *dev)
void  __init mlx4_catas_init(void)
