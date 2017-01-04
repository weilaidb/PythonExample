struct snd_monitor_file ;
static DEFINE_SPINLOCK(shutdown_lock);
static LIST_HEAD(shutdown_files);
static const struct file_operations snd_shutdown_f_ops;
static unsigned int snd_cards_lock;
struct snd_card *snd_cards[SNDRV_CARDS];
EXPORT_SYMBOL(snd_cards);
static DEFINE_MUTEX(snd_card_mutex);
static char *slots[SNDRV_CARDS];
module_param_array(slots, charp, NULL, 0444);
MODULE_PARM_DESC(slots, "Module names assigned to the slots.");
static int module_slot_match(struct module *module, int idx)
#if defined(CONFIG_SND_MIXER_OSS) || defined(CONFIG_SND_MIXER_OSS_MODULE)
int (*snd_mixer_oss_notify_callback)(struct snd_card *card, int free_flag);
EXPORT_SYMBOL(snd_mixer_oss_notify_callback);
static void snd_card_id_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static inline int init_info_for_card(struct snd_card *card)
#define init_info_for_card(card)
int snd_card_create(int idx, const char *xid,
struct module *module, int extra_size,
struct snd_card **card_ret)
EXPORT_SYMBOL(snd_card_create);
int snd_card_locked(int card)
static loff_t snd_disconnect_llseek(struct file *file, loff_t offset, int orig)
static ssize_t snd_disconnect_read(struct file *file, char __user *buf,
size_t count, loff_t *offset)
static ssize_t snd_disconnect_write(struct file *file, const char __user *buf,
size_t count, loff_t *offset)
static int snd_disconnect_release(struct inode *inode, struct file *file)
static unsigned int snd_disconnect_poll(struct file * file, poll_table * wait)
static long snd_disconnect_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int snd_disconnect_mmap(struct file *file, struct vm_area_struct *vma)
static int snd_disconnect_fasync(int fd, struct file *file, int on)
static const struct file_operations snd_shutdown_f_ops =
;
int snd_card_disconnect(struct snd_card *card)
EXPORT_SYMBOL(snd_card_disconnect);
static int snd_card_do_free(struct snd_card *card)
int snd_card_free_when_closed(struct snd_card *card)
EXPORT_SYMBOL(snd_card_free_when_closed);
int snd_card_free(struct snd_card *card)
EXPORT_SYMBOL(snd_card_free);
static void snd_card_set_id_no_lock(struct snd_card *card, const char *nid)
void snd_card_set_id(struct snd_card *card, const char *nid)
EXPORT_SYMBOL(snd_card_set_id);
static ssize_t
card_id_show_attr(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
card_id_store_attr(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute card_id_attrs =
__ATTR(id, S_IRUGO | S_IWUSR, card_id_show_attr, card_id_store_attr);
static ssize_t
card_number_show_attr(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute card_number_attrs =
__ATTR(number, S_IRUGO, card_number_show_attr, NULL);
int snd_card_register(struct snd_card *card)
EXPORT_SYMBOL(snd_card_register);
static struct snd_info_entry *snd_card_info_entry;
static void snd_card_info_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
void snd_card_info_read_oss(struct snd_info_buffer *buffer)
static struct snd_info_entry *snd_card_module_info_entry;
static void snd_card_module_info_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
int __init snd_card_info_init(void)
int __exit snd_card_info_done(void)
int snd_component_add(struct snd_card *card, const char *component)
EXPORT_SYMBOL(snd_component_add);
int snd_card_file_add(struct snd_card *card, struct file *file)
EXPORT_SYMBOL(snd_card_file_add);
int snd_card_file_remove(struct snd_card *card, struct file *file)
EXPORT_SYMBOL(snd_card_file_remove);
int snd_power_wait(struct snd_card *card, unsigned int power_state)
EXPORT_SYMBOL(snd_power_wait);
