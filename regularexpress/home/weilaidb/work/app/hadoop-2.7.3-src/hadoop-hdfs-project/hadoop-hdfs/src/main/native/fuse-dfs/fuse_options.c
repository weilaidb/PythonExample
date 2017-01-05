#define OLD_HDFS_URI_LOCATION "dfs:
#define NEW_HDFS_URI_LOCATION "hdfs:
void print_options()
const char *program;
#define DFSFS_OPT_KEY(t, p, v)
void print_usage(const char *pname)
enum
;
struct fuse_opt dfs_opts[] =
;
int dfs_options(void *data, const char *arg, int key,  struct fuse_args *outargs)
return 0;
}
