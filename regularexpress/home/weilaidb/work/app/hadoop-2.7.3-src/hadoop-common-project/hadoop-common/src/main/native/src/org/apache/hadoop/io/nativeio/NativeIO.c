#if !(defined(__FreeBSD__) || defined(__MACH__))
#define MMAP_PROT_READ org_apache_hadoop_io_nativeio_NativeIO_POSIX_MMAP_PROT_READ
#define MMAP_PROT_WRITE org_apache_hadoop_io_nativeio_NativeIO_POSIX_MMAP_PROT_WRITE
#define MMAP_PROT_EXEC org_apache_hadoop_io_nativeio_NativeIO_POSIX_MMAP_PROT_EXEC
static jclass stat_clazz;
static jmethodID stat_ctor;
static jmethodID stat_ctor2;
static jclass nioe_clazz;
static jmethodID nioe_ctor;
jobject pw_lock_object;
extern void throw_ioe(JNIEnv* env, int errnum);
static ssize_t get_pw_buflen();
static int workaround_non_threadsafe_calls(JNIEnv *env, jclass clazz)
static void stat_init(JNIEnv *env, jclass nativeio_class)
static void stat_deinit(JNIEnv *env)
static void nioe_init(JNIEnv *env)
static void nioe_deinit(JNIEnv *env)
static int map_fadvise_flag(jint flag)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_initNative(
JNIEnv *env, jclass clazz)
JNIEXPORT jobject JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024POSIX_fstat(
JNIEnv *env, jclass clazz, jobject fd_object)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024POSIX_posix_1fadvise(
JNIEnv *env, jclass clazz,
jobject fd_object, jlong offset, jlong len, jint flags)
#if defined(HAVE_SYNC_FILE_RANGE)
#  define my_sync_file_range sync_file_range
#elif defined(SYS_sync_file_range)
static int manual_sync_file_range (int fd, __off64_t from, __off64_t to, unsigned int flags)
#define my_sync_file_range manual_sync_file_range
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024POSIX_sync_1file_1range(
JNIEnv *env, jclass clazz,
jobject fd_object, jlong offset, jlong len, jint flags)
#define CHECK_DIRECT_BUFFER_ADDRESS(buf) \
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024POSIX_mlock_1native(
JNIEnv *env, jclass clazz,
jobject buffer, jlong len)
static int toFreeBSDFlags(int flags)
JNIEXPORT jobject JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024POSIX_open(
JNIEnv *env, jclass clazz, jstring j_path,
jint flags, jint mode)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024Windows_createDirectoryWithMode0
(JNIEnv *env, jclass clazz, jstring j_path, jint mode)
JNIEXPORT jobject JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024Windows_createFileWithMode0
(JNIEnv *env, jclass clazz, jstring j_path,
jlong desiredAccess, jlong shareMode, jlong creationDisposition, jint mode)
JNIEXPORT jobject JNICALL Java_org_apache_hadoop_io_nativeio_NativeIO_00024Windows_createFile
(JNIEnv *env, jclass clazz, jstring j_path,
jlong desiredAccess, jlong shareMode, jlong creationDisposition)
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_nativeio_NativeIO_00024POSIX_chmodImpl
(JNIEnv *env, jclass clazz, jstring j_path, jint mode)
JNIEXPORT jstring JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024POSIX_getUserName(
JNIEnv *env, jclass clazz, jint uid)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024POSIX_mmap(
JNIEnv *env, jclass clazz, jobject jfd, jint jprot,
jboolean jshared, jlong length)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024POSIX_munmap(
JNIEnv *env, jclass clazz, jlong jaddr, jlong length)
JNIEXPORT jstring JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024POSIX_getGroupName(
JNIEnv *env, jclass clazz, jint gid)
void throw_ioe(JNIEnv* env, int errnum)
ssize_t get_pw_buflen()
JNIEXPORT jstring JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024Windows_getOwner
(JNIEnv *env, jclass clazz, jobject fd_object)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024Windows_setFilePointer
(JNIEnv *env, jclass clazz, jobject fd_object, jlong distanceToMove, jlong moveMethod)
JNIEXPORT jboolean JNICALL Java_org_apache_hadoop_io_nativeio_NativeIO_00024Windows_access0
(JNIEnv *env, jclass clazz, jstring jpath, jint jaccess)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_00024Windows_extendWorkingSetSize(
JNIEnv *env, jclass clazz, jlong delta)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_renameTo0(JNIEnv *env,
jclass clazz, jstring jsrc, jstring jdst)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_link0(JNIEnv *env,
jclass clazz, jstring jsrc, jstring jdst)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_getMemlockLimit0(
JNIEnv *env, jclass clazz)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_nativeio_NativeIO_copyFileUnbuffered0(
JNIEnv *env, jclass clazz, jstring jsrc, jstring jdst)
