static int insert_queue(struct seq_oss_devinfo *dp, union evrec *rec, struct file *opt);
int
snd_seq_oss_read(struct seq_oss_devinfo *dp, char __user *buf, int count)
int
snd_seq_oss_write(struct seq_oss_devinfo *dp, const char __user *buf, int count, struct file *opt)
static int
insert_queue(struct seq_oss_devinfo *dp, union evrec *rec, struct file *opt)
unsigned int
snd_seq_oss_poll(struct seq_oss_devinfo *dp, struct file *file, poll_table * wait)
