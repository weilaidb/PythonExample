static long do_sys_name_to_handle(struct path *path,
struct file_handle __user *ufh,
int __user *mnt_id)
SYSCALL_DEFINE5(name_to_handle_at, int, dfd, const char __user *, name,
struct file_handle __user *, handle, int __user *, mnt_id,
int, flag)
static struct vfsmount *get_vfsmount_from_fd(int fd)
static int vfs_dentry_acceptable(void *context, struct dentry *dentry)
static int do_handle_to_path(int mountdirfd, struct file_handle *handle,
struct path *path)
static int handle_to_path(int mountdirfd, struct file_handle __user *ufh,
struct path *path)
long do_handle_open(int mountdirfd,
struct file_handle __user *ufh, int open_flag)
SYSCALL_DEFINE3(open_by_handle_at, int, mountdirfd,
struct file_handle __user *, handle,
int, flags)
