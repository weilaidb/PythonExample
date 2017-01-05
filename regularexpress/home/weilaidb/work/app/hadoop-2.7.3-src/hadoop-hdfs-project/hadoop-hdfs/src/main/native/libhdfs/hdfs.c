#define HADOOP_CONF     "org/apache/hadoop/conf/Configuration"
#define HADOOP_PATH     "org/apache/hadoop/fs/Path"
#define HADOOP_LOCALFS  "org/apache/hadoop/fs/LocalFileSystem"
#define HADOOP_FS       "org/apache/hadoop/fs/FileSystem"
#define HADOOP_FSSTATUS "org/apache/hadoop/fs/FsStatus"
#define HADOOP_BLK_LOC  "org/apache/hadoop/fs/BlockLocation"
#define HADOOP_DFS      "org/apache/hadoop/hdfs/DistributedFileSystem"
#define HADOOP_ISTRM    "org/apache/hadoop/fs/FSDataInputStream"
#define HADOOP_OSTRM    "org/apache/hadoop/fs/FSDataOutputStream"
#define HADOOP_STAT     "org/apache/hadoop/fs/FileStatus"
#define HADOOP_FSPERM   "org/apache/hadoop/fs/permission/FsPermission"
#define JAVA_NET_ISA    "java/net/InetSocketAddress"
#define JAVA_NET_URI    "java/net/URI"
#define JAVA_STRING     "java/lang/String"
#define READ_OPTION     "org/apache/hadoop/fs/ReadOption"
#define JAVA_VOID       "V"
#define JPARAM(X)           "L" X ";"
#define JARRPARAM(X)        "[L" X ";"
#define JMETHOD1(X, R)      "(" X ")" R
#define JMETHOD2(X, Y, R)   "(" X Y ")" R
#define JMETHOD3(X, Y, Z, R)   "(" X Y Z")" R
#define KERBEROS_TICKET_CACHE_PATH "hadoop.security.kerberos.ticket.cache.path"
#define HDFS_FILE_SUPPORTS_DIRECT_READ (1<<0)
tSize readDirect(hdfsFS fs, hdfsFile f, void* buffer, tSize length);
static void hdfsFreeFileInfoEntry(hdfsFileInfo *hdfsFileInfo);
enum hdfsStreamType
;
struct hdfsFile_internal ;
#define HDFS_EXTENDED_FILE_INFO_ENCRYPTED 0x1
struct hdfsExtendedFileInfo ;
int hdfsFileIsOpenForRead(hdfsFile file)
int hdfsFileGetReadStatistics(hdfsFile file,
struct hdfsReadStatistics **stats)
int64_t hdfsReadStatisticsGetRemoteBytesRead(
const struct hdfsReadStatistics *stats)
int hdfsFileClearReadStatistics(hdfsFile file)
void hdfsFileFreeReadStatistics(struct hdfsReadStatistics *stats)
int hdfsFileIsOpenForWrite(hdfsFile file)
int hdfsFileUsesDirectRead(hdfsFile file)
void hdfsFileDisableDirectRead(hdfsFile file)
int hdfsDisableDomainSocketSecurity(void)
typedef struct
hdfsJniEnv;
static jthrowable constructNewObjectOfPath(JNIEnv *env, const char *path,
jobject *out)
static jthrowable hadoopConfGetStr(JNIEnv *env, jobject jConfiguration,
const char *key, char **val)
int hdfsConfGetStr(const char *key, char **val)
void hdfsConfStrFree(char *val)
static jthrowable hadoopConfGetInt(JNIEnv *env, jobject jConfiguration,
const char *key, int32_t *val)
int hdfsConfGetInt(const char *key, int32_t *val)
struct hdfsBuilderConfOpt ;
struct hdfsBuilder ;
struct hdfsBuilder *hdfsNewBuilder(void)
int hdfsBuilderConfSetStr(struct hdfsBuilder *bld, const char *key,
const char *val)
void hdfsFreeBuilder(struct hdfsBuilder *bld)
void hdfsBuilderSetForceNewInstance(struct hdfsBuilder *bld)
void hdfsBuilderSetNameNode(struct hdfsBuilder *bld, const char *nn)
void hdfsBuilderSetNameNodePort(struct hdfsBuilder *bld, tPort port)
void hdfsBuilderSetUserName(struct hdfsBuilder *bld, const char *userName)
void hdfsBuilderSetKerbTicketCachePath(struct hdfsBuilder *bld,
const char *kerbTicketCachePath)
hdfsFS hdfsConnect(const char *host, tPort port)
hdfsFS hdfsConnectNewInstance(const char *host, tPort port)
hdfsFS hdfsConnectAsUser(const char *host, tPort port, const char *user)
hdfsFS hdfsConnectAsUserNewInstance(const char *host, tPort port,
const char *user)
static int calcEffectiveURI(struct hdfsBuilder *bld, char ** uri)
static const char *maybeNull(const char *str)
static const char *hdfsBuilderToStr(const struct hdfsBuilder *bld,
char *buf, size_t bufLen)
hdfsFS hdfsBuilderConnect(struct hdfsBuilder *bld)
int hdfsDisconnect(hdfsFS fs)
static jthrowable getDefaultBlockSize(JNIEnv *env, jobject jFS,
jobject jPath, jlong *out)
hdfsFile hdfsOpenFile(hdfsFS fs, const char *path, int flags,
int bufferSize, short replication, tSize blockSize)
int hdfsTruncateFile(hdfsFS fs, const char* path, tOffset newlength)
int hdfsUnbufferFile(hdfsFile file)
int hdfsCloseFile(hdfsFS fs, hdfsFile file)
int hdfsExists(hdfsFS fs, const char *path)
static int readPrepare(JNIEnv* env, hdfsFS fs, hdfsFile f,
jobject* jInputStream)
tSize hdfsRead(hdfsFS fs, hdfsFile f, void* buffer, tSize length)
tSize readDirect(hdfsFS fs, hdfsFile f, void* buffer, tSize length)
tSize hdfsPread(hdfsFS fs, hdfsFile f, tOffset position,
void* buffer, tSize length)
tSize hdfsWrite(hdfsFS fs, hdfsFile f, const void* buffer, tSize length)
int hdfsSeek(hdfsFS fs, hdfsFile f, tOffset desiredPos)
tOffset hdfsTell(hdfsFS fs, hdfsFile f)
int hdfsFlush(hdfsFS fs, hdfsFile f)
int hdfsHFlush(hdfsFS fs, hdfsFile f)
int hdfsHSync(hdfsFS fs, hdfsFile f)
int hdfsAvailable(hdfsFS fs, hdfsFile f)
static int hdfsCopyImpl(hdfsFS srcFS, const char *src, hdfsFS dstFS,
const char *dst, jboolean deleteSource)
int hdfsCopy(hdfsFS srcFS, const char *src, hdfsFS dstFS, const char *dst)
int hdfsMove(hdfsFS srcFS, const char *src, hdfsFS dstFS, const char *dst)
int hdfsDelete(hdfsFS fs, const char *path, int recursive)
int hdfsRename(hdfsFS fs, const char *oldPath, const char *newPath)
char* hdfsGetWorkingDirectory(hdfsFS fs, char* buffer, size_t bufferSize)
int hdfsSetWorkingDirectory(hdfsFS fs, const char *path)
int hdfsCreateDirectory(hdfsFS fs, const char *path)
int hdfsSetReplication(hdfsFS fs, const char *path, int16_t replication)
int hdfsChown(hdfsFS fs, const char *path, const char *owner, const char *group)
int hdfsChmod(hdfsFS fs, const char *path, short mode)
int hdfsUtime(hdfsFS fs, const char *path, tTime mtime, tTime atime)
struct hadoopRzOptions
;
struct hadoopRzOptions *hadoopRzOptionsAlloc(void)
static void hadoopRzOptionsClearCached(JNIEnv *env,
struct hadoopRzOptions *opts)
int hadoopRzOptionsSetSkipChecksum(
struct hadoopRzOptions *opts, int skip)
int hadoopRzOptionsSetByteBufferPool(
struct hadoopRzOptions *opts, const char *className)
void hadoopRzOptionsFree(struct hadoopRzOptions *opts)
struct hadoopRzBuffer
;
static jthrowable hadoopRzOptionsGetEnumSet(JNIEnv *env,
struct hadoopRzOptions *opts, jobject *enumSet)
static int hadoopReadZeroExtractBuffer(JNIEnv *env,
const struct hadoopRzOptions *opts, struct hadoopRzBuffer *buffer)
static int translateZCRException(JNIEnv *env, jthrowable exc)
struct hadoopRzBuffer* hadoopReadZero(hdfsFile file,
struct hadoopRzOptions *opts, int32_t maxLength)
int32_t hadoopRzBufferLength(const struct hadoopRzBuffer *buffer)
const void *hadoopRzBufferGet(const struct hadoopRzBuffer *buffer)
void hadoopRzBufferFree(hdfsFile file, struct hadoopRzBuffer *buffer)
char***
hdfsGetHosts(hdfsFS fs, const char *path, tOffset start, tOffset length)
void hdfsFreeHosts(char ***blockHosts)
tOffset hdfsGetDefaultBlockSize(hdfsFS fs)
tOffset hdfsGetDefaultBlockSizeAtPath(hdfsFS fs, const char *path)
tOffset hdfsGetCapacity(hdfsFS fs)
tOffset hdfsGetUsed(hdfsFS fs)
static size_t getExtendedFileInfoOffset(const char *str)
static struct hdfsExtendedFileInfo *getExtendedFileInfo(hdfsFileInfo *fileInfo)
static jthrowable
getFileInfoFromStat(JNIEnv *env, jobject jStat, hdfsFileInfo *fileInfo)
static jthrowable
getFileInfo(JNIEnv *env, jobject jFS, jobject jPath, hdfsFileInfo **fileInfo)
hdfsFileInfo* hdfsListDirectory(hdfsFS fs, const char *path, int *numEntries)
hdfsFileInfo *hdfsGetPathInfo(hdfsFS fs, const char *path)
static void hdfsFreeFileInfoEntry(hdfsFileInfo *hdfsFileInfo)
void hdfsFreeFileInfo(hdfsFileInfo *hdfsFileInfo, int numEntries)
int hdfsFileIsEncrypted(hdfsFileInfo *fileInfo)
