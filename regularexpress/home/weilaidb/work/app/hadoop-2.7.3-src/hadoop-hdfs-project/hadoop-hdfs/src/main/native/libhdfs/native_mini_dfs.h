#define LIBHDFS_NATIVE_MINI_DFS_H
struct hdfsBuilder;
struct NativeMiniDfsCluster;
struct NativeMiniDfsConf ;
struct NativeMiniDfsCluster* nmdCreate(struct NativeMiniDfsConf *conf);
int nmdWaitClusterUp(struct NativeMiniDfsCluster *cl);
int nmdShutdown(struct NativeMiniDfsCluster *cl);
void nmdFree(struct NativeMiniDfsCluster* cl);
int nmdGetNameNodePort(const struct NativeMiniDfsCluster *cl);
int nmdGetNameNodeHttpAddress(const struct NativeMiniDfsCluster *cl,
int *port, const char **hostName);
const char *hdfsGetDomainSocketPath(const struct NativeMiniDfsCluster *cl);
