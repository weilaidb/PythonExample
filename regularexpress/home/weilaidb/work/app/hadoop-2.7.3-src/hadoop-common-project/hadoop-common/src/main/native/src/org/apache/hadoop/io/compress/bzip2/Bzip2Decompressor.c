static jfieldID Bzip2Decompressor_clazz;
static jfieldID Bzip2Decompressor_stream;
static jfieldID Bzip2Decompressor_compressedDirectBuf;
static jfieldID Bzip2Decompressor_compressedDirectBufOff;
static jfieldID Bzip2Decompressor_compressedDirectBufLen;
static jfieldID Bzip2Decompressor_uncompressedDirectBuf;
static jfieldID Bzip2Decompressor_directBufferSize;
static jfieldID Bzip2Decompressor_finished;
static int (*dlsym_BZ2_bzDecompressInit)(bz_stream*, int, int);
static int (*dlsym_BZ2_bzDecompress)(bz_stream*);
static int (*dlsym_BZ2_bzDecompressEnd)(bz_stream*);
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Decompressor_initIDs(
JNIEnv *env, jclass class, jstring libname)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Decompressor_init(
JNIEnv *env, jclass cls, jint conserveMemory)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Decompressor_inflateBytesDirect(
JNIEnv *env, jobject this)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Decompressor_getBytesRead(
JNIEnv *env, jclass cls, jlong stream)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Decompressor_getBytesWritten(
JNIEnv *env, jclass cls, jlong stream)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Decompressor_getRemaining(
JNIEnv *env, jclass cls, jlong stream)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Decompressor_end(
JNIEnv *env, jclass cls, jlong stream)
