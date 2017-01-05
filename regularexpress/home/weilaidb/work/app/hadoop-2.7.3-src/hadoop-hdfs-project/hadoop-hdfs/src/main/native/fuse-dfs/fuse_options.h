#define __FUSE_OPTIONS_H__
struct options  options;
extern struct fuse_opt dfs_opts[];
void print_options();
void print_usage(const char *pname);
int dfs_options(void *data, const char *arg, int key,  struct fuse_args *outargs);
