static jfieldID ZlibCompressor_clazz;
static jfieldID ZlibCompressor_stream;
static jfieldID ZlibCompressor_uncompressedDirectBuf;
static jfieldID ZlibCompressor_uncompressedDirectBufOff;
static jfieldID ZlibCompressor_uncompressedDirectBufLen;
static jfieldID ZlibCompressor_compressedDirectBuf;
static jfieldID ZlibCompressor_directBufferSize;
static jfieldID ZlibCompressor_finish;
static jfieldID ZlibCompressor_finished;
static int (*dlsym_deflateInit2_)(z_streamp, int, int, int, int, int, const char *, int);
static int (*dlsym_deflate)(z_streamp, int);
static int (*dlsym_deflateSetDictionary)(z_streamp, const Bytef *, uInt);
static int (*dlsym_deflateReset)(z_streamp);
static int (*dlsym_deflateEnd)(z_streamp);
typedef int (__cdecl *__dlsym_deflateInit2_) (z_streamp, int, int, int, int, int, const char *, int);
typedef int (__cdecl *__dlsym_deflate) (z_streamp, int);
typedef int (__cdecl *__dlsym_deflateSetDictionary) (z_streamp, const Bytef *, uInt);
typedef int (__cdecl *__dlsym_deflateReset) (z_streamp);
typedef int (__cdecl *__dlsym_deflateEnd) (z_streamp);
static __dlsym_deflateInit2_ dlsym_deflateInit2_;
static __dlsym_deflate dlsym_deflate;
static __dlsym_deflateSetDictionary dlsym_deflateSetDictionary;
static __dlsym_deflateReset dlsym_deflateReset;
static __dlsym_deflateEnd dlsym_deflateEnd;
HANDLE LoadZlibTryHadoopNativeDir()
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_initIDs(
JNIEnv *env, jclass class
)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_init(
JNIEnv *env, jclass class, jint level, jint strategy, jint windowBits
)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_setDictionary(
JNIEnv *env, jclass class, jlong stream,
jarray b, jint off, jint len
)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_deflateBytesDirect(
JNIEnv *env, jobject this
)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_getBytesRead(
JNIEnv *env, jclass class, jlong stream
)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_getBytesWritten(
JNIEnv *env, jclass class, jlong stream
)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_reset(
JNIEnv *env, jclass class, jlong stream
)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_end(
JNIEnv *env, jclass class, jlong stream
)
JNIEXPORT jstring JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_getLibraryName(JNIEnv *env, jclass class)
