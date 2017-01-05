#define __FUSE_CONNECT_H__
struct fuse_context;
struct hdfsConn;
struct hdfs_internal;
int fuseConnectInit(const char *nnUri, int port);
int fuseConnect(const char *usrname, struct fuse_context *ctx,
struct hdfsConn **out);
int fuseConnectAsThreadUid(struct hdfsConn **conn);
int fuseConnectTest(void);
struct hdfs_internal* hdfsConnGetFs(struct hdfsConn *conn);
void hdfsConnRelease(struct hdfsConn *conn);
