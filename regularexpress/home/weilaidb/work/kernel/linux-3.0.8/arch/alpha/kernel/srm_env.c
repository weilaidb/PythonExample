#define BASE_DIR	"srm_environment"
#define NAMED_DIR	"named_variables"
#define NUMBERED_DIR	"numbered_variables"
#define VERSION		"0.0.6"
#define NAME		"srm_env"
MODULE_AUTHOR("Jan-Benedict Glaw <jbglaw@lug-owl.de>");
MODULE_DESCRIPTION("Accessing Alpha SRM environment through procfs interface");
MODULE_LICENSE("GPL");
typedef struct _srm_env  srm_env_t;
static struct proc_dir_entry	*base_dir;
static struct proc_dir_entry	*named_dir;
static struct proc_dir_entry	*numbered_dir;
static char			number[256][4];
static srm_env_t	srm_named_entries[] = ;
static srm_env_t	srm_numbered_entries[256];
static int srm_env_proc_show(struct seq_file *m, void *v)
static int srm_env_proc_open(struct inode *inode, struct file *file)
static ssize_t srm_env_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations srm_env_proc_fops = ;
static void
srm_env_cleanup(void)
static int __init
srm_env_init(void)
static void __exit
srm_env_exit(void)
module_init(srm_env_init);
module_exit(srm_env_exit);
