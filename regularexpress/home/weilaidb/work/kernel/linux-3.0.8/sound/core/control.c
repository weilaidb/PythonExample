#define MAX_USER_CONTROLS	32
#define MAX_CONTROL_COUNT	1028
struct snd_kctl_ioctl ;
static DECLARE_RWSEM(snd_ioctl_rwsem);
static LIST_HEAD(snd_control_ioctls);
static LIST_HEAD(snd_control_compat_ioctls);
static int snd_ctl_open(struct inode *inode, struct file *file)
static void snd_ctl_empty_read_queue(struct snd_ctl_file * ctl)
static int snd_ctl_release(struct inode *inode, struct file *file)
void snd_ctl_notify(struct snd_card *card, unsigned int mask,
struct snd_ctl_elem_id *id)
EXPORT_SYMBOL(snd_ctl_notify);
static struct snd_kcontrol *snd_ctl_new(struct snd_kcontrol *control,
unsigned int access)
struct snd_kcontrol *snd_ctl_new1(const struct snd_kcontrol_new *ncontrol,
void *private_data)
EXPORT_SYMBOL(snd_ctl_new1);
void snd_ctl_free_one(struct snd_kcontrol *kcontrol)
EXPORT_SYMBOL(snd_ctl_free_one);
static bool snd_ctl_remove_numid_conflict(struct snd_card *card,
unsigned int count)
static int snd_ctl_find_hole(struct snd_card *card, unsigned int count)
int snd_ctl_add(struct snd_card *card, struct snd_kcontrol *kcontrol)
EXPORT_SYMBOL(snd_ctl_add);
int snd_ctl_replace(struct snd_card *card, struct snd_kcontrol *kcontrol,
bool add_on_replace)
EXPORT_SYMBOL(snd_ctl_replace);
int snd_ctl_remove(struct snd_card *card, struct snd_kcontrol *kcontrol)
EXPORT_SYMBOL(snd_ctl_remove);
int snd_ctl_remove_id(struct snd_card *card, struct snd_ctl_elem_id *id)
EXPORT_SYMBOL(snd_ctl_remove_id);
static int snd_ctl_remove_user_ctl(struct snd_ctl_file * file,
struct snd_ctl_elem_id *id)
int snd_ctl_activate_id(struct snd_card *card, struct snd_ctl_elem_id *id,
int active)
EXPORT_SYMBOL_GPL(snd_ctl_activate_id);
int snd_ctl_rename_id(struct snd_card *card, struct snd_ctl_elem_id *src_id,
struct snd_ctl_elem_id *dst_id)
EXPORT_SYMBOL(snd_ctl_rename_id);
struct snd_kcontrol *snd_ctl_find_numid(struct snd_card *card, unsigned int numid)
EXPORT_SYMBOL(snd_ctl_find_numid);
struct snd_kcontrol *snd_ctl_find_id(struct snd_card *card,
struct snd_ctl_elem_id *id)
EXPORT_SYMBOL(snd_ctl_find_id);
static int snd_ctl_card_info(struct snd_card *card, struct snd_ctl_file * ctl,
unsigned int cmd, void __user *arg)
static int snd_ctl_elem_list(struct snd_card *card,
struct snd_ctl_elem_list __user *_list)
static int snd_ctl_elem_info(struct snd_ctl_file *ctl,
struct snd_ctl_elem_info *info)
static int snd_ctl_elem_info_user(struct snd_ctl_file *ctl,
struct snd_ctl_elem_info __user *_info)
static int snd_ctl_elem_read(struct snd_card *card,
struct snd_ctl_elem_value *control)
static int snd_ctl_elem_read_user(struct snd_card *card,
struct snd_ctl_elem_value __user *_control)
static int snd_ctl_elem_write(struct snd_card *card, struct snd_ctl_file *file,
struct snd_ctl_elem_value *control)
static int snd_ctl_elem_write_user(struct snd_ctl_file *file,
struct snd_ctl_elem_value __user *_control)
static int snd_ctl_elem_lock(struct snd_ctl_file *file,
struct snd_ctl_elem_id __user *_id)
static int snd_ctl_elem_unlock(struct snd_ctl_file *file,
struct snd_ctl_elem_id __user *_id)
struct user_element ;
static int snd_ctl_elem_user_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ctl_elem_user_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ctl_elem_user_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ctl_elem_user_tlv(struct snd_kcontrol *kcontrol,
int op_flag,
unsigned int size,
unsigned int __user *tlv)
static void snd_ctl_elem_user_free(struct snd_kcontrol *kcontrol)
static int snd_ctl_elem_add(struct snd_ctl_file *file,
struct snd_ctl_elem_info *info, int replace)
static int snd_ctl_elem_add_user(struct snd_ctl_file *file,
struct snd_ctl_elem_info __user *_info, int replace)
static int snd_ctl_elem_remove(struct snd_ctl_file *file,
struct snd_ctl_elem_id __user *_id)
static int snd_ctl_subscribe_events(struct snd_ctl_file *file, int __user *ptr)
static int snd_ctl_tlv_ioctl(struct snd_ctl_file *file,
struct snd_ctl_tlv __user *_tlv,
int op_flag)
static long snd_ctl_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static ssize_t snd_ctl_read(struct file *file, char __user *buffer,
size_t count, loff_t * offset)
static unsigned int snd_ctl_poll(struct file *file, poll_table * wait)
static int _snd_ctl_register_ioctl(snd_kctl_ioctl_func_t fcn, struct list_head *lists)
int snd_ctl_register_ioctl(snd_kctl_ioctl_func_t fcn)
EXPORT_SYMBOL(snd_ctl_register_ioctl);
int snd_ctl_register_ioctl_compat(snd_kctl_ioctl_func_t fcn)
EXPORT_SYMBOL(snd_ctl_register_ioctl_compat);
static int _snd_ctl_unregister_ioctl(snd_kctl_ioctl_func_t fcn,
struct list_head *lists)
int snd_ctl_unregister_ioctl(snd_kctl_ioctl_func_t fcn)
EXPORT_SYMBOL(snd_ctl_unregister_ioctl);
int snd_ctl_unregister_ioctl_compat(snd_kctl_ioctl_func_t fcn)
EXPORT_SYMBOL(snd_ctl_unregister_ioctl_compat);
static int snd_ctl_fasync(int fd, struct file * file, int on)
#define snd_ctl_ioctl_compat	NULL
static const struct file_operations snd_ctl_f_ops =
;
static int snd_ctl_dev_register(struct snd_device *device)
static int snd_ctl_dev_disconnect(struct snd_device *device)
static int snd_ctl_dev_free(struct snd_device *device)
int snd_ctl_create(struct snd_card *card)
int snd_ctl_boolean_mono_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL(snd_ctl_boolean_mono_info);
int snd_ctl_boolean_stereo_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL(snd_ctl_boolean_stereo_info);
int snd_ctl_enum_info(struct snd_ctl_elem_info *info, unsigned int channels,
unsigned int items, const char *const names[])
EXPORT_SYMBOL(snd_ctl_enum_info);
