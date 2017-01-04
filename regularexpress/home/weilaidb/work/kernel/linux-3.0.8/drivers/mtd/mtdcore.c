static struct backing_dev_info mtd_bdi_unmappable = ;
static struct backing_dev_info mtd_bdi_ro_mappable = ;
static struct backing_dev_info mtd_bdi_rw_mappable = ;
static int mtd_cls_suspend(struct device *dev, pm_message_t state);
static int mtd_cls_resume(struct device *dev);
static struct class mtd_class = ;
static DEFINE_IDR(mtd_idr);
DEFINE_MUTEX(mtd_table_mutex);
EXPORT_SYMBOL_GPL(mtd_table_mutex);
struct mtd_info *__mtd_next_device(int i)
EXPORT_SYMBOL_GPL(__mtd_next_device);
static LIST_HEAD(mtd_notifiers);
#if defined(CONFIG_MTD_CHAR) || defined(CONFIG_MTD_CHAR_MODULE)
#define MTD_DEVT(index) MKDEV(MTD_CHAR_MAJOR, (index)*2)
#define MTD_DEVT(index) 0
static void mtd_release(struct device *dev)
static int mtd_cls_suspend(struct device *dev, pm_message_t state)
static int mtd_cls_resume(struct device *dev)
static ssize_t mtd_type_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(type, S_IRUGO, mtd_type_show, NULL);
static ssize_t mtd_flags_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(flags, S_IRUGO, mtd_flags_show, NULL);
static ssize_t mtd_size_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(size, S_IRUGO, mtd_size_show, NULL);
static ssize_t mtd_erasesize_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(erasesize, S_IRUGO, mtd_erasesize_show, NULL);
static ssize_t mtd_writesize_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(writesize, S_IRUGO, mtd_writesize_show, NULL);
static ssize_t mtd_subpagesize_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(subpagesize, S_IRUGO, mtd_subpagesize_show, NULL);
static ssize_t mtd_oobsize_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(oobsize, S_IRUGO, mtd_oobsize_show, NULL);
static ssize_t mtd_numeraseregions_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(numeraseregions, S_IRUGO, mtd_numeraseregions_show,
NULL);
static ssize_t mtd_name_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, mtd_name_show, NULL);
static struct attribute *mtd_attrs[] = ;
static struct attribute_group mtd_group = ;
static const struct attribute_group *mtd_groups[] = ;
static struct device_type mtd_devtype = ;
int add_mtd_device(struct mtd_info *mtd)
int del_mtd_device(struct mtd_info *mtd)
int mtd_device_register(struct mtd_info *master,
const struct mtd_partition *parts,
int nr_parts)
EXPORT_SYMBOL_GPL(mtd_device_register);
int mtd_device_unregister(struct mtd_info *master)
EXPORT_SYMBOL_GPL(mtd_device_unregister);
void register_mtd_user (struct mtd_notifier *new)
int unregister_mtd_user (struct mtd_notifier *old)
struct mtd_info *get_mtd_device(struct mtd_info *mtd, int num)
int __get_mtd_device(struct mtd_info *mtd)
struct mtd_info *get_mtd_device_nm(const char *name)
void put_mtd_device(struct mtd_info *mtd)
void __put_mtd_device(struct mtd_info *mtd)
int default_mtd_writev(struct mtd_info *mtd, const struct kvec *vecs,
unsigned long count, loff_t to, size_t *retlen)
void *mtd_kmalloc_up_to(const struct mtd_info *mtd, size_t *size)
EXPORT_SYMBOL_GPL(get_mtd_device);
EXPORT_SYMBOL_GPL(get_mtd_device_nm);
EXPORT_SYMBOL_GPL(__get_mtd_device);
EXPORT_SYMBOL_GPL(put_mtd_device);
EXPORT_SYMBOL_GPL(__put_mtd_device);
EXPORT_SYMBOL_GPL(register_mtd_user);
EXPORT_SYMBOL_GPL(unregister_mtd_user);
EXPORT_SYMBOL_GPL(default_mtd_writev);
EXPORT_SYMBOL_GPL(mtd_kmalloc_up_to);
static struct proc_dir_entry *proc_mtd;
static int mtd_proc_show(struct seq_file *m, void *v)
static int mtd_proc_open(struct inode *inode, struct file *file)
static const struct file_operations mtd_proc_ops = ;
static int __init mtd_bdi_init(struct backing_dev_info *bdi, const char *name)
static int __init init_mtd(void)
static void __exit cleanup_mtd(void)
module_init(init_mtd);
module_exit(cleanup_mtd);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("Core MTD registration and access routines");
