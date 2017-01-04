static struct proc_dir_entry *proc_pnp = NULL;
static struct proc_dir_entry *proc_pnp_boot = NULL;
static int pnpconfig_proc_show(struct seq_file *m, void *v)
static int pnpconfig_proc_open(struct inode *inode, struct file *file)
static const struct file_operations pnpconfig_proc_fops = ;
static int escd_info_proc_show(struct seq_file *m, void *v)
static int escd_info_proc_open(struct inode *inode, struct file *file)
static const struct file_operations escd_info_proc_fops = ;
#define MAX_SANE_ESCD_SIZE (32*1024)
static int escd_proc_show(struct seq_file *m, void *v)
static int escd_proc_open(struct inode *inode, struct file *file)
static const struct file_operations escd_proc_fops = ;
static int pnp_legacyres_proc_show(struct seq_file *m, void *v)
static int pnp_legacyres_proc_open(struct inode *inode, struct file *file)
static const struct file_operations pnp_legacyres_proc_fops = ;
static int pnp_devices_proc_show(struct seq_file *m, void *v)
static int pnp_devices_proc_open(struct inode *inode, struct file *file)
static const struct file_operations pnp_devices_proc_fops = ;
static int pnpbios_proc_show(struct seq_file *m, void *v)
static int pnpbios_proc_open(struct inode *inode, struct file *file)
static ssize_t pnpbios_proc_write(struct file *file, const char __user *buf,
size_t count, loff_t *pos)
static const struct file_operations pnpbios_proc_fops = ;
int pnpbios_interface_attach_device(struct pnp_bios_node *node)
int __init pnpbios_proc_init(void)
void __exit pnpbios_proc_exit(void)
