void
cifs_dump_mem(char *label, void *data, int length)
void cifs_dump_detail(struct smb_hdr *smb)
void cifs_dump_mids(struct TCP_Server_Info *server)
static int cifs_debug_data_proc_show(struct seq_file *m, void *v)
static int cifs_debug_data_proc_open(struct inode *inode, struct file *file)
static const struct file_operations cifs_debug_data_proc_fops = ;
static ssize_t cifs_stats_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *ppos)
static int cifs_stats_proc_show(struct seq_file *m, void *v)
static int cifs_stats_proc_open(struct inode *inode, struct file *file)
static const struct file_operations cifs_stats_proc_fops = ;
static struct proc_dir_entry *proc_fs_cifs;
static const struct file_operations cifsFYI_proc_fops;
static const struct file_operations cifs_oplock_proc_fops;
static const struct file_operations cifs_lookup_cache_proc_fops;
static const struct file_operations traceSMB_proc_fops;
static const struct file_operations cifs_multiuser_mount_proc_fops;
static const struct file_operations cifs_security_flags_proc_fops;
static const struct file_operations cifs_linux_ext_proc_fops;
void
cifs_proc_init(void)
void
cifs_proc_clean(void)
static int cifsFYI_proc_show(struct seq_file *m, void *v)
static int cifsFYI_proc_open(struct inode *inode, struct file *file)
static ssize_t cifsFYI_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations cifsFYI_proc_fops = ;
static int cifs_oplock_proc_show(struct seq_file *m, void *v)
static int cifs_oplock_proc_open(struct inode *inode, struct file *file)
static ssize_t cifs_oplock_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *ppos)
static const struct file_operations cifs_oplock_proc_fops = ;
static int cifs_linux_ext_proc_show(struct seq_file *m, void *v)
static int cifs_linux_ext_proc_open(struct inode *inode, struct file *file)
static ssize_t cifs_linux_ext_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *ppos)
static const struct file_operations cifs_linux_ext_proc_fops = ;
static int cifs_lookup_cache_proc_show(struct seq_file *m, void *v)
static int cifs_lookup_cache_proc_open(struct inode *inode, struct file *file)
static ssize_t cifs_lookup_cache_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *ppos)
static const struct file_operations cifs_lookup_cache_proc_fops = ;
static int traceSMB_proc_show(struct seq_file *m, void *v)
static int traceSMB_proc_open(struct inode *inode, struct file *file)
static ssize_t traceSMB_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations traceSMB_proc_fops = ;
static int cifs_multiuser_mount_proc_show(struct seq_file *m, void *v)
static int cifs_multiuser_mount_proc_open(struct inode *inode, struct file *fh)
static ssize_t cifs_multiuser_mount_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *ppos)
static const struct file_operations cifs_multiuser_mount_proc_fops = ;
static int cifs_security_flags_proc_show(struct seq_file *m, void *v)
static int cifs_security_flags_proc_open(struct inode *inode, struct file *file)
static ssize_t cifs_security_flags_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *ppos)
static const struct file_operations cifs_security_flags_proc_fops = ;
inline void cifs_proc_init(void)
inline void cifs_proc_clean(void)
