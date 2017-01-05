#define MBYTE 1048576
#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))
#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))
static void throw_checksum_exception(JNIEnv *env,
uint32_t got_crc, uint32_t expected_crc,
jstring j_filename, jlong pos)
static int convert_java_crc_type(JNIEnv *env, jint crc_type)
JNIEXPORT void JNICALL Java_org_apache_hadoop_util_NativeCrc32_nativeComputeChunkedSums
(JNIEnv *env, jclass clazz,
jint bytes_per_checksum, jint j_crc_type,
jobject j_sums, jint sums_offset,
jobject j_data, jint data_offset, jint data_len,
jstring j_filename, jlong base_pos, jboolean verify)
JNIEXPORT void JNICALL Java_org_apache_hadoop_util_NativeCrc32_nativeVerifyChunkedSums
(JNIEnv *env, jclass clazz,
jint bytes_per_checksum, jint j_crc_type,
jobject j_sums, jint sums_offset,
jobject j_data, jint data_offset, jint data_len,
jstring j_filename, jlong base_pos)
JNIEXPORT void JNICALL Java_org_apache_hadoop_util_NativeCrc32_nativeComputeChunkedSumsByteArray
(JNIEnv *env, jclass clazz,
jint bytes_per_checksum, jint j_crc_type,
jarray j_sums, jint sums_offset,
jarray j_data, jint data_offset, jint data_len,
jstring j_filename, jlong base_pos, jboolean verify)
