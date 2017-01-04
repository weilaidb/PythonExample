static LIST_HEAD(cifs_dfs_automount_list);
static void cifs_dfs_expire_automounts(struct work_struct *work);
static DECLARE_DELAYED_WORK(cifs_dfs_automount_task,
cifs_dfs_expire_automounts);
static int cifs_dfs_mountpoint_expiry_timeout = 500 * HZ;
static void cifs_dfs_expire_automounts(struct work_struct *work)
void cifs_dfs_release_automount_timer(void)
static char *cifs_get_share_name(const char *node_name)
char *cifs_compose_mount_options(const char *sb_mountdata,
const char *fullpath,
const struct dfs_info3_param *ref,
char **devname)
static struct vfsmount *cifs_dfs_do_refmount(struct cifs_sb_info *cifs_sb,
const char *fullpath, const struct dfs_info3_param *ref)
static void dump_referral(const struct dfs_info3_param *ref)
static struct vfsmount *cifs_dfs_do_automount(struct dentry *mntpt)
struct vfsmount *cifs_dfs_d_automount(struct path *path)
const struct inode_operations cifs_dfs_referral_inode_operations = ;
