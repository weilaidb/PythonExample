#if defined(__FreeBSD__)
static void * (*dlsym_CRYPTO_malloc) (int, const char *, int);
static void (*dlsym_CRYPTO_free) (void *);
static int (*dlsym_CRYPTO_num_locks) (void);
static void (*dlsym_CRYPTO_set_locking_callback) (void (*)());
static void (*dlsym_CRYPTO_set_id_callback) (unsigned long (*)());
static void (*dlsym_ENGINE_load_rdrand) (void);
static ENGINE * (*dlsym_ENGINE_by_id) (const char *);
static int (*dlsym_ENGINE_init) (ENGINE *);
static int (*dlsym_ENGINE_set_default) (ENGINE *, unsigned int);
static int (*dlsym_ENGINE_finish) (ENGINE *);
static int (*dlsym_ENGINE_free) (ENGINE *);
static void (*dlsym_ENGINE_cleanup) (void);
static int (*dlsym_RAND_bytes) (unsigned char *, int);
static unsigned long (*dlsym_ERR_get_error) (void);
typedef void * (__cdecl *__dlsym_CRYPTO_malloc) (int, const char *, int);
typedef void (__cdecl *__dlsym_CRYPTO_free) (void *);
typedef int (__cdecl *__dlsym_CRYPTO_num_locks) (void);
typedef void (__cdecl *__dlsym_CRYPTO_set_locking_callback)  \
(void (*)(int, int, char *, int);
typedef void (__cdecl *__dlsym_ENGINE_load_rdrand) (void);
typedef ENGINE * (__cdecl *__dlsym_ENGINE_by_id) (const char *);
typedef int (__cdecl *__dlsym_ENGINE_init) (ENGINE *);
typedef int (__cdecl *__dlsym_ENGINE_set_default) (ENGINE *, unsigned int);
typedef int (__cdecl *__dlsym_ENGINE_finish) (ENGINE *);
typedef int (__cdecl *__dlsym_ENGINE_free) (ENGINE *);
typedef void (__cdecl *__dlsym_ENGINE_cleanup) (void);
typedef int (__cdecl *__dlsym_RAND_bytes) (unsigned char *, int);
typedef unsigned long (__cdecl *__dlsym_ERR_get_error) (void);
static __dlsym_CRYPTO_malloc dlsym_CRYPTO_malloc;
static __dlsym_CRYPTO_free dlsym_CRYPTO_free;
static __dlsym_CRYPTO_num_locks dlsym_CRYPTO_num_locks;
static __dlsym_CRYPTO_set_locking_callback dlsym_CRYPTO_set_locking_callback;
static __dlsym_ENGINE_load_rdrand dlsym_ENGINE_load_rdrand;
static __dlsym_ENGINE_by_id dlsym_ENGINE_by_id;
static __dlsym_ENGINE_init dlsym_ENGINE_init;
static __dlsym_ENGINE_set_default dlsym_ENGINE_set_default;
static __dlsym_ENGINE_finish dlsym_ENGINE_finish;
static __dlsym_ENGINE_free dlsym_ENGINE_free;
static __dlsym_ENGINE_cleanup dlsym_ENGINE_cleanup;
static __dlsym_RAND_bytes dlsym_RAND_bytes;
static __dlsym_ERR_get_error dlsym_ERR_get_error;
static ENGINE * openssl_rand_init(void);
static void openssl_rand_clean(ENGINE *eng, int clean_locks);
static int openssl_rand_bytes(unsigned char *buf, int num);
JNIEXPORT void JNICALL Java_org_apache_hadoop_crypto_random_OpensslSecureRandom_initSR
(JNIEnv *env, jclass clazz)
JNIEXPORT jboolean JNICALL Java_org_apache_hadoop_crypto_random_OpensslSecureRandom_nextRandBytes___3B
(JNIEnv *env, jobject object, jbyteArray bytes)
static void windows_locking_callback(int mode, int type, char *file, int line);
static HANDLE *lock_cs;
static void locks_setup(void)
static void locks_cleanup(void)
static void windows_locking_callback(int mode, int type, char *file, int line)
static void pthreads_locking_callback(int mode, int type, char *file, int line);
static unsigned long pthreads_thread_id(void);
static pthread_mutex_t *lock_cs;
static void locks_setup(void)
static void locks_cleanup(void)
static void pthreads_locking_callback(int mode, int type, char *file, int line)
static unsigned long pthreads_thread_id(void)
static ENGINE * openssl_rand_init(void)
static void openssl_rand_clean(ENGINE *eng, int clean_locks)
static int openssl_rand_bytes(unsigned char *buf, int num)
