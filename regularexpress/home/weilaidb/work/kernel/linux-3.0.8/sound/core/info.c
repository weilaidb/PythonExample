int snd_info_check_reserved_words(const char *str)
static DEFINE_MUTEX(info_mutex);
struct snd_info_private_data ;
static int snd_info_version_init(void);
static int snd_info_version_done(void);
static void snd_info_disconnect(struct snd_info_entry *entry);
static int resize_info_buffer(struct snd_info_buffer *buffer,
unsigned int nsize)
int snd_iprintf(struct snd_info_buffer *buffer, const char *fmt, ...)
EXPORT_SYMBOL(snd_iprintf);
static struct proc_dir_entry *snd_proc_root;
struct snd_info_entry *snd_seq_root;
EXPORT_SYMBOL(snd_seq_root);
struct snd_info_entry *snd_oss_root;
static void snd_remove_proc_entry(struct proc_dir_entry *parent,
struct proc_dir_entry *de)
static loff_t snd_info_entry_llseek(struct file *file, loff_t offset, int orig)
static ssize_t snd_info_entry_read(struct file *file, char __user *buffer,
size_t count, loff_t * offset)
static ssize_t snd_info_entry_write(struct file *file, const char __user *buffer,
size_t count, loff_t * offset)
static int snd_info_entry_open(struct inode *inode, struct file *file)
static int snd_info_entry_release(struct inode *inode, struct file *file)
static unsigned int snd_info_entry_poll(struct file *file, poll_table * wait)
static long snd_info_entry_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int snd_info_entry_mmap(struct file *file, struct vm_area_struct *vma)
static const struct file_operations snd_info_entry_operations =
;
int __init snd_info_init(void)
int __exit snd_info_done(void)
int snd_info_card_create(struct snd_card *card)
int snd_info_card_register(struct snd_card *card)
void snd_info_card_id_change(struct snd_card *card)
void snd_info_card_disconnect(struct snd_card *card)
int snd_info_card_free(struct snd_card *card)
int snd_info_get_line(struct snd_info_buffer *buffer, char *line, int len)
EXPORT_SYMBOL(snd_info_get_line);
const char *snd_info_get_str(char *dest, const char *src, int len)
EXPORT_SYMBOL(snd_info_get_str);
static struct snd_info_entry *snd_info_create_entry(const char *name)
struct snd_info_entry *snd_info_create_module_entry(struct module * module,
const char *name,
struct snd_info_entry *parent)
EXPORT_SYMBOL(snd_info_create_module_entry);
struct snd_info_entry *snd_info_create_card_entry(struct snd_card *card,
const char *name,
struct snd_info_entry * parent)
EXPORT_SYMBOL(snd_info_create_card_entry);
static void snd_info_disconnect(struct snd_info_entry *entry)
static int snd_info_dev_free_entry(struct snd_device *device)
static int snd_info_dev_register_entry(struct snd_device *device)
int snd_card_proc_new(struct snd_card *card, const char *name,
struct snd_info_entry **entryp)
EXPORT_SYMBOL(snd_card_proc_new);
void snd_info_free_entry(struct snd_info_entry * entry)
EXPORT_SYMBOL(snd_info_free_entry);
int snd_info_register(struct snd_info_entry * entry)
EXPORT_SYMBOL(snd_info_register);
static struct snd_info_entry *snd_info_version_entry;
static void snd_info_version_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static int __init snd_info_version_init(void)
static int __exit snd_info_version_done(void)
