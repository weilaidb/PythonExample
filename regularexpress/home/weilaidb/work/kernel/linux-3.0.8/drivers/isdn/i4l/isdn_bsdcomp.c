MODULE_DESCRIPTION("ISDN4Linux: BSD Compression for PPP over ISDN");
MODULE_LICENSE("Dual BSD/GPL");
#define BSD_VERSION(x)	((x) >> 5)
#define BSD_NBITS(x)	((x) & 0x1F)
#define BSD_CURRENT_VERSION	1
#define DEBUG 1
struct bsd_dict ;
struct bsd_db ;
#define BSD_OVHD	2
#define MIN_BSD_BITS	9
#define BSD_INIT_BITS	MIN_BSD_BITS
#define MAX_BSD_BITS	15
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
static void bsd_clear(struct bsd_db *db)
static int bsd_check (struct bsd_db *db)
static void bsd_stats (void *state, struct compstat *stats)
static void bsd_reset (void *state,unsigned char code, unsigned char id,
unsigned char *data, unsigned len,
struct isdn_ppp_resetparams *rsparm)
static void bsd_free (void *state)
static void *bsd_alloc (struct isdn_ppp_comp_data *data)
static int bsd_init (void *state, struct isdn_ppp_comp_data *data, int unit, int debug)
#define dict_ptrx(p,idx) &(p->dict[idx])
#define lens_ptrx(p,idx) &(p->lens[idx])
static unsigned short *lens_ptr(struct bsd_db *db, int idx)
static struct bsd_dict *dict_ptr(struct bsd_db *db, int idx)
#define lens_ptr(db,idx) lens_ptrx(db,idx)
#define dict_ptr(db,idx) dict_ptrx(db,idx)
static int bsd_compress (void *state, struct sk_buff *skb_in, struct sk_buff *skb_out,int proto)
static void bsd_incomp (void *state, struct sk_buff *skb_in,int proto)
static int bsd_decompress (void *state, struct sk_buff *skb_in, struct sk_buff *skb_out,
struct isdn_ppp_resetparams *rsparm)
static struct isdn_ppp_compressor ippp_bsd_compress = ;
static int __init isdn_bsdcomp_init(void)
static void __exit isdn_bsdcomp_exit(void)
module_init(isdn_bsdcomp_init);
module_exit(isdn_bsdcomp_exit);
