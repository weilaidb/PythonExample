#define __SEQ_OSS_WRITEQ_H
struct seq_oss_writeq ;
struct seq_oss_writeq *snd_seq_oss_writeq_new(struct seq_oss_devinfo *dp, int maxlen);
void snd_seq_oss_writeq_delete(struct seq_oss_writeq *q);
void snd_seq_oss_writeq_clear(struct seq_oss_writeq *q);
int snd_seq_oss_writeq_sync(struct seq_oss_writeq *q);
void snd_seq_oss_writeq_wakeup(struct seq_oss_writeq *q, abstime_t time);
int snd_seq_oss_writeq_get_free_size(struct seq_oss_writeq *q);
void snd_seq_oss_writeq_set_output(struct seq_oss_writeq *q, int size);
