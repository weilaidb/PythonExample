#define _CRYPTO_TWOFISH_H
#define TF_MIN_KEY_SIZE 16
#define TF_MAX_KEY_SIZE 32
#define TF_BLOCK_SIZE 16
struct crypto_tfm;
struct twofish_ctx ;
int twofish_setkey(struct crypto_tfm *tfm, const u8 *key, unsigned int key_len);
