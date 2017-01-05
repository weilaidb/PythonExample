static EVP_CIPHER_CTX * (*dlsym_EVP_CIPHER_CTX_new)(void);
static void (*dlsym_EVP_CIPHER_CTX_free)(EVP_CIPHER_CTX *);
static int (*dlsym_EVP_CIPHER_CTX_cleanup)(EVP_CIPHER_CTX *);
static void (*dlsym_EVP_CIPHER_CTX_init)(EVP_CIPHER_CTX *);
static int (*dlsym_EVP_CIPHER_CTX_set_padding)(EVP_CIPHER_CTX *, int);
static int (*dlsym_EVP_CipherInit_ex)(EVP_CIPHER_CTX *, const EVP_CIPHER *,  \
ENGINE *, const unsigned char *, const unsigned char *, int);
static int (*dlsym_EVP_CipherUpdate)(EVP_CIPHER_CTX *, unsigned char *,  \
int *, const unsigned char *, int);
static int (*dlsym_EVP_CipherFinal_ex)(EVP_CIPHER_CTX *, unsigned char *, int *);
static EVP_CIPHER * (*dlsym_EVP_aes_256_ctr)(void);
static EVP_CIPHER * (*dlsym_EVP_aes_128_ctr)(void);
static void *openssl;
typedef EVP_CIPHER_CTX * (__cdecl *__dlsym_EVP_CIPHER_CTX_new)(void);
typedef void (__cdecl *__dlsym_EVP_CIPHER_CTX_free)(EVP_CIPHER_CTX *);
typedef int (__cdecl *__dlsym_EVP_CIPHER_CTX_cleanup)(EVP_CIPHER_CTX *);
typedef void (__cdecl *__dlsym_EVP_CIPHER_CTX_init)(EVP_CIPHER_CTX *);
typedef int (__cdecl *__dlsym_EVP_CIPHER_CTX_set_padding)(EVP_CIPHER_CTX *, int);
typedef int (__cdecl *__dlsym_EVP_CipherInit_ex)(EVP_CIPHER_CTX *,  \
const EVP_CIPHER *, ENGINE *, const unsigned char *,  \
const unsigned char *, int);
typedef int (__cdecl *__dlsym_EVP_CipherUpdate)(EVP_CIPHER_CTX *,  \
unsigned char *, int *, const unsigned char *, int);
typedef int (__cdecl *__dlsym_EVP_CipherFinal_ex)(EVP_CIPHER_CTX *,  \
unsigned char *, int *);
typedef EVP_CIPHER * (__cdecl *__dlsym_EVP_aes_256_ctr)(void);
typedef EVP_CIPHER * (__cdecl *__dlsym_EVP_aes_128_ctr)(void);
static __dlsym_EVP_CIPHER_CTX_new dlsym_EVP_CIPHER_CTX_new;
static __dlsym_EVP_CIPHER_CTX_free dlsym_EVP_CIPHER_CTX_free;
static __dlsym_EVP_CIPHER_CTX_cleanup dlsym_EVP_CIPHER_CTX_cleanup;
static __dlsym_EVP_CIPHER_CTX_init dlsym_EVP_CIPHER_CTX_init;
static __dlsym_EVP_CIPHER_CTX_set_padding dlsym_EVP_CIPHER_CTX_set_padding;
static __dlsym_EVP_CipherInit_ex dlsym_EVP_CipherInit_ex;
static __dlsym_EVP_CipherUpdate dlsym_EVP_CipherUpdate;
static __dlsym_EVP_CipherFinal_ex dlsym_EVP_CipherFinal_ex;
static __dlsym_EVP_aes_256_ctr dlsym_EVP_aes_256_ctr;
static __dlsym_EVP_aes_128_ctr dlsym_EVP_aes_128_ctr;
static HMODULE openssl;
static void loadAesCtr(JNIEnv *env)
JNIEXPORT void JNICALL Java_org_apache_hadoop_crypto_OpensslCipher_initIDs
(JNIEnv *env, jclass clazz)
JNIEXPORT jlong JNICALL Java_org_apache_hadoop_crypto_OpensslCipher_initContext
(JNIEnv *env, jclass clazz, jint alg, jint padding)
static EVP_CIPHER * getEvpCipher(int alg, int keyLen)
JNIEXPORT jlong JNICALL Java_org_apache_hadoop_crypto_OpensslCipher_init
(JNIEnv *env, jobject object, jlong ctx, jint mode, jint alg, jint padding,
jbyteArray key, jbyteArray iv)
static int check_update_max_output_len(EVP_CIPHER_CTX *context, int input_len,
int max_output_len)
JNIEXPORT jint JNICALL Java_org_apache_hadoop_crypto_OpensslCipher_update
(JNIEnv *env, jobject object, jlong ctx, jobject input, jint input_offset,
jint input_len, jobject output, jint output_offset, jint max_output_len)
static int check_doFinal_max_output_len(EVP_CIPHER_CTX *context,
int max_output_len)
JNIEXPORT jint JNICALL Java_org_apache_hadoop_crypto_OpensslCipher_doFinal
(JNIEnv *env, jobject object, jlong ctx, jobject output, jint offset,
jint max_output_len)
JNIEXPORT void JNICALL Java_org_apache_hadoop_crypto_OpensslCipher_clean
(JNIEnv *env, jobject object, jlong ctx)
JNIEXPORT jstring JNICALL Java_org_apache_hadoop_crypto_OpensslCipher_getLibraryName
(JNIEnv *env, jclass clazz)
