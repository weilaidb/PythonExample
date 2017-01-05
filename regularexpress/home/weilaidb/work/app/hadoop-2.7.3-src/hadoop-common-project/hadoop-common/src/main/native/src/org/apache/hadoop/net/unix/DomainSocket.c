#define SEND_BUFFER_SIZE org_apache_hadoop_net_unix_DomainSocket_SEND_BUFFER_SIZE
#define RECEIVE_BUFFER_SIZE org_apache_hadoop_net_unix_DomainSocket_RECEIVE_BUFFER_SIZE
#define SEND_TIMEOUT org_apache_hadoop_net_unix_DomainSocket_SEND_TIMEOUT
#define RECEIVE_TIMEOUT org_apache_hadoop_net_unix_DomainSocket_RECEIVE_TIMEOUT
#define DEFAULT_RECEIVE_TIMEOUT 120000
#define DEFAULT_SEND_TIMEOUT 120000
#define LISTEN_BACKLOG 128
#define PLATFORM_SEND_FLAGS MSG_NOSIGNAL
#define PLATFORM_SEND_FLAGS 0
#define MAX_PASSED_FDS 16
static jthrowable setAttribute0(JNIEnv *env, jint fd, jint type, jint val);
static const char *errnoToSocketExceptionName(int errnum)
static jthrowable newSocketException(JNIEnv *env, int errnum,
const char *fmt, ...)
__attribute__((format(printf, 3, 4)));
static jthrowable newSocketException(JNIEnv *env, int errnum,
const char *fmt, ...)
struct flexibleBuffer ;
static jthrowable flexBufInit(JNIEnv *env, struct flexibleBuffer *flexBuf, jint length)
static void flexBufFree(struct flexibleBuffer *flexBuf)
static jthrowable setup(JNIEnv *env, int *ofd, jobject jpath, int doConnect)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_anchorNative(
JNIEnv *env, jclass clazz)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_validateSocketPathSecurity0(
JNIEnv *env, jclass clazz, jobject jstr, jint skipComponents)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_bind0(
JNIEnv *env, jclass clazz, jstring path)
#define SOCKETPAIR_ARRAY_LEN 2
JNIEXPORT jarray JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_socketpair0(
JNIEnv *env, jclass clazz)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_accept0(
JNIEnv *env, jclass clazz, jint fd)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_connect0(
JNIEnv *env, jclass clazz, jstring path)
static void javaMillisToTimeVal(int javaMillis, struct timeval *tv)
static jthrowable setAttribute0(JNIEnv *env, jint fd, jint type, jint val)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_setAttribute0(
JNIEnv *env, jclass clazz, jint fd, jint type, jint val)
static jint getSockOptBufSizeToJavaBufSize(int size)
static int timeValToJavaMillis(const struct timeval *tv)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_getAttribute0(
JNIEnv *env, jclass clazz, jint fd, jint type)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_close0(
JNIEnv *env, jclass clazz, jint fd)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_closeFileDescriptor0(
JNIEnv *env, jclass clazz, jobject jfd)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_shutdown0(
JNIEnv *env, jclass clazz, jint fd)
static jthrowable write_fully(JNIEnv *env, int fd, int8_t *buf, int amt)
struct cmsghdr_with_fds   __attribute__((packed,aligned(8)));
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_sendFileDescriptors0(
JNIEnv *env, jclass clazz, jint fd, jobject jfds, jobject jbuf,
jint offset, jint length)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_receiveFileDescriptors0(
JNIEnv *env, jclass clazz, jint fd, jarray jfds, jarray jbuf,
jint offset, jint length)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_readArray0(
JNIEnv *env, jclass clazz, jint fd, jarray b, jint offset, jint length)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_available0(
JNIEnv *env, jclass clazz, jint fd)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_writeArray0(
JNIEnv *env, jclass clazz, jint fd, jarray b, jint offset, jint length)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_net_unix_DomainSocket_readByteBufferDirect0(
JNIEnv *env, jclass clazz, jint fd, jobject dst, jint position, jint remaining)
