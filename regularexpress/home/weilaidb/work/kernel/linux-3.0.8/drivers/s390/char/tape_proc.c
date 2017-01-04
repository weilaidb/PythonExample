#define KMSG_COMPONENT "tape"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define TAPE_DBF_AREA	tape_core_dbf
static const char *tape_med_st_verbose[MS_SIZE] =
;
static struct proc_dir_entry *tape_proc_devices;
static int tape_proc_show(struct seq_file *m, void *v)
static void *tape_proc_start(struct seq_file *m, loff_t *pos)
static void *tape_proc_next(struct seq_file *m, void *v, loff_t *pos)
static void tape_proc_stop(struct seq_file *m, void *v)
static const struct seq_operations tape_proc_seq = ;
static int tape_proc_open(struct inode *inode, struct file *file)
static const struct file_operations tape_proc_ops =
;
void
tape_proc_init(void)
void
tape_proc_cleanup(void)
