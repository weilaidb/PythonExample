#define _CIFSFS_H
#define ROOT_I 2
static inline ino_t
cifs_uniqueid_to_ino_t(u64 fileid)
extern struct file_system_type cifs_fs_type;
extern const struct address_space_operations cifs_addr_ops;
extern const struct address_space_operations cifs_addr_ops_smallbuf;
extern void cifs_sb_active(struct super_block *sb);
extern void cifs_sb_deactive(struct super_block *sb);
extern const struct inode_operations cifs_dir_inode_ops;
extern struct inode *cifs_root_iget(struct super_block *);
extern int cifs_create(struct inode *, struct dentry *, int,
struct nameidata *);
extern struct dentry *cifs_lookup(struct inode *, struct dentry *,
struct nameidata *);
extern int cifs_unlink(struct inode *dir, struct dentry *dentry);
extern int cifs_hardlink(struct dentry *, struct inode *, struct dentry *);
extern int cifs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int cifs_mkdir(struct inode *, struct dentry *, int);
extern int cifs_rmdir(struct inode *, struct dentry *);
extern int cifs_rename(struct inode *, struct dentry *, struct inode *,
struct dentry *);
extern int cifs_revalidate_file_attr(struct file *filp);
extern int cifs_revalidate_dentry_attr(struct dentry *);
extern int cifs_revalidate_file(struct file *filp);
extern int cifs_revalidate_dentry(struct dentry *);
extern int cifs_invalidate_mapping(struct inode *inode);
extern int cifs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int cifs_setattr(struct dentry *, struct iattr *);
extern const struct inode_operations cifs_file_inode_ops;
extern const struct inode_operations cifs_symlink_inode_ops;
extern const struct inode_operations cifs_dfs_referral_inode_operations;
extern const struct file_operations cifs_file_ops;
extern const struct file_operations cifs_file_direct_ops;
extern const struct file_operations cifs_file_strict_ops;
extern const struct file_operations cifs_file_nobrl_ops;
extern const struct file_operations cifs_file_direct_nobrl_ops;
extern const struct file_operations cifs_file_strict_nobrl_ops;
extern int cifs_open(struct inode *inode, struct file *file);
extern int cifs_close(struct inode *inode, struct file *file);
extern int cifs_closedir(struct inode *inode, struct file *file);
extern ssize_t cifs_user_readv(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos);
extern ssize_t cifs_strict_readv(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos);
extern ssize_t cifs_user_writev(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos);
extern ssize_t cifs_strict_writev(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos);
extern int cifs_lock(struct file *, int, struct file_lock *);
extern int cifs_fsync(struct file *, int);
extern int cifs_strict_fsync(struct file *, int);
extern int cifs_flush(struct file *, fl_owner_t id);
extern int cifs_file_mmap(struct file * , struct vm_area_struct *);
extern int cifs_file_strict_mmap(struct file * , struct vm_area_struct *);
extern const struct file_operations cifs_dir_ops;
extern int cifs_dir_open(struct inode *inode, struct file *file);
extern int cifs_readdir(struct file *file, void *direntry, filldir_t filldir);
extern const struct dentry_operations cifs_dentry_ops;
extern const struct dentry_operations cifs_ci_dentry_ops;
extern struct vfsmount *cifs_dfs_d_automount(struct path *path);
#define cifs_dfs_d_automount NULL
extern void *cifs_follow_link(struct dentry *direntry, struct nameidata *nd);
extern void cifs_put_link(struct dentry *direntry,
struct nameidata *nd, void *);
extern int cifs_readlink(struct dentry *direntry, char __user *buffer,
int buflen);
extern int cifs_symlink(struct inode *inode, struct dentry *direntry,
const char *symname);
extern int	cifs_removexattr(struct dentry *, const char *);
extern int	cifs_setxattr(struct dentry *, const char *, const void *,
size_t, int);
extern ssize_t	cifs_getxattr(struct dentry *, const char *, void *, size_t);
extern ssize_t	cifs_listxattr(struct dentry *, char *, size_t);
extern long cifs_ioctl(struct file *filep, unsigned int cmd, unsigned long arg);
extern const struct export_operations cifs_export_ops;
#define CIFS_VERSION   "1.74"
