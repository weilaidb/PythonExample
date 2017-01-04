static int snd_opl3_open_seq_oss(struct snd_seq_oss_arg *arg, void *closure);
static int snd_opl3_close_seq_oss(struct snd_seq_oss_arg *arg);
static int snd_opl3_ioctl_seq_oss(struct snd_seq_oss_arg *arg, unsigned int cmd, unsigned long ioarg);
static int snd_opl3_load_patch_seq_oss(struct snd_seq_oss_arg *arg, int format, const char __user *buf, int offs, int count);
static int snd_opl3_reset_seq_oss(struct snd_seq_oss_arg *arg);
static inline mm_segment_t snd_enter_user(void)
static inline void snd_leave_user(mm_segment_t fs)
extern struct snd_midi_op opl3_ops;
static struct snd_seq_oss_callback oss_callback = ;
static int snd_opl3_oss_event_input(struct snd_seq_event *ev, int direct,
void *private_data, int atomic, int hop)
static void snd_opl3_oss_free_port(void *private_data)
static int snd_opl3_oss_create_port(struct snd_opl3 * opl3)
void snd_opl3_init_seq_oss(struct snd_opl3 *opl3, char *name)
void snd_opl3_free_seq_oss(struct snd_opl3 *opl3)
static int snd_opl3_open_seq_oss(struct snd_seq_oss_arg *arg, void *closure)
static int snd_opl3_close_seq_oss(struct snd_seq_oss_arg *arg)
#define SBFM_MAXINSTR	256
static int snd_opl3_load_patch_seq_oss(struct snd_seq_oss_arg *arg, int format,
const char __user *buf, int offs, int count)
static int snd_opl3_ioctl_seq_oss(struct snd_seq_oss_arg *arg, unsigned int cmd,
unsigned long ioarg)
static int snd_opl3_reset_seq_oss(struct snd_seq_oss_arg *arg)
