#define WL1251_DEBUGFS_STATS_LIFETIME 1000
#define DEBUGFS_READONLY_FILE(name, buflen, fmt, value...)		\
static ssize_t name## _read(struct file *file, char __user *userbuf,	\
size_t count, loff_t *ppos)			\
\
\
static const struct file_operations name## _ops = ;
#define DEBUGFS_ADD(name, parent)					\
wl->debugfs.name = debugfs_create_file(#name, 0400, parent,	\
wl, &name## _ops);	\
if (IS_ERR(wl->debugfs.name))
#define DEBUGFS_DEL(name)						\
do  while (0)
#define DEBUGFS_FWSTATS_FILE(sub, name, buflen, fmt)			\
static ssize_t sub## _ ##name## _read(struct file *file,		\
char __user *userbuf,		\
size_t count, loff_t *ppos)	\
\
\
static const struct file_operations sub## _ ##name## _ops = ;
#define DEBUGFS_FWSTATS_ADD(sub, name)				\
DEBUGFS_ADD(sub## _ ##name, wl->debugfs.fw_statistics)
#define DEBUGFS_FWSTATS_DEL(sub, name)				\
DEBUGFS_DEL(sub## _ ##name)
static void wl1251_debugfs_update_stats(struct wl1251 *wl)
static int wl1251_open_file_generic(struct inode *inode, struct file *file)
DEBUGFS_FWSTATS_FILE(tx, internal_desc_overflow, 20, "%u");
DEBUGFS_FWSTATS_FILE(rx, out_of_mem, 20, "%u");
DEBUGFS_FWSTATS_FILE(rx, hdr_overflow, 20, "%u");
DEBUGFS_FWSTATS_FILE(rx, hw_stuck, 20, "%u");
DEBUGFS_FWSTATS_FILE(rx, dropped, 20, "%u");
DEBUGFS_FWSTATS_FILE(rx, fcs_err, 20, "%u");
DEBUGFS_FWSTATS_FILE(rx, xfr_hint_trig, 20, "%u");
DEBUGFS_FWSTATS_FILE(rx, path_reset, 20, "%u");
DEBUGFS_FWSTATS_FILE(rx, reset_counter, 20, "%u");
DEBUGFS_FWSTATS_FILE(dma, rx_requested, 20, "%u");
DEBUGFS_FWSTATS_FILE(dma, rx_errors, 20, "%u");
DEBUGFS_FWSTATS_FILE(dma, tx_requested, 20, "%u");
DEBUGFS_FWSTATS_FILE(dma, tx_errors, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, cmd_cmplt, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, fiqs, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, rx_headers, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, rx_mem_overflow, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, rx_rdys, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, irqs, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, tx_procs, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, decrypt_done, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, dma0_done, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, dma1_done, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, tx_exch_complete, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, commands, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, rx_procs, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, hw_pm_mode_changes, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, host_acknowledges, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, pci_pm, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, wakeups, 20, "%u");
DEBUGFS_FWSTATS_FILE(isr, low_rssi, 20, "%u");
DEBUGFS_FWSTATS_FILE(wep, addr_key_count, 20, "%u");
DEBUGFS_FWSTATS_FILE(wep, default_key_count, 20, "%u");
DEBUGFS_FWSTATS_FILE(wep, key_not_found, 20, "%u");
DEBUGFS_FWSTATS_FILE(wep, decrypt_fail, 20, "%u");
DEBUGFS_FWSTATS_FILE(wep, packets, 20, "%u");
DEBUGFS_FWSTATS_FILE(wep, interrupt, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, ps_enter, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, elp_enter, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, missing_bcns, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, wake_on_host, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, wake_on_timer_exp, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, tx_with_ps, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, tx_without_ps, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, rcvd_beacons, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, power_save_off, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, enable_ps, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, disable_ps, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, fix_tsf_ps, 20, "%u");
DEBUGFS_FWSTATS_FILE(pwr, rcvd_awake_beacons, 20, "%u");
DEBUGFS_FWSTATS_FILE(mic, rx_pkts, 20, "%u");
DEBUGFS_FWSTATS_FILE(mic, calc_failure, 20, "%u");
DEBUGFS_FWSTATS_FILE(aes, encrypt_fail, 20, "%u");
DEBUGFS_FWSTATS_FILE(aes, decrypt_fail, 20, "%u");
DEBUGFS_FWSTATS_FILE(aes, encrypt_packets, 20, "%u");
DEBUGFS_FWSTATS_FILE(aes, decrypt_packets, 20, "%u");
DEBUGFS_FWSTATS_FILE(aes, encrypt_interrupt, 20, "%u");
DEBUGFS_FWSTATS_FILE(aes, decrypt_interrupt, 20, "%u");
DEBUGFS_FWSTATS_FILE(event, heart_beat, 20, "%u");
DEBUGFS_FWSTATS_FILE(event, calibration, 20, "%u");
DEBUGFS_FWSTATS_FILE(event, rx_mismatch, 20, "%u");
DEBUGFS_FWSTATS_FILE(event, rx_mem_empty, 20, "%u");
DEBUGFS_FWSTATS_FILE(event, rx_pool, 20, "%u");
DEBUGFS_FWSTATS_FILE(event, oom_late, 20, "%u");
DEBUGFS_FWSTATS_FILE(event, phy_transmit_error, 20, "%u");
DEBUGFS_FWSTATS_FILE(event, tx_stuck, 20, "%u");
DEBUGFS_FWSTATS_FILE(ps, pspoll_timeouts, 20, "%u");
DEBUGFS_FWSTATS_FILE(ps, upsd_timeouts, 20, "%u");
DEBUGFS_FWSTATS_FILE(ps, upsd_max_sptime, 20, "%u");
DEBUGFS_FWSTATS_FILE(ps, upsd_max_apturn, 20, "%u");
DEBUGFS_FWSTATS_FILE(ps, pspoll_max_apturn, 20, "%u");
DEBUGFS_FWSTATS_FILE(ps, pspoll_utilization, 20, "%u");
DEBUGFS_FWSTATS_FILE(ps, upsd_utilization, 20, "%u");
DEBUGFS_FWSTATS_FILE(rxpipe, rx_prep_beacon_drop, 20, "%u");
DEBUGFS_FWSTATS_FILE(rxpipe, descr_host_int_trig_rx_data, 20, "%u");
DEBUGFS_FWSTATS_FILE(rxpipe, beacon_buffer_thres_host_int_trig_rx_data,
20, "%u");
DEBUGFS_FWSTATS_FILE(rxpipe, missed_beacon_host_int_trig_rx_data, 20, "%u");
DEBUGFS_FWSTATS_FILE(rxpipe, tx_xfr_host_int_trig_rx_data, 20, "%u");
DEBUGFS_READONLY_FILE(retry_count, 20, "%u", wl->stats.retry_count);
DEBUGFS_READONLY_FILE(excessive_retries, 20, "%u",
wl->stats.excessive_retries);
static ssize_t tx_queue_len_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations tx_queue_len_ops = ;
static ssize_t tx_queue_status_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations tx_queue_status_ops = ;
static void wl1251_debugfs_delete_files(struct wl1251 *wl)
static int wl1251_debugfs_add_files(struct wl1251 *wl)
void wl1251_debugfs_reset(struct wl1251 *wl)
int wl1251_debugfs_init(struct wl1251 *wl)
void wl1251_debugfs_exit(struct wl1251 *wl)
