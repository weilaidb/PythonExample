#define __SEQ_OSS_READQ_H
struct seq_oss_readq ;
struct seq_oss_readq *snd_seq_oss_readq_new(struct seq_oss_devinfo *dp, int maxlen);
void snd_seq_oss_readq_delete(struct seq_oss_readq *q);
void snd_seq_oss_readq_clear(struct seq_oss_readq *readq);
unsigned int snd_seq_oss_readq_poll(struct seq_oss_readq *readq, struct file *file, poll_table *wait);
int snd_seq_oss_readq_puts(struct seq_oss_readq *readq, int dev, unsigned char *data, int len);
int snd_seq_oss_readq_put_event(struct seq_oss_readq *readq, union evrec *ev);
int snd_seq_oss_readq_put_timestamp(struct seq_oss_readq *readq, unsigned long curt, int seq_mode);
int snd_seq_oss_readq_pick(struct seq_oss_readq *q, union evrec *rec);
void snd_seq_oss_readq_wait(struct seq_oss_readq *q);
void snd_seq_oss_readq_free(struct seq_oss_readq *q);
#define snd_seq_oss_readq_lock(q, flags) spin_lock_irqsave(&(q)->lock, flags)
#define snd_seq_oss_readq_unlock(q, flags) spin_unlock_irqrestore(&(q)->lock, flags)
