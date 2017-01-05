#define FUSE_USE_VERSION 26
typedef int (*testReadDirFn)(const struct dirent *de, void *v);
struct fileCtx ;
static const char *DIRS_A_AND_B[] = ;
static const char *DIRS_B_AND_C[] = ;
#define LONG_STR_LEN 1024
#define NUM_FILE_CTX 3
#define MAX_TRIES 120
static int testReadDirImpl(DIR *dp, testReadDirFn fn, void *data)
static int testReadDir(const char *dirName, testReadDirFn fn, void *data)
static int expectDirs(const struct dirent *de, void *v)
static int safeWrite(int fd, const void *buf, size_t amt)
static int safeRead(int fd, void *buf, int c)
static int closeWorkaroundHdfs2551(int fd, const char *path, off_t expectedSize)
static int testOpenTrunc(const char *base)
static int testOpenTrunc(const char *base)
int runFuseWorkloadImpl(const char *root, const char *pcomp,
struct fileCtx *ctx)
int runFuseWorkload(const char *root, const char *pcomp)
