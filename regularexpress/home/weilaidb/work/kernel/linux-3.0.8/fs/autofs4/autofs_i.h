#define AUTOFS_IOC_FIRST     AUTOFS_IOC_READY
#define AUTOFS_IOC_COUNT     32
#define AUTOFS_DEV_IOCTL_IOC_FIRST	(AUTOFS_DEV_IOCTL_VERSION)
#define AUTOFS_DEV_IOCTL_IOC_COUNT	(AUTOFS_IOC_COUNT - 11)
#define DPRINTK(fmt, args...)				\
do  while (0)
#define DPRINTK(fmt, args...) do  while (0)
#define AUTOFS_WARN(fmt, args...)			\
do  while (0)
#define AUTOFS_ERROR(fmt, args...)			\
do  while (0)
struct autofs_info ;
#define AUTOFS_INF_EXPIRING	(1<<0)
#define AUTOFS_INF_PENDING	(1<<2)
struct autofs_wait_queue ;
#define AUTOFS_SBI_MAGIC 0x6d4a556d
struct autofs_sb_info ;
static inline struct autofs_sb_info *autofs4_sbi(struct super_block *sb)
static inline struct autofs_info *autofs4_dentry_ino(struct dentry *dentry)
static inline int autofs4_oz_mode(struct autofs_sb_info *sbi)
static inline int autofs4_ispending(struct dentry *dentry)
struct inode *autofs4_get_inode(struct super_block *, mode_t);
void autofs4_free_ino(struct autofs_info *);
int is_autofs4_dentry(struct dentry *);
int autofs4_expire_wait(struct dentry *dentry);
int autofs4_expire_run(struct super_block *, struct vfsmount *,
struct autofs_sb_info *,
struct autofs_packet_expire __user *);
int autofs4_do_expire_multi(struct super_block *sb, struct vfsmount *mnt,
struct autofs_sb_info *sbi, int when);
int autofs4_expire_multi(struct super_block *, struct vfsmount *,
struct autofs_sb_info *, int __user *);
struct dentry *autofs4_expire_direct(struct super_block *sb,
struct vfsmount *mnt,
struct autofs_sb_info *sbi, int how);
struct dentry *autofs4_expire_indirect(struct super_block *sb,
struct vfsmount *mnt,
struct autofs_sb_info *sbi, int how);
int autofs_dev_ioctl_init(void);
void autofs_dev_ioctl_exit(void);
extern const struct inode_operations autofs4_symlink_inode_operations;
extern const struct inode_operations autofs4_dir_inode_operations;
extern const struct file_operations autofs4_dir_operations;
extern const struct file_operations autofs4_root_operations;
extern const struct dentry_operations autofs4_dentry_operations;
static inline void __managed_dentry_set_automount(struct dentry *dentry)
static inline void managed_dentry_set_automount(struct dentry *dentry)
static inline void __managed_dentry_clear_automount(struct dentry *dentry)
static inline void managed_dentry_clear_automount(struct dentry *dentry)
static inline void __managed_dentry_set_transit(struct dentry *dentry)
static inline void managed_dentry_set_transit(struct dentry *dentry)
static inline void __managed_dentry_clear_transit(struct dentry *dentry)
static inline void managed_dentry_clear_transit(struct dentry *dentry)
static inline void __managed_dentry_set_managed(struct dentry *dentry)
static inline void managed_dentry_set_managed(struct dentry *dentry)
static inline void __managed_dentry_clear_managed(struct dentry *dentry)
static inline void managed_dentry_clear_managed(struct dentry *dentry)
int autofs4_fill_super(struct super_block *, void *, int);
struct autofs_info *autofs4_new_ino(struct autofs_sb_info *);
void autofs4_clean_ino(struct autofs_info *);
int autofs4_wait(struct autofs_sb_info *,struct dentry *, enum autofs_notify);
int autofs4_wait_release(struct autofs_sb_info *,autofs_wqt_t,int);
void autofs4_catatonic_mode(struct autofs_sb_info *);
static inline u32 autofs4_get_dev(struct autofs_sb_info *sbi)
static inline u64 autofs4_get_ino(struct autofs_sb_info *sbi)
static inline int simple_positive(struct dentry *dentry)
static inline void __autofs4_add_expiring(struct dentry *dentry)
static inline void autofs4_add_expiring(struct dentry *dentry)
static inline void autofs4_del_expiring(struct dentry *dentry)
extern void autofs4_kill_sb(struct super_block *);
