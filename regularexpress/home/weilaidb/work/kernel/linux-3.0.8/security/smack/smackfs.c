enum smk_inos ;
static DEFINE_MUTEX(smack_list_lock);
static DEFINE_MUTEX(smack_cipso_lock);
static DEFINE_MUTEX(smack_ambient_lock);
static DEFINE_MUTEX(smk_netlbladdr_lock);
char *smack_net_ambient = smack_known_floor.smk_known;
int smack_cipso_direct = SMACK_CIPSO_DIRECT_DEFAULT;
char *smack_onlycap;
LIST_HEAD(smk_netlbladdr_list);
LIST_HEAD(smack_rule_list);
static int smk_cipso_doi_value = SMACK_CIPSO_DOI_DEFAULT;
const char *smack_cipso_option = SMACK_CIPSO_OPTION;
#define	SEQ_READ_FINISHED	1
#define SMK_DIGITLEN 4
#define SMK_CIPSOMIN (SMK_LABELLEN + 2 * SMK_DIGITLEN)
#define SMK_CIPSOMAX (SMK_CIPSOMIN + SMACK_CIPSO_MAXCATNUM * SMK_DIGITLEN)
#define SMK_OACCESS	"rwxa"
#define SMK_ACCESS	"rwxat"
#define SMK_OACCESSLEN	(sizeof(SMK_OACCESS) - 1)
#define SMK_ACCESSLEN	(sizeof(SMK_ACCESS) - 1)
#define SMK_OLOADLEN	(SMK_LABELLEN + SMK_LABELLEN + SMK_OACCESSLEN)
#define SMK_LOADLEN	(SMK_LABELLEN + SMK_LABELLEN + SMK_ACCESSLEN)
static void smk_netlabel_audit_set(struct netlbl_audit *nap)
#define SMK_NETLBLADDRMIN	9
#define SMK_NETLBLADDRMAX	42
static int smk_set_access(struct smack_rule *srp, struct list_head *rule_list,
struct mutex *rule_lock)
static ssize_t smk_write_load_list(struct file *file, const char __user *buf,
size_t count, loff_t *ppos,
struct list_head *rule_list,
struct mutex *rule_lock)
static void *load_seq_start(struct seq_file *s, loff_t *pos)
static void *load_seq_next(struct seq_file *s, void *v, loff_t *pos)
static int load_seq_show(struct seq_file *s, void *v)
static void load_seq_stop(struct seq_file *s, void *v)
static const struct seq_operations load_seq_ops = ;
static int smk_open_load(struct inode *inode, struct file *file)
static ssize_t smk_write_load(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations smk_load_ops = ;
static void smk_cipso_doi(void)
static void smk_unlbl_ambient(char *oldambient)
static void *cipso_seq_start(struct seq_file *s, loff_t *pos)
static void *cipso_seq_next(struct seq_file *s, void *v, loff_t *pos)
static int cipso_seq_show(struct seq_file *s, void *v)
static void cipso_seq_stop(struct seq_file *s, void *v)
static const struct seq_operations cipso_seq_ops = ;
static int smk_open_cipso(struct inode *inode, struct file *file)
static ssize_t smk_write_cipso(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations smk_cipso_ops = ;
static void *netlbladdr_seq_start(struct seq_file *s, loff_t *pos)
static void *netlbladdr_seq_next(struct seq_file *s, void *v, loff_t *pos)
#define BEBITS	(sizeof(__be32) * 8)
static int netlbladdr_seq_show(struct seq_file *s, void *v)
static void netlbladdr_seq_stop(struct seq_file *s, void *v)
static const struct seq_operations netlbladdr_seq_ops = ;
static int smk_open_netlbladdr(struct inode *inode, struct file *file)
static void smk_netlbladdr_insert(struct smk_netlbladdr *new)
static ssize_t smk_write_netlbladdr(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations smk_netlbladdr_ops = ;
static ssize_t smk_read_doi(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t smk_write_doi(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations smk_doi_ops = ;
static ssize_t smk_read_direct(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t smk_write_direct(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations smk_direct_ops = ;
static ssize_t smk_read_ambient(struct file *filp, char __user *buf,
size_t cn, loff_t *ppos)
static ssize_t smk_write_ambient(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations smk_ambient_ops = ;
static ssize_t smk_read_onlycap(struct file *filp, char __user *buf,
size_t cn, loff_t *ppos)
static ssize_t smk_write_onlycap(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations smk_onlycap_ops = ;
static ssize_t smk_read_logging(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t smk_write_logging(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations smk_logging_ops = ;
static void *load_self_seq_start(struct seq_file *s, loff_t *pos)
static void *load_self_seq_next(struct seq_file *s, void *v, loff_t *pos)
static int load_self_seq_show(struct seq_file *s, void *v)
static void load_self_seq_stop(struct seq_file *s, void *v)
static const struct seq_operations load_self_seq_ops = ;
static int smk_open_load_self(struct inode *inode, struct file *file)
static ssize_t smk_write_load_self(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations smk_load_self_ops = ;
static int smk_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *smk_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type smk_fs_type = ;
static struct vfsmount *smackfs_mount;
static int __init init_smk_fs(void)
__initcall(init_smk_fs);
