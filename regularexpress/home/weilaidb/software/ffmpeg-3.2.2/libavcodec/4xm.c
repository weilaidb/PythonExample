#define BLOCK_TYPE_VLC_BITS 5
#define ACDC_VLC_BITS 9
#define CFRAME_BUFFER_COUNT 100
static const uint8_t block_type_tab[2][4][8][2] = ;
static const uint8_t size2index[4][4] = ;
static const int8_t mv[256][2] = ;
static const uint8_t dequant_table[64] = ;
static VLC block_type_vlc[2][4];
typedef struct CFrameBuffer  CFrameBuffer;
typedef struct FourXContext  FourXContext;
#define FIX_1_082392200  70936
#define FIX_1_414213562  92682
#define FIX_1_847759065 121095
#define FIX_2_613125930 171254
#define MULTIPLY(var, const) (((var) * (const)) >> 16)
static void idct(int16_t block[64])
static av_cold void init_vlcs(FourXContext *f)
static void init_mv(FourXContext *f, int linesize)
#if HAVE_BIGENDIAN
#define LE_CENTRIC_MUL(dst, src, scale, dc)             \
#define LE_CENTRIC_MUL(dst, src, scale, dc)              \
static inline void mcdc(uint16_t *dst, const uint16_t *src, int log2w,
int h, int stride, int scale, unsigned dc)
static int decode_p_block(FourXContext *f, uint16_t *dst, const uint16_t *src,
int log2w, int log2h, int stride)
static int decode_p_frame(FourXContext *f, const uint8_t *buf, int length)
static int decode_i_block(FourXContext *f, int16_t *block)
static inline void idct_put(FourXContext *f, int x, int y)
static int decode_i_mb(FourXContext *f)
static const uint8_t *read_huffman_tables(FourXContext *f,
const uint8_t * const buf,
int buf_size)
static int mix(int c0, int c1)
static int decode_i2_frame(FourXContext *f, const uint8_t *buf, int length)
static int decode_i_frame(FourXContext *f, const uint8_t *buf, int length)
static int decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int decode_end(AVCodecContext *avctx)
static av_cold int decode_init(AVCodecContext *avctx)
AVCodec ff_fourxm_decoder = ;
