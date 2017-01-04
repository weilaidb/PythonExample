#define MIN_OSS_TEMPO		8
#define MAX_OSS_TEMPO		360
#define MIN_OSS_TIMEBASE	1
#define MAX_OSS_TIMEBASE	1000
static void calc_alsa_tempo(struct seq_oss_timer *timer);
static int send_timer_event(struct seq_oss_devinfo *dp, int type, int value);
struct seq_oss_timer *
snd_seq_oss_timer_new(struct seq_oss_devinfo *dp)
void
snd_seq_oss_timer_delete(struct seq_oss_timer *rec)
int
snd_seq_oss_process_timer_event(struct seq_oss_timer *rec, union evrec *ev)
static void
calc_alsa_tempo(struct seq_oss_timer *timer)
static int
send_timer_event(struct seq_oss_devinfo *dp, int type, int value)
int
snd_seq_oss_timer_start(struct seq_oss_timer *timer)
int
snd_seq_oss_timer_stop(struct seq_oss_timer *timer)
int
snd_seq_oss_timer_continue(struct seq_oss_timer *timer)
int
snd_seq_oss_timer_tempo(struct seq_oss_timer *timer, int value)
int
snd_seq_oss_timer_ioctl(struct seq_oss_timer *timer, unsigned int cmd, int __user *arg)
