static const char *fmt_value = "  %-30s %10u\n";
static const char *fmt_table = "  %-30s %10u  %10u  %10u  %10u\n";
static const char *fmt_header =
"%-32s    current  cumulative       delta         max\n";
static int iwl4965_statistics_flag(struct iwl_priv *priv, char *buf, int bufsz)
ssize_t iwl4965_ucode_rx_stats_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
ssize_t iwl4965_ucode_tx_stats_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
ssize_t
iwl4965_ucode_general_stats_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
