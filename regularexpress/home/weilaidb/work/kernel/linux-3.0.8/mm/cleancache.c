int cleancache_enabled;
EXPORT_SYMBOL(cleancache_enabled);
static struct cleancache_ops cleancache_ops;
static unsigned long cleancache_succ_gets;
static unsigned long cleancache_failed_gets;
static unsigned long cleancache_puts;
static unsigned long cleancache_flushes;
struct cleancache_ops cleancache_register_ops(struct cleancache_ops *ops)
EXPORT_SYMBOL(cleancache_register_ops);
void __cleancache_init_fs(struct super_block *sb)
EXPORT_SYMBOL(__cleancache_init_fs);
void __cleancache_init_shared_fs(char *uuid, struct super_block *sb)
EXPORT_SYMBOL(__cleancache_init_shared_fs);
static int cleancache_get_key(struct inode *inode,
struct cleancache_filekey *key)
int __cleancache_get_page(struct page *page)
EXPORT_SYMBOL(__cleancache_get_page);
void __cleancache_put_page(struct page *page)
EXPORT_SYMBOL(__cleancache_put_page);
void __cleancache_flush_page(struct address_space *mapping, struct page *page)
EXPORT_SYMBOL(__cleancache_flush_page);
void __cleancache_flush_inode(struct address_space *mapping)
EXPORT_SYMBOL(__cleancache_flush_inode);
void __cleancache_flush_fs(struct super_block *sb)
EXPORT_SYMBOL(__cleancache_flush_fs);
#define CLEANCACHE_SYSFS_RO(_name) \
static ssize_t cleancache_##_name##_show(struct kobject *kobj, \
struct kobj_attribute *attr, char *buf) \
\
static struct kobj_attribute cleancache_##_name##_attr =
CLEANCACHE_SYSFS_RO(succ_gets);
CLEANCACHE_SYSFS_RO(failed_gets);
CLEANCACHE_SYSFS_RO(puts);
CLEANCACHE_SYSFS_RO(flushes);
static struct attribute *cleancache_attrs[] = ;
static struct attribute_group cleancache_attr_group = ;
static int __init init_cleancache(void)
module_init(init_cleancache)
