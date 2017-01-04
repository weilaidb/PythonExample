#define RC80211_PID_H
#define RC_PID_INTERVAL			125
#define RC_PID_SMOOTHING_SHIFT		3
#define RC_PID_SMOOTHING		(1 << RC_PID_SMOOTHING_SHIFT)
#define RC_PID_SHARPENING_FACTOR	0
#define RC_PID_SHARPENING_DURATION	0
#define RC_PID_ARITH_SHIFT		8
#define RC_PID_COEFF_P			15
#define RC_PID_COEFF_I			9
#define RC_PID_COEFF_D			15
#define RC_PID_TARGET_PF		14
#define RC_PID_NORM_OFFSET		3
#define RC_PID_FAST_START		0
#define RC_PID_DO_ARITH_RIGHT_SHIFT(x, y) \
((x) < 0 ? -((-(x)) >> (y)) : (x) >> (y))
enum rc_pid_event_type ;
union rc_pid_event_data ;
struct rc_pid_event ;
#define RC_PID_EVENT_RING_SIZE 32
struct rc_pid_event_buffer ;
struct rc_pid_events_file_info ;
struct rc_pid_debugfs_entries ;
void rate_control_pid_event_tx_status(struct rc_pid_event_buffer *buf,
struct ieee80211_tx_info *stat);
void rate_control_pid_event_rate_change(struct rc_pid_event_buffer *buf,
int index, int rate);
void rate_control_pid_event_tx_rate(struct rc_pid_event_buffer *buf,
int index, int rate);
void rate_control_pid_event_pf_sample(struct rc_pid_event_buffer *buf,
s32 pf_sample, s32 prop_err,
s32 int_err, s32 der_err);
void rate_control_pid_add_sta_debugfs(void *priv, void *priv_sta,
struct dentry *dir);
void rate_control_pid_remove_sta_debugfs(void *priv, void *priv_sta);
struct rc_pid_sta_info ;
struct rc_pid_rateinfo ;
struct rc_pid_info ;
