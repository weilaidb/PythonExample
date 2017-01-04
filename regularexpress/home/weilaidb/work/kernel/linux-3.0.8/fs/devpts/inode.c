#define DEVPTS_DEFAULT_MODE 0600
#define DEVPTS_DEFAULT_PTMX_MODE 0000
#define PTMX_MINOR	2
extern int pty_limit;
static DEFINE_MUTEX(allocated_ptys_lock);
static struct vfsmount *devpts_mnt;
struct pts_mount_opts ;
enum ;
static const match_table_t tokens = ;
struct pts_fs_info ;
static inline struct pts_fs_info *DEVPTS_SB(struct super_block *sb)
static inline struct super_block *pts_sb_from_inode(struct inode *inode)
#define PARSE_MOUNT	0
#define PARSE_REMOUNT	1
static int parse_mount_options(char *data, int op, struct pts_mount_opts *opts)
static int mknod_ptmx(struct super_block *sb)
static void update_ptmx_mode(struct pts_fs_info *fsi)
static inline void update_ptmx_mode(struct pts_fs_info *fsi)
static int devpts_remount(struct super_block *sb, int *flags, char *data)
static int devpts_show_options(struct seq_file *seq, struct vfsmount *vfs)
static const struct super_operations devpts_sops = ;
static void *new_pts_fs_info(void)
static int
devpts_fill_super(struct super_block *s, void *data, int silent)
static int compare_init_pts_sb(struct super_block *s, void *p)
static struct dentry *devpts_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct dentry *devpts_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data)
static void devpts_kill_sb(struct super_block *sb)
static struct file_system_type devpts_fs_type = ;
int devpts_new_index(struct inode *ptmx_inode)
void devpts_kill_index(struct inode *ptmx_inode, int idx)
int devpts_pty_new(struct inode *ptmx_inode, struct tty_struct *tty)
struct tty_struct *devpts_get_tty(struct inode *pts_inode, int number)
void devpts_pty_kill(struct tty_struct *tty)
static int __init init_devpts_fs(void)
module_init(init_devpts_fs)
