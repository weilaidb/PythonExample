#undef ID_MASK
#undef N_DATA
extern PISDN_ADAPTER IoAdapters[MAX_ADAPTER];
extern void divas_get_version(char *);
extern void diva_get_vserial_number(PISDN_ADAPTER IoAdapter, char *buf);
static char *divas_proc_name = "divas";
static char *adapter_dir_name = "adapter";
static char *info_proc_name = "info";
static char *grp_opt_proc_name = "group_optimization";
static char *d_l1_down_proc_name = "dynamic_l1_down";
extern struct proc_dir_entry *proc_net_eicon;
static struct proc_dir_entry *divas_proc_entry = NULL;
static ssize_t
divas_read(struct file *file, char __user *buf, size_t count, loff_t * off)
static ssize_t
divas_write(struct file *file, const char __user *buf, size_t count, loff_t * off)
static unsigned int divas_poll(struct file *file, poll_table * wait)
static int divas_open(struct inode *inode, struct file *file)
static int divas_close(struct inode *inode, struct file *file)
static const struct file_operations divas_fops = ;
int create_divas_proc(void)
void remove_divas_proc(void)
static ssize_t grp_opt_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static ssize_t d_l1_down_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static int d_l1_down_proc_show(struct seq_file *m, void *v)
static int d_l1_down_proc_open(struct inode *inode, struct file *file)
static const struct file_operations d_l1_down_proc_fops = ;
static int grp_opt_proc_show(struct seq_file *m, void *v)
static int grp_opt_proc_open(struct inode *inode, struct file *file)
static const struct file_operations grp_opt_proc_fops = ;
static ssize_t info_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static int info_proc_show(struct seq_file *m, void *v)
static int info_proc_open(struct inode *inode, struct file *file)
static const struct file_operations info_proc_fops = ;
int create_adapter_proc(diva_os_xdi_adapter_t * a)
void remove_adapter_proc(diva_os_xdi_adapter_t * a)
