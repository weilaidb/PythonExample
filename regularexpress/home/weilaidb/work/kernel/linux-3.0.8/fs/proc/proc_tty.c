static struct proc_dir_entry *proc_tty_ldisc, *proc_tty_driver;
static void show_tty_range(struct seq_file *m, struct tty_driver *p,
dev_t from, int num)
static int show_tty_driver(struct seq_file *m, void *v)
static void *t_start(struct seq_file *m, loff_t *pos)
static void *t_next(struct seq_file *m, void *v, loff_t *pos)
static void t_stop(struct seq_file *m, void *v)
static const struct seq_operations tty_drivers_op = ;
static int tty_drivers_open(struct inode *inode, struct file *file)
static const struct file_operations proc_tty_drivers_operations = ;
void proc_tty_register_driver(struct tty_driver *driver)
void proc_tty_unregister_driver(struct tty_driver *driver)
void __init proc_tty_init(void)
