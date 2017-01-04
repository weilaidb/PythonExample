static void rate_control_pid_event(struct rc_pid_event_buffer *buf,
enum rc_pid_event_type type,
union rc_pid_event_data *data)
void rate_control_pid_event_tx_status(struct rc_pid_event_buffer *buf,
struct ieee80211_tx_info *stat)
void rate_control_pid_event_rate_change(struct rc_pid_event_buffer *buf,
int index, int rate)
void rate_control_pid_event_tx_rate(struct rc_pid_event_buffer *buf,
int index, int rate)
void rate_control_pid_event_pf_sample(struct rc_pid_event_buffer *buf,
s32 pf_sample, s32 prop_err,
s32 int_err, s32 der_err)
static int rate_control_pid_events_open(struct inode *inode, struct file *file)
static int rate_control_pid_events_release(struct inode *inode,
struct file *file)
static unsigned int rate_control_pid_events_poll(struct file *file,
poll_table *wait)
#define RC_PID_PRINT_BUF_SIZE 64
static ssize_t rate_control_pid_events_read(struct file *file, char __user *buf,
size_t length, loff_t *offset)
#undef RC_PID_PRINT_BUF_SIZE
static const struct file_operations rc_pid_fop_events = ;
void rate_control_pid_add_sta_debugfs(void *priv, void *priv_sta,
struct dentry *dir)
void rate_control_pid_remove_sta_debugfs(void *priv, void *priv_sta)
