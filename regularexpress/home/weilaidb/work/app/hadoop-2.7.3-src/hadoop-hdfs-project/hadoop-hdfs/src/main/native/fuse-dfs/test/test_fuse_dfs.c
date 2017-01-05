#define EXIT_STATUS_EXEC_ERROR 240
#define MAX_UNMOUNT_TRIES 20
static int verifyFuseWorkload(void)
static int fuserMount(int *procRet, ...) __attribute__((sentinel));
static int fuserMount(int *procRet, ...)
static int isMounted(const char *mntPoint)
static int waitForMount(const char *mntPoint, int retries)
static int cleanupFuse(const char *mntPoint)
static int spawnFuseServer(const char *argv0,
const struct NativeMiniDfsCluster *cluster, const char *mntPoint,
pid_t *pid)
int main(int argc, char **argv)
