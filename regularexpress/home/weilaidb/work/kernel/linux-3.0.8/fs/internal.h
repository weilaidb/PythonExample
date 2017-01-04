struct super_block;
struct file_system_type;
struct linux_binprm;
struct path;
extern struct super_block *blockdev_superblock;
extern void __init bdev_cache_init(void);
static inline int sb_is_blkdev_sb(struct super_block *sb)
extern int __sync_blockdev(struct block_device *bdev, int wait);
static inline void bdev_cache_init(void)
static inline int sb_is_blkdev_sb(struct super_block *sb)
static inline int __sync_blockdev(struct block_device *bdev, int wait)
extern void __init chrdev_init(void);
extern int check_unsafe_exec(struct linux_binprm *);
extern int copy_mount_options(const void __user *, unsigned long *);
extern int copy_mount_string(const void __user *, char **);
extern unsigned int mnt_get_count(struct vfsmount *mnt);
extern struct vfsmount *__lookup_mnt(struct vfsmount *, struct dentry *, int);
extern struct vfsmount *lookup_mnt(struct path *);
extern void mnt_set_mountpoint(struct vfsmount *, struct dentry *,
struct vfsmount *);
extern void release_mounts(struct list_head *);
extern void umount_tree(struct vfsmount *, int, struct list_head *);
extern struct vfsmount *copy_tree(struct vfsmount *, struct dentry *, int);
extern int finish_automount(struct vfsmount *, struct path *);
extern void mnt_make_longterm(struct vfsmount *);
extern void mnt_make_shortterm(struct vfsmount *);
extern void __init mnt_init(void);
DECLARE_BRLOCK(vfsmount_lock);
extern void chroot_fs_refs(struct path *, struct path *);
extern void file_sb_list_add(struct file *f, struct super_block *sb);
extern void file_sb_list_del(struct file *f);
extern void mark_files_ro(struct super_block *);
extern struct file *get_empty_filp(void);
extern int do_remount_sb(struct super_block *, int, void *, int);
extern void __put_super(struct super_block *sb);
extern void put_super(struct super_block *sb);
extern struct dentry *mount_fs(struct file_system_type *,
int, const char *, void *);
struct nameidata;
extern struct file *nameidata_to_filp(struct nameidata *);
extern void release_open_intent(struct nameidata *);
struct open_flags ;
extern struct file *do_filp_open(int dfd, const char *pathname,
const struct open_flags *op, int lookup_flags);
extern struct file *do_file_open_root(struct dentry *, struct vfsmount *,
const char *, const struct open_flags *, int lookup_flags);
extern long do_handle_open(int mountdirfd,
struct file_handle __user *ufh, int open_flag);
extern spinlock_t inode_sb_list_lock;
extern void inode_wb_list_del(struct inode *inode);
extern int get_nr_dirty_inodes(void);
extern void evict_inodes(struct super_block *);
extern int invalidate_inodes(struct super_block *, bool);
