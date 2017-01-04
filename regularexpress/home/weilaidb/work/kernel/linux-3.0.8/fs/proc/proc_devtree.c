static inline void set_node_proc_entry(struct device_node *np,
struct proc_dir_entry *de)
static struct proc_dir_entry *proc_device_tree;
static int property_proc_show(struct seq_file *m, void *v)
static int property_proc_open(struct inode *inode, struct file *file)
static const struct file_operations property_proc_fops = ;
static struct proc_dir_entry *
__proc_device_tree_add_prop(struct proc_dir_entry *de, struct property *pp,
const char *name)
void proc_device_tree_add_prop(struct proc_dir_entry *pde, struct property *prop)
void proc_device_tree_remove_prop(struct proc_dir_entry *pde,
struct property *prop)
void proc_device_tree_update_prop(struct proc_dir_entry *pde,
struct property *newprop,
struct property *oldprop)
static int duplicate_name(struct proc_dir_entry *de, const char *name)
static const char *fixup_name(struct device_node *np, struct proc_dir_entry *de,
const char *name)
void proc_device_tree_add_node(struct device_node *np,
struct proc_dir_entry *de)
void __init proc_device_tree_init(void)
