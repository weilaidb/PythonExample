#define AUTOFS_DEV_IOCTL_SIZE	sizeof(struct autofs_dev_ioctl)
typedef int (*ioctl_fn)(struct file *, struct autofs_sb_info *,
struct autofs_dev_ioctl *);
static int check_name(const char *name)
static int invalid_str(char *str, size_t size)
static int check_dev_ioctl_version(int cmd, struct autofs_dev_ioctl *param)
static struct autofs_dev_ioctl *copy_dev_ioctl(struct autofs_dev_ioctl __user *in)
static inline void free_dev_ioctl(struct autofs_dev_ioctl *param)
static int validate_dev_ioctl(int cmd, struct autofs_dev_ioctl *param)
static struct autofs_sb_info *autofs_dev_ioctl_sbi(struct file *f)
static int autofs_dev_ioctl_protover(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int autofs_dev_ioctl_protosubver(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int find_autofs_mount(const char *pathname,
struct path *res,
int test(struct path *path, void *data),
void *data)
static int test_by_dev(struct path *path, void *p)
static int test_by_type(struct path *path, void *p)
static void autofs_dev_ioctl_fd_install(unsigned int fd, struct file *file)
static int autofs_dev_ioctl_open_mountpoint(const char *name, dev_t devid)
static int autofs_dev_ioctl_openmount(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int autofs_dev_ioctl_closemount(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int autofs_dev_ioctl_ready(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int autofs_dev_ioctl_fail(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int autofs_dev_ioctl_setpipefd(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int autofs_dev_ioctl_catatonic(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int autofs_dev_ioctl_timeout(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int autofs_dev_ioctl_requester(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int autofs_dev_ioctl_expire(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int autofs_dev_ioctl_askumount(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
static int autofs_dev_ioctl_ismountpoint(struct file *fp,
struct autofs_sb_info *sbi,
struct autofs_dev_ioctl *param)
#define cmd_idx(cmd)	(cmd - _IOC_NR(AUTOFS_DEV_IOCTL_IOC_FIRST))
static ioctl_fn lookup_dev_ioctl(unsigned int cmd)
static int _autofs_dev_ioctl(unsigned int command, struct autofs_dev_ioctl __user *user)
static long autofs_dev_ioctl(struct file *file, uint command, ulong u)
static long autofs_dev_ioctl_compat(struct file *file, uint command, ulong u)
#define autofs_dev_ioctl_compat NULL
static const struct file_operations _dev_ioctl_fops = ;
static struct miscdevice _autofs_dev_ioctl_misc = ;
MODULE_ALIAS_MISCDEV(AUTOFS_MINOR);
MODULE_ALIAS("devname:autofs");
int autofs_dev_ioctl_init(void)
void autofs_dev_ioctl_exit(void)
