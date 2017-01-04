#define BSR_MAX_DEVS (32)
struct bsr_dev ;
static unsigned total_bsr_devs;
static struct list_head bsr_devs = LIST_HEAD_INIT(bsr_devs);
static struct class *bsr_class;
static int bsr_major;
enum ;
static unsigned bsr_types[BSR_MAX];
static ssize_t
bsr_size_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
bsr_stride_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
bsr_len_show(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute bsr_dev_attrs[] = ;
static int bsr_mmap(struct file *filp, struct vm_area_struct *vma)
static int bsr_open(struct inode * inode, struct file * filp)
static const struct file_operations bsr_fops = ;
static void bsr_cleanup_devs(void)
static int bsr_add_node(struct device_node *bn)
static int bsr_create_devs(struct device_node *bn)
static int __init bsr_init(void)
static void __exit  bsr_exit(void)
module_init(bsr_init);
module_exit(bsr_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sonny Rao <sonnyrao@us.ibm.com>");
