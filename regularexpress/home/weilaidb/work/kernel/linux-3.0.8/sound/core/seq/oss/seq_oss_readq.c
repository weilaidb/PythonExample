#define SNDRV_SEQ_OSS_MAX_TIMEOUT	(HZ * 3600)
struct seq_oss_readq *
snd_seq_oss_readq_new(struct seq_oss_devinfo *dp, int maxlen)
void
snd_seq_oss_readq_delete(struct seq_oss_readq *q)
void
snd_seq_oss_readq_clear(struct seq_oss_readq *q)
int
snd_seq_oss_readq_puts(struct seq_oss_readq *q, int dev, unsigned char *data, int len)
int
snd_seq_oss_readq_put_event(struct seq_oss_readq *q, union evrec *ev)
int
snd_seq_oss_readq_pick(struct seq_oss_readq *q, union evrec *rec)
void
snd_seq_oss_readq_wait(struct seq_oss_readq *q)
void
snd_seq_oss_readq_free(struct seq_oss_readq *q)
unsigned int
snd_seq_oss_readq_poll(struct seq_oss_readq *q, struct file *file, poll_table *wait)
int
snd_seq_oss_readq_put_timestamp(struct seq_oss_readq *q, unsigned long curt, int seq_mode)
void
snd_seq_oss_readq_info_read(struct seq_oss_readq *q, struct snd_info_buffer *buf)
