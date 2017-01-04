#define RUBIN_REG_SIZE   16
#define UPPER_BIT_RUBIN    (((long) 1)<<(RUBIN_REG_SIZE-1))
#define LOWER_BITS_RUBIN   ((((long) 1)<<(RUBIN_REG_SIZE-1))-1)
#define BIT_DIVIDER_MIPS 1043
static int bits_mips[8] = ;
struct pushpull ;
struct rubin_state ;
static inline void init_pushpull(struct pushpull *pp, char *buf,
unsigned buflen, unsigned ofs,
unsigned reserve)
static inline int pushbit(struct pushpull *pp, int bit, int use_reserved)
static inline int pushedbits(struct pushpull *pp)
static inline int pullbit(struct pushpull *pp)
static inline int pulledbits(struct pushpull *pp)
static void init_rubin(struct rubin_state *rs, int div, int *bits)
static int encode(struct rubin_state *rs, long A, long B, int symbol)
static void end_rubin(struct rubin_state *rs)
static void init_decode(struct rubin_state *rs, int div, int *bits)
static void __do_decode(struct rubin_state *rs, unsigned long p,
unsigned long q)
static int decode(struct rubin_state *rs, long A, long B)
static int out_byte(struct rubin_state *rs, unsigned char byte)
static int in_byte(struct rubin_state *rs)
static int rubin_do_compress(int bit_divider, int *bits, unsigned char *data_in,
unsigned char *cpage_out, uint32_t *sourcelen,
uint32_t *dstlen)
static int jffs2_dynrubin_compress(unsigned char *data_in,
unsigned char *cpage_out,
uint32_t *sourcelen, uint32_t *dstlen)
static void rubin_do_decompress(int bit_divider, int *bits,
unsigned char *cdata_in,
unsigned char *page_out, uint32_t srclen,
uint32_t destlen)
static int jffs2_rubinmips_decompress(unsigned char *data_in,
unsigned char *cpage_out,
uint32_t sourcelen, uint32_t dstlen)
static int jffs2_dynrubin_decompress(unsigned char *data_in,
unsigned char *cpage_out,
uint32_t sourcelen, uint32_t dstlen)
static struct jffs2_compressor jffs2_rubinmips_comp = ;
int jffs2_rubinmips_init(void)
void jffs2_rubinmips_exit(void)
static struct jffs2_compressor jffs2_dynrubin_comp = ;
int jffs2_dynrubin_init(void)
void jffs2_dynrubin_exit(void)
