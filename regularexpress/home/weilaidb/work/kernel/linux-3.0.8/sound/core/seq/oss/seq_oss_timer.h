#define __SEQ_OSS_TIMER_H
struct seq_oss_timer ;
struct seq_oss_timer *snd_seq_oss_timer_new(struct seq_oss_devinfo *dp);
void snd_seq_oss_timer_delete(struct seq_oss_timer *dp);
int snd_seq_oss_timer_start(struct seq_oss_timer *timer);
int snd_seq_oss_timer_stop(struct seq_oss_timer *timer);
int snd_seq_oss_timer_continue(struct seq_oss_timer *timer);
int snd_seq_oss_timer_tempo(struct seq_oss_timer *timer, int value);
#define snd_seq_oss_timer_reset  snd_seq_oss_timer_start
int snd_seq_oss_timer_ioctl(struct seq_oss_timer *timer, unsigned int cmd, int __user *arg);
static inline abstime_t
snd_seq_oss_timer_cur_tick(struct seq_oss_timer *timer)
static inline int
snd_seq_oss_timer_is_realtime(struct seq_oss_timer *timer)
