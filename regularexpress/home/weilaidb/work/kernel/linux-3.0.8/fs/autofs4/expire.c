static unsigned long now;
static inline int autofs4_can_expire(struct dentry *dentry,
unsigned long timeout, int do_now)
static int autofs4_mount_busy(struct vfsmount *mnt, struct dentry *dentry)
static struct dentry *get_next_positive_subdir(struct dentry *prev,
struct dentry *root)
static struct dentry *get_next_positive_dentry(struct dentry *prev,
struct dentry *root)
static int autofs4_direct_busy(struct vfsmount *mnt,
struct dentry *top,
unsigned long timeout,
int do_now)
static int autofs4_tree_busy(struct vfsmount *mnt,
struct dentry *top,
unsigned long timeout,
int do_now)
static struct dentry *autofs4_check_leaves(struct vfsmount *mnt,
struct dentry *parent,
unsigned long timeout,
int do_now)
struct dentry *autofs4_expire_direct(struct super_block *sb,
struct vfsmount *mnt,
struct autofs_sb_info *sbi,
int how)
struct dentry *autofs4_expire_indirect(struct super_block *sb,
struct vfsmount *mnt,
struct autofs_sb_info *sbi,
int how)
int autofs4_expire_wait(struct dentry *dentry)
int autofs4_expire_run(struct super_block *sb,
struct vfsmount *mnt,
struct autofs_sb_info *sbi,
struct autofs_packet_expire __user *pkt_p)
int autofs4_do_expire_multi(struct super_block *sb, struct vfsmount *mnt,
struct autofs_sb_info *sbi, int when)
int autofs4_expire_multi(struct super_block *sb, struct vfsmount *mnt,
struct autofs_sb_info *sbi, int __user *arg)
