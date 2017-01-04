static int check_quotactl_permission(struct super_block *sb, int type, int cmd,
qid_t id)
static void quota_sync_one(struct super_block *sb, void *arg)
static int quota_sync_all(int type)
static int quota_quotaon(struct super_block *sb, int type, int cmd, qid_t id,
struct path *path)
static int quota_getfmt(struct super_block *sb, int type, void __user *addr)
static int quota_getinfo(struct super_block *sb, int type, void __user *addr)
static int quota_setinfo(struct super_block *sb, int type, void __user *addr)
static void copy_to_if_dqblk(struct if_dqblk *dst, struct fs_disk_quota *src)
static int quota_getquota(struct super_block *sb, int type, qid_t id,
void __user *addr)
static void copy_from_if_dqblk(struct fs_disk_quota *dst, struct if_dqblk *src)
static int quota_setquota(struct super_block *sb, int type, qid_t id,
void __user *addr)
static int quota_setxstate(struct super_block *sb, int cmd, void __user *addr)
static int quota_getxstate(struct super_block *sb, void __user *addr)
static int quota_setxquota(struct super_block *sb, int type, qid_t id,
void __user *addr)
static int quota_getxquota(struct super_block *sb, int type, qid_t id,
void __user *addr)
static int do_quotactl(struct super_block *sb, int type, int cmd, qid_t id,
void __user *addr, struct path *path)
static struct super_block *quotactl_block(const char __user *special)
SYSCALL_DEFINE4(quotactl, unsigned int, cmd, const char __user *, special,
qid_t, id, void __user *, addr)
