static int ath9k_debugfs_open(struct inode *inode, struct file *file)
static ssize_t read_file_tgt_int_stats(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_tgt_int_stats = ;
static ssize_t read_file_tgt_tx_stats(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_tgt_tx_stats = ;
static ssize_t read_file_tgt_rx_stats(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_tgt_rx_stats = ;
static ssize_t read_file_xmit(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_xmit = ;
void ath9k_htc_err_stat_rx(struct ath9k_htc_priv *priv,
struct ath_htc_rx_status *rxs)
static ssize_t read_file_recv(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_recv = ;
static ssize_t read_file_slot(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_slot = ;
static ssize_t read_file_queue(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_queue = ;
static ssize_t read_file_debug(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_debug(struct file *file, const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_debug = ;
static ssize_t read_file_base_eeprom(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_base_eeprom = ;
static ssize_t read_4k_modal_eeprom(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t read_def_modal_eeprom(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t read_9287_modal_eeprom(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t read_file_modal_eeprom(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_modal_eeprom = ;
int ath9k_htc_init_debug(struct ath_hw *ah)
