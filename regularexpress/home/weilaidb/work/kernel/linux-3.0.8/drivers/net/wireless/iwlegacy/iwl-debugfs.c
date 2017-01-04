#define DEBUGFS_ADD_FILE(name, parent, mode) do  while (0)
#define DEBUGFS_ADD_BOOL(name, parent, ptr) do  while (0)
#define DEBUGFS_ADD_X32(name, parent, ptr) do  while (0)
#define DEBUGFS_READ_FUNC(name)                                         \
static ssize_t iwl_legacy_dbgfs_##name##_read(struct file *file,               \
char __user *user_buf,          \
size_t count, loff_t *ppos);
#define DEBUGFS_WRITE_FUNC(name)                                        \
static ssize_t iwl_legacy_dbgfs_##name##_write(struct file *file,              \
const char __user *user_buf,    \
size_t count, loff_t *ppos);
static int
iwl_legacy_dbgfs_open_file_generic(struct inode *inode, struct file *file)
#define DEBUGFS_READ_FILE_OPS(name) 				\
DEBUGFS_READ_FUNC(name);                                        \
static const struct file_operations iwl_legacy_dbgfs_##name##_ops = ;
#define DEBUGFS_WRITE_FILE_OPS(name) 				\
DEBUGFS_WRITE_FUNC(name);                                       \
static const struct file_operations iwl_legacy_dbgfs_##name##_ops = ;
#define DEBUGFS_READ_WRITE_FILE_OPS(name)                           \
DEBUGFS_READ_FUNC(name);                                        \
DEBUGFS_WRITE_FUNC(name);                                       \
static const struct file_operations iwl_legacy_dbgfs_##name##_ops = ;
static ssize_t iwl_legacy_dbgfs_tx_statistics_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t
iwl_legacy_dbgfs_clear_traffic_statistics_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_rx_statistics_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
#define BYTE1_MASK 0x000000ff;
#define BYTE2_MASK 0x0000ffff;
#define BYTE3_MASK 0x00ffffff;
static ssize_t iwl_legacy_dbgfs_sram_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_sram_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t
iwl_legacy_dbgfs_stations_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_nvm_read(struct file *file,
char __user *user_buf,
size_t count,
loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_log_event_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_log_event_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t
iwl_legacy_dbgfs_channels_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_status_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_interrupt_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_interrupt_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t
iwl_legacy_dbgfs_qos_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_disable_ht40_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_disable_ht40_read(struct file *file,
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
DEBUGFS_READ_WRITE_FILE_OPS(disable_ht40);
static ssize_t iwl_legacy_dbgfs_traffic_log_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_traffic_log_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_tx_queue_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_rx_queue_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_ucode_rx_stats_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_ucode_tx_stats_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_ucode_general_stats_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_sensitivity_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_chain_noise_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_power_save_status_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_clear_ucode_statistics_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_ucode_tracing_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_ucode_tracing_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_rxon_flags_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_rxon_filter_flags_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_fh_reg_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_missed_beacon_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_missed_beacon_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_plcp_delta_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_plcp_delta_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_force_reset_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_force_reset_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t iwl_legacy_dbgfs_wd_timeout_write(struct file *file,
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
DEBUGFS_READ_WRITE_FILE_OPS(ucode_tracing);
DEBUGFS_READ_FILE_OPS(fh_reg);
DEBUGFS_READ_WRITE_FILE_OPS(missed_beacon);
DEBUGFS_READ_WRITE_FILE_OPS(plcp_delta);
DEBUGFS_READ_WRITE_FILE_OPS(force_reset);
DEBUGFS_READ_FILE_OPS(rxon_flags);
DEBUGFS_READ_FILE_OPS(rxon_filter_flags);
DEBUGFS_WRITE_FILE_OPS(wd_timeout);
int iwl_legacy_dbgfs_register(struct iwl_priv *priv, const char *name)
EXPORT_SYMBOL(iwl_legacy_dbgfs_register);
void iwl_legacy_dbgfs_unregister(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_dbgfs_unregister);
