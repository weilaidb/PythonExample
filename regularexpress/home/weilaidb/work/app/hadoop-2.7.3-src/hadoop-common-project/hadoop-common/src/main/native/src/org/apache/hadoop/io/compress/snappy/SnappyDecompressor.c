#if defined HADOOP_SNAPPY_LIBRARY
static jfieldID SnappyDecompressor_clazz;
static jfieldID SnappyDecompressor_compressedDirectBuf;
static jfieldID SnappyDecompressor_compressedDirectBufLen;
static jfieldID SnappyDecompressor_uncompressedDirectBuf;
static jfieldID SnappyDecompressor_directBufferSize;
static snappy_status (*dlsym_snappy_uncompress)(const char*, size_t, char*, size_t*);
typedef snappy_status (__cdecl *__dlsym_snappy_uncompress)(const char*, size_t, char*, size_t*);
static __dlsym_snappy_uncompress dlsym_snappy_uncompress;
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_compress_snappy_SnappyDecompressor_initIDs
(JNIEnv *env, jclass clazz)
JNIEXPORT jint JNICALL Java_org_apache_hadoop_io_compress_snappy_SnappyDecompressor_decompressBytesDirect
(JNIEnv *env, jobject thisj)
