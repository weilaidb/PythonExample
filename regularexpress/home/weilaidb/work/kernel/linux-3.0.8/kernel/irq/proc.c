static struct proc_dir_entry *root_irq_dir;
static int show_irq_affinity(int type, struct seq_file *m, void *v)
static int irq_affinity_hint_proc_show(struct seq_file *m, void *v)
#define is_affinity_mask_valid(val) 1
int no_irq_affinity;
static int irq_affinity_proc_show(struct seq_file *m, void *v)
static int irq_affinity_list_proc_show(struct seq_file *m, void *v)
static ssize_t write_irq_affinity(int type, struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static ssize_t irq_affinity_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static ssize_t irq_affinity_list_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static int irq_affinity_proc_open(struct inode *inode, struct file *file)
static int irq_affinity_list_proc_open(struct inode *inode, struct file *file)
static int irq_affinity_hint_proc_open(struct inode *inode, struct file *file)
static const struct file_operations irq_affinity_proc_fops = ;
static const struct file_operations irq_affinity_hint_proc_fops = ;
static const struct file_operations irq_affinity_list_proc_fops = ;
static int default_affinity_show(struct seq_file *m, void *v)
static ssize_t default_affinity_write(struct file *file,
const char __user *buffer, size_t count, loff_t *ppos)
static int default_affinity_open(struct inode *inode, struct file *file)
static const struct file_operations default_affinity_proc_fops = ;
static int irq_node_proc_show(struct seq_file *m, void *v)
static int irq_node_proc_open(struct inode *inode, struct file *file)
static const struct file_operations irq_node_proc_fops = ;
static int irq_spurious_proc_show(struct seq_file *m, void *v)
static int irq_spurious_proc_open(struct inode *inode, struct file *file)
static const struct file_operations irq_spurious_proc_fops = ;
#define MAX_NAMELEN 128
static int name_unique(unsigned int irq, struct irqaction *new_action)
void register_handler_proc(unsigned int irq, struct irqaction *action)
#undef MAX_NAMELEN
#define MAX_NAMELEN 10
void register_irq_proc(unsigned int irq, struct irq_desc *desc)
void unregister_irq_proc(unsigned int irq, struct irq_desc *desc)
#undef MAX_NAMELEN
void unregister_handler_proc(unsigned int irq, struct irqaction *action)
static void register_default_affinity_proc(void)
void init_irq_proc(void)
int __weak arch_show_interrupts(struct seq_file *p, int prec)
# define ACTUAL_NR_IRQS nr_irqs
int show_interrupts(struct seq_file *p, void *v)
