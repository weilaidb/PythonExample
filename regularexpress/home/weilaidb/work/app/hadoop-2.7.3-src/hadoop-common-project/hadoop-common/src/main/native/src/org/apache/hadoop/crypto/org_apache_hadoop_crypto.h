#define ORG_APACHE_HADOOP_CRYPTO_H
#define CONTEXT(context) ((EVP_CIPHER_CTX*)((ptrdiff_t)(context)))
#define JLONG(context) ((jlong)((ptrdiff_t)(context)))
#define KEY_LENGTH_128 16
#define KEY_LENGTH_256 32
#define IV_LENGTH 16
#define ENCRYPT_MODE 1
#define DECRYPT_MODE 0
#define AES_CTR 0
#define NOPADDING 0
#define PKCSPADDING 1
