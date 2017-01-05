#define TO_STR_HELPER(X) #X
#define TO_STR(X) TO_STR_HELPER(X)
#define TLH_MAX_THREADS 100
#define TLH_DEFAULT_BLOCK_SIZE 134217728
static struct NativeMiniDfsCluster* tlhCluster;
struct tlhThreadInfo ;
static int hdfsSingleNameNodeConnect(struct NativeMiniDfsCluster *cl, hdfsFS *fs,
const char *username)
static int doTestGetDefaultBlockSize(hdfsFS fs, const char *path)
struct tlhPaths ;
static int setupPaths(const struct tlhThreadInfo *ti, struct tlhPaths *paths)
static int doTestHdfsOperations(struct tlhThreadInfo *ti, hdfsFS fs,
const struct tlhPaths *paths)
static int testHdfsOperationsImpl(struct tlhThreadInfo *ti)
static void testHdfsOperations(void *v)
static int checkFailures(struct tlhThreadInfo *ti, int tlhNumThreads)
int main(void)
