static struct ctl_table crypto_sysctl_table[] = ;
static struct ctl_table crypto_dir_table[] = ;
static struct ctl_table_header *crypto_sysctls;
static void crypto_proc_fips_init(void)
static void crypto_proc_fips_exit(void)
#define crypto_proc_fips_init()
#define crypto_proc_fips_exit()
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *p, loff_t *pos)
static void c_stop(struct seq_file *m, void *p)
static int c_show(struct seq_file *m, void *p)
static const struct seq_operations crypto_seq_ops = ;
static int crypto_info_open(struct inode *inode, struct file *file)
static const struct file_operations proc_crypto_ops = ;
void __init crypto_init_proc(void)
void __exit crypto_exit_proc(void)
