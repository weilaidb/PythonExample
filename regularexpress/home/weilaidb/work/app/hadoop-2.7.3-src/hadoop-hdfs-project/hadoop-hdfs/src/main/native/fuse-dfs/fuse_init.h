#define __FUSE_INIT_H__
struct fuse_conn_info;
void *dfs_init(struct fuse_conn_info *conn);
void dfs_destroy (void *ptr);
