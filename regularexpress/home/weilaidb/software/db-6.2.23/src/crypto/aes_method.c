static void __aes_err __P((ENV *, int));
static int __aes_derivekeys __P((ENV *, DB_CIPHER *, u_int8_t *, size_t));
int
__aes_setup(env, db_cipher)
ENV *env;
DB_CIPHER *db_cipher;
u_int
__aes_adj_size(len)
size_t len;
int
__aes_close(env, data)
ENV *env;
void *data;
int
__aes_decrypt(env, aes_data, iv, cipher, cipher_len)
ENV *env;
void *aes_data;
void *iv;
u_int8_t *cipher;
size_t cipher_len;
int
__aes_encrypt(env, aes_data, iv, data, data_len)
ENV *env;
void *aes_data;
void *iv;
u_int8_t *data;
size_t data_len;
int
__aes_init(env, db_cipher)
ENV *env;
DB_CIPHER *db_cipher;
static int
__aes_derivekeys(env, db_cipher, passwd, plen)
ENV *env;
DB_CIPHER *db_cipher;
u_int8_t *passwd;
size_t plen;
static void
__aes_err(env, err)
ENV *env;
int err;
