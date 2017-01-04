#define DEFAULT_PRNG_KEY "0123456789abcdef"
#define DEFAULT_PRNG_KSZ 16
#define DEFAULT_BLK_SZ 16
#define DEFAULT_V_SEED "zaybxcwdveuftgsh"
#define PRNG_FIXED_SIZE 0x1
#define PRNG_NEED_RESET 0x2
struct prng_context ;
static int dbg;
static void hexdump(char *note, unsigned char *buf, unsigned int len)
#define dbgprint(format, args...) do  while (0)
static void xor_vectors(unsigned char *in1, unsigned char *in2,
unsigned char *out, unsigned int size)
static int _get_more_prng_bytes(struct prng_context *ctx, int cont_test)
static int get_prng_bytes(char *buf, size_t nbytes, struct prng_context *ctx,
int do_cont_test)
static void free_prng_context(struct prng_context *ctx)
static int reset_prng_context(struct prng_context *ctx,
unsigned char *key, size_t klen,
unsigned char *V, unsigned char *DT)
static int cprng_init(struct crypto_tfm *tfm)
static void cprng_exit(struct crypto_tfm *tfm)
static int cprng_get_random(struct crypto_rng *tfm, u8 *rdata,
unsigned int dlen)
static int cprng_reset(struct crypto_rng *tfm, u8 *seed, unsigned int slen)
static struct crypto_alg rng_alg = ;
static int fips_cprng_get_random(struct crypto_rng *tfm, u8 *rdata,
unsigned int dlen)
static int fips_cprng_reset(struct crypto_rng *tfm, u8 *seed, unsigned int slen)
static struct crypto_alg fips_rng_alg = ;
static int __init prng_mod_init(void)
static void __exit prng_mod_fini(void)
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Software Pseudo Random Number Generator");
MODULE_AUTHOR("Neil Horman <nhorman@tuxdriver.com>");
module_param(dbg, int, 0);
MODULE_PARM_DESC(dbg, "Boolean to enable debugging (0/1 == off/on)");
module_init(prng_mod_init);
module_exit(prng_mod_fini);
MODULE_ALIAS("stdrng");
