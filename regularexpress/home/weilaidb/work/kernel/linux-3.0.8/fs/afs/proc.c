static struct proc_dir_entry *proc_afs;
static int afs_proc_cells_open(struct inode *inode, struct file *file);
static void *afs_proc_cells_start(struct seq_file *p, loff_t *pos);
static void *afs_proc_cells_next(struct seq_file *p, void *v, loff_t *pos);
static void afs_proc_cells_stop(struct seq_file *p, void *v);
static int afs_proc_cells_show(struct seq_file *m, void *v);
static ssize_t afs_proc_cells_write(struct file *file, const char __user *buf,
size_t size, loff_t *_pos);
static const struct seq_operations afs_proc_cells_ops = ;
static const struct file_operations afs_proc_cells_fops = ;
static int afs_proc_rootcell_open(struct inode *inode, struct file *file);
static int afs_proc_rootcell_release(struct inode *inode, struct file *file);
static ssize_t afs_proc_rootcell_read(struct file *file, char __user *buf,
size_t size, loff_t *_pos);
static ssize_t afs_proc_rootcell_write(struct file *file,
const char __user *buf,
size_t size, loff_t *_pos);
static const struct file_operations afs_proc_rootcell_fops = ;
static int afs_proc_cell_volumes_open(struct inode *inode, struct file *file);
static int afs_proc_cell_volumes_release(struct inode *inode,
struct file *file);
static void *afs_proc_cell_volumes_start(struct seq_file *p, loff_t *pos);
static void *afs_proc_cell_volumes_next(struct seq_file *p, void *v,
loff_t *pos);
static void afs_proc_cell_volumes_stop(struct seq_file *p, void *v);
static int afs_proc_cell_volumes_show(struct seq_file *m, void *v);
static const struct seq_operations afs_proc_cell_volumes_ops = ;
static const struct file_operations afs_proc_cell_volumes_fops = ;
static int afs_proc_cell_vlservers_open(struct inode *inode,
struct file *file);
static int afs_proc_cell_vlservers_release(struct inode *inode,
struct file *file);
static void *afs_proc_cell_vlservers_start(struct seq_file *p, loff_t *pos);
static void *afs_proc_cell_vlservers_next(struct seq_file *p, void *v,
loff_t *pos);
static void afs_proc_cell_vlservers_stop(struct seq_file *p, void *v);
static int afs_proc_cell_vlservers_show(struct seq_file *m, void *v);
static const struct seq_operations afs_proc_cell_vlservers_ops = ;
static const struct file_operations afs_proc_cell_vlservers_fops = ;
static int afs_proc_cell_servers_open(struct inode *inode, struct file *file);
static int afs_proc_cell_servers_release(struct inode *inode,
struct file *file);
static void *afs_proc_cell_servers_start(struct seq_file *p, loff_t *pos);
static void *afs_proc_cell_servers_next(struct seq_file *p, void *v,
loff_t *pos);
static void afs_proc_cell_servers_stop(struct seq_file *p, void *v);
static int afs_proc_cell_servers_show(struct seq_file *m, void *v);
static const struct seq_operations afs_proc_cell_servers_ops = ;
static const struct file_operations afs_proc_cell_servers_fops = ;
int afs_proc_init(void)
void afs_proc_cleanup(void)
static int afs_proc_cells_open(struct inode *inode, struct file *file)
static void *afs_proc_cells_start(struct seq_file *m, loff_t *_pos)
static void *afs_proc_cells_next(struct seq_file *p, void *v, loff_t *pos)
static void afs_proc_cells_stop(struct seq_file *p, void *v)
static int afs_proc_cells_show(struct seq_file *m, void *v)
static ssize_t afs_proc_cells_write(struct file *file, const char __user *buf,
size_t size, loff_t *_pos)
static int afs_proc_rootcell_open(struct inode *inode, struct file *file)
static int afs_proc_rootcell_release(struct inode *inode, struct file *file)
static ssize_t afs_proc_rootcell_read(struct file *file, char __user *buf,
size_t size, loff_t *_pos)
static ssize_t afs_proc_rootcell_write(struct file *file,
const char __user *buf,
size_t size, loff_t *_pos)
int afs_proc_cell_setup(struct afs_cell *cell)
void afs_proc_cell_remove(struct afs_cell *cell)
static int afs_proc_cell_volumes_open(struct inode *inode, struct file *file)
static int afs_proc_cell_volumes_release(struct inode *inode, struct file *file)
static void *afs_proc_cell_volumes_start(struct seq_file *m, loff_t *_pos)
static void *afs_proc_cell_volumes_next(struct seq_file *p, void *v,
loff_t *_pos)
static void afs_proc_cell_volumes_stop(struct seq_file *p, void *v)
static const char afs_vlocation_states[][4] = ;
static int afs_proc_cell_volumes_show(struct seq_file *m, void *v)
static int afs_proc_cell_vlservers_open(struct inode *inode, struct file *file)
static int afs_proc_cell_vlservers_release(struct inode *inode,
struct file *file)
static void *afs_proc_cell_vlservers_start(struct seq_file *m, loff_t *_pos)
static void *afs_proc_cell_vlservers_next(struct seq_file *p, void *v,
loff_t *_pos)
static void afs_proc_cell_vlservers_stop(struct seq_file *p, void *v)
static int afs_proc_cell_vlservers_show(struct seq_file *m, void *v)
static int afs_proc_cell_servers_open(struct inode *inode, struct file *file)
static int afs_proc_cell_servers_release(struct inode *inode,
struct file *file)
static void *afs_proc_cell_servers_start(struct seq_file *m, loff_t *_pos)
__acquires(m->private->servers_lock)
static void *afs_proc_cell_servers_next(struct seq_file *p, void *v,
loff_t *_pos)
static void afs_proc_cell_servers_stop(struct seq_file *p, void *v)
__releases(p->private->servers_lock)
static int afs_proc_cell_servers_show(struct seq_file *m, void *v)
