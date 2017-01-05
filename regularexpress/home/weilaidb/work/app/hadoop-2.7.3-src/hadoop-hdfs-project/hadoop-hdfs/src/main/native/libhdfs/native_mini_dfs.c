#define EINTERNAL 255
#define MINIDFS_CLUSTER_BUILDER "org/apache/hadoop/hdfs/MiniDFSCluster$Builder"
#define MINIDFS_CLUSTER "org/apache/hadoop/hdfs/MiniDFSCluster"
#define HADOOP_CONF     "org/apache/hadoop/conf/Configuration"
#define HADOOP_NAMENODE "org/apache/hadoop/hdfs/server/namenode/NameNode"
#define JAVA_INETSOCKETADDRESS "java/net/InetSocketAddress"
#define DFS_WEBHDFS_ENABLED_KEY "dfs.webhdfs.enabled"
struct NativeMiniDfsCluster ;
static int hdfsDisableDomainSocketSecurity(void)
static jthrowable nmdConfigureShortCircuit(JNIEnv *env,
struct NativeMiniDfsCluster *cl, jobject cobj)
struct NativeMiniDfsCluster* nmdCreate(struct NativeMiniDfsConf *conf)
void nmdFree(struct NativeMiniDfsCluster* cl)
int nmdShutdown(struct NativeMiniDfsCluster* cl)
int nmdWaitClusterUp(struct NativeMiniDfsCluster *cl)
int nmdGetNameNodePort(const struct NativeMiniDfsCluster *cl)
int nmdGetNameNodeHttpAddress(const struct NativeMiniDfsCluster *cl,
int *port, const char **hostName)
const char *hdfsGetDomainSocketPath(const struct NativeMiniDfsCluster *cl)
