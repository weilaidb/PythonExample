#define WL1271_DEBUGFS_STATS_LIFETIME 1000
#define DEBUGFS_FORMAT_BUFFER_SIZE 100
static int wl1271_format_buffer(char __user *userbuf, size_t count,
loff_t *ppos, char *fmt, ...)
#define DEBUGFS_READONLY_FILE(name, fmt, value...)			\
static ssize_t name## _read(struct file *file, char __user *userbuf,	\
size_t count, loff_t *ppos)			\
\
\
static const struct file_operations name## _ops = ;
#define DEBUGFS_ADD(name, parent)					\
entry = debugfs_create_file(#name, 0400, parent,		\
wl, &name## _ops);			\
if (!entry || IS_ERR(entry))					\
goto err;						\
#define DEBUGFS_FWSTATS_FILE(sub, name, fmt)				\
static ssize_t sub## _ ##name## _read(struct file *file,		\
char __user *userbuf,		\
size_t count, loff_t *ppos)	\
\
\
static const struct file_operations sub## _ ##name## _ops = ;
#define DEBUGFS_FWSTATS_ADD(sub, name)				\
DEBUGFS_ADD(sub## _ ##name, stats)
static void wl1271_debugfs_update_stats(struct wl1271 *wl)
static int wl1271_open_file_generic(struct inode *inode, struct file *file)
DEBUGFS_FWSTATS_FILE(tx, internal_desc_overflow, "%u");
DEBUGFS_FWSTATS_FILE(rx, out_of_mem, "%u");
DEBUGFS_FWSTATS_FILE(rx, hdr_overflow, "%u");
DEBUGFS_FWSTATS_FILE(rx, hw_stuck, "%u");
DEBUGFS_FWSTATS_FILE(rx, dropped, "%u");
DEBUGFS_FWSTATS_FILE(rx, fcs_err, "%u");
DEBUGFS_FWSTATS_FILE(rx, xfr_hint_trig, "%u");
DEBUGFS_FWSTATS_FILE(rx, path_reset, "%u");
DEBUGFS_FWSTATS_FILE(rx, reset_counter, "%u");
DEBUGFS_FWSTATS_FILE(dma, rx_requested, "%u");
DEBUGFS_FWSTATS_FILE(dma, rx_errors, "%u");
DEBUGFS_FWSTATS_FILE(dma, tx_requested, "%u");
DEBUGFS_FWSTATS_FILE(dma, tx_errors, "%u");
DEBUGFS_FWSTATS_FILE(isr, cmd_cmplt, "%u");
DEBUGFS_FWSTATS_FILE(isr, fiqs, "%u");
DEBUGFS_FWSTATS_FILE(isr, rx_headers, "%u");
DEBUGFS_FWSTATS_FILE(isr, rx_mem_overflow, "%u");
DEBUGFS_FWSTATS_FILE(isr, rx_rdys, "%u");
DEBUGFS_FWSTATS_FILE(isr, irqs, "%u");
DEBUGFS_FWSTATS_FILE(isr, tx_procs, "%u");
DEBUGFS_FWSTATS_FILE(isr, decrypt_done, "%u");
DEBUGFS_FWSTATS_FILE(isr, dma0_done, "%u");
DEBUGFS_FWSTATS_FILE(isr, dma1_done, "%u");
DEBUGFS_FWSTATS_FILE(isr, tx_exch_complete, "%u");
DEBUGFS_FWSTATS_FILE(isr, commands, "%u");
DEBUGFS_FWSTATS_FILE(isr, rx_procs, "%u");
DEBUGFS_FWSTATS_FILE(isr, hw_pm_mode_changes, "%u");
DEBUGFS_FWSTATS_FILE(isr, host_acknowledges, "%u");
DEBUGFS_FWSTATS_FILE(isr, pci_pm, "%u");
DEBUGFS_FWSTATS_FILE(isr, wakeups, "%u");
DEBUGFS_FWSTATS_FILE(isr, low_rssi, "%u");
DEBUGFS_FWSTATS_FILE(wep, addr_key_count, "%u");
DEBUGFS_FWSTATS_FILE(wep, default_key_count, "%u");
DEBUGFS_FWSTATS_FILE(wep, key_not_found, "%u");
DEBUGFS_FWSTATS_FILE(wep, decrypt_fail, "%u");
DEBUGFS_FWSTATS_FILE(wep, packets, "%u");
DEBUGFS_FWSTATS_FILE(wep, interrupt, "%u");
DEBUGFS_FWSTATS_FILE(pwr, ps_enter, "%u");
DEBUGFS_FWSTATS_FILE(pwr, elp_enter, "%u");
DEBUGFS_FWSTATS_FILE(pwr, missing_bcns, "%u");
DEBUGFS_FWSTATS_FILE(pwr, wake_on_host, "%u");
DEBUGFS_FWSTATS_FILE(pwr, wake_on_timer_exp, "%u");
DEBUGFS_FWSTATS_FILE(pwr, tx_with_ps, "%u");
DEBUGFS_FWSTATS_FILE(pwr, tx_without_ps, "%u");
DEBUGFS_FWSTATS_FILE(pwr, rcvd_beacons, "%u");
DEBUGFS_FWSTATS_FILE(pwr, power_save_off, "%u");
DEBUGFS_FWSTATS_FILE(pwr, enable_ps, "%u");
DEBUGFS_FWSTATS_FILE(pwr, disable_ps, "%u");
DEBUGFS_FWSTATS_FILE(pwr, fix_tsf_ps, "%u");
DEBUGFS_FWSTATS_FILE(pwr, rcvd_awake_beacons, "%u");
DEBUGFS_FWSTATS_FILE(mic, rx_pkts, "%u");
DEBUGFS_FWSTATS_FILE(mic, calc_failure, "%u");
DEBUGFS_FWSTATS_FILE(aes, encrypt_fail, "%u");
DEBUGFS_FWSTATS_FILE(aes, decrypt_fail, "%u");
DEBUGFS_FWSTATS_FILE(aes, encrypt_packets, "%u");
DEBUGFS_FWSTATS_FILE(aes, decrypt_packets, "%u");
DEBUGFS_FWSTATS_FILE(aes, encrypt_interrupt, "%u");
DEBUGFS_FWSTATS_FILE(aes, decrypt_interrupt, "%u");
DEBUGFS_FWSTATS_FILE(event, heart_beat, "%u");
DEBUGFS_FWSTATS_FILE(event, calibration, "%u");
DEBUGFS_FWSTATS_FILE(event, rx_mismatch, "%u");
DEBUGFS_FWSTATS_FILE(event, rx_mem_empty, "%u");
DEBUGFS_FWSTATS_FILE(event, rx_pool, "%u");
DEBUGFS_FWSTATS_FILE(event, oom_late, "%u");
DEBUGFS_FWSTATS_FILE(event, phy_transmit_error, "%u");
DEBUGFS_FWSTATS_FILE(event, tx_stuck, "%u");
DEBUGFS_FWSTATS_FILE(ps, pspoll_timeouts, "%u");
DEBUGFS_FWSTATS_FILE(ps, upsd_timeouts, "%u");
DEBUGFS_FWSTATS_FILE(ps, upsd_max_sptime, "%u");
DEBUGFS_FWSTATS_FILE(ps, upsd_max_apturn, "%u");
DEBUGFS_FWSTATS_FILE(ps, pspoll_max_apturn, "%u");
DEBUGFS_FWSTATS_FILE(ps, pspoll_utilization, "%u");
DEBUGFS_FWSTATS_FILE(ps, upsd_utilization, "%u");
DEBUGFS_FWSTATS_FILE(rxpipe, rx_prep_beacon_drop, "%u");
DEBUGFS_FWSTATS_FILE(rxpipe, descr_host_int_trig_rx_data, "%u");
DEBUGFS_FWSTATS_FILE(rxpipe, beacon_buffer_thres_host_int_trig_rx_data, "%u");
DEBUGFS_FWSTATS_FILE(rxpipe, missed_beacon_host_int_trig_rx_data, "%u");
DEBUGFS_FWSTATS_FILE(rxpipe, tx_xfr_host_int_trig_rx_data, "%u");
DEBUGFS_READONLY_FILE(retry_count, "%u", wl->stats.retry_count);
DEBUGFS_READONLY_FILE(excessive_retries, "%u",
wl->stats.excessive_retries);
static ssize_t tx_queue_len_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations tx_queue_len_ops = ;
static ssize_t gpio_power_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t gpio_power_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations gpio_power_ops = ;
static ssize_t start_recovery_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations start_recovery_ops = ;
static ssize_t driver_state_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations driver_state_ops = ;
static ssize_t dtim_interval_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t dtim_interval_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations dtim_interval_ops = ;
static ssize_t beacon_interval_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t beacon_interval_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations beacon_interval_ops = ;
static int wl1271_debugfs_add_files(struct wl1271 *wl,
struct dentry *rootdir)
void wl1271_debugfs_reset(struct wl1271 *wl)
int wl1271_debugfs_init(struct wl1271 *wl)
void wl1271_debugfs_exit(struct wl1271 *wl)
