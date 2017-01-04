#define LINUX_EXPORTFS_H 1
struct dentry;
struct inode;
struct super_block;
struct vfsmount;
#define MAX_HANDLE_SZ 128
enum fid_type ;
struct fid ;
struct export_operations ;
extern int exportfs_encode_fh(struct dentry *dentry, struct fid *fid,
int *max_len, int connectable);
extern struct dentry *exportfs_decode_fh(struct vfsmount *mnt, struct fid *fid,
int fh_len, int fileid_type, int (*acceptable)(void *, struct dentry *),
void *context);
extern struct dentry *generic_fh_to_dentry(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type,
struct inode *(*get_inode) (struct super_block *sb, u64 ino, u32 gen));
extern struct dentry *generic_fh_to_parent(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type,
struct inode *(*get_inode) (struct super_block *sb, u64 ino, u32 gen));
