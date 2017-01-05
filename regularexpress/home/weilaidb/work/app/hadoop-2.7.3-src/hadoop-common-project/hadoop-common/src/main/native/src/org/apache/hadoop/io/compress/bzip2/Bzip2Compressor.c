static jfieldID Bzip2Compressor_clazz;
static jfieldID Bzip2Compressor_stream;
static jfieldID Bzip2Compressor_uncompressedDirectBuf;
static jfieldID Bzip2Compressor_uncompressedDirectBufOff;
static jfieldID Bzip2Compressor_uncompressedDirectBufLen;
static jfieldID Bzip2Compressor_compressedDirectBuf;
static jfieldID Bzip2Compressor_directBufferSize;
static jfieldID Bzip2Compressor_finish;
static jfieldID Bzip2Compressor_finished;
static int (*dlsym_BZ2_bzCompressInit)(bz_stream*, int, int, int);
static int (*dlsym_BZ2_bzCompress)(bz_stream*, int);
static int (*dlsym_BZ2_bzCompressEnd)(bz_stream*);
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Compressor_initIDs(
JNIEnv *env, jclass class, jstring libname)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Compressor_init(
JNIEnv *env, jclass class, jint blockSize, jint workFactor)
JNIEXPORT jint JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Compressor_deflateBytesDirect(
JNIEnv *env, jobject this)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Compressor_getBytesRead(
JNIEnv *env, jclass class, jlong stream)
JNIEXPORT jlong JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Compressor_getBytesWritten(
JNIEnv *env, jclass class, jlong stream)
JNIEXPORT void JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Compressor_end(
JNIEnv *env, jclass class, jlong stream)
JNIEXPORT jstring JNICALL
Java_org_apache_hadoop_io_compress_bzip2_Bzip2Compressor_getLibraryName(JNIEnv *env, jclass class)
