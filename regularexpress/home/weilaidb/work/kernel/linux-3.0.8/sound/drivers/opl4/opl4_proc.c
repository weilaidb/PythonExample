static int snd_opl4_mem_proc_open(struct snd_info_entry *entry,
unsigned short mode, void **file_private_data)
static int snd_opl4_mem_proc_release(struct snd_info_entry *entry,
unsigned short mode, void *file_private_data)
static ssize_t snd_opl4_mem_proc_read(struct snd_info_entry *entry,
void *file_private_data,
struct file *file, char __user *_buf,
size_t count, loff_t pos)
static ssize_t snd_opl4_mem_proc_write(struct snd_info_entry *entry,
void *file_private_data,
struct file *file,
const char __user *_buf,
size_t count, loff_t pos)
static struct snd_info_entry_ops snd_opl4_mem_proc_ops = ;
int snd_opl4_create_proc(struct snd_opl4 *opl4)
void snd_opl4_free_proc(struct snd_opl4 *opl4)
