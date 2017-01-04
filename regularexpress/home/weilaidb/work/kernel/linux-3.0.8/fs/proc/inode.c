static void proc_evict_inode(struct inode *inode)
static struct kmem_cache * proc_inode_cachep;
static struct inode *proc_alloc_inode(struct super_block *sb)
static void proc_i_callback(struct rcu_head *head)
static void proc_destroy_inode(struct inode *inode)
static void init_once(void *foo)
void __init proc_init_inodecache(void)
static const struct super_operations proc_sops = ;
static void __pde_users_dec(struct proc_dir_entry *pde)
void pde_users_dec(struct proc_dir_entry *pde)
static loff_t proc_reg_llseek(struct file *file, loff_t offset, int whence)
static ssize_t proc_reg_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static ssize_t proc_reg_write(struct file *file, const char __user *buf, size_t count, loff_t *ppos)
static unsigned int proc_reg_poll(struct file *file, struct poll_table_struct *pts)
static long proc_reg_unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long proc_reg_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int proc_reg_mmap(struct file *file, struct vm_area_struct *vma)
static int proc_reg_open(struct inode *inode, struct file *file)
static struct pde_opener *find_pde_opener(struct proc_dir_entry *pde,
struct inode *inode, struct file *file)
static int proc_reg_release(struct inode *inode, struct file *file)
static const struct file_operations proc_reg_file_ops = ;
static const struct file_operations proc_reg_file_ops_no_compat = ;
struct inode *proc_get_inode(struct super_block *sb, struct proc_dir_entry *de)
int proc_fill_super(struct super_block *s)
