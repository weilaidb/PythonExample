struct scsi_dev_info_list ;
struct scsi_dev_info_list_table ;
static const char spaces[] = "                ";
static unsigned scsi_default_dev_flags;
static LIST_HEAD(scsi_dev_info_list);
static char scsi_dev_flags[256];
static struct  scsi_static_device_list[] __initdata = ;
static struct scsi_dev_info_list_table *scsi_devinfo_lookup_by_key(int key)
static void scsi_strcpy_devinfo(char *name, char *to, size_t to_length,
char *from, int compatible)
static int scsi_dev_info_list_add(int compatible, char *vendor, char *model,
char *strflags, int flags)
int scsi_dev_info_list_add_keyed(int compatible, char *vendor, char *model,
char *strflags, int flags, int key)
EXPORT_SYMBOL(scsi_dev_info_list_add_keyed);
int scsi_dev_info_list_del_keyed(char *vendor, char *model, int key)
EXPORT_SYMBOL(scsi_dev_info_list_del_keyed);
static int scsi_dev_info_list_add_str(char *dev_list)
int scsi_get_device_flags(struct scsi_device *sdev,
const unsigned char *vendor,
const unsigned char *model)
int scsi_get_device_flags_keyed(struct scsi_device *sdev,
const unsigned char *vendor,
const unsigned char *model,
int key)
EXPORT_SYMBOL(scsi_get_device_flags_keyed);
struct double_list ;
static int devinfo_seq_show(struct seq_file *m, void *v)
static void *devinfo_seq_start(struct seq_file *m, loff_t *ppos)
static void *devinfo_seq_next(struct seq_file *m, void *v, loff_t *ppos)
static void devinfo_seq_stop(struct seq_file *m, void *v)
static const struct seq_operations scsi_devinfo_seq_ops = ;
static int proc_scsi_devinfo_open(struct inode *inode, struct file *file)
static ssize_t proc_scsi_devinfo_write(struct file *file,
const char __user *buf,
size_t length, loff_t *ppos)
static const struct file_operations scsi_devinfo_proc_fops = ;
module_param_string(dev_flags, scsi_dev_flags, sizeof(scsi_dev_flags), 0);
MODULE_PARM_DESC(dev_flags,
"Given scsi_dev_flags=vendor:model:flags[,v:m:f] add black/white"
" list entries for vendor and model with an integer value of flags"
" to the scsi device info list");
module_param_named(default_dev_flags, scsi_default_dev_flags, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(default_dev_flags,
"scsi default device flag integer value");
void scsi_exit_devinfo(void)
int scsi_dev_info_add_list(int key, const char *name)
EXPORT_SYMBOL(scsi_dev_info_add_list);
int scsi_dev_info_remove_list(int key)
EXPORT_SYMBOL(scsi_dev_info_remove_list);
int __init scsi_init_devinfo(void)
