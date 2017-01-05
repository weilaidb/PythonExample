#define LIBHDFS_HDFS_H
#define LIBHDFS_EXTERNAL __declspec(dllexport)
#elif LIBHDFS_DLL_IMPORT
#define LIBHDFS_EXTERNAL __declspec(dllimport)
#define LIBHDFS_EXTERNAL
#define LIBHDFS_EXTERNAL __attribute__((visibility("default")))
#elif LIBHDFS_DLL_IMPORT
#define LIBHDFS_EXTERNAL __attribute__((visibility("default")))
#define LIBHDFS_EXTERNAL
#define O_RDONLY 1
#define O_WRONLY 2
#define EINTERNAL 255
#define ELASTIC_BYTE_BUFFER_POOL_CLASS \
"org/apache/hadoop/io/ElasticByteBufferPool"
struct hdfsBuilder;
typedef int32_t   tSize;
typedef time_t    tTime;
typedef int64_t   tOffset;
typedef uint16_t  tPort;
typedef enum tObjectKind  tObjectKind;
struct hdfs_internal;
typedef struct hdfs_internal* hdfsFS;
struct hdfsFile_internal;
typedef struct hdfsFile_internal* hdfsFile;
struct hadoopRzOptions;
struct hadoopRzBuffer;
LIBHDFS_EXTERNAL
int hdfsFileIsOpenForRead(hdfsFile file);
LIBHDFS_EXTERNAL
int hdfsFileIsOpenForWrite(hdfsFile file);
struct hdfsReadStatistics ;
LIBHDFS_EXTERNAL
int hdfsFileGetReadStatistics(hdfsFile file,
struct hdfsReadStatistics **stats);
LIBHDFS_EXTERNAL
int64_t hdfsReadStatisticsGetRemoteBytesRead(
const struct hdfsReadStatistics *stats);
LIBHDFS_EXTERNAL
int hdfsFileClearReadStatistics(hdfsFile file);
LIBHDFS_EXTERNAL
void hdfsFileFreeReadStatistics(struct hdfsReadStatistics *stats);
LIBHDFS_EXTERNAL
hdfsFS hdfsConnectAsUser(const char* nn, tPort port, const char *user);
LIBHDFS_EXTERNAL
hdfsFS hdfsConnect(const char* nn, tPort port);
LIBHDFS_EXTERNAL
hdfsFS hdfsConnectAsUserNewInstance(const char* nn, tPort port, const char *user );
LIBHDFS_EXTERNAL
hdfsFS hdfsConnectNewInstance(const char* nn, tPort port);
LIBHDFS_EXTERNAL
hdfsFS hdfsBuilderConnect(struct hdfsBuilder *bld);
LIBHDFS_EXTERNAL
struct hdfsBuilder *hdfsNewBuilder(void);
LIBHDFS_EXTERNAL
void hdfsBuilderSetForceNewInstance(struct hdfsBuilder *bld);
LIBHDFS_EXTERNAL
void hdfsBuilderSetNameNode(struct hdfsBuilder *bld, const char *nn);
LIBHDFS_EXTERNAL
void hdfsBuilderSetNameNodePort(struct hdfsBuilder *bld, tPort port);
LIBHDFS_EXTERNAL
void hdfsBuilderSetUserName(struct hdfsBuilder *bld, const char *userName);
LIBHDFS_EXTERNAL
void hdfsBuilderSetKerbTicketCachePath(struct hdfsBuilder *bld,
const char *kerbTicketCachePath);
LIBHDFS_EXTERNAL
void hdfsFreeBuilder(struct hdfsBuilder *bld);
LIBHDFS_EXTERNAL
int hdfsBuilderConfSetStr(struct hdfsBuilder *bld, const char *key,
const char *val);
LIBHDFS_EXTERNAL
int hdfsConfGetStr(const char *key, char **val);
LIBHDFS_EXTERNAL
int hdfsConfGetInt(const char *key, int32_t *val);
LIBHDFS_EXTERNAL
void hdfsConfStrFree(char *val);
LIBHDFS_EXTERNAL
int hdfsDisconnect(hdfsFS fs);
LIBHDFS_EXTERNAL
hdfsFile hdfsOpenFile(hdfsFS fs, const char* path, int flags,
int bufferSize, short replication, tSize blocksize);
int hdfsTruncateFile(hdfsFS fs, const char* path, tOffset newlength);
LIBHDFS_EXTERNAL
int hdfsUnbufferFile(hdfsFile file);
LIBHDFS_EXTERNAL
int hdfsCloseFile(hdfsFS fs, hdfsFile file);
LIBHDFS_EXTERNAL
int hdfsExists(hdfsFS fs, const char *path);
LIBHDFS_EXTERNAL
int hdfsSeek(hdfsFS fs, hdfsFile file, tOffset desiredPos);
LIBHDFS_EXTERNAL
tOffset hdfsTell(hdfsFS fs, hdfsFile file);
LIBHDFS_EXTERNAL
tSize hdfsRead(hdfsFS fs, hdfsFile file, void* buffer, tSize length);
LIBHDFS_EXTERNAL
tSize hdfsPread(hdfsFS fs, hdfsFile file, tOffset position,
void* buffer, tSize length);
LIBHDFS_EXTERNAL
tSize hdfsWrite(hdfsFS fs, hdfsFile file, const void* buffer,
tSize length);
LIBHDFS_EXTERNAL
int hdfsFlush(hdfsFS fs, hdfsFile file);
LIBHDFS_EXTERNAL
int hdfsHFlush(hdfsFS fs, hdfsFile file);
LIBHDFS_EXTERNAL
int hdfsHSync(hdfsFS fs, hdfsFile file);
LIBHDFS_EXTERNAL
int hdfsAvailable(hdfsFS fs, hdfsFile file);
LIBHDFS_EXTERNAL
int hdfsCopy(hdfsFS srcFS, const char* src, hdfsFS dstFS, const char* dst);
LIBHDFS_EXTERNAL
int hdfsMove(hdfsFS srcFS, const char* src, hdfsFS dstFS, const char* dst);
LIBHDFS_EXTERNAL
int hdfsDelete(hdfsFS fs, const char* path, int recursive);
LIBHDFS_EXTERNAL
int hdfsRename(hdfsFS fs, const char* oldPath, const char* newPath);
LIBHDFS_EXTERNAL
char* hdfsGetWorkingDirectory(hdfsFS fs, char *buffer, size_t bufferSize);
LIBHDFS_EXTERNAL
int hdfsSetWorkingDirectory(hdfsFS fs, const char* path);
LIBHDFS_EXTERNAL
int hdfsCreateDirectory(hdfsFS fs, const char* path);
LIBHDFS_EXTERNAL
int hdfsSetReplication(hdfsFS fs, const char* path, int16_t replication);
typedef struct   hdfsFileInfo;
LIBHDFS_EXTERNAL
hdfsFileInfo *hdfsListDirectory(hdfsFS fs, const char* path,
int *numEntries);
LIBHDFS_EXTERNAL
hdfsFileInfo *hdfsGetPathInfo(hdfsFS fs, const char* path);
LIBHDFS_EXTERNAL
void hdfsFreeFileInfo(hdfsFileInfo *hdfsFileInfo, int numEntries);
LIBHDFS_EXTERNAL
int hdfsFileIsEncrypted(hdfsFileInfo *hdfsFileInfo);
LIBHDFS_EXTERNAL
char*** hdfsGetHosts(hdfsFS fs, const char* path,
tOffset start, tOffset length);
LIBHDFS_EXTERNAL
void hdfsFreeHosts(char ***blockHosts);
LIBHDFS_EXTERNAL
tOffset hdfsGetDefaultBlockSize(hdfsFS fs);
LIBHDFS_EXTERNAL
tOffset hdfsGetDefaultBlockSizeAtPath(hdfsFS fs, const char *path);
LIBHDFS_EXTERNAL
tOffset hdfsGetCapacity(hdfsFS fs);
LIBHDFS_EXTERNAL
tOffset hdfsGetUsed(hdfsFS fs);
LIBHDFS_EXTERNAL
int hdfsChown(hdfsFS fs, const char* path, const char *owner,
const char *group);
LIBHDFS_EXTERNAL
int hdfsChmod(hdfsFS fs, const char* path, short mode);
LIBHDFS_EXTERNAL
int hdfsUtime(hdfsFS fs, const char* path, tTime mtime, tTime atime);
LIBHDFS_EXTERNAL
struct hadoopRzOptions *hadoopRzOptionsAlloc(void);
LIBHDFS_EXTERNAL
int hadoopRzOptionsSetSkipChecksum(
struct hadoopRzOptions *opts, int skip);
LIBHDFS_EXTERNAL
int hadoopRzOptionsSetByteBufferPool(
struct hadoopRzOptions *opts, const char *className);
LIBHDFS_EXTERNAL
void hadoopRzOptionsFree(struct hadoopRzOptions *opts);
LIBHDFS_EXTERNAL
struct hadoopRzBuffer* hadoopReadZero(hdfsFile file,
struct hadoopRzOptions *opts, int32_t maxLength);
LIBHDFS_EXTERNAL
int32_t hadoopRzBufferLength(const struct hadoopRzBuffer *buffer);
LIBHDFS_EXTERNAL
const void *hadoopRzBufferGet(const struct hadoopRzBuffer *buffer);
LIBHDFS_EXTERNAL
void hadoopRzBufferFree(hdfsFile file, struct hadoopRzBuffer *buffer);
#undef LIBHDFS_EXTERNAL
