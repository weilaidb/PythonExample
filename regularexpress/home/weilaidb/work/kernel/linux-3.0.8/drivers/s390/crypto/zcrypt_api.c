MODULE_AUTHOR("IBM Corporation");
MODULE_DESCRIPTION("Cryptographic Coprocessor interface, "
"Copyright 2001, 2006 IBM Corporation");
MODULE_LICENSE("GPL");
static DEFINE_SPINLOCK(zcrypt_device_lock);
static LIST_HEAD(zcrypt_device_list);
static int zcrypt_device_count = 0;
static atomic_t zcrypt_open_count = ATOMIC_INIT(0);
static int zcrypt_rng_device_add(void);
static void zcrypt_rng_device_remove(void);
static ssize_t zcrypt_type_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(type, 0444, zcrypt_type_show, NULL);
static ssize_t zcrypt_online_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t zcrypt_online_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(online, 0644, zcrypt_online_show, zcrypt_online_store);
static struct attribute * zcrypt_device_attrs[] = ;
static struct attribute_group zcrypt_device_attr_group = ;
static void __zcrypt_increase_preference(struct zcrypt_device *zdev)
static void __zcrypt_decrease_preference(struct zcrypt_device *zdev)
static void zcrypt_device_release(struct kref *kref)
void zcrypt_device_get(struct zcrypt_device *zdev)
EXPORT_SYMBOL(zcrypt_device_get);
int zcrypt_device_put(struct zcrypt_device *zdev)
EXPORT_SYMBOL(zcrypt_device_put);
struct zcrypt_device *zcrypt_device_alloc(size_t max_response_size)
EXPORT_SYMBOL(zcrypt_device_alloc);
void zcrypt_device_free(struct zcrypt_device *zdev)
EXPORT_SYMBOL(zcrypt_device_free);
int zcrypt_device_register(struct zcrypt_device *zdev)
EXPORT_SYMBOL(zcrypt_device_register);
void zcrypt_device_unregister(struct zcrypt_device *zdev)
EXPORT_SYMBOL(zcrypt_device_unregister);
static ssize_t zcrypt_read(struct file *filp, char __user *buf,
size_t count, loff_t *f_pos)
static ssize_t zcrypt_write(struct file *filp, const char __user *buf,
size_t count, loff_t *f_pos)
static int zcrypt_open(struct inode *inode, struct file *filp)
static int zcrypt_release(struct inode *inode, struct file *filp)
static long zcrypt_rsa_modexpo(struct ica_rsa_modexpo *mex)
static long zcrypt_rsa_crt(struct ica_rsa_modexpo_crt *crt)
static long zcrypt_send_cprb(struct ica_xcRB *xcRB)
static long zcrypt_rng(char *buffer)
static void zcrypt_status_mask(char status[AP_DEVICES])
static void zcrypt_qdepth_mask(char qdepth[AP_DEVICES])
static void zcrypt_perdev_reqcnt(int reqcnt[AP_DEVICES])
static int zcrypt_pendingq_count(void)
static int zcrypt_requestq_count(void)
static int zcrypt_count_type(int type)
static long zcrypt_ica_status(struct file *filp, unsigned long arg)
static long zcrypt_unlocked_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
struct compat_ica_rsa_modexpo ;
static long trans_modexpo32(struct file *filp, unsigned int cmd,
unsigned long arg)
struct compat_ica_rsa_modexpo_crt ;
static long trans_modexpo_crt32(struct file *filp, unsigned int cmd,
unsigned long arg)
struct compat_ica_xcRB  __attribute__((packed));
static long trans_xcRB32(struct file *filp, unsigned int cmd,
unsigned long arg)
static long zcrypt_compat_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static const struct file_operations zcrypt_fops = ;
static struct miscdevice zcrypt_misc_device = ;
static struct proc_dir_entry *zcrypt_entry;
static void sprintcl(struct seq_file *m, unsigned char *addr, unsigned int len)
static void sprintrw(struct seq_file *m, unsigned char *addr, unsigned int len)
static void sprinthx(unsigned char *title, struct seq_file *m,
unsigned char *addr, unsigned int len)
static void sprinthx4(unsigned char *title, struct seq_file *m,
unsigned int *array, unsigned int len)
static int zcrypt_proc_show(struct seq_file *m, void *v)
static int zcrypt_proc_open(struct inode *inode, struct file *file)
static void zcrypt_disable_card(int index)
static void zcrypt_enable_card(int index)
static ssize_t zcrypt_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations zcrypt_proc_fops = ;
static int zcrypt_rng_device_count;
static u32 *zcrypt_rng_buffer;
static int zcrypt_rng_buffer_index;
static DEFINE_MUTEX(zcrypt_rng_mutex);
static int zcrypt_rng_data_read(struct hwrng *rng, u32 *data)
static struct hwrng zcrypt_rng_dev = ;
static int zcrypt_rng_device_add(void)
static void zcrypt_rng_device_remove(void)
int __init zcrypt_api_init(void)
void zcrypt_api_exit(void)
module_init(zcrypt_api_init);
module_exit(zcrypt_api_exit);
