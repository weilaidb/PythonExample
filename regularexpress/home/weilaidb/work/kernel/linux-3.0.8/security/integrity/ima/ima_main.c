int ima_initialized;
char *ima_hash = "sha1";
static int __init hash_setup(char *str)
__setup("ima_hash=", hash_setup);
static void ima_rdwr_violation_check(struct file *file)
static void ima_check_last_writer(struct ima_iint_cache *iint,
struct inode *inode,
struct file *file)
void ima_file_free(struct file *file)
static int process_measurement(struct file *file, const unsigned char *filename,
int mask, int function)
int ima_file_mmap(struct file *file, unsigned long prot)
int ima_bprm_check(struct linux_binprm *bprm)
int ima_file_check(struct file *file, int mask)
EXPORT_SYMBOL_GPL(ima_file_check);
static int __init init_ima(void)
static void __exit cleanup_ima(void)
late_initcall(init_ima);
MODULE_DESCRIPTION("Integrity Measurement Architecture");
MODULE_LICENSE("GPL");
