static struct  iwm_debug_module[__IWM_DM_NR] = ;
#define add_dbg_module(dbg, name, id, initlevel) 	\
do  while (0)
static int iwm_debugfs_u32_read(void *data, u64 *val)
static int iwm_debugfs_dbg_level_write(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(fops_iwm_dbg_level,
iwm_debugfs_u32_read, iwm_debugfs_dbg_level_write,
"%llu\n");
static int iwm_debugfs_dbg_modules_write(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(fops_iwm_dbg_modules,
iwm_debugfs_u32_read, iwm_debugfs_dbg_modules_write,
"%llu\n");
static int iwm_generic_open(struct inode *inode, struct file *filp)
static ssize_t iwm_debugfs_txq_read(struct file *filp, char __user *buffer,
size_t count, loff_t *ppos)
static ssize_t iwm_debugfs_tx_credit_read(struct file *filp,
char __user *buffer,
size_t count, loff_t *ppos)
static ssize_t iwm_debugfs_rx_ticket_read(struct file *filp,
char __user *buffer,
size_t count, loff_t *ppos)
static ssize_t iwm_debugfs_fw_err_read(struct file *filp,
char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations iwm_debugfs_txq_fops = ;
static const struct file_operations iwm_debugfs_tx_credit_fops = ;
static const struct file_operations iwm_debugfs_rx_ticket_fops = ;
static const struct file_operations iwm_debugfs_fw_err_fops = ;
void iwm_debugfs_init(struct iwm_priv *iwm)
void iwm_debugfs_exit(struct iwm_priv *iwm)
