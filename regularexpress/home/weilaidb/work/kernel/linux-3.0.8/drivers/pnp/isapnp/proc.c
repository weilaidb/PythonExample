extern struct pnp_protocol isapnp_protocol;
static struct proc_dir_entry *isapnp_proc_bus_dir = NULL;
static loff_t isapnp_proc_bus_lseek(struct file *file, loff_t off, int whence)
static ssize_t isapnp_proc_bus_read(struct file *file, char __user * buf,
size_t nbytes, loff_t * ppos)
static const struct file_operations isapnp_proc_bus_file_operations = ;
static int isapnp_proc_attach_device(struct pnp_dev *dev)
int __init isapnp_proc_init(void)
