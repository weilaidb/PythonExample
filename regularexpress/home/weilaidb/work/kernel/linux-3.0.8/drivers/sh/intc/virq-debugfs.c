static int intc_irq_xlate_debug(struct seq_file *m, void *priv)
static int intc_irq_xlate_open(struct inode *inode, struct file *file)
static const struct file_operations intc_irq_xlate_fops = ;
static int __init intc_irq_xlate_init(void)
fs_initcall(intc_irq_xlate_init);
