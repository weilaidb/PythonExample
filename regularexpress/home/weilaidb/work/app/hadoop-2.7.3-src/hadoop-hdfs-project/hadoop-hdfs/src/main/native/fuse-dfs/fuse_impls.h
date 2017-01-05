#define __FUSE_IMPLS_H__
int dfs_mkdir(const char *path, mode_t mode);
int dfs_rename(const char *from, const char *to);
int dfs_getattr(const char *path, struct stat *st);
int dfs_readdir(const char *path, void *buf, fuse_fill_dir_t filler,
off_t offset, struct fuse_file_info *fi);
int dfs_read(const char *path, char *buf, size_t size, off_t offset,
struct fuse_file_info *fi);
int dfs_statfs(const char *path, struct statvfs *st);
int dfs_mkdir(const char *path, mode_t mode);
int dfs_rename(const char *from, const char *to);
int dfs_rmdir(const char *path);
int dfs_unlink(const char *path);
int dfs_utimens(const char *path, const struct timespec ts[2]);
int dfs_chmod(const char *path, mode_t mode);
int dfs_chown(const char *path, uid_t uid, gid_t gid);
int dfs_open(const char *path, struct fuse_file_info *fi);
int dfs_write(const char *path, const char *buf, size_t size,
off_t offset, struct fuse_file_info *fi);
int dfs_release (const char *path, struct fuse_file_info *fi);
int dfs_mknod(const char *path, mode_t mode, dev_t rdev) ;
int dfs_create(const char *path, mode_t mode, struct fuse_file_info *fi);
int dfs_flush(const char *path, struct fuse_file_info *fi);
int dfs_access(const char *path, int mask);
int dfs_truncate(const char *path, off_t size);
int dfs_symlink(const char *from, const char *to);
