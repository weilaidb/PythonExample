static int
nubus_devices_proc_show(struct seq_file *m, void *v)
static int nubus_devices_proc_open(struct inode *inode, struct file *file)
static const struct file_operations nubus_devices_proc_fops = ;
static struct proc_dir_entry *proc_bus_nubus_dir;
static void nubus_proc_subdir(struct nubus_dev* dev,
struct proc_dir_entry* parent,
struct nubus_dir* dir)
static void nubus_proc_populate(struct nubus_dev* dev,
struct proc_dir_entry* parent,
struct nubus_dir* root)
int nubus_proc_attach_device(struct nubus_dev *dev)
EXPORT_SYMBOL(nubus_proc_attach_device);
int nubus_proc_detach_device(struct nubus_dev *dev)
EXPORT_SYMBOL(nubus_proc_detach_device);
void __init proc_bus_nubus_add_devices(void)
void __init nubus_proc_init(void)
