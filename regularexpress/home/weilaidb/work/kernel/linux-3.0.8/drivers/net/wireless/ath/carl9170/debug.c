#define ADD(buf, off, max, fmt, args...)				\
off += snprintf(&buf[off], max - off, fmt, ##args);
static int carl9170_debugfs_open(struct inode *inode, struct file *file)
struct carl9170_debugfs_fops ;
static ssize_t carl9170_debugfs_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t carl9170_debugfs_write(struct file *file,
const char __user *userbuf, size_t count, loff_t *ppos)
#define __DEBUGFS_DECLARE_FILE(name, _read, _write, _read_bufsize,	\
_attr, _dstate)				\
static const struct carl9170_debugfs_fops carl_debugfs_##name ##_ops =
#define DEBUGFS_DECLARE_FILE(name, _read, _write, _read_bufsize, _attr)	\
__DEBUGFS_DECLARE_FILE(name, _read, _write, _read_bufsize,	\
_attr, CARL9170_STARTED)			\
#define DEBUGFS_DECLARE_RO_FILE(name, _read_bufsize)			\
DEBUGFS_DECLARE_FILE(name, carl9170_debugfs_##name ##_read,	\
NULL, _read_bufsize, S_IRUSR)
#define DEBUGFS_DECLARE_WO_FILE(name)					\
DEBUGFS_DECLARE_FILE(name, NULL, carl9170_debugfs_##name ##_write,\
0, S_IWUSR)
#define DEBUGFS_DECLARE_RW_FILE(name, _read_bufsize)			\
DEBUGFS_DECLARE_FILE(name, carl9170_debugfs_##name ##_read,	\
carl9170_debugfs_##name ##_write,		\
_read_bufsize, S_IRUSR | S_IWUSR)
#define __DEBUGFS_DECLARE_RW_FILE(name, _read_bufsize, _dstate)		\
__DEBUGFS_DECLARE_FILE(name, carl9170_debugfs_##name ##_read,	\
carl9170_debugfs_##name ##_write,		\
_read_bufsize, S_IRUSR | S_IWUSR, _dstate)
#define DEBUGFS_READONLY_FILE(name, _read_bufsize, fmt, value...)	\
static char *carl9170_debugfs_ ##name ## _read(struct ar9170 *ar,	\
char *buf, size_t buf_size,\
ssize_t *len)		\
\
DEBUGFS_DECLARE_RO_FILE(name, _read_bufsize)
static char *carl9170_debugfs_mem_usage_read(struct ar9170 *ar, char *buf,
size_t bufsize, ssize_t *len)
DEBUGFS_DECLARE_RO_FILE(mem_usage, 512);
static char *carl9170_debugfs_qos_stat_read(struct ar9170 *ar, char *buf,
size_t bufsize, ssize_t *len)
DEBUGFS_DECLARE_RO_FILE(qos_stat, 512);
static void carl9170_debugfs_format_frame(struct ar9170 *ar,
struct sk_buff *skb, const char *prefix, char *buf,
ssize_t *off, ssize_t bufsize)
static char *carl9170_debugfs_ampdu_state_read(struct ar9170 *ar, char *buf,
size_t bufsize, ssize_t *len)
DEBUGFS_DECLARE_RO_FILE(ampdu_state, 8000);
static void carl9170_debugfs_queue_dump(struct ar9170 *ar, char *buf,
ssize_t *len, size_t bufsize, struct sk_buff_head *queue)
#define DEBUGFS_QUEUE_DUMP(q, qi)					\
static char *carl9170_debugfs_##q ##_##qi ##_read(struct ar9170 *ar,	\
char *buf, size_t bufsize, ssize_t *len)			\
\
DEBUGFS_DECLARE_RO_FILE(q##_##qi, 8000);
static char *carl9170_debugfs_sta_psm_read(struct ar9170 *ar, char *buf,
size_t bufsize, ssize_t *len)
DEBUGFS_DECLARE_RO_FILE(sta_psm, 160);
static char *carl9170_debugfs_tx_stuck_read(struct ar9170 *ar, char *buf,
size_t bufsize, ssize_t *len)
DEBUGFS_DECLARE_RO_FILE(tx_stuck, 180);
static char *carl9170_debugfs_phy_noise_read(struct ar9170 *ar, char *buf,
size_t bufsize, ssize_t *len)
DEBUGFS_DECLARE_RO_FILE(phy_noise, 180);
static char *carl9170_debugfs_vif_dump_read(struct ar9170 *ar, char *buf,
size_t bufsize, ssize_t *len)
DEBUGFS_DECLARE_RO_FILE(vif_dump, 8000);
#define UPDATE_COUNTER(ar, name)	()
#define TALLY_SUM_UP(ar, name)	do  while (0)
#define DEBUGFS_HW_TALLY_FILE(name, f)					\
static char *carl9170_debugfs_##name ## _read(struct ar9170 *ar,	\
char *dum, size_t bufsize, ssize_t *ret)			\
\
DEBUGFS_DECLARE_RO_FILE(name, 0);
#define DEBUGFS_HW_REG_FILE(name, f)					\
static char *carl9170_debugfs_##name ## _read(struct ar9170 *ar,	\
char *dum, size_t bufsize, ssize_t *ret)			\
\
DEBUGFS_DECLARE_RO_FILE(name, 0);
static ssize_t carl9170_debugfs_hw_ioread32_write(struct ar9170 *ar,
const char *buf, size_t count)
static char *carl9170_debugfs_hw_ioread32_read(struct ar9170 *ar, char *buf,
size_t bufsize, ssize_t *ret)
DEBUGFS_DECLARE_RW_FILE(hw_ioread32, CARL9170_DEBUG_RING_SIZE * 40);
static ssize_t carl9170_debugfs_bug_write(struct ar9170 *ar, const char *buf,
size_t count)
static char *carl9170_debugfs_bug_read(struct ar9170 *ar, char *buf,
size_t bufsize, ssize_t *ret)
__DEBUGFS_DECLARE_RW_FILE(bug, 400, CARL9170_STOPPED);
static const char *erp_modes[] = ;
static char *carl9170_debugfs_erp_read(struct ar9170 *ar, char *buf,
size_t bufsize, ssize_t *ret)
static ssize_t carl9170_debugfs_erp_write(struct ar9170 *ar, const char *buf,
size_t count)
DEBUGFS_DECLARE_RW_FILE(erp, 80);
static ssize_t carl9170_debugfs_hw_iowrite32_write(struct ar9170 *ar,
const char *buf, size_t count)
DEBUGFS_DECLARE_WO_FILE(hw_iowrite32);
DEBUGFS_HW_TALLY_FILE(hw_tx_tally, "u");
DEBUGFS_HW_TALLY_FILE(hw_rx_tally, "u");
DEBUGFS_HW_TALLY_FILE(hw_phy_errors, "u");
DEBUGFS_HW_REG_FILE(hw_wlan_queue, ".8x");
DEBUGFS_HW_REG_FILE(hw_pta_queue, ".8x");
DEBUGFS_HW_REG_FILE(hw_ampdu_info, ".8x");
DEBUGFS_QUEUE_DUMP(tx_status, 0);
DEBUGFS_QUEUE_DUMP(tx_status, 1);
DEBUGFS_QUEUE_DUMP(tx_status, 2);
DEBUGFS_QUEUE_DUMP(tx_status, 3);
DEBUGFS_QUEUE_DUMP(tx_pending, 0);
DEBUGFS_QUEUE_DUMP(tx_pending, 1);
DEBUGFS_QUEUE_DUMP(tx_pending, 2);
DEBUGFS_QUEUE_DUMP(tx_pending, 3);
DEBUGFS_READONLY_FILE(usb_tx_anch_urbs, 20, "%d",
atomic_read(&ar->tx_anch_urbs));
DEBUGFS_READONLY_FILE(usb_rx_anch_urbs, 20, "%d",
atomic_read(&ar->rx_anch_urbs));
DEBUGFS_READONLY_FILE(usb_rx_work_urbs, 20, "%d",
atomic_read(&ar->rx_work_urbs));
DEBUGFS_READONLY_FILE(usb_rx_pool_urbs, 20, "%d",
atomic_read(&ar->rx_pool_urbs));
DEBUGFS_READONLY_FILE(tx_total_queued, 20, "%d",
atomic_read(&ar->tx_total_queued));
DEBUGFS_READONLY_FILE(tx_ampdu_scheduler, 20, "%d",
atomic_read(&ar->tx_ampdu_scheduler));
DEBUGFS_READONLY_FILE(tx_total_pending, 20, "%d",
atomic_read(&ar->tx_total_pending));
DEBUGFS_READONLY_FILE(tx_ampdu_list_len, 20, "%d",
ar->tx_ampdu_list_len);
DEBUGFS_READONLY_FILE(tx_ampdu_upload, 20, "%d",
atomic_read(&ar->tx_ampdu_upload));
DEBUGFS_READONLY_FILE(tx_janitor_last_run, 64, "last run:%d ms ago",
jiffies_to_msecs(jiffies - ar->tx_janitor_last_run));
DEBUGFS_READONLY_FILE(tx_dropped, 20, "%d", ar->tx_dropped);
DEBUGFS_READONLY_FILE(rx_dropped, 20, "%d", ar->rx_dropped);
DEBUGFS_READONLY_FILE(sniffer_enabled, 20, "%d", ar->sniffer_enabled);
DEBUGFS_READONLY_FILE(rx_software_decryption, 20, "%d",
ar->rx_software_decryption);
DEBUGFS_READONLY_FILE(ampdu_factor, 20, "%d",
ar->current_factor);
DEBUGFS_READONLY_FILE(ampdu_density, 20, "%d",
ar->current_density);
DEBUGFS_READONLY_FILE(beacon_int, 20, "%d TU", ar->global_beacon_int);
DEBUGFS_READONLY_FILE(pretbtt, 20, "%d TU", ar->global_pretbtt);
void carl9170_debugfs_register(struct ar9170 *ar)
void carl9170_debugfs_unregister(struct ar9170 *ar)
