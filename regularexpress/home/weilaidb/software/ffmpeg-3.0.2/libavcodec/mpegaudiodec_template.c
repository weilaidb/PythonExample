#define BACKSTEP_SIZE 512
#define EXTRABYTES 24
#define LAST_BUF_SIZE 2 * BACKSTEP_SIZE + EXTRABYTES
typedef struct GranuleDef  GranuleDef;
typedef struct MPADecodeContext  MPADecodeContext;
#define HEADER_SIZE 4
static VLC huff_vlc[16];
static VLC_TYPE huff_vlc_tables[
0 + 128 + 128 + 128 + 130 + 128 + 154 + 166 +
142 + 204 + 190 + 170 + 542 + 460 + 662 + 414
][2];
static const int huff_vlc_tables_sizes[16] = ;
static VLC huff_quad_vlc[2];
static VLC_TYPE  huff_quad_vlc_tables[128+16][2];
static const int huff_quad_vlc_tables_sizes[2] = ;
static uint16_t band_index_long[9][23];
static INTFLOAT is_table[2][16];
static INTFLOAT is_table_lsf[2][2][16];
static INTFLOAT csa_table[8][4];
static int16_t division_tab3[1<<6 ];
static int16_t division_tab5[1<<8 ];
static int16_t division_tab9[1<<11];
static int16_t * const division_tabs[4] = ;
static uint16_t scale_factor_modshift[64];
static int32_t scale_factor_mult[15][3];
#define SCALE_GEN(v) \
static const int32_t scale_factor_mult2[3][3] = ;
static void region_offset2size(GranuleDef *g)
static void init_short_region(MPADecodeContext *s, GranuleDef *g)
static void init_long_region(MPADecodeContext *s, GranuleDef *g,
int ra1, int ra2)
static void compute_band_indexes(MPADecodeContext *s, GranuleDef *g)
static inline int l1_unscale(int n, int mant, int scale_factor)
static inline int l2_unscale_group(int steps, int mant, int scale_factor)
static inline int l3_unscale(int value, int exponent)
static av_cold void decode_init_static(void)
#if USE_FLOATS
static av_cold int decode_close(AVCodecContext * avctx)
static av_cold int decode_init(AVCodecContext * avctx)
#define C3 FIXHR(0.86602540378443864676/2)
#define C4 FIXHR(0.70710678118654752439/2)
#define C5 FIXHR(0.51763809020504152469/2)
#define C6 FIXHR(1.93185165257813657349/4)
static void imdct12(INTFLOAT *out, INTFLOAT *in)
static int mp_decode_layer1(MPADecodeContext *s)
static int mp_decode_layer2(MPADecodeContext *s)
#define SPLIT(dst,sf,n)             \
if (n == 3)  else if (n == 4)  else if (n == 5)  else if (n == 6)  else
static av_always_inline void lsf_sf_expand(int *slen, int sf, int n1, int n2,
int n3)
static void exponents_from_scale_factors(MPADecodeContext *s, GranuleDef *g,
int16_t *exponents)
static void switch_buffer(MPADecodeContext *s, int *pos, int *end_pos,
int *end_pos2)
#if USE_FLOATS
#define READ_FLIP_SIGN(dst,src)                     \
v = AV_RN32A(src) ^ (get_bits1(&s->gb) << 31);  \
AV_WN32A(dst, v);
#define READ_FLIP_SIGN(dst,src)     \
v      = -get_bits1(&s->gb);    \
*(dst) = (*(src) ^ v) - v;
static int huffman_decode(MPADecodeContext *s, GranuleDef *g,
int16_t *exponents, int end_pos2)
static void reorder_block(MPADecodeContext *s, GranuleDef *g)
#define ISQRT2 FIXR(0.70710678118654752440)
static void compute_stereo(MPADecodeContext *s, GranuleDef *g0, GranuleDef *g1)
#if USE_FLOATS
#if HAVE_MIPSFPU
#   include "mips/compute_antialias_float.h"
#if HAVE_MIPSDSP
#   include "mips/compute_antialias_fixed.h"
#if USE_FLOATS
#define AA(j) do  while (0)
#define AA(j) do  while (0)
static void compute_antialias(MPADecodeContext *s, GranuleDef *g)
static void compute_imdct(MPADecodeContext *s, GranuleDef *g,
INTFLOAT *sb_samples, INTFLOAT *mdct_buf)
static int mp_decode_layer3(MPADecodeContext *s)
static int mp_decode_frame(MPADecodeContext *s, OUT_INT **samples,
const uint8_t *buf, int buf_size)
static int decode_frame(AVCodecContext * avctx, void *data, int *got_frame_ptr,
AVPacket *avpkt)
static void mp_flush(MPADecodeContext *ctx)
static void flush(AVCodecContext *avctx)
#if CONFIG_MP3ADU_DECODER || CONFIG_MP3ADUFLOAT_DECODER
static int decode_frame_adu(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
#if CONFIG_MP3ON4_DECODER || CONFIG_MP3ON4FLOAT_DECODER
typedef struct MP3On4DecodeContext  MP3On4DecodeContext;
static const uint8_t mp3Frames[8] = ;
static const uint8_t chan_offset[8][5] = ;
static const int16_t chan_layout[8] = ;
static av_cold int decode_close_mp3on4(AVCodecContext * avctx)
static av_cold int decode_init_mp3on4(AVCodecContext * avctx)
static void flush_mp3on4(AVCodecContext *avctx)
static int decode_frame_mp3on4(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
