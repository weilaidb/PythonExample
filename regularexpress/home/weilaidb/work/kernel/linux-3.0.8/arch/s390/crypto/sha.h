#define _CRYPTO_ARCH_S390_SHA_H
#define SHA_MAX_STATE_SIZE	16
#define SHA_MAX_BLOCK_SIZE      SHA512_BLOCK_SIZE
struct s390_sha_ctx ;
struct shash_desc;
int s390_sha_update(struct shash_desc *desc, const u8 *data, unsigned int len);
int s390_sha_final(struct shash_desc *desc, u8 *out);
