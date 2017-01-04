static char *state2str(unsigned short state)
static void *controller_start(struct seq_file *seq, loff_t *pos)
__acquires(capi_controller_lock)
static void *controller_next(struct seq_file *seq, void *v, loff_t *pos)
static void controller_stop(struct seq_file *seq, void *v)
__releases(capi_controller_lock)
static int controller_show(struct seq_file *seq, void *v)
static int contrstats_show(struct seq_file *seq, void *v)
static const struct seq_operations seq_controller_ops = ;
static const struct seq_operations seq_contrstats_ops = ;
static int seq_controller_open(struct inode *inode, struct file *file)
static int seq_contrstats_open(struct inode *inode, struct file *file)
static const struct file_operations proc_controller_ops = ;
static const struct file_operations proc_contrstats_ops = ;
static void *applications_start(struct seq_file *seq, loff_t *pos)
__acquires(capi_controller_lock)
static void *
applications_next(struct seq_file *seq, void *v, loff_t *pos)
static void applications_stop(struct seq_file *seq, void *v)
__releases(capi_controller_lock)
static int
applications_show(struct seq_file *seq, void *v)
static int
applstats_show(struct seq_file *seq, void *v)
static const struct seq_operations seq_applications_ops = ;
static const struct seq_operations seq_applstats_ops = ;
static int
seq_applications_open(struct inode *inode, struct file *file)
static int
seq_applstats_open(struct inode *inode, struct file *file)
static const struct file_operations proc_applications_ops = ;
static const struct file_operations proc_applstats_ops = ;
static void *capi_driver_start(struct seq_file *seq, loff_t *pos)
__acquires(&capi_drivers_lock)
static void *capi_driver_next(struct seq_file *seq, void *v, loff_t *pos)
static void capi_driver_stop(struct seq_file *seq, void *v)
__releases(&capi_drivers_lock)
static int capi_driver_show(struct seq_file *seq, void *v)
static const struct seq_operations seq_capi_driver_ops = ;
static int
seq_capi_driver_open(struct inode *inode, struct file *file)
static const struct file_operations proc_driver_ops = ;
void __init
kcapi_proc_init(void)
void __exit
kcapi_proc_exit(void)
