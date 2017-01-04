enum ;
static ssize_t write_svc(struct file *file, char *buf, size_t size);
static ssize_t write_add(struct file *file, char *buf, size_t size);
static ssize_t write_del(struct file *file, char *buf, size_t size);
static ssize_t write_export(struct file *file, char *buf, size_t size);
static ssize_t write_unexport(struct file *file, char *buf, size_t size);
static ssize_t write_getfd(struct file *file, char *buf, size_t size);
static ssize_t write_getfs(struct file *file, char *buf, size_t size);
static ssize_t write_filehandle(struct file *file, char *buf, size_t size);
static ssize_t write_unlock_ip(struct file *file, char *buf, size_t size);
static ssize_t write_unlock_fs(struct file *file, char *buf, size_t size);
static ssize_t write_threads(struct file *file, char *buf, size_t size);
static ssize_t write_pool_threads(struct file *file, char *buf, size_t size);
static ssize_t write_versions(struct file *file, char *buf, size_t size);
static ssize_t write_ports(struct file *file, char *buf, size_t size);
static ssize_t write_maxblksize(struct file *file, char *buf, size_t size);
static ssize_t write_leasetime(struct file *file, char *buf, size_t size);
static ssize_t write_gracetime(struct file *file, char *buf, size_t size);
static ssize_t write_recoverydir(struct file *file, char *buf, size_t size);
static ssize_t (*write_op[])(struct file *, char *, size_t) = ;
static ssize_t nfsctl_transaction_write(struct file *file, const char __user *buf, size_t size, loff_t *pos)
static ssize_t nfsctl_transaction_read(struct file *file, char __user *buf, size_t size, loff_t *pos)
static const struct file_operations transaction_ops = ;
static int exports_open(struct inode *inode, struct file *file)
static const struct file_operations exports_operations = ;
static int export_features_show(struct seq_file *m, void *v)
static int export_features_open(struct inode *inode, struct file *file)
static struct file_operations export_features_operations = ;
#if defined(CONFIG_SUNRPC_GSS) || defined(CONFIG_SUNRPC_GSS_MODULE)
static int supported_enctypes_show(struct seq_file *m, void *v)
static int supported_enctypes_open(struct inode *inode, struct file *file)
static struct file_operations supported_enctypes_ops = ;
extern int nfsd_pool_stats_open(struct inode *inode, struct file *file);
extern int nfsd_pool_stats_release(struct inode *inode, struct file *file);
static const struct file_operations pool_stats_operations = ;
static ssize_t write_svc(struct file *file, char *buf, size_t size)
static ssize_t write_add(struct file *file, char *buf, size_t size)
static ssize_t write_del(struct file *file, char *buf, size_t size)
static ssize_t write_export(struct file *file, char *buf, size_t size)
static ssize_t write_unexport(struct file *file, char *buf, size_t size)
static ssize_t write_getfs(struct file *file, char *buf, size_t size)
static ssize_t write_getfd(struct file *file, char *buf, size_t size)
static ssize_t write_unlock_ip(struct file *file, char *buf, size_t size)
static ssize_t write_unlock_fs(struct file *file, char *buf, size_t size)
static ssize_t write_filehandle(struct file *file, char *buf, size_t size)
static ssize_t write_threads(struct file *file, char *buf, size_t size)
static ssize_t write_pool_threads(struct file *file, char *buf, size_t size)
static ssize_t __write_versions(struct file *file, char *buf, size_t size)
static ssize_t write_versions(struct file *file, char *buf, size_t size)
static ssize_t __write_ports_names(char *buf)
static ssize_t __write_ports_addfd(char *buf)
static ssize_t __write_ports_delfd(char *buf)
static ssize_t __write_ports_addxprt(char *buf)
static ssize_t __write_ports_delxprt(char *buf)
static ssize_t __write_ports(struct file *file, char *buf, size_t size)
static ssize_t write_ports(struct file *file, char *buf, size_t size)
int nfsd_max_blksize;
static ssize_t write_maxblksize(struct file *file, char *buf, size_t size)
static ssize_t __nfsd4_write_time(struct file *file, char *buf, size_t size, time_t *time)
static ssize_t nfsd4_write_time(struct file *file, char *buf, size_t size, time_t *time)
static ssize_t write_leasetime(struct file *file, char *buf, size_t size)
static ssize_t write_gracetime(struct file *file, char *buf, size_t size)
extern char *nfs4_recoverydir(void);
static ssize_t __write_recoverydir(struct file *file, char *buf, size_t size)
static ssize_t write_recoverydir(struct file *file, char *buf, size_t size)
static int nfsd_fill_super(struct super_block * sb, void * data, int silent)
static struct dentry *nfsd_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type nfsd_fs_type = ;
static int create_proc_exports_entry(void)
static int create_proc_exports_entry(void)
static int __init init_nfsd(void)
static void __exit exit_nfsd(void)
MODULE_AUTHOR("Olaf Kirch <okir@monad.swb.de>");
MODULE_LICENSE("GPL");
module_init(init_nfsd)
module_exit(exit_nfsd)
