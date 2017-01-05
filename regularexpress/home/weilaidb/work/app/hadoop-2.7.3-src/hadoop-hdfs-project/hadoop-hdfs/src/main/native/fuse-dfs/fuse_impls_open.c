static int get_hdfs_open_flags_from_info(hdfsFS fs, const char *path,
int flags, int *outflags, const hdfsFileInfo *info);
static int64_t get_hdfs_open_flags(hdfsFS fs, const char *path, int flags)
int dfs_open(const char *path, struct fuse_file_info *fi)
