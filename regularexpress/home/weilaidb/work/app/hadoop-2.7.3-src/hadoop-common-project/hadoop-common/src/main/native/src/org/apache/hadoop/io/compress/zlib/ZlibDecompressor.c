static jfieldID ZlibDecompressor_clazz;
static jfieldID ZlibDecompressor_stream;
static jfieldID ZlibDecompressor_compressedDirectBuf;
static jfieldID ZlibDecompressor_compressedDirectBufOff;
static jfieldID ZlibDecompressor_compressedDirectBufLen;
static jfieldID ZlibDecompressor_uncompressedDirectBuf;
static jfieldID ZlibDecompressor_directBufferSize;
static jfieldID ZlibDecompressor_needDict;
static jfieldID ZlibDecompressor_finished;
static int (*dlsym_inflateInit2_)(z_streamp, int, const char *, int);
static int (*dlsym_inflate)(z_streamp, int);
static int (*dlsym_inflateSetDictionary)(z_streamp, const Bytef *, uInt);
static int (*dlsym_inflateReset)(z_streamp);
static int (*dlsym_inflateEnd)(z_streamp);
typedef int (__cdecl *__dlsym_inflateInit2_)(z_streamp, int, const char *, int);
typedef int (__cdecl *__dlsym_inflate)(z_streamp, int);
typedef int (__cdecl *__dlsym_inflateSetDictionary)(z_streamp, const Bytef *, uInt);
typedef int (__cdecl *__dlsym_inflateReset)(z_streamp);
typedef int (__cdecl *__dlsym_inflateEnd)(z_streamp);
static __dlsym_inflateInit2_ dlsym_inflateInit2_;
static __dlsym_inflate dlsym_inflate;
static __dlsym_inflateSetDictionary dlsym_inflateSetDictionary;
static __dlsym_inflateReset dlsym_inflateReset;
static __dlsym_inflateEnd dlsym_inflateEnd;
extern HANDLE LoadZlibTryHadoopNativeDir();
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_initIDs(
JNIEnv *env, jclass class
)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_init(
JNIEnv *env, jclass cls, jint windowBits
)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_setDictionary(
JNIEnv *env, jclass cls, jlong stream,
jarray b, jint off, jint len
)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_inflateBytesDirect(
JNIEnv *env, jobject this
)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_getBytesRead(
JNIEnv *env, jclass cls, jlong stream
)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_getBytesWritten(
JNIEnv *env, jclass cls, jlong stream
)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_getRemaining(
JNIEnv *env, jclass cls, jlong stream
)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_reset(
JNIEnv *env, jclass cls, jlong stream
)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_end(
JNIEnv *env, jclass cls, jlong stream
)
