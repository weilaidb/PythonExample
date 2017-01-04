void fhci_dbg_isr(struct fhci_hcd *fhci, int usb_er)
static int fhci_dfs_regs_show(struct seq_file *s, void *v)
static int fhci_dfs_irq_stat_show(struct seq_file *s, void *v)
static int fhci_dfs_regs_open(struct inode *inode, struct file *file)
static int fhci_dfs_irq_stat_open(struct inode *inode, struct file *file)
static const struct file_operations fhci_dfs_regs_fops = ;
static const struct file_operations fhci_dfs_irq_stat_fops = ;
void fhci_dfs_create(struct fhci_hcd *fhci)
void fhci_dfs_destroy(struct fhci_hcd *fhci)
