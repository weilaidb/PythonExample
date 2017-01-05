#if defined HADOOP_SNAPPY_LIBRARY
#define JINT_MAX 0x7fffffff
static jfieldID SnappyCompressor_clazz;
static jfieldID SnappyCompressor_uncompressedDirectBuf;
static jfieldID SnappyCompressor_uncompressedDirectBufLen;
static jfieldID SnappyCompressor_compressedDirectBuf;
static jfieldID SnappyCompressor_directBufferSize;
static snappy_status (*dlsym_snappy_compress)(const char*, size_t, char*, size_t*);
typedef snappy_status (__cdecl *__dlsym_snappy_compress)(const char*, size_t, char*, size_t*);
static __dlsym_snappy_compress dlsym_snappy_compress;
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_compress_snappy_SnappyCompressor_initIDs
(JNIEnv *env, jclass clazz)
JNIEXPORT jint JNICALL Java_org_apache_hadoop_io_compress_snappy_SnappyCompressor_compressBytesDirect
(JNIEnv *env, jobject thisj)
JNIEXPORT jstring JNICALL
Java_org_apache_hadoop_io_compress_snappy_SnappyCompressor_getLibraryName(JNIEnv *env, jclass class)
