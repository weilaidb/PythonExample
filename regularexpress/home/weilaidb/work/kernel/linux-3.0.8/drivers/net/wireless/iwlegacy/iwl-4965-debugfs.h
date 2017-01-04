ssize_t iwl4965_ucode_rx_stats_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos);
ssize_t iwl4965_ucode_tx_stats_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos);
ssize_t iwl4965_ucode_general_stats_read(struct file *file,
char __user *user_buf, size_t count, loff_t *ppos);
static ssize_t
iwl4965_ucode_rx_stats_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t
iwl4965_ucode_tx_stats_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t
iwl4965_ucode_general_stats_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
