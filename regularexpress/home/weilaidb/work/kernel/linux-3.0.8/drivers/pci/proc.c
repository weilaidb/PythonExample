static int proc_initialized;
static loff_t
proc_bus_pci_lseek(struct file *file, loff_t off, int whence)
static ssize_t
proc_bus_pci_read(struct file *file, char __user *buf, size_t nbytes, loff_t *ppos)
static ssize_t
proc_bus_pci_write(struct file *file, const char __user *buf, size_t nbytes, loff_t *ppos)
struct pci_filp_private ;
static long proc_bus_pci_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int proc_bus_pci_mmap(struct file *file, struct vm_area_struct *vma)
static int proc_bus_pci_open(struct inode *inode, struct file *file)
static int proc_bus_pci_release(struct inode *inode, struct file *file)
static const struct file_operations proc_bus_pci_operations = ;
static void *pci_seq_start(struct seq_file *m, loff_t *pos)
static void *pci_seq_next(struct seq_file *m, void *v, loff_t *pos)
static void pci_seq_stop(struct seq_file *m, void *v)
static int show_device(struct seq_file *m, void *v)
static const struct seq_operations proc_bus_pci_devices_op = ;
static struct proc_dir_entry *proc_bus_pci_dir;
int pci_proc_attach_device(struct pci_dev *dev)
int pci_proc_detach_device(struct pci_dev *dev)
int pci_proc_detach_bus(struct pci_bus* bus)
static int proc_bus_pci_dev_open(struct inode *inode, struct file *file)
static const struct file_operations proc_bus_pci_dev_operations = ;
static int __init pci_proc_init(void)
device_initcall(pci_proc_init);
