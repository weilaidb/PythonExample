static void stat64_to_hostfs(const struct stat64 *buf, struct hostfs_stat *p)
int stat_file(const char *path, struct hostfs_stat *p, int fd)
int access_file(char *path, int r, int w, int x)
int open_file(char *path, int r, int w, int append)
void *open_dir(char *path, int *err_out)
char *read_dir(void *stream, unsigned long long *pos,
unsigned long long *ino_out, int *len_out)
int read_file(int fd, unsigned long long *offset, char *buf, int len)
int write_file(int fd, unsigned long long *offset, const char *buf, int len)
int lseek_file(int fd, long long offset, int whence)
int fsync_file(int fd, int datasync)
int replace_file(int oldfd, int fd)
void close_file(void *stream)
void close_dir(void *stream)
int file_create(char *name, int ur, int uw, int ux, int gr,
int gw, int gx, int or, int ow, int ox)
int set_attr(const char *file, struct hostfs_iattr *attrs, int fd)
int make_symlink(const char *from, const char *to)
int unlink_file(const char *file)
int do_mkdir(const char *file, int mode)
int do_rmdir(const char *file)
int do_mknod(const char *file, int mode, unsigned int major, unsigned int minor)
int link_file(const char *to, const char *from)
int hostfs_do_readlink(char *file, char *buf, int size)
int rename_file(char *from, char *to)
int do_statfs(char *root, long *bsize_out, long long *blocks_out,
long long *bfree_out, long long *bavail_out,
long long *files_out, long long *ffree_out,
void *fsid_out, int fsid_size, long *namelen_out)
