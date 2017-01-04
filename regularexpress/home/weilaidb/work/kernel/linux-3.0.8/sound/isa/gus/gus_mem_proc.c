struct gus_proc_private ;
static ssize_t snd_gf1_mem_proc_dump(struct snd_info_entry *entry,
void *file_private_data,
struct file *file, char __user *buf,
size_t count, loff_t pos)
static void snd_gf1_mem_proc_free(struct snd_info_entry *entry)
static struct snd_info_entry_ops snd_gf1_mem_proc_ops = ;
int snd_gf1_mem_proc_init(struct snd_gus_card * gus)
