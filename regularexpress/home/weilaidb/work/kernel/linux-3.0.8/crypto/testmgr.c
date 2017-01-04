int alg_test(const char *driver, const char *alg, u32 type, u32 mask)
#define XBUFSIZE	8
#define IDX1		32
#define IDX2		32400
#define IDX3		1
#define IDX4		8193
#define IDX5		22222
#define IDX6		17101
#define IDX7		27333
#define IDX8		3000
#define ENCRYPT 1
#define DECRYPT 0
struct tcrypt_result ;
struct aead_test_suite ;
struct cipher_test_suite ;
struct comp_test_suite ;
struct pcomp_test_suite ;
struct hash_test_suite ;
struct cprng_test_suite ;
struct alg_test_desc ;
static unsigned int IDX[8] = ;
static void hexdump(unsigned char *buf, unsigned int len)
static void tcrypt_complete(struct crypto_async_request *req, int err)
static int testmgr_alloc_buf(char *buf[XBUFSIZE])
static void testmgr_free_buf(char *buf[XBUFSIZE])
static int do_one_async_hash_op(struct ahash_request *req,
struct tcrypt_result *tr,
int ret)
static int test_hash(struct crypto_ahash *tfm, struct hash_testvec *template,
unsigned int tcount, bool use_digest)
static int test_aead(struct crypto_aead *tfm, int enc,
struct aead_testvec *template, unsigned int tcount)
static int test_cipher(struct crypto_cipher *tfm, int enc,
struct cipher_testvec *template, unsigned int tcount)
static int test_skcipher(struct crypto_ablkcipher *tfm, int enc,
struct cipher_testvec *template, unsigned int tcount)
static int test_comp(struct crypto_comp *tfm, struct comp_testvec *ctemplate,
struct comp_testvec *dtemplate, int ctcount, int dtcount)
static int test_pcomp(struct crypto_pcomp *tfm,
struct pcomp_testvec *ctemplate,
struct pcomp_testvec *dtemplate, int ctcount,
int dtcount)
static int test_cprng(struct crypto_rng *tfm, struct cprng_testvec *template,
unsigned int tcount)
static int alg_test_aead(const struct alg_test_desc *desc, const char *driver,
u32 type, u32 mask)
static int alg_test_cipher(const struct alg_test_desc *desc,
const char *driver, u32 type, u32 mask)
static int alg_test_skcipher(const struct alg_test_desc *desc,
const char *driver, u32 type, u32 mask)
static int alg_test_comp(const struct alg_test_desc *desc, const char *driver,
u32 type, u32 mask)
static int alg_test_pcomp(const struct alg_test_desc *desc, const char *driver,
u32 type, u32 mask)
static int alg_test_hash(const struct alg_test_desc *desc, const char *driver,
u32 type, u32 mask)
static int alg_test_crc32c(const struct alg_test_desc *desc,
const char *driver, u32 type, u32 mask)
static int alg_test_cprng(const struct alg_test_desc *desc, const char *driver,
u32 type, u32 mask)
static int alg_test_null(const struct alg_test_desc *desc,
const char *driver, u32 type, u32 mask)
static const struct alg_test_desc alg_test_descs[] = ;
static int alg_find_test(const char *alg)
int alg_test(const char *driver, const char *alg, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(alg_test);
