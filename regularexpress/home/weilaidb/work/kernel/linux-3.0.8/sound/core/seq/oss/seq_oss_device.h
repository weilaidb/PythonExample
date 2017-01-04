#define __SEQ_OSS_DEVICE_H
#define SNDRV_SEQ_OSS_DEBUG
#define SNDRV_SEQ_OSS_MAX_CLIENTS	16
#define SNDRV_SEQ_OSS_MAX_SYNTH_DEVS	16
#define SNDRV_SEQ_OSS_MAX_MIDI_DEVS	32
#define SNDRV_SEQ_OSS_MAJOR_VERSION	0
#define SNDRV_SEQ_OSS_MINOR_VERSION	1
#define SNDRV_SEQ_OSS_TINY_VERSION	8
#define SNDRV_SEQ_OSS_VERSION_STR	"0.1.8"
#define SNDRV_SEQ_OSS_DEVNAME		"seq_oss"
#define SNDRV_SEQ_OSS_PROCNAME		"oss"
typedef unsigned int reltime_t;
typedef unsigned int abstime_t;
struct seq_oss_chinfo ;
struct seq_oss_synthinfo ;
struct seq_oss_devinfo ;
int snd_seq_oss_create_client(void);
int snd_seq_oss_delete_client(void);
int snd_seq_oss_open(struct file *file, int level);
void snd_seq_oss_release(struct seq_oss_devinfo *dp);
int snd_seq_oss_ioctl(struct seq_oss_devinfo *dp, unsigned int cmd, unsigned long arg);
int snd_seq_oss_read(struct seq_oss_devinfo *dev, char __user *buf, int count);
int snd_seq_oss_write(struct seq_oss_devinfo *dp, const char __user *buf, int count, struct file *opt);
unsigned int snd_seq_oss_poll(struct seq_oss_devinfo *dp, struct file *file, poll_table * wait);
void snd_seq_oss_reset(struct seq_oss_devinfo *dp);
void snd_seq_oss_drain_write(struct seq_oss_devinfo *dp);
void snd_seq_oss_process_queue(struct seq_oss_devinfo *dp, abstime_t time);
void snd_seq_oss_system_info_read(struct snd_info_buffer *buf);
void snd_seq_oss_midi_info_read(struct snd_info_buffer *buf);
void snd_seq_oss_synth_info_read(struct snd_info_buffer *buf);
void snd_seq_oss_readq_info_read(struct seq_oss_readq *q, struct snd_info_buffer *buf);
#define is_read_mode(mode)	((mode) & SNDRV_SEQ_OSS_FILE_READ)
#define is_write_mode(mode)	((mode) & SNDRV_SEQ_OSS_FILE_WRITE)
#define is_nonblock_mode(mode)	((mode) & SNDRV_SEQ_OSS_FILE_NONBLOCK)
static inline int
snd_seq_oss_dispatch(struct seq_oss_devinfo *dp, struct snd_seq_event *ev, int atomic, int hop)
static inline int
snd_seq_oss_control(struct seq_oss_devinfo *dp, unsigned int type, void *arg)
static inline void
snd_seq_oss_fill_addr(struct seq_oss_devinfo *dp, struct snd_seq_event *ev,
int dest_client, int dest_port)
char *enabled_str(int bool);
extern int seq_oss_debug;
#define debug_printk(x)	do  while (0)
#define debug_printk(x)
