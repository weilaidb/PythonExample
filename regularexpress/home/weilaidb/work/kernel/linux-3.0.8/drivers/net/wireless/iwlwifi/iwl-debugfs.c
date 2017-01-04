#define DEBUGFS_ADD_FILE(name, parent, mode) do  while (0)
#define DEBUGFS_ADD_BOOL(name, parent, ptr) do  while (0)
#define DEBUGFS_ADD_X32(name, parent, ptr) do  while (0)
#define DEBUGFS_READ_FUNC(name)                                         \
static ssize_t iwl_dbgfs_##name##_read(struct file *file,               \
char __user *user_buf,          \
size_t count, loff_t *ppos);
#define DEBUGFS_WRITE_FUNC(name)                                        \
static ssize_t iwl_dbgfs_##name##_write(struct file *file,              \
const char __user *user_buf,    \
size_t count, loff_t *ppos);
static int iwl_dbgfs_open_file_generic(struct inode *inode, struct file *file)
#define DEBUGFS_READ_FILE_OPS(name)                                     \
DEBUGFS_READ_FUNC(name);                                        \
static const struct file_operations iwl_dbgfs_##name##_ops = ;
#define DEBUGFS_WRITE_FILE_OPS(name)                                    \
DEBUGFS_WRITE_FUNC(name);                                       \
static const struct file_operations iwl_dbgfs_##name##_ops = ;
#define DEBUGFS_READ_WRITE_FILE_OPS(name)                               \
DEBUGFS_READ_FUNC(name);                                        \
DEBUGFS_WRITE_FUNC(name);                                       \
static const struct file_operations iwl_dbgfs_##name##_ops = ;
static ssize_t iwl_dbgfs_tx_statistics_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_clear_traffic_statistics_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_rx_statistics_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_sram_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_sram_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_stations_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_nvm_read(struct file *file,
char __user *user_buf,
size_t count,
loff_t *ppos)
static ssize_t iwl_dbgfs_log_event_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_log_event_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_channels_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_status_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_interrupt_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_interrupt_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_qos_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_thermal_throttling_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_disable_ht40_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_disable_ht40_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_sleep_level_override_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_sleep_level_override_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_current_sleep_command_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
DEBUGFS_READ_WRITE_FILE_OPS(sram);
DEBUGFS_READ_WRITE_FILE_OPS(log_event);
DEBUGFS_READ_FILE_OPS(nvm);
DEBUGFS_READ_FILE_OPS(stations);
DEBUGFS_READ_FILE_OPS(channels);
DEBUGFS_READ_FILE_OPS(status);
DEBUGFS_READ_WRITE_FILE_OPS(interrupt);
DEBUGFS_READ_FILE_OPS(qos);
DEBUGFS_READ_FILE_OPS(thermal_throttling);
DEBUGFS_READ_WRITE_FILE_OPS(disable_ht40);
DEBUGFS_READ_WRITE_FILE_OPS(sleep_level_override);
DEBUGFS_READ_FILE_OPS(current_sleep_command);
static ssize_t iwl_dbgfs_traffic_log_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_traffic_log_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_tx_queue_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_rx_queue_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static const char *fmt_value = "  %-30s %10u\n";
static const char *fmt_hex   = "  %-30s       0x%02X\n";
static const char *fmt_table = "  %-30s %10u  %10u  %10u  %10u\n";
static const char *fmt_header =
"%-32s    current  cumulative       delta         max\n";
static int iwl_statistics_flag(struct iwl_priv *priv, char *buf, int bufsz)
static ssize_t iwl_dbgfs_ucode_rx_stats_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_ucode_tx_stats_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_ucode_general_stats_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_ucode_bt_stats_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_reply_tx_error_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_sensitivity_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_chain_noise_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_power_save_status_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_clear_ucode_statistics_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_csr_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_ucode_tracing_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_ucode_tracing_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_rxon_flags_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_rxon_filter_flags_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_fh_reg_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_missed_beacon_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_missed_beacon_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_plcp_delta_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_plcp_delta_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_force_reset_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_force_reset_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_txfifo_flush_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_wd_timeout_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_bt_traffic_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_protection_mode_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_dbgfs_protection_mode_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
DEBUGFS_READ_FILE_OPS(rx_statistics);
DEBUGFS_READ_FILE_OPS(tx_statistics);
DEBUGFS_READ_WRITE_FILE_OPS(traffic_log);
DEBUGFS_READ_FILE_OPS(rx_queue);
DEBUGFS_READ_FILE_OPS(tx_queue);
DEBUGFS_READ_FILE_OPS(ucode_rx_stats);
DEBUGFS_READ_FILE_OPS(ucode_tx_stats);
DEBUGFS_READ_FILE_OPS(ucode_general_stats);
DEBUGFS_READ_FILE_OPS(sensitivity);
DEBUGFS_READ_FILE_OPS(chain_noise);
DEBUGFS_READ_FILE_OPS(power_save_status);
DEBUGFS_WRITE_FILE_OPS(clear_ucode_statistics);
DEBUGFS_WRITE_FILE_OPS(clear_traffic_statistics);
DEBUGFS_WRITE_FILE_OPS(csr);
DEBUGFS_READ_WRITE_FILE_OPS(ucode_tracing);
DEBUGFS_READ_FILE_OPS(fh_reg);
DEBUGFS_READ_WRITE_FILE_OPS(missed_beacon);
DEBUGFS_READ_WRITE_FILE_OPS(plcp_delta);
DEBUGFS_READ_WRITE_FILE_OPS(force_reset);
DEBUGFS_READ_FILE_OPS(rxon_flags);
DEBUGFS_READ_FILE_OPS(rxon_filter_flags);
DEBUGFS_WRITE_FILE_OPS(txfifo_flush);
DEBUGFS_READ_FILE_OPS(ucode_bt_stats);
DEBUGFS_WRITE_FILE_OPS(wd_timeout);
DEBUGFS_READ_FILE_OPS(bt_traffic);
DEBUGFS_READ_WRITE_FILE_OPS(protection_mode);
DEBUGFS_READ_FILE_OPS(reply_tx_error);
int iwl_dbgfs_register(struct iwl_priv *priv, const char *name)
void iwl_dbgfs_unregister(struct iwl_priv *priv)
