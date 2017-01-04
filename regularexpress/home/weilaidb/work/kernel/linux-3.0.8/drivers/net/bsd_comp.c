#undef   PACKETPTR
#define  PACKETPTR 1
#undef   PACKETPTR
#define BSD_VERSION(x)	((x) >> 5)
#define BSD_NBITS(x)	((x) & 0x1F)
#define BSD_CURRENT_VERSION	1
struct bsd_dict ;
struct bsd_db ;
#define BSD_OVHD	2
#define MIN_BSD_BITS	9
#define BSD_INIT_BITS	MIN_BSD_BITS
#define MAX_BSD_BITS	15
static void	bsd_free (void *state);
static void	*bsd_alloc(unsigned char *options, int opt_len, int decomp);
static void	*bsd_comp_alloc (unsigned char *options, int opt_len);
static void	*bsd_decomp_alloc (unsigned char *options, int opt_len);
static int	bsd_init        (void *db, unsigned char *options,
int opt_len, int unit, int debug, int decomp);
static int	bsd_comp_init   (void *state, unsigned char *options,
int opt_len, int unit, int opthdr, int debug);
static int	bsd_decomp_init (void *state, unsigned char *options,
int opt_len, int unit, int opthdr, int mru,
int debug);
static void	bsd_reset (void *state);
static void	bsd_comp_stats (void *state, struct compstat *stats);
static int	bsd_compress (void *state, unsigned char *rptr,
unsigned char *obuf, int isize, int osize);
static void	bsd_incomp (void *state, unsigned char *ibuf, int icnt);
static int	bsd_decompress (void *state, unsigned char *ibuf, int isize,
unsigned char *obuf, int osize);
extern int  ppp_register_compressor   (struct compressor *cp);
extern void ppp_unregister_compressor (struct compressor *cp);
#define CLEAR	256
#define FIRST	257
#define LAST	255
#define MAXCODE(b)	((1 << (b)) - 1)
#define BADCODEM1	MAXCODE(MAX_BSD_BITS);
#define BSD_HASH(prefix,suffix,hshift) ((((unsigned long)(suffix))<<(hshift)) \
^ (unsigned long)(prefix))
#define BSD_KEY(prefix,suffix)		((((unsigned long)(suffix)) << 16) \
+ (unsigned long)(prefix))
#define CHECK_GAP	10000
#define RATIO_SCALE_LOG	8
#define RATIO_SCALE	(1<<RATIO_SCALE_LOG)
#define RATIO_MAX	(0x7fffffff>>RATIO_SCALE_LOG)
static void
bsd_clear(struct bsd_db *db)
static int bsd_check (struct bsd_db *db)
static void bsd_comp_stats (void *state, struct compstat *stats)
static void bsd_reset (void *state)
static void bsd_free (void *state)
static void *bsd_alloc (unsigned char *options, int opt_len, int decomp)
static void *bsd_comp_alloc (unsigned char *options, int opt_len)
static void *bsd_decomp_alloc (unsigned char *options, int opt_len)
static int bsd_init (void *state, unsigned char *options,
int opt_len, int unit, int debug, int decomp)
static int bsd_comp_init (void *state, unsigned char *options,
int opt_len, int unit, int opthdr, int debug)
static int bsd_decomp_init (void *state, unsigned char *options,
int opt_len, int unit, int opthdr, int mru,
int debug)
#define dict_ptrx(p,idx) &(p->dict[idx])
#define lens_ptrx(p,idx) &(p->lens[idx])
static unsigned short *lens_ptr(struct bsd_db *db, int idx)
static struct bsd_dict *dict_ptr(struct bsd_db *db, int idx)
#define lens_ptr(db,idx) lens_ptrx(db,idx)
#define dict_ptr(db,idx) dict_ptrx(db,idx)
static int bsd_compress (void *state, unsigned char *rptr, unsigned char *obuf,
int isize, int osize)
static void bsd_incomp (void *state, unsigned char *ibuf, int icnt)
static int bsd_decompress (void *state, unsigned char *ibuf, int isize,
unsigned char *obuf, int osize)
static struct compressor ppp_bsd_compress = ;
static int __init bsdcomp_init(void)
static void __exit bsdcomp_cleanup(void)
module_init(bsdcomp_init);
module_exit(bsdcomp_cleanup);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_ALIAS("ppp-compress-" __stringify(CI_BSD_COMPRESS));
