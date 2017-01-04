#define TVMEMSIZE	4
#define ENCRYPT 1
#define DECRYPT 0
static unsigned int sec;
static char *alg = NULL;
static u32 type;
static u32 mask;
static int mode;
static char *tvmem[TVMEMSIZE];
static char *check[] = ;
static int test_cipher_jiffies(struct blkcipher_desc *desc, int enc,
struct scatterlist *sg, int blen, int sec)
static int test_cipher_cycles(struct blkcipher_desc *desc, int enc,
struct scatterlist *sg, int blen)
static u32 block_sizes[] = ;
static void test_cipher_speed(const char *algo, int enc, unsigned int sec,
struct cipher_speed_template *template,
unsigned int tcount, u8 *keysize)
static int test_hash_jiffies_digest(struct hash_desc *desc,
struct scatterlist *sg, int blen,
char *out, int sec)
static int test_hash_jiffies(struct hash_desc *desc, struct scatterlist *sg,
int blen, int plen, char *out, int sec)
static int test_hash_cycles_digest(struct hash_desc *desc,
struct scatterlist *sg, int blen, char *out)
static int test_hash_cycles(struct hash_desc *desc, struct scatterlist *sg,
int blen, int plen, char *out)
static void test_hash_sg_init(struct scatterlist *sg)
static void test_hash_speed(const char *algo, unsigned int sec,
struct hash_speed *speed)
struct tcrypt_result ;
static void tcrypt_complete(struct crypto_async_request *req, int err)
static inline int do_one_ahash_op(struct ahash_request *req, int ret)
static int test_ahash_jiffies_digest(struct ahash_request *req, int blen,
char *out, int sec)
static int test_ahash_jiffies(struct ahash_request *req, int blen,
int plen, char *out, int sec)
static int test_ahash_cycles_digest(struct ahash_request *req, int blen,
char *out)
static int test_ahash_cycles(struct ahash_request *req, int blen,
int plen, char *out)
static void test_ahash_speed(const char *algo, unsigned int sec,
struct hash_speed *speed)
static void test_available(void)
static inline int tcrypt_test(const char *alg)
static int do_test(int m)
static int do_alg_test(const char *alg, u32 type, u32 mask)
static int __init tcrypt_mod_init(void)
static void __exit tcrypt_mod_fini(void)
module_init(tcrypt_mod_init);
module_exit(tcrypt_mod_fini);
module_param(alg, charp, 0);
module_param(type, uint, 0);
module_param(mask, uint, 0);
module_param(mode, int, 0);
module_param(sec, uint, 0);
MODULE_PARM_DESC(sec, "Length in seconds of speed tests "
"(defaults to zero which uses CPU cycles instead)");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Quick & dirty crypto testing module");
MODULE_AUTHOR("James Morris <jmorris@intercode.com.au>");
