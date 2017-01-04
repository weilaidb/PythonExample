static unsigned int ecb_fetch_blocks = 2;
#define MAX_ECB_FETCH_BLOCKS (8)
#define ecb_fetch_bytes (ecb_fetch_blocks * AES_BLOCK_SIZE)
static unsigned int cbc_fetch_blocks = 1;
#define MAX_CBC_FETCH_BLOCKS (4)
#define cbc_fetch_bytes (cbc_fetch_blocks * AES_BLOCK_SIZE)
struct cword  __attribute__ ((__aligned__(PADLOCK_ALIGNMENT)));
struct aes_ctx ;
static DEFINE_PER_CPU(struct cword *, paes_last_cword);
static inline int
aes_hw_extkey_available(uint8_t key_len)
static inline struct aes_ctx *aes_ctx_common(void *ctx)
static inline struct aes_ctx *aes_ctx(struct crypto_tfm *tfm)
static inline struct aes_ctx *blk_aes_ctx(struct crypto_blkcipher *tfm)
static int aes_set_key(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static inline void padlock_reset_key(struct cword *cword)
static inline void padlock_store_cword(struct cword *cword)
static inline void rep_xcrypt_ecb(const u8 *input, u8 *output, void *key,
struct cword *control_word, int count)
static inline u8 *rep_xcrypt_cbc(const u8 *input, u8 *output, void *key,
u8 *iv, struct cword *control_word, int count)
static void ecb_crypt_copy(const u8 *in, u8 *out, u32 *key,
struct cword *cword, int count)
static u8 *cbc_crypt_copy(const u8 *in, u8 *out, u32 *key,
u8 *iv, struct cword *cword, int count)
static inline void ecb_crypt(const u8 *in, u8 *out, u32 *key,
struct cword *cword, int count)
static inline u8 *cbc_crypt(const u8 *in, u8 *out, u32 *key,
u8 *iv, struct cword *cword, int count)
static inline void padlock_xcrypt_ecb(const u8 *input, u8 *output, void *key,
void *control_word, u32 count)
static inline u8 *padlock_xcrypt_cbc(const u8 *input, u8 *output, void *key,
u8 *iv, void *control_word, u32 count)
static void aes_encrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static void aes_decrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static struct crypto_alg aes_alg = ;
static int ecb_aes_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int ecb_aes_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg ecb_aes_alg = ;
static int cbc_aes_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int cbc_aes_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg cbc_aes_alg = ;
static int __init padlock_init(void)
static void __exit padlock_fini(void)
module_init(padlock_init);
module_exit(padlock_fini);
MODULE_DESCRIPTION("VIA PadLock AES algorithm support");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michal Ludvig");
MODULE_ALIAS("aes");
