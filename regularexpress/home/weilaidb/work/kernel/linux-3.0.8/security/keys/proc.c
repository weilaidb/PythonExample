static int proc_keys_open(struct inode *inode, struct file *file);
static void *proc_keys_start(struct seq_file *p, loff_t *_pos);
static void *proc_keys_next(struct seq_file *p, void *v, loff_t *_pos);
static void proc_keys_stop(struct seq_file *p, void *v);
static int proc_keys_show(struct seq_file *m, void *v);
static const struct seq_operations proc_keys_ops = ;
static const struct file_operations proc_keys_fops = ;
static int proc_key_users_open(struct inode *inode, struct file *file);
static void *proc_key_users_start(struct seq_file *p, loff_t *_pos);
static void *proc_key_users_next(struct seq_file *p, void *v, loff_t *_pos);
static void proc_key_users_stop(struct seq_file *p, void *v);
static int proc_key_users_show(struct seq_file *m, void *v);
static const struct seq_operations proc_key_users_ops = ;
static const struct file_operations proc_key_users_fops = ;
static int __init key_proc_init(void)
__initcall(key_proc_init);
static struct rb_node *key_serial_next(struct rb_node *n)
static int proc_keys_open(struct inode *inode, struct file *file)
static struct key *find_ge_key(key_serial_t id)
static void *proc_keys_start(struct seq_file *p, loff_t *_pos)
__acquires(key_serial_lock)
static inline key_serial_t key_node_serial(struct rb_node *n)
static void *proc_keys_next(struct seq_file *p, void *v, loff_t *_pos)
static void proc_keys_stop(struct seq_file *p, void *v)
__releases(key_serial_lock)
static int proc_keys_show(struct seq_file *m, void *v)
static struct rb_node *__key_user_next(struct rb_node *n)
static struct rb_node *key_user_next(struct rb_node *n)
static struct rb_node *key_user_first(struct rb_root *r)
static int proc_key_users_open(struct inode *inode, struct file *file)
static void *proc_key_users_start(struct seq_file *p, loff_t *_pos)
__acquires(key_user_lock)
static void *proc_key_users_next(struct seq_file *p, void *v, loff_t *_pos)
static void proc_key_users_stop(struct seq_file *p, void *v)
__releases(key_user_lock)
static int proc_key_users_show(struct seq_file *m, void *v)
