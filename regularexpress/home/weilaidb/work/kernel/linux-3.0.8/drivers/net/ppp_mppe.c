MODULE_AUTHOR("Frank Cusack <fcusack@fcusack.com>");
MODULE_DESCRIPTION("Point-to-Point Protocol Microsoft Point-to-Point Encryption support");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_ALIAS("ppp-compress-" __stringify(CI_MPPE));
MODULE_VERSION("1.0.2");
static unsigned int
setup_sg(struct scatterlist *sg, const void *address, unsigned int length)
#define SHA1_PAD_SIZE 40
struct sha_pad ;
static struct sha_pad *sha_pad;
static inline void sha_pad_init(struct sha_pad *shapad)
struct ppp_mppe_state ;
#define MPPE_BIT_A	0x80
#define MPPE_BIT_B	0x40
#define MPPE_BIT_C	0x20
#define MPPE_BIT_D	0x10
#define MPPE_BIT_FLUSHED	MPPE_BIT_A
#define MPPE_BIT_ENCRYPTED	MPPE_BIT_D
#define MPPE_BITS(p) ((p)[4] & 0xf0)
#define MPPE_CCOUNT(p) ((((p)[4] & 0x0f) << 8) + (p)[5])
#define MPPE_CCOUNT_SPACE 0x1000
#define MPPE_OVHD	2
#define SANITY_MAX	1600
static void get_new_key_from_sha(struct ppp_mppe_state * state)
static void mppe_rekey(struct ppp_mppe_state * state, int initial_key)
static void *mppe_alloc(unsigned char *options, int optlen)
static void mppe_free(void *arg)
static int
mppe_init(void *arg, unsigned char *options, int optlen, int unit, int debug,
const char *debugstr)
static int
mppe_comp_init(void *arg, unsigned char *options, int optlen, int unit,
int hdrlen, int debug)
static void mppe_comp_reset(void *arg)
static int
mppe_compress(void *arg, unsigned char *ibuf, unsigned char *obuf,
int isize, int osize)
static void mppe_comp_stats(void *arg, struct compstat *stats)
static int
mppe_decomp_init(void *arg, unsigned char *options, int optlen, int unit,
int hdrlen, int mru, int debug)
static void mppe_decomp_reset(void *arg)
static int
mppe_decompress(void *arg, unsigned char *ibuf, int isize, unsigned char *obuf,
int osize)
static void mppe_incomp(void *arg, unsigned char *ibuf, int icnt)
static struct compressor ppp_mppe = ;
static int __init ppp_mppe_init(void)
static void __exit ppp_mppe_cleanup(void)
module_init(ppp_mppe_init);
module_exit(ppp_mppe_cleanup);
