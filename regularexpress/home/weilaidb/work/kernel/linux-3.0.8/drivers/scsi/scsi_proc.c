#define PROC_BLOCK_SIZE (3*1024)
static struct proc_dir_entry *proc_scsi;
static DEFINE_MUTEX(global_host_template_mutex);
static int proc_scsi_read(char *buffer, char **start, off_t offset,
int length, int *eof, void *data)
static int proc_scsi_write_proc(struct file *file, const char __user *buf,
unsigned long count, void *data)
void scsi_proc_hostdir_add(struct scsi_host_template *sht)
void scsi_proc_hostdir_rm(struct scsi_host_template *sht)
void scsi_proc_host_add(struct Scsi_Host *shost)
void scsi_proc_host_rm(struct Scsi_Host *shost)
static int proc_print_scsidevice(struct device *dev, void *data)
static int scsi_add_single_device(uint host, uint channel, uint id, uint lun)
static int scsi_remove_single_device(uint host, uint channel, uint id, uint lun)
static ssize_t proc_scsi_write(struct file *file, const char __user *buf,
size_t length, loff_t *ppos)
static int always_match(struct device *dev, void *data)
static inline struct device *next_scsi_device(struct device *start)
static void *scsi_seq_start(struct seq_file *sfile, loff_t *pos)
static void *scsi_seq_next(struct seq_file *sfile, void *v, loff_t *pos)
static void scsi_seq_stop(struct seq_file *sfile, void *v)
static int scsi_seq_show(struct seq_file *sfile, void *dev)
static const struct seq_operations scsi_seq_ops = ;
static int proc_scsi_open(struct inode *inode, struct file *file)
static const struct file_operations proc_scsi_operations = ;
int __init scsi_init_procfs(void)
void scsi_exit_procfs(void)
