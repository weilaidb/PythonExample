struct sq_mapping;
struct sq_mapping ;
static struct sq_mapping *sq_mapping_list;
static DEFINE_SPINLOCK(sq_mapping_lock);
static struct kmem_cache *sq_cache;
static unsigned long *sq_bitmap;
#define store_queue_barrier()			\
do  while (0);
void sq_flush_range(unsigned long start, unsigned int len)
EXPORT_SYMBOL(sq_flush_range);
static inline void sq_mapping_list_add(struct sq_mapping *map)
static inline void sq_mapping_list_del(struct sq_mapping *map)
static int __sq_remap(struct sq_mapping *map, pgprot_t prot)
unsigned long sq_remap(unsigned long phys, unsigned int size,
const char *name, pgprot_t prot)
EXPORT_SYMBOL(sq_remap);
void sq_unmap(unsigned long vaddr)
EXPORT_SYMBOL(sq_unmap);
static struct kobject *sq_kobject[NR_CPUS];
struct sq_sysfs_attr ;
#define to_sq_sysfs_attr(a)	container_of(a, struct sq_sysfs_attr, attr)
static ssize_t sq_sysfs_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t sq_sysfs_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
static ssize_t mapping_show(char *buf)
static ssize_t mapping_store(const char *buf, size_t count)
static struct sq_sysfs_attr mapping_attr =
__ATTR(mapping, 0644, mapping_show, mapping_store);
static struct attribute *sq_sysfs_attrs[] = ;
static const struct sysfs_ops sq_sysfs_ops = ;
static struct kobj_type ktype_percpu_entry = ;
static int __devinit sq_sysdev_add(struct sys_device *sysdev)
static int __devexit sq_sysdev_remove(struct sys_device *sysdev)
static struct sysdev_driver sq_sysdev_driver = ;
static int __init sq_api_init(void)
static void __exit sq_api_exit(void)
module_init(sq_api_init);
module_exit(sq_api_exit);
MODULE_AUTHOR("Paul Mundt <lethal@linux-sh.org>, M. R. Brown <mrbrown@0xd6.org>");
MODULE_DESCRIPTION("Simple API for SH-4 integrated Store Queues");
MODULE_LICENSE("GPL");
