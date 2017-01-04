struct backing_dev_info directly_mappable_cdev_bdi = ;
static struct kobj_map *cdev_map;
static DEFINE_MUTEX(chrdevs_lock);
static struct char_device_struct  *chrdevs[CHRDEV_MAJOR_HASH_SIZE];
static inline int major_to_index(unsigned major)
void chrdev_show(struct seq_file *f, off_t offset)
static struct char_device_struct *
__register_chrdev_region(unsigned int major, unsigned int baseminor,
int minorct, const char *name)
static struct char_device_struct *
__unregister_chrdev_region(unsigned major, unsigned baseminor, int minorct)
int register_chrdev_region(dev_t from, unsigned count, const char *name)
int alloc_chrdev_region(dev_t *dev, unsigned baseminor, unsigned count,
const char *name)
int __register_chrdev(unsigned int major, unsigned int baseminor,
unsigned int count, const char *name,
const struct file_operations *fops)
void unregister_chrdev_region(dev_t from, unsigned count)
void __unregister_chrdev(unsigned int major, unsigned int baseminor,
unsigned int count, const char *name)
static DEFINE_SPINLOCK(cdev_lock);
static struct kobject *cdev_get(struct cdev *p)
void cdev_put(struct cdev *p)
static int chrdev_open(struct inode *inode, struct file *filp)
void cd_forget(struct inode *inode)
static void cdev_purge(struct cdev *cdev)
const struct file_operations def_chr_fops = ;
static struct kobject *exact_match(dev_t dev, int *part, void *data)
static int exact_lock(dev_t dev, void *data)
int cdev_add(struct cdev *p, dev_t dev, unsigned count)
static void cdev_unmap(dev_t dev, unsigned count)
void cdev_del(struct cdev *p)
static void cdev_default_release(struct kobject *kobj)
static void cdev_dynamic_release(struct kobject *kobj)
static struct kobj_type ktype_cdev_default = ;
static struct kobj_type ktype_cdev_dynamic = ;
struct cdev *cdev_alloc(void)
void cdev_init(struct cdev *cdev, const struct file_operations *fops)
static struct kobject *base_probe(dev_t dev, int *part, void *data)
void __init chrdev_init(void)
EXPORT_SYMBOL(register_chrdev_region);
EXPORT_SYMBOL(unregister_chrdev_region);
EXPORT_SYMBOL(alloc_chrdev_region);
EXPORT_SYMBOL(cdev_init);
EXPORT_SYMBOL(cdev_alloc);
EXPORT_SYMBOL(cdev_del);
EXPORT_SYMBOL(cdev_add);
EXPORT_SYMBOL(__register_chrdev);
EXPORT_SYMBOL(__unregister_chrdev);
EXPORT_SYMBOL(directly_mappable_cdev_bdi);
