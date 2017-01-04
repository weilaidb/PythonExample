#define USE_LOOKUP_TABLE_TO_CLAMP	1
#define UNROLL_LOOP_FOR_COPY		1
#if UNROLL_LOOP_FOR_COPY
# undef USE_LOOKUP_TABLE_TO_CLAMP
# define USE_LOOKUP_TABLE_TO_CLAMP 1
#define ENABLE_BAYER_DECODER 0
static void build_subblock_pattern(struct pwc_dec23_private *pdec)
static void build_bit_powermask_table(struct pwc_dec23_private *pdec)
static void build_table_color(const unsigned int romtable[16][8],
unsigned char p0004[16][1024],
unsigned char p8004[16][256])
static void fill_table_dc00_d800(struct pwc_dec23_private *pdec)
static const unsigned char hash_table_ops[64*4] = ;
static const unsigned int MulIdx[16][16] = ;
#if USE_LOOKUP_TABLE_TO_CLAMP
#define MAX_OUTER_CROP_VALUE	(512)
static unsigned char pwc_crop_table[256 + 2*MAX_OUTER_CROP_VALUE];
#define CLAMP(x) (pwc_crop_table[MAX_OUTER_CROP_VALUE+(x)])
#define CLAMP(x) ((x)>255?255:((x)<0?0:x))
int pwc_dec23_init(struct pwc_device *pwc, int type, unsigned char *cmd)
static void copy_image_block_Y(const int *src, unsigned char *dst, unsigned int bytes_per_line, unsigned int scalebits)
static void copy_image_block_CrCb(const int *src, unsigned char *dst, unsigned int bytes_per_line, unsigned int scalebits)
#if ENABLE_BAYER_DECODER
static void copy_image_block_Green(const int *src, unsigned char *dst, unsigned int bytes_per_line, unsigned int scalebits)
#if ENABLE_BAYER_DECODER
static void copy_image_block_RedBlue(const int *src, unsigned char *dst, unsigned int bytes_per_line, unsigned int scalebits)
#define fill_nbits(pdec, nbits_wanted) do   while(0);
#define skip_nbits(pdec, nbits_to_skip) do   while(0);
#define get_nbits(pdec, nbits_wanted, result) do   while(0);
#define __get_nbits(pdec, nbits_wanted, result) do   while(0);
#define look_nbits(pdec, nbits_wanted) \
((pdec->reservoir) & ((1U<<(nbits_wanted))-1))
static void decode_block(struct pwc_dec23_private *pdec,
const unsigned char *ptable0004,
const unsigned char *ptable8004)
static void DecompressBand23(struct pwc_dec23_private *pdec,
const unsigned char *rawyuv,
unsigned char *planar_y,
unsigned char *planar_u,
unsigned char *planar_v,
unsigned int   compressed_image_width,
unsigned int   real_image_width)
#if ENABLE_BAYER_DECODER
static void DecompressBandBayer(struct pwc_dec23_private *pdec,
const unsigned char *rawyuv,
unsigned char *rgbbayer,
unsigned int   compressed_image_width,
unsigned int   real_image_width)
void pwc_dec23_decompress(const struct pwc_device *pwc,
const void *src,
void *dst,
int flags)
void pwc_dec23_exit(void)
int pwc_dec23_alloc(struct pwc_device *pwc)
